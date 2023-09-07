#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor ml1 = motor(PORT15,false);
motor ml2 = motor(PORT11,true);
motor mlpto = motor(PORT13,true);

motor mr1 = motor(PORT10,true);
motor mrpto = motor(PORT14,true);
motor mr2 = motor(PORT11,false);

digital_out p = digital_out(Brain.ThreeWirePort.A);
vex::controller master(vex::controllerType::primary);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}