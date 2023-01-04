#ifndef AtmelStudioTemplateDevicePeripheralInitializer_h
#define AtmelStudioTemplateDevicePeripheralInitializer_h

#include "DevicePeripheralInitializer/DevicePeripheralInitializer.h"

namespace bca
{
	/**
	-----------------------------------------------------------------------------------------
	 * @file AtmelStudioTemplateDevicePeripheralInitializer.h
	 * 
	 * @brief provides methods that initialize the various peripherals and drivers of the 
	 * microprocessor
	 *
	 * @description The file is a subclass of DevicePeripheralInitializer. It is intended for used
	 *				when the default settings must be altered for a given project. It is recommended 
	 *			    that only the functions necessary be overridden.
	 *
	 * NOTES:
	 * - 
	 *
	 * by: Mark Bennett - Bennett Custom Audio 2022
	-----------------------------------------------------------------------------------------
	 */
	class AtmelStudioTemplateDevicePeripheralInitializer : public DevicePeripheralInitializer
	{
		public:
			/* Class Constructor */
			AtmelStudioTemplateDevicePeripheralInitializer(void){}
			
			/* Class Destructor */
			~AtmelStudioTemplateDevicePeripheralInitializer(){}
				
		private:
			
	};
}
#endif /* AtmelStudioTemplateDevicePeripheralInitializer_h */