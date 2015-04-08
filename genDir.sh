#!/bin/bash
if [ $# -ne 1 ]; then
	today=$(date +%Y%m%d)
else
	today=$1
fi

if [ -e $today ] 
then
	echo "$today exist."
	exit 1
else
	echo "Making Directory $today"
	mkdir -p $today/practice
	mkdir $today/answer
	touch $today/question.md
fi
