//#############################################################################
//
//! \file   f280x_common/source/adc.c
//!
//! \brief  Contains the various functions related to the analog-to-digital 
//!         converter (ADC) object
//
//  Group:          C2000
//  Target Device:  TMS320F280x
//
//  (C) Copyright 2013, Anton D. Kachalov <mouse@yandex.ru>
//  (C) Copyright 2012, Texas Instruments, Inc.
//#############################################################################
// $TI Release: f280x Support Library v210 $
// $Release Date: Fri Apr 05 10:03:02 MSK 2013 $
//#############################################################################

// **************************************************************************
// the includes
#include "DSP28x_Project.h"
#include "f280x_common/include/adc.h"


// assembly file
extern void DSP28x_usDelay(uint32_t Count);


// **************************************************************************
// the defines


// **************************************************************************
// the globals


// **************************************************************************
// the functions


void ADC_disableBandGap(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL3 &= (~ADC_ADCTRL3_ADCBGRFDN_BITS);

    return;
} // end of ADC_disableBandGap() function


void ADC_disableSeqOverride(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL1 &= (~ADC_ADCTRL1_SEQ_OVRD_BITS);

    return;
} // end of ADC_disableSeqOverride() function


void ADC_disableClkPrescale(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL1 |= (~ADC_ADCTRL1_CPS_BITS);

    return;
} // end of ADC_disableClkPrescale() function


void ADC_disablePwmSocASeq(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL2 &= (~ADC_ADCTRL2_ePWM_SOCA_SEQ1_BITS);

    return;
} // end of ADC_disablePwmSocASeq() function


void ADC_disablePwmSocBSeq(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL2 &= (~ADC_ADCTRL2_ePWM_SOCB_SEQ2_BITS);

    return;
} // end of ADC_disablePwmSocBSeq() function


void ADC_disableSeq1Int(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL2 &= (~ADC_ADCTRL2_INT_ENA_SEQ1_BITS);

    return;
} // end of ADC_disableSeq1Int() function


void ADC_disableSeq2Int(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL2 &= (~ADC_ADCTRL2_INT_ENA_SEQ2_BITS);

    return;
} // end of ADC_disableSeq2Int() function


void ADC_enableBandGap(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL3 |= ADC_ADCTRL3_ADCBGRFDN_BITS;

    return;
} // end of ADC_enableBandGap() function


void ADC_enableSeqOverride(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL1 |= (uint16_t)ADC_ADCTRL1_SEQ_OVRD_BITS;

    return;
} // end of ADC_enableSeqOverride() function


void ADC_enableClkPrescale(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL1 |= (uint16_t)ADC_ADCTRL1_CPS_BITS;

    return;
} // end of ADC_enableClkPrescale() function


void ADC_enablePwmSocASeq(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= ADC_ADCTRL2_ePWM_SOCA_SEQ1_BITS;

    return;
} // end of ADC_enablePwmSocASeq() function


void ADC_enablePwmSocBSeq(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= ADC_ADCTRL2_ePWM_SOCB_SEQ2_BITS;

    return;
} // end of ADC_enablePwmSocBSeq() function


void ADC_enableSeq1Int(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= ADC_ADCTRL2_INT_ENA_SEQ1_BITS;

    return;
} // end of ADC_enableSeq1Int() function


void ADC_enableSeq2Int(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= ADC_ADCTRL2_INT_ENA_SEQ2_BITS;

    return;
} // end of ADC_enableSeq2Int() function


void ADC_enableSeq1(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= ADC_ADCTRL2_SOC_SEQ1_BITS;

    return;
} // end of ADC_enableSeq1() function


void ADC_enableSeq2(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= ADC_ADCTRL2_SOC_SEQ2_BITS;

    return;
} // end of ADC_enableSeq2() function

// current sampled last
ADC_Handle ADC_init(void *pMemory, const size_t numBytes)
{
    ADC_Handle adcHandle;


    if(numBytes < sizeof(ADC_Obj))
    return((ADC_Handle)NULL);


    // assign the handle
    adcHandle = (ADC_Handle)pMemory;

    return(adcHandle);
} // end of ADC_init() function


void ADC_powerDown(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCTRL3 &= (~ADC_ADCTRL3_ADCPWDN_BITS);

    return;
} // end of ADC_powerDown() function


void ADC_powerUp(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL3 |= ADC_ADCTRL3_ADCPWDN_BITS;

    return;
} // end of ADC_powerUp() function


void ADC_reset(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL1 |= (uint16_t)ADC_ADCTRL1_RESET_BITS;

    asm(" RPT #22 || NOP");

    return;
} // end of ADC_reset() function


void ADC_resetSeq1(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= (uint16_t)ADC_ADCTRL2_RST_SEQ1_BITS;

    return;
} // end of ADC_resetSeq1() function


void ADC_resetSeq2(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // set the bits
    adc->ADCTRL2 |= (uint16_t)ADC_ADCTRL2_RST_SEQ2_BITS;

    return;
} // end of ADC_resetSeq2() function


void ADC_setSuspendMode(ADC_Handle adcHandle, const ADC_SuspendMode_e suspendMode)
{
	ADC_Obj *adc = (ADC_Obj *)adcHandle;


	adc->ADCTRL1 &= (~ADC_ADCTRL1_SUSMOD_BITS);

	adc->ADCTRL1 |= suspendMode;

	return;
} // end of ADC_setSuspendMode() function


void ADC_setSequenceMode(ADC_Handle adcHandle, const ADC_SeqMode_e seqMode)
{
	ADC_Obj *adc = (ADC_Obj *)adcHandle;


	adc->ADCTRL1 &= (~ADC_ADCTRL1_SEQ_CASC_BITS);

	adc->ADCTRL1 |= seqMode;

	return;
} // end of ADC_setSequenceMode() function


void ADC_setSequenceRunMode(ADC_Handle adcHandle, const ADC_SeqRun_e runMode)
{
	ADC_Obj *adc = (ADC_Obj *)adcHandle;


	adc->ADCTRL1 &= (~ADC_ADCTRL1_CONT_RUN_BITS);

	adc->ADCTRL1 |= runMode;

	return;
} // end of ADC_setSequenceRunMode() function


void ADC_setAcqWindow(ADC_Handle adcHandle, const ADC_AcqWindow_e window)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    adc->ADCTRL1 &= (~ADC_ADCTRL1_ACQ_PS_BITS);

    adc->ADCTRL1 |= window;

    return;
} // end of ADC_setAcqWindow() function


void ADC_setSampleMode(ADC_Handle adcHandle, const ADC_SampleMode_e sampleMode)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    adc->ADCTRL3 &= (~ADC_ADCTRL3_SMODE_SEL_BITS);

    adc->ADCTRL3 |= sampleMode;

    //  delay before converting ADC channels
    DSP28x_usDelay(ADC_DELAY_usec);

    return;
} // end of ADC_setSampleMode() function


void ADC_setClkDiv(ADC_Handle adcHandle, const ADC_ClkDiv_e clkDiv)
{
	ADC_Obj *adc = (ADC_Obj *)adcHandle;


    adc->ADCTRL3 &= (~ADC_ADCTRL3_ADCCLKPS_BITS);

    adc->ADCTRL3 |= clkDiv;

    return;
} // end of ADC_setClkDiv() function


void ADC_setMaxConv1(ADC_Handle adcHandle, const ADC_MaxConv_e convs)
{
	ADC_Obj *adc = (ADC_Obj *)adcHandle;


    adc->ADCMAXCONV &= (~ADC_ADCMAXCONV_MAX_CONV1_BITS);

    adc->ADCMAXCONV |= convs;

    return;
} // end of ADC_setMaxConv1() function


void ADC_setMaxConv2(ADC_Handle adcHandle, const ADC_MaxConv_e convs)
{
	ADC_Obj *adc = (ADC_Obj *)adcHandle;


    adc->ADCMAXCONV &= (~ADC_ADCMAXCONV_MAX_CONV2_BITS);

    adc->ADCMAXCONV |= (uint32_t)((convs << 4) & ADC_ADCMAXCONV_MAX_CONV2_BITS);

    return;
} // end of ADC_setMaxConv1() function


void ADC_setConvChanNumber(ADC_Handle adcHandle, const ADC_ConvNumber_e convNumber, const ADC_ChanNumber_e chanNumber)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    if (convNumber < ADC_ConvNumber_4) {
        uint8_t lShift = convNumber;
        uint32_t clearBits = (uint32_t)ADC_CHSELxNy_NUMBITS_PER_REG << lShift;
        uint32_t setBits = (uint32_t)chanNumber << lShift;
        // clear the bits
        adc->ADCCHSELSEQ1 &= (~clearBits);

        // set the bits
        adc->ADCCHSELSEQ1 |= setBits;
    } else if (convNumber < ADC_ConvNumber_8) {
        uint8_t lShift = convNumber - ADC_ConvNumber_4;
        uint32_t clearBits = (uint32_t)ADC_CHSELxNy_NUMBITS_PER_REG << lShift;
        uint32_t setBits = (uint32_t)chanNumber << lShift;
        // clear the bits
        adc->ADCCHSELSEQ2 &= (~clearBits);

        // set the bits
        adc->ADCCHSELSEQ2 |= setBits;
    } else if (convNumber < ADC_ConvNumber_12) {
        uint8_t lShift = convNumber - ADC_ConvNumber_8;
        uint32_t clearBits = (uint32_t)ADC_CHSELxNy_NUMBITS_PER_REG << lShift;
        uint32_t setBits = (uint32_t)chanNumber << lShift;
        // clear the bits
        adc->ADCCHSELSEQ3 &= (~clearBits);

        // set the bits
        adc->ADCCHSELSEQ3 |= setBits;
    } else {
        uint8_t lShift = convNumber - ADC_ConvNumber_12;
        uint32_t clearBits = (uint32_t)ADC_CHSELxNy_NUMBITS_PER_REG << lShift;
        uint32_t setBits = (uint32_t)chanNumber << lShift;
        // clear the bits
        adc->ADCCHSELSEQ4 &= (~clearBits);

        // set the bits
        adc->ADCCHSELSEQ4 |= setBits;
    }

    return;
} // end of ADC_setConvChanNumber() function


void ADC_setVoltRefSrc(ADC_Handle adcHandle, const ADC_VoltageRefSrc_e voltSrc)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;


    // clear the bits
    adc->ADCREFSEL &= (~ADC_ADCREFSEL_BITS);

    // set the bits
    adc->ADCREFSEL |= voltSrc;

    return;
} // end of ADC_setVoltRefSrc() function


// end of file
