#include "mcuid.h"
#include "systemclk.h"
//Board Drivers
#include "board.h"
#include "hardware.h"
#include "bootloader.h"

// embedded library
#include "timing.h"
#include "uart.h"

// modbus
#include "AlenconModbus.h"

//wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
// IRQDESIGN d.o.o
// Bosnia and Herzegovina
// 2022.11.08.
//
// RT1021
// CPU: 500 MHz
// 
//------------------------------------------------------------------------------
// NOTE:
//------------------------------------------------------------------------------
//
// 0x00000000 64kB ITCM (default)
// 0x00200000 96kB ROM Bootloader (built in)
// 0x08000000 8MB Flex SPI ROM Alias
// 0x20000000 128kB DTCM (64kB is default)
// 0x20200000 64kB OCRAM (128kB is default)
// 0x60000000 64kB Alencon Bootloader
// 0x60010000 64kB Virtual EEPROM
// 0x60020000 128kB NVM Object Space
// 0x60040000 768kB Reserved
// 0x60100000 1MB Program Space 1
// 0x60200000 1MB Program Space 2
// 0x60300000 1MB Program Space 3 (3rd party users)
// 0x60400000 4MB Reserved
//wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
//https://www.embedded-experts.at/en/freemodbus/about/
//
// ps -fA | grep python
// simulator_config.json: holds info on
// localhost:port-> 8888
// serial device: /dev/ttyUSB0

/// IN hardware.c FAKE_GUID_FORCED forced
// NOTE: #pragma anon_unions commented out in some files (just search for it you will see)
// - firmware_modbus.py -> changes
//		- L057: change	-> BLOCK_TIMER_INTERVAL_BUFFER = 0.005
//		- L058: change	-> BLOCK_WRITE_TIME = 0.1
//		- L459: add 	-> time.sleep(1.0)
int main(void)
{
	initSYSTEM();
	{// safety mechanism for not being able to halt the CPU if there is issue with bus/hardfault/init process

		// GPIO1 pin AD_B0_05 as digital output
		IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_05] = 0x00000005;
		IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_B0_05] = 0x00000008;	// R0, 50MHz slow slew rate
		GPIO1->GDIR |= (1<<5);
	
		volatile uint8_t n;
		for(n=0;n<4;n++)
		{
			volatile uint32_t k;
			for(k=0;k<50000000;k++);

			GPIO1->DR_TOGGLE = (1<<5);
		}
	}

	initSYSTIM();

	Bootloader_Init();

    while (1);

    return 0;
}





