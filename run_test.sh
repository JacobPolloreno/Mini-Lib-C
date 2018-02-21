#!/bin/sh

for F in `ls tests/*.o`
do
	$F
done
