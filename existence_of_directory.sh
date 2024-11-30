#!/bin/bash

directory=/etc

if [ -d $directory ]
then
    echo "$?"
    echo "The $directory exists."
else
    echo "The $directory doesnot exist."
fi

echo "The exit code for the script is : $?"
