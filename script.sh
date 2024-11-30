#!/bin/bash
today_date=$(date)
myname=$(whoami)
files=$(ls -la)
echo "The date of today is: "
echo $today_date
echo "My name is: $myname"
echo "Files are: $files"
echo "Your username is $USER"