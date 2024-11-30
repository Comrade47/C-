#!/bin/bash

package=htopaudasdasda

sudo apt install htop >> package_install.log

if [ $? -eq 0 ]
then
    echo "The installation was successful."
    echo "The new command is available here:"
    which $package
    
else
    echo "Installation was failed" >> install_failed.log
fi

