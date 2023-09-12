using namespace vex;

extern brain Brain;

// VEXcode devices
// VEXcode device constructors
extern motor ml1;
extern motor ml2;
extern motor mlpto;
extern motor mr1;
extern motor mrpto;
extern motor mr2;

extern digital_out A;
extern digital_out B;
extern digital_out C;
extern digital_out D;
extern digital_out E;
extern digital_out F;

extern vex::controller master;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );