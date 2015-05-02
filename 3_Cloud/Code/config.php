<?php

#########################################
##      Database Configuration         ##
#########################################

####################################
##      Database Information      ##
##   Edit to your own information ##
####################################

$dbhost = "localhost"; ## Database's IP or Hostname	
$dbuser = "username"; ## Username of Database
$dbpassword = "password"; ## Password of Database
$dbname = "db"; ## Database's name.
$dbsite_url = "url"; //Leave out trailing backslash.

####################################
##   End of Database Information  ##
####################################

####################################
##       Database Connection      ##
####################################

$con = mysqli_connect($dbhost, $dbuser, $dbpassword, $dbname);

####################################
##   End of Database Connection   ##
####################################

?>