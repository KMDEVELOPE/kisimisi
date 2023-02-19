#!/bin/bash

a=$1
b=$2

if [ $a -eq $b ]
then
   echo numbers are equal
   exit
fi

if [ $a -gt $b ]
then
   echo $a
else
   echo $b
fi
