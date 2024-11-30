#!/bin/bash

files=file.txt

if [ -e $files ]
then
    echo "File exists: $files"
else   
    echo "File does not exist: $files"
fi


c=topa

if command -v $c
then
    echo "Command exist"
else
    echo "Command not exist!"
fi
