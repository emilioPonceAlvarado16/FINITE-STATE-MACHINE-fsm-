[![Work in Repl.it](https://classroom.github.com/assets/work-in-replit-14baed9a392b3a25080506f3b7b6d57f295ec2978f6f33ec97e36a161684cbe9.svg)](https://classroom.github.com/online_ide?assignment_repo_id=2888572&assignment_repo_type=AssignmentRepo)
# Implementación de una FSM en C
Este repositorio contiene una implementación demostrativa de una Finite State Machine (FSM) en lenguaje C. El código implementa un semáforo con el siguiente comportamiento:

![FSM Semáforo](fsm.PNG)
*Fuente: Making Embedded Systems. Elicia White. (2011)*

El programa usa la consola para simular los eventos de la siguiente forma:

* letra q = Salir del programa
* letra s = STOP_COMMAND
* letra t = TIMER_TIMEOUT
* letra g = GO_COMMAND

## Compilación y Ejecución
Para compilar el programa:
```
$ make
```
Para ejecutar el programa:
```
$ make run
```
o
```
$ ./programa
```
