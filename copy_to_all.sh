#!/bin/bash

for file in "$@"
do
  echo "Copying $file to all nodes"
  scp $file pi@pi01:/home/pi/cluster_programs/py/
  scp $file pi@pi02:/home/pi/cluster_programs/py/
  scp $file pi@pi03:/home/pi/cluster_programs/py/
done

#end

