/*
 *  COPYRIGHT (c) 1989-2012.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/printer.h>
#include <rtems/test.h>

#include <rtems.h>
#include <rtems/bspIo.h>

#include <bsp.h> /* for device driver prototypes */

#include <stdio.h>
#include <stdlib.h>

/* forward declarations to avoid warnings */
rtems_task Init(rtems_task_argument argument);

const char rtems_test_name[] = "Wait queue and Timer Manager";
rtems_printer rtems_test_printer;

rtems_task Init(
  rtems_task_argument ignored
)
{
  rtems_print_printer_printf(&rtems_test_printer);
  rtems_test_begin();
  
  /* edit start 
  rtems_object_name result;
  result = rtems_build_name('S', 'A', 'M', 'M');
  printf( "ID= name=%s\n", ((result) ? result : "no name") );
*/
  printf( "Write two tasks that use Timer Manager to schedule a function that should execute every 0.25 seconds. \n" );

  /* edit ends */
  rtems_test_end();
  exit( 0 );
}


/* NOTICE: the clock driver is explicitly disabled */
#define CONFIGURE_APPLICATION_DOES_NOT_NEED_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER

#define CONFIGURE_MAXIMUM_TASKS            1

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_INITIAL_EXTENSIONS RTEMS_TEST_INITIAL_EXTENSION

#define CONFIGURE_INIT
#include <rtems/confdefs.h>
