#!/bin/bash
gcc -wall -werror -wextra -pedantic -c *.c
ar -rc liball.a *.o