#!/bin/bash
if [ $# -ne 1 ]; then
	today=$(date +%Y%m%d)
else
	today=$1
fi

echo $today
