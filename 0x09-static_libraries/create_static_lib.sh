#!/bin/bash
/**
* this line create an object for all c file in current folder
*/
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib lowball.a

