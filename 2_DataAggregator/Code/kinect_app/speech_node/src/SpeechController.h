/*
 * File: SpeechController
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file deserializes vocal comands into text, and
 *                   uses these to activate events on the GUI.
 *
 * Created
 */

#ifndef SPEECH_CONTROLLER_H
#define SPEECH_CONTROLLER_H

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <iostream>

#include "../../app_node/src/MasterGui.h"

using namespace std;

class SpeechController
{

private:
    ;

enum Command //enumeration types for each speech command
     {
         ACTIVATE,
         DEACTIVATE,
         START_VIDEO,
	 STOP_VIDEO,
         RESULTS,
	 USERS,
	 DEVICES,
	 HISTORY,
	 HELP,
	 EXIT,
	 HIDE_MENU,
	 SHOW_MENU
     };
    Command command; //instance of Command to hold the current speech command
    MasterGui* masterGui; //speech_node's instance of MasterGui

public:
    SpeechController();
    void callback(const std_msgs::String::ConstPtr& msg);
    void runCommand(Command command);
    ~SpeechController();

};

#endif /* SPEECH_CONTROLLER_H */
