#!/bin/bash

GCC='g++ -std=c++11'

$GCC $1 -o out
./out < input.txt
