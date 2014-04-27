#!/bin/bash

if [ -e $1 ] 
then
	echo "$1 exist."
else
	echo "Making Directory $1"
	mkdir -p $1/practice
	mkdir $1/answer
	touch $1/question.txt
fi
