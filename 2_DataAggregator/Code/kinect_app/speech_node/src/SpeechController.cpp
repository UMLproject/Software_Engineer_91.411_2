#include "SpeechController.h"

SpeechController::SpeechController()
{
    masterGui = new MasterGui();
}


void SpeechController::callback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str() );

    if(strcmp(msg->data.c_str(), "activate") == 0)
    {
        masterGui->getMasterGui()->handleActivateBtnSlot();
    }
    else if(strcmp(msg->data.c_str(), "deactivate") == 0)
    {
        ;
    }
    else if(strcmp(msg->data.c_str(), "quit") == 0)
    {
        ;
    }
}


void SpeechController::runCommand(Command command)
{
    ;
}


SpeechController::~SpeechController()
{
    ;
}
