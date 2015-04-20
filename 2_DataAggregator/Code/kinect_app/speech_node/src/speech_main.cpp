#include <std_msgs/String.h>
#include <iostream>
#include <cstdlib>

#include "SpeechController.h"

using namespace ros;
using namespace std;

int main(int argc, char **argv)
{
    init(argc, argv, "Range_Image");

    SpeechController speechController;
    NodeHandle nh;

    Subscriber sub = nh.subscribe("/recognizer/output",
							   1000,
							    &SpeechController::callback,
							    &speechController);

    spin();

    return EXIT_SUCCESS;
}
