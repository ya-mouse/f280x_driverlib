//#############################################################################
//
//! \file   f2802x_common/source/clk.c
//!
//! \brief  Contains the various functions related to the clock object
//
//  Group:          C2000
//  Target Device:  TMS320F280x
//
//  (C) Copyright 2012, Texas Instruments, Inc.
//#############################################################################
// $TI Release: f2802x Support Library v210 $
// $Release Date: Mon Sep 17 09:13:31 CDT 2012 $
//#############################################################################

// **************************************************************************
// the includes
#include "DSP28x_Project.h"
#include "f280x_common/include/clk.h"


// **************************************************************************
// the defines


// **************************************************************************
// the globals


// **************************************************************************
// the functions


void CLK_disableAdcClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_ADCENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableAdcClock() function


void CLK_disableEcanaClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_ECANAENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEcanaClock() function


void CLK_disableEcanbClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_ECANBENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEcanbClock() function


void CLK_disableEcap1Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~CLK_PCLKCR1_ECAP1ENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEcap1Clock() function


void CLK_disableEcap2Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~CLK_PCLKCR1_ECAP2ENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEcap2Clock() function


void CLK_disableEcap3Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~CLK_PCLKCR1_ECAP3ENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEcap3Clock() function


void CLK_disableEcap4Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~CLK_PCLKCR1_ECAP4ENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEcap4Clock() function


void CLK_disableEqep1Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~CLK_PCLKCR1_EQEP1ENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEqep1Clock() function


void CLK_disableEqep2Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~CLK_PCLKCR1_EQEP2ENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableEqep2Clock() function


void CLK_disableI2cClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_I2CAENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableI2cClock() function


void CLK_disablePwmClock(CLK_Handle clkHandle, const PWM_Number_e pwmNumber)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR1 &= (~(1 << pwmNumber));

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disablePwmClock() function


void CLK_disableSciaClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;
asm(" nop");

    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_SCIAENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
asm(" nop");
    return;
} // end of CLK_disableSciaClock() function


void CLK_disableScibClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;
asm(" nop");

    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_SCIBENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
asm(" nop");
    return;
} // end of CLK_disableScibClock() function


void CLK_disableSpiaClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_SPIAENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableSpiaClock() function


void CLK_disableSpibClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_SPIBENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableSpibClock() function


void CLK_disableSpicClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_SPICENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableSpicClock() function


void CLK_disableSpidClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_SPIDENCLK_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableSpidClock() function


void CLK_disableTbClockSync(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->PCLKCR0 &= (~CLK_PCLKCR0_TBCLKSYNC_BITS);

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_disableTbClockSync() function


void CLK_enableAdcClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_ADCENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableAdcClock() function


void CLK_enableEcanaClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_ECANAENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEcanaClock() function


void CLK_enableEcanbClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= (uint16_t)CLK_PCLKCR0_ECANBENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEcanbClock() function


void CLK_enableEcap1Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= CLK_PCLKCR1_ECAP1ENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEcap1Clock() function


void CLK_enableEcap2Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= CLK_PCLKCR1_ECAP2ENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEcap2Clock() function


void CLK_enableEcap3Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= CLK_PCLKCR1_ECAP3ENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEcap3Clock() function


void CLK_enableEcap4Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= CLK_PCLKCR1_ECAP4ENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEcap4Clock() function


void CLK_enableEqep1Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= CLK_PCLKCR1_EQEP1ENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEqep1Clock() function


void CLK_enableEqep2Clock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= (uint16_t)CLK_PCLKCR1_EQEP2ENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableEqep2Clock() function


void CLK_enableI2cClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_I2CAENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableI2cClock() function


void CLK_enablePwmClock(CLK_Handle clkHandle, const PWM_Number_e pwmNumber)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR1 |= 1 << pwmNumber;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enablePwmClock() function


void CLK_enableSciaClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;
asm(" nop");

    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_SCIAENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
asm(" nop");
    return;
} // end of CLK_enableSciaClock() function


void CLK_enableScibClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;
asm(" nop");

    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_SCIBENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;
asm(" nop");
    return;
} // end of CLK_enableScibClock() function


void CLK_enableSpiaClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_SPIAENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableSpiaClock() function


void CLK_enableSpibClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_SPIBENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableSpibClock() function


void CLK_enableSpicClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_SPICENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableSpicClock() function


void CLK_enableSpidClock(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_SPIDENCLK_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableSpidClock() function


void CLK_enableTbClockSync(CLK_Handle clkHandle)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->PCLKCR0 |= CLK_PCLKCR0_TBCLKSYNC_BITS;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_enableTbClockSync() function


CLK_Handle CLK_init(void *pMemory, const size_t numBytes)
{
    CLK_Handle clkHandle;


    if(numBytes < sizeof(CLK_Obj))
    return((CLK_Handle)NULL);

    // assign the handle
    clkHandle = (CLK_Handle)pMemory;

    return(clkHandle);
} // end of CLK_init() function


void CLK_setClkOutPreScaler(CLK_Handle clkHandle, 
                            const CLK_ClkOutPreScaler_e preScaler)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // clear the bits
    clk->XCLK &= (~CLK_XCLK_XCLKOUTDIV_BITS);

    // set the bits
    clk->XCLK |= preScaler;
    
    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_setClkOutPreScaler() function


void CLK_setHiSpdPreScaler(CLK_Handle clkHandle,
                            const CLK_HiSpdPreScaler_e preScaler)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->HISPCP |= preScaler;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_setHiSpdPreScaler() function


void CLK_setLowSpdPreScaler(CLK_Handle clkHandle, 
                            const CLK_LowSpdPreScaler_e preScaler)
{
    CLK_Obj *clk = (CLK_Obj *)clkHandle;


    ENABLE_PROTECTED_REGISTER_WRITE_MODE;

    // set the bits
    clk->LOSPCP |= preScaler;

    DISABLE_PROTECTED_REGISTER_WRITE_MODE;

    return;
} // end of CLK_setLowSpdPreScaler() function


// end of file
