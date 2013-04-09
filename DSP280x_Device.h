// TI File $Revision: /main/6 $
// Checkin $Date: December 17, 2007   13:13:48 $
//###########################################################################
//
// FILE:   DSP280x_Device.h
//
// TITLE:  DSP280x Device Definitions.
//
//###########################################################################
// $TI Release: DSP280x C/C++ Header Files V1.70 $
// $Release Date: July 27, 2009 $
//###########################################################################

#ifndef DSP280x_DEVICE_H
#define DSP280x_DEVICE_H


#ifdef __cplusplus
extern "C" {
#endif


#define   TARGET   1
//---------------------------------------------------------------------------
// User To Select Target Device:

#define   DSP28_28015  0
#define   DSP28_28016  0
#define   DSP28_2809   0
#define   DSP28_2808   TARGET
#define   DSP28_2806   0
#define   DSP28_2802   0
#define   DSP28_2801   0

//---------------------------------------------------------------------------
// Common CPU Definitions:
//

extern cregister volatile unsigned int IFR;
extern cregister volatile unsigned int IER;

#define  EINT   asm(" clrc INTM")
#define  DINT   asm(" setc INTM")
#define  ERTM   asm(" clrc DBGM")
#define  DRTM   asm(" setc DBGM")
#define  EALLOW asm(" EALLOW")
#define  EDIS   asm(" EDIS")
#define  ESTOP0 asm(" ESTOP0")

#define M_INT1  0x0001
#define M_INT2  0x0002
#define M_INT3  0x0004
#define M_INT4  0x0008
#define M_INT5  0x0010
#define M_INT6  0x0020
#define M_INT7  0x0040
#define M_INT8  0x0080
#define M_INT9  0x0100
#define M_INT10 0x0200
#define M_INT11 0x0400
#define M_INT12 0x0800
#define M_INT13 0x1000
#define M_INT14 0x2000
#define M_DLOG  0x4000
#define M_RTOS  0x8000

#define BIT0    0x0001
#define BIT1    0x0002
#define BIT2    0x0004
#define BIT3    0x0008
#define BIT4    0x0010
#define BIT5    0x0020
#define BIT6    0x0040
#define BIT7    0x0080
#define BIT8    0x0100
#define BIT9    0x0200
#define BIT10   0x0400
#define BIT11   0x0800
#define BIT12   0x1000
#define BIT13   0x2000
#define BIT14   0x4000
#define BIT15   0x8000

//---------------------------------------------------------------------------
// For Portability, User Is Recommended To Use the C99 Standard integer types
//

#include <assert.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// C99 defines boolean type to be _Bool, but this doesn't match the format of
// the other standard integer types.  bool_t has been defined to fill this gap.
typedef _Bool bool_t;

// Work around for code that might accidently use uint8_t
typedef unsigned char uint8_t;

//---------------------------------------------------------------------------
// The following data types are included for compatability with legacy code,
// they are not recommended for use in new software.  Please use the C99
// types included above
//

#ifndef DSP28_DATA_TYPES
#define DSP28_DATA_TYPES
typedef int                 int16;
typedef long                int32;
typedef long long           int64;
typedef unsigned int        Uint16;
typedef unsigned long       Uint32;
typedef unsigned long long  Uint64;
typedef float               float32;
typedef long double         float64;
#endif


//---------------------------------------------------------------------------
// Include All Peripheral Header Files:
//

#include "f280x_headers/include/DSP280x_Adc.h"                // ADC Registers
#include "f280x_headers/include/DSP280x_DevEmu.h"             // Device Emulation Registers
#include "f280x_headers/include/DSP280x_CpuTimers.h"          // 32-bit CPU Timers
#include "f280x_headers/include/DSP280x_ECan.h"               // Enhanced eCAN Registers
#include "f280x_headers/include/DSP280x_ECap.h"               // Enhanced Capture
#include "f280x_headers/include/DSP280x_EPwm.h"               // Enhanced PWM
#include "f280x_headers/include/DSP280x_EQep.h"               // Enhanced QEP
#include "f280x_headers/include/DSP280x_Gpio.h"               // General Purpose I/O Registers
#include "f280x_headers/include/DSP280x_I2c.h"                // I2C Registers
#include "f280x_headers/include/DSP280x_PieCtrl.h"            // PIE Control Registers
#include "f280x_headers/include/DSP280x_PieVect.h"            // PIE Vector Table
#include "f280x_headers/include/DSP280x_Spi.h"                // SPI Registers
#include "f280x_headers/include/DSP280x_Sci.h"                // SCI Registers
#include "f280x_headers/include/DSP280x_SysCtrl.h"            // System Control/Power Modes
#include "f280x_headers/include/DSP280x_XIntrupt.h"           // External Interrupts

#if DSP28_2809 || DSP28_2808
#define DSP28_EPWM1 1
#define DSP28_EPWM2 1
#define DSP28_EPWM3 1
#define DSP28_EPWM4 1
#define DSP28_EPWM5 1
#define DSP28_EPWM6 1
#define DSP28_ECAP1 1
#define DSP28_ECAP2 1
#define DSP28_ECAP3 1
#define DSP28_ECAP4 1
#define DSP28_EQEP1 1
#define DSP28_EQEP2 1
#define DSP28_ECANA 1
#define DSP28_ECANB 1
#define DSP28_SPIA  1
#define DSP28_SPIB  1
#define DSP28_SPIC  1
#define DSP28_SPID  1
#define DSP28_SCIA  1
#define DSP28_SCIB  1
#define DSP28_I2CA  1
#endif  // end DSP28_2809 || DSP_2808


#if DSP28_2806
#define DSP28_EPWM1 1
#define DSP28_EPWM2 1
#define DSP28_EPWM3 1
#define DSP28_EPWM4 1
#define DSP28_EPWM5 1
#define DSP28_EPWM6 1
#define DSP28_ECAP1 1
#define DSP28_ECAP2 1
#define DSP28_ECAP3 1
#define DSP28_ECAP4 1
#define DSP28_EQEP1 1
#define DSP28_EQEP2 1
#define DSP28_ECANA 1
#define DSP28_ECANB 0
#define DSP28_SPIA  1
#define DSP28_SPIB  1
#define DSP28_SPIC  1
#define DSP28_SPID  1
#define DSP28_SCIA  1
#define DSP28_SCIB  1
#define DSP28_I2CA  1
#endif  // end DSP28_2806


#if DSP28_2802 || DSP28_2801
#define DSP28_EPWM1 1
#define DSP28_EPWM2 1
#define DSP28_EPWM3 1
#define DSP28_EPWM4 0
#define DSP28_EPWM5 0
#define DSP28_EPWM6 0
#define DSP28_ECAP1 1
#define DSP28_ECAP2 1
#define DSP28_ECAP3 0
#define DSP28_ECAP4 0
#define DSP28_EQEP1 1
#define DSP28_EQEP2 0
#define DSP28_ECANA 1
#define DSP28_ECANB 0
#define DSP28_SPIA  1
#define DSP28_SPIB  1
#define DSP28_SPIC  0
#define DSP28_SPID  0
#define DSP28_SCIA  1
#define DSP28_SCIB  0
#define DSP28_I2CA  1
#endif  // end DSP28_2802 || DSP_2801


#if DSP28_28016
#define DSP28_EPWM1 1
#define DSP28_EPWM2 1
#define DSP28_EPWM3 1
#define DSP28_EPWM4 1
#define DSP28_EPWM5 0
#define DSP28_EPWM6 0
#define DSP28_ECAP1 1
#define DSP28_ECAP2 1
#define DSP28_ECAP3 0
#define DSP28_ECAP4 0
#define DSP28_EQEP1 0
#define DSP28_EQEP2 0
#define DSP28_ECANA 1
#define DSP28_ECANB 0
#define DSP28_SPIA  1
#define DSP28_SPIB  0
#define DSP28_SPIC  0
#define DSP28_SPID  0
#define DSP28_SCIA  1
#define DSP28_SCIB  0
#define DSP28_I2CA  1
#endif  // end DSP28_28016

#if DSP28_28015
#define DSP28_EPWM1 1
#define DSP28_EPWM2 1
#define DSP28_EPWM3 1
#define DSP28_EPWM4 1
#define DSP28_EPWM5 0
#define DSP28_EPWM6 0
#define DSP28_ECAP1 1
#define DSP28_ECAP2 1
#define DSP28_ECAP3 0
#define DSP28_ECAP4 0
#define DSP28_EQEP1 0
#define DSP28_EQEP2 0
#define DSP28_ECANA 0
#define DSP28_ECANB 0
#define DSP28_SPIA  1
#define DSP28_SPIB  0
#define DSP28_SPIC  0
#define DSP28_SPID  0
#define DSP28_SCIA  1
#define DSP28_SCIB  0
#define DSP28_I2CA  1
#endif  // end DSP28_28015


// Timer definitions based on System Clock
// 100 MHz devices (2808/28012)
#if (DSP28_2808||DSP28_28012)
	#define		mSec0_5		50000		// 0.5 mS
	#define		mSec0_75	75000		// 0.75 mS
	#define		mSec1		100000		// 1.0 mS
	#define		mSec2		200000		// 2.0 mS
	#define		mSec5		500000		// 5.0 mS
	#define		mSec7_5		750000		// 7.5 mS
	#define		mSec10		1000000		// 10 mS
	#define		mSec20		2000000		// 20 mS
	#define		mSec50		5000000		// 50 mS
	#define		mSec75		7500000		// 75 mS
	#define		mSec100		10000000	// 100 mS
	#define		mSec200		20000000	// 200 mS
	#define		mSec500		50000000	// 500 mS
	#define		mSec750		75000000	// 750 mS
	#define		mSec1000	100000000	// 1000 mS
	#define		mSec2000	200000000	// 2000 mS
	#define		mSec5000	500000000	// 5000 mS
#endif

// 60 MHz devices (28016/2801)
#if (DSP28_28016||DSP28_2801)
    #define      mSec0_5          30000           // 0.5 mS
    #define      mSec0_75         45000           // 0.75 mS
    #define      mSec1            60000           // 1.0 mS
    #define      mSec2            120000          // 2.0 mS
    #define      mSec5            300000          // 5.0 mS
    #define      mSec7_5          450000          // 7.5 mS
    #define      mSec10           600000          // 10 mS
    #define      mSec20           1200000         // 20 mS
    #define      mSec50           3000000         // 50 mS
    #define      mSec75           4500000         // 75 mS
    #define      mSec100          6000000         // 100 mS
    #define      mSec200          12000000        // 200 mS
    #define      mSec500          30000000        // 500 mS
    #define      mSec750          45000000        // 750 mS
    #define      mSec1000         60000000        // 1000 mS
    #define      mSec2000         120000000       // 2000 mS
    #define      mSec5000         300000000       // 5000 mS
#endif

#ifdef __cplusplus
}
#endif /* extern "C" */

#endif  // end of DSP280x_DEVICE_H definition


//===========================================================================
// End of file.
//===========================================================================
