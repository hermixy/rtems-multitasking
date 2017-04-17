# RTEMS Mulitasking

* Executive provides an interface to other system components such as interrupt handlers and device drivers. 

* System components may request the executive to allocate and coordinate
resources, and to wait for and trigger synchronizing conditions. 

* The executive system calls effectively extend the CPU instruction set to support efficient
multitasking. By causing tasks to travel through well-defined state
transitions, system calls permit an application to demand-switch between tasks
in response to real-time events.

* By proper grouping of responses to stimuli into separate tasks, a system can
* now asynchronously switch between independent streams of execution, directly
* responding to external stimuli as they occur. This allows the system design
* to meet critical performance specifications which are typically measured by
* guaranteed response time and transaction throughput.
