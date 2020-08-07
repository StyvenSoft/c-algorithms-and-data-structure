#!/bin/bash

sudo apt install build-essential

touch hello.c
gcc hello.c -o test
./test