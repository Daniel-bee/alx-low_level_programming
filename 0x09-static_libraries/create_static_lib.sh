#!/bin/bash
/**
* this line create an object for all c file in current folder
*/
gcc -c -Wall -Werror -Wextra *.C
/**
* this line create an object for all c file in current folder
*
ar -rc liball.a *.o
/**
* this line create an object for all c file in current folder
*
ranlib lowball.a

