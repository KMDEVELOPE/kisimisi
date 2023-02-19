#!/bin/bash

a=5

for ((i=1;i<10;i++))
do
if [ $i -eq 5 ]
then
 echo "это 5"
else
 echo $i
fi
done
