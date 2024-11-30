#!/bin/bash

c=/usr/bin/htop

if command -v $c
then
	echo "$c is available!"
else
	echo "$c is not present"
	echo "Upgrading you system!"
	sudo apt-get update 
fi
