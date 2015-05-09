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

echo "*******************************************************"
echo "Welcome to Group 2 Subgroup 2's installer script."
echo "You MUST be on a Linux system.  We suggest that you"
echo "run Ubuntu 14.04, since that is the system which this"
echo "application has been tested on."
echo "*******************************************************"
echo "\n\n\n"

#
echo "Is the repository already downloaded? (Y/n)"
read CHOICE

if [ "$CHOICE" == "n" ] || [ "$CHOICE" == "N" ]; then
    echo "Cloning project..."
    git clone https://github.com/UMLproject/Software_Engineer_91.411_2.git
fi


#
echo "Do you want this script to install dependencies? (Y/n)?"
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
echo "Finished installing dependencies"
echo "Now follow the Build & Run instructions in the README"
echo "to link and, compile, and the project"
