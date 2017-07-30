#!/bin/bash

dir=$1

for file in "${@:2}"
do
  echo "Copying $file to $dir on all nodes"
  scp $file pi@pi01:/home/pi/RPI_Cluster/$dir/
  scp $file pi@pi02:/home/pi/RPI_Cluster/$dir/
  scp $file pi@pi03:/home/pi/RPI_Cluster/$dir/
done

#end

