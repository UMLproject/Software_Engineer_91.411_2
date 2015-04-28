##################################################################
##								##
## File: Ros_Install.bash					##
## Author: James Kuczynski					##
## Email: jkuczyns@cs.uml.edu					##
## File Description: Installer file.  If the user downloads and ##
##                   runs this file, it will clone the project  ##
##                   from the GitHub repository, install  	##
##                   dependencies (optional), and configure it.	##
##								##
## Created: April 28 2015 6:00 pm				##
##								##
##################################################################

#!/bin/bash

#
echo "Is the repository already downloaded? (Y/n)"
read CHOICE

if [ "$CHOICE" == "n" ] || [ "$CHOICE" == "N" ]; then
    echo "Cloning project..."
    git clone https://github.com/UMLproject/Software_Engineer_91.411_2.git
fi


#
echo "Do you want this script to install depencendies? (Y/n)?"
read CHOICE

if [ "$CHOICE" == "y" ] || [ "$CHOICE" == "Y" ]; then
    echo "Installing QT4"
    sudo apt-get install libqt4-*
    echo "Installing SQLite3..."
    sudo apt-get install sqlite3 libsqlite3-dev
    echo "Installing QJSON..."
    sudo apt-get install libqjson0 libqjson-*
fi


#

