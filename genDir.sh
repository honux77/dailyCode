#!/bin/bash
if [ $# -ne 1 ]; then
	today=$(date +%Y%m%d)
else
	today=$1
fi

if [ -e $today ] 
then
	echo "$1 exist."
	exit 1
else
	echo "Making Directory $1"
	mkdir -p $1/practice
	mkdir $1/answer
	touch $1/question.txt
fi
