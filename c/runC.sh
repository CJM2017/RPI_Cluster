#!/bin/bash

if [ "$1" == "-h" ]; then 
  echo "./runC.sh -p [./path/to/exec]"
  exit 0
elif [ "$1" != "" ]; then
  program=$1
  if [ -e $program ]; then
    echo "Running $program on cluster"
    echo "==========================="
    mpiexec -f ../machinefile -n 4 $program
  else
    echo "Error: The file does not exist"
    exit 1
  fi
fi

# end

