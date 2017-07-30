#!/bin/bash

program=$1

echo "Running $program on cluster"

mpiexec -f ../machinefile -n 4 python $program

# end
