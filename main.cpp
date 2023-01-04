/*
 * @file atmelStudioTemplate.cpp
 *
 * @brief This is a template project for ATmega/ATtiny-based pedal projects. Notes are left as comments
 *		  throughout to guide implementation.
 
 * @description Some notes:
 *              - 'AtmelStudioTemplate' is used as the project name here. When it is cloned, please change the 
 *		          project name immediately.
 *		        - This AS7 project exists within a git repository, which contains the bca-avr-lib as a submodule.
 *			      It is important to pull changes from within the bca-avr-lib folder to insure that it is
 *		          up to date. If any changes are made to the library, you must create a new branch within the submodule,
 *			      and merge those changes BEFORE pushing changes to the main repository.
 *		        - In order to use the various peripherals of the device, they must be properly initialized. Within the 
 *			      bca-avr-lib, a default implementation of the DevicePeripheralInitializer object is given. If these
 *			      settings need to be altered for a given project, It should be done by using the local subclass. The virtual
 *			      methods of the default implementation may then be overwritten as necessary.
 *
 * @Author Mark Bennett, Bennett Custom Audio
 */ 

#include <avr/io.h>
#include "BCA/BCA.h"
#include "Driver/Driver.h"
#include "DevicePeripheralInitializer/DevicePeripheralInitializer.h"
#include "AtmelStudioTemplateDevicePeripheralInitializer/AtmelStudioTemplateDevicePeripheralInitializer.h"
#include "Input/Potentiometer/Potentiometer.h"
#include "Input/PotentiometerFivePosition/PotentiometerFivePosition.h"
#include "Input/FootSwitchBypass/FootSwitchBypass.h"
#include "Input/FootSwitchDualState/FootSwitchDualState.h"
#include "Input/FootSwitchTapTempo/FootSwitchTapTempo.h"
#include "Input/Switch/Switch.h"
#include "Input/SwitchThreePosition/SwitchThreePosition.h"
#include "Output/LFO/LFO.h"
#include "Output/RandomStep/RandomStep.h"
#include "Output/Wavetable/Wavetable.h"
#include "Util/Ramp/Ramp.h"
#include "Util/RampFloatingPoint/RampFloatingPoint.h"

using namespace bca;

/* Define all I/O pins here */
#define analogInputPin A0

int main(void)
{
	/* Initialize the device peripherals.  */
	DevicePeripheralInitializer initializer = DevicePeripheralInitializer();
	initializer.InitializePeripherals();
		
	/* Instantiate objects, define depth/wave tables, etc... */
		
	initializer.~DevicePeripheralInitializer(); // Destruct the initializer - it's job is done!
	
	while(1) 
    {		
		/* Write main body code here... */		
    }
}

