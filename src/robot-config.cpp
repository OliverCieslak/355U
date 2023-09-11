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

digital_out A = digital_out(Brain.ThreeWirePort.A);
digital_out B = digital_out(Brain.ThreeWirePort.B);
digital_out C = digital_out(Brain.ThreeWirePort.C);
digital_out D = digital_out(Brain.ThreeWirePort.D);
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