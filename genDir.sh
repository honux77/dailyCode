#!/bin/bash
BASEDIR=$(pwd)/Online-judge/
if [ $# -ne 1 ]; then
	TODAY=$(date +%Y%m%d)
else
	TODAY=$1
fi

DIR=$BASEDIR/$TODAY

if [ -e $DIR ] 
then
	echo "$DIR exist."
	exit 1
else
	echo "Making Directory $DIR"
	mkdir -p $DIR/practice
	mkdir $DIR/answer
	touch $DIR/question.md
fi
