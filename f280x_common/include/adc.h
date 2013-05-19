#ifndef _ADC_H_
#define _ADC_H_

//#############################################################################
//
//! \file   f280x_common/include/adc.h
//!
//! \brief  Contains public interface to various functions related to the 
//!         analog-to-digital converter (ADC) object
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

// drivers
#include "f280x_common/include/cpu.h"



//!
//! \defgroup ADC

//!
//! \ingroup ADC
//@{


#ifdef __cplusplus
extern "C" {
#endif


// **************************************************************************
// the defines


//! \brief Defines the base address of the analog-to-digital converter (ADC) registers
//!
#define ADC_BASE_ADDR              (0x00000B00)


//! \brief Defines the ADC delay for part of the ADC initialization
//!
#define ADC_DELAY_usec                  5000L


//! \brief Integer value bias corresponding to voltage 1.65V bias of input data on 3.3V, 12 bit ADC
//!
#define ADC_dataBias                    0x800


//! \brief Defines the location of the SEQ_CASC bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_SEQ_CASC_BITS          (1 << 4)

//! \brief Defines the location of the SEQ_OVRD bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_SEQ_OVRD_BITS          (1 << 5)

//! \brief Defines the location of the CONT_RUN bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_CONT_RUN_BITS          (1 << 6)

//! \brief Defines the location of the CPS bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_CPS_BITS               (1 << 7)

//! \brief Defines the location of the ACQ_PS bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_ACQ_PS_BITS            (15 << 8)

//! \brief Defines the location of the SUSMOD bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_SUSMOD_BITS            (3 << 12)

//! \brief Defines the location of the RESET bits in the ADCRTL1 register
//!
#define ADC_ADCTRL1_RESET_BITS             (1 << 14)


//! \brief Defines the location of the ePWM_SOCB_SEQ2 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_ePWM_SOCB_SEQ2_BITS    (1 << 0)


//! \brief Defines the location of the INT_MOD_SEQ2 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_INT_MOD_SEQ2_BITS      (1 << 2)


//! \brief Defines the location of the INT_ENA_SEQ2 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_INT_ENA_SEQ2_BITS      (1 << 3)


//! \brief Defines the location of the SOC_SEQ2 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_SOC_SEQ2_BITS          (1 << 5)


//! \brief Defines the location of the RST_SEQ2 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_RST_SEQ2_BITS          (1 << 6)


//! \brief Defines the location of the EXT_SOC_SEQ1 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_EXT_SOC_SEQ1_BITS      (1 << 7)


//! \brief Defines the location of the ePWM_SOCA_SEQ1 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_ePWM_SOCA_SEQ1_BITS    (1 << 8)


//! \brief Defines the location of the INT_MOD_SEQ1 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_INT_MOD_SEQ1_BITS      (1 << 10)


//! \brief Defines the location of the INT_ENA_SEQ1 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_INT_ENA_SEQ1_BITS      (1 << 11)


//! \brief Defines the location of the SOC_SEQ1 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_SOC_SEQ1_BITS          (1 << 13)


//! \brief Defines the location of the RST_SEQ1 bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_RST_SEQ1_BITS          (1 << 14)


//! \brief Defines the location of the ePWM_SOCB_SEQ bits in the ADCRTL2 register
//!
#define ADC_ADCTRL2_ePWM_SOCB_SEQ_BITS     (1 << 15)


//! \brief Defines the location of the SMODE_SEL bits in the ADCRTL3 register
//!
#define ADC_ADCTRL3_SMODE_SEL_BITS         (1 << 0)


//! \brief Defines the location of the ADCCLKPS bits in the ADCRTL3 register
//!
#define ADC_ADCTRL3_ADCCLKPS_BITS          (15 << 1)


//! \brief Defines the location of the ADCPWDN bits in the ADCRTL3 register
//!
#define ADC_ADCTRL3_ADCPWDN_BITS           (1 << 5)


//! \brief Defines the location of the ADCBGRFDN bits in the ADCRTL3 register
//!
#define ADC_ADCTRL3_ADCBGRFDN_BITS         (3 << 6)


//! \brief Defines the location of the MAX_CONV1 bits in the ADCMAXCONV register
//!
#define ADC_ADCMAXCONV_MAX_CONV1_BITS      (15 << 0)


//! \brief Defines the location of the MAX_CONV2 bits in the ADCMAXCONV register
//!
#define ADC_ADCMAXCONV_MAX_CONV2_BITS      (7 << 4)


//! \brief Defines the location of the SEQ1_STATE bits in the ADCASEQSR register
//!
#define ADC_ADCASEQSR_SEQ1_STATE_BITS      (15 << 0)


//! \brief Defines the location of the SEQ2_STATE bits in the ADCASEQSR register
//!
#define ADC_ADCASEQSR_SEQ2_STATE_BITS      (7 << 4)


//! \brief Defines the location of the SEQ_CNTR bits in the ADCASEQSR register
//!
#define ADC_ADCASEQSR_SEQ_CNTR_BITS        (15 << 8)


//! \brief Defines the location of the INT_SEQ1 bits in the ADCST register
//!
#define ADC_ADCST_INT_SEQ1_BITS         (1 << 0)


//! \brief Defines the location of the INT_SEQ2 bits in the ADCST register
//!
#define ADC_ADCST_INT_SEQ2_BITS         (1 << 1)


//! \brief Defines the location of the SEQ1_BSY bits in the ADCST register
//!
#define ADC_ADCST_SEQ1_BSY_BITS         (1 << 2)


//! \brief Defines the location of the SEQ2_BSY bits in the ADCST register
//!
#define ADC_ADCST_SEQ2_BSY_BITS         (1 << 3)


//! \brief Defines the location of the INT_SEQ1_CLR bits in the ADCST register
//!
#define ADC_ADCST_INT_SEQ1_CLR_BITS     (1 << 4)


//! \brief Defines the location of the INT_SEQ2_CLR bits in the ADCST register
//!
#define ADC_ADCST_INT_SEQ2_CLR_BITS     (1 << 5)


//! \brief Defines the location of the EOS_BUF1 bits in the ADCST register
//!
#define ADC_ADCST_EOS_BUF1_BITS         (1 << 6)


//! \brief Defines the location of the EOS_BUF2 bits in the ADCST register
//!
#define ADC_ADCST_EOS_BUF2_BITS         (1 << 7)


//! \brief Defines the location of the REF_SEL bits in the ADCREFSEL register
//!
#define ADC_ADCREFSEL_BITS              (3 << 14)


//! \brief Defines the location of the OFFSET_TRIM bits in the ADCOFFTRIM register
//!
#define ADC_ADCOFFTRIM_BITS             (511 << 0)


//! \brief Defines the number of bits per CONVy in CHSELx register
//!
#define ADC_CHSELxNy_NUMBITS_PER_REG        4

//! \brief Defines the log2() of the number of bits per CHSELxNy register
//!
#define ADC_CHSELxNy_LOG2_NUMBITS_PER_REG   2



// **************************************************************************
// the typedefs


//! \brief Enumeration to define the analog-to-digital converter (ADC) emulation-suspend mode
//!
typedef enum
{
    ADC_SuspendMode_0=(0 << 12),     //!< Denotes suspend mode 0
    ADC_SuspendMode_1=(1 << 12),     //!< Denotes suspend mode 1
    ADC_SuspendMode_2=(2 << 12),     //!< Denotes suspend mode 2
    ADC_SuspendMode_3=(3 << 12)      //!< Denotes suspend mode 3
} ADC_SuspendMode_e;


//! \brief Enumeration to define the sequencer continuous run mode
//!
typedef enum
{
    ADC_SeqRun_StartStop=(0 << 6),  //!< Denotes that the sequencer operates in start-stop mode
    ADC_SeqRun_Continuous=(1 << 6)  //!< Denotes that the sequencer operates in continuous
} ADC_SeqRun_e;


//! \brief Enumeration to define the sequencer mode
//!
typedef enum
{
    ADC_SeqMode_Dual=(0 << 4),      //!< Denotes that the sequencer operates in dual-sequencer mode
    ADC_SeqMode_Cascaded=(1 << 4)   //!< Denotes that the sequencer operates in cascaded mode
} ADC_SeqMode_e;


//! \brief Enumeration to define the sampling mode
//!
typedef enum
{
    ADC_SampleMode_Sequential=(0 << 0),    //!< Denotes that the sequential sampling mode is selected
    ADC_SampleMode_Simultaneous=(1 << 0)   //!< Denotes that the simultaneous sampling mode is selected
} ADC_SampleMode_e;


//! \brief Enumeration to define the ADC clock divider, which sets the clock frequency
//!
typedef enum
{
    ADC_ClkDiv_HspClk_bypass=(0 << 1),  //!< Denotes DIV value = HSPCLK/(ADCTRL1[7] + 1)
    ADC_ClkDiv_HspClk_by_2=(1 << 1),    //!< Denotes DIV value = HSPCLK/[2 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_4=(2 << 1),    //!< Denotes DIV value = HSPCLK/[4 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_6=(3 << 1),    //!< Denotes DIV value = HSPCLK/[6 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_8=(4 << 1),    //!< Denotes DIV value = HSPCLK/[8 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_10=(5 << 1),   //!< Denotes DIV value = HSPCLK/[10 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_12=(6 << 1),   //!< Denotes DIV value = HSPCLK/[12 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_14=(7 << 1),   //!< Denotes DIV value = HSPCLK/[14 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_16=(8 << 1),   //!< Denotes DIV value = HSPCLK/[16 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_18=(9 << 1),   //!< Denotes DIV value = HSPCLK/[18 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_20=(10 << 1),  //!< Denotes DIV value = HSPCLK/[20 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_22=(11 << 1),  //!< Denotes DIV value = HSPCLK/[22 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_24=(12 << 1),  //!< Denotes DIV value = HSPCLK/[24 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_26=(13 << 1),  //!< Denotes DIV value = HSPCLK/[26 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_28=(14 << 1),  //!< Denotes DIV value = HSPCLK/[28 * (ADCTRL1[7] + 1)]
    ADC_ClkDiv_HspClk_by_30=(15 << 1)   //!< Denotes DIV value = HSPCLK/[30 * (ADCTRL1[7] + 1)]
} ADC_ClkDiv_e;


//! \brief Enumeration to define the analog-to-digital converter (ADC) result number
//!
typedef enum
{
    ADC_ResultNumber_0=0,     //!< Denotes ADCRESULT0
    ADC_ResultNumber_1,       //!< Denotes ADCRESULT1
    ADC_ResultNumber_2,       //!< Denotes ADCRESULT2
    ADC_ResultNumber_3,       //!< Denotes ADCRESULT3
    ADC_ResultNumber_4,       //!< Denotes ADCRESULT4
    ADC_ResultNumber_5,       //!< Denotes ADCRESULT5
    ADC_ResultNumber_6,       //!< Denotes ADCRESULT6
    ADC_ResultNumber_7,       //!< Denotes ADCRESULT7
    ADC_ResultNumber_8,       //!< Denotes ADCRESULT8
    ADC_ResultNumber_9,       //!< Denotes ADCRESULT9
    ADC_ResultNumber_10,      //!< Denotes ADCRESULT10
    ADC_ResultNumber_11,      //!< Denotes ADCRESULT11
    ADC_ResultNumber_12,      //!< Denotes ADCRESULT12
    ADC_ResultNumber_13,      //!< Denotes ADCRESULT13
    ADC_ResultNumber_14,      //!< Denotes ADCRESULT14
    ADC_ResultNumber_15       //!< Denotes ADCRESULT15
} ADC_ResultNumber_e;


//! \brief Enumeration to define the start of conversion (SOC) channel numbers
//!
typedef enum
{
    ADC_ChanNumber_A0=(0 << 6),                                     //!< Denotes CONV channel number A0
    ADC_ChanNumber_A1=(1 << 6),                                     //!< Denotes CONV channel number A1
    ADC_ChanNumber_A2=(2 << 6),                                     //!< Denotes CONV channel number A2
    ADC_ChanNumber_A3=(3 << 6),                                     //!< Denotes CONV channel number A3
    ADC_ChanNumber_A4=(4 << 6),                                     //!< Denotes CONV channel number A4
    ADC_ChanNumber_A5=(5 << 6),                                     //!< Denotes CONV channel number A5
    ADC_ChanNumber_A6=(6 << 6),                                     //!< Denotes CONV channel number A6
    ADC_ChanNumber_A7=(7 << 6),                                     //!< Denotes CONV channel number A7
    ADC_ChanNumber_B0=(8 << 6),                                     //!< Denotes CONV channel number B0
    ADC_ChanNumber_B1=(9 << 6),                                     //!< Denotes CONV channel number B1
    ADC_ChanNumber_B2=(10 << 6),                                    //!< Denotes CONV channel number B2
    ADC_ChanNumber_B3=(11 << 6),                                    //!< Denotes CONV channel number B3
    ADC_ChanNumber_B4=(12 << 6),                                    //!< Denotes CONV channel number B4
    ADC_ChanNumber_B5=(13 << 6),                                    //!< Denotes CONV channel number B5
    ADC_ChanNumber_B6=(14 << 6),                                    //!< Denotes CONV channel number B6
    ADC_ChanNumber_B7=(15 << 6),                                    //!< Denotes CONV channel number B7
    ADC_ChanNumber_A0_and_B0_Together=(0 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A1_and_B1_Together=(1 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A2_and_B2_Together=(2 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A3_and_B3_Together=(3 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A4_and_B4_Together=(4 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A5_and_B5_Together=(5 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A6_and_B6_Together=(6 << 6),                     //!< Denotes CONV channel number A0 and B0 together
    ADC_ChanNumber_A7_and_B7_Together=(7 << 6)                      //!< Denotes CONV channel number A0 and B0 together
} ADC_ChanNumber_e;


//! \brief Enumeration to define the start of conversion (SOC) numbers
//!
typedef enum
{
    ADC_ConvNumber_0=0,                     //!< Denotes CONV0
    ADC_ConvNumber_1,                       //!< Denotes CONV1
    ADC_ConvNumber_2,                       //!< Denotes CONV2
    ADC_ConvNumber_3,                       //!< Denotes CONV3
    ADC_ConvNumber_4,                       //!< Denotes CONV4
    ADC_ConvNumber_5,                       //!< Denotes CONV5
    ADC_ConvNumber_6,                       //!< Denotes CONV6
    ADC_ConvNumber_7,                       //!< Denotes CONV7
    ADC_ConvNumber_8,                       //!< Denotes CONV8
    ADC_ConvNumber_9,                       //!< Denotes CONV9
    ADC_ConvNumber_10,                      //!< Denotes CONV10
    ADC_ConvNumber_11,                      //!< Denotes CONV11
    ADC_ConvNumber_12,                      //!< Denotes CONV12
    ADC_ConvNumber_13,                      //!< Denotes CONV13
    ADC_ConvNumber_14,                      //!< Denotes CONV14
    ADC_ConvNumber_15                       //!< Denotes CONV15
} ADC_ConvNumber_e;


//! \brief Enumeration to define the maxconv
//!
typedef enum
{
	ADC_MaxConv_1 = 0,						//!< Denotes 1 conversion
	ADC_MaxConv_2 = 1,						//!< Denotes 2 conversions
	ADC_MaxConv_3 = 2,						//!< Denotes 3 conversions
	ADC_MaxConv_4 = 3,						//!< Denotes 4 conversions
	ADC_MaxConv_5 = 4,						//!< Denotes 5 conversions
	ADC_MaxConv_6 = 5,						//!< Denotes 6 conversions
	ADC_MaxConv_7 = 6,						//!< Denotes 7 conversions
	ADC_MaxConv_8 = 7,						//!< Denotes 8 conversions
	ADC_MaxConv_9 = 8,						//!< Denotes 9 conversions
	ADC_MaxConv_10 = 9,						//!< Denotes 10 conversions
	ADC_MaxConv_11 = 10,					//!< Denotes 11 conversions
	ADC_MaxConv_12 = 11,					//!< Denotes 12 conversions
	ADC_MaxConv_13 = 12,					//!< Denotes 13 conversions
	ADC_MaxConv_14 = 13,					//!< Denotes 14 conversions
	ADC_MaxConv_15 = 14,					//!< Denotes 15 conversions
	ADC_MaxConv_16 = 15						//!< Denotes 16 conversions
} ADC_MaxConv_e;


//! \brief Enumeration to define the acquisition window size
//!
typedef enum
{
    ADC_AcqWindow_1=(1 << 8),         	  //!< Denotes an SOC sample window size of width 1
    ADC_AcqWindow_2=(2 << 8),         	  //!< Denotes an SOC sample window size of width 2
    ADC_AcqWindow_3=(3 << 8),         	  //!< Denotes an SOC sample window size of width 3
    ADC_AcqWindow_4=(4 << 8),         	  //!< Denotes an SOC sample window size of width 4
    ADC_AcqWindow_5=(5 << 8),         	  //!< Denotes an SOC sample window size of width 5
    ADC_AcqWindow_6=(6 << 8),         	  //!< Denotes an SOC sample window size of width 6
    ADC_AcqWindow_7=(7 << 8),         	  //!< Denotes an SOC sample window size of width 7
    ADC_AcqWindow_8=(8 << 8),         	  //!< Denotes an SOC sample window size of width 8
    ADC_AcqWindow_9=(9 << 8),         	  //!< Denotes an SOC sample window size of width 9
    ADC_AcqWindow_10=(10 << 8),           //!< Denotes an SOC sample window size of width 10
    ADC_AcqWindow_11=(11 << 8),           //!< Denotes an SOC sample window size of width 11
    ADC_AcqWindow_12=(12 << 8),           //!< Denotes an SOC sample window size of width 12
    ADC_AcqWindow_13=(13 << 8),           //!< Denotes an SOC sample window size of width 13
    ADC_AcqWindow_14=(14 << 8),           //!< Denotes an SOC sample window size of width 14
    ADC_AcqWindow_15=(15 << 8)            //!< Denotes an SOC sample window size of width 15
} ADC_AcqWindow_e;


//! \brief Enumeration to define the voltage reference source
//!
typedef enum
{
    ADC_VoltageRefSrc_Int=(0 << 14),      //!< Denotes an internal voltage reference source
    ADC_VoltageRefSrc_Ext2v048=(1 << 14), //!< Denotes an external 2.048V reference on ADCREFIN
    ADC_VoltageRefSrc_Ext1v500=(2 << 14), //!< Denotes an external 1.500V reference on ADCREFIN
    ADC_VoltageRefSrc_Ext1v024=(3 << 14)  //!< Denotes an external 1.024V reference on ADCREFIN
} ADC_VoltageRefSrc_e;


//! \brief Defines the analog-to-digital converter (ADC) object
//! spru716d.pdf, page 13, table 1-1
//!
typedef struct _ADC_Obj_
{
    volatile uint16_t      ADCMIRROR[16];    //!< ADC result (0-wait) registers
    volatile uint16_t      resvd_1[26096];   //!< Reserved
    volatile uint16_t      ADCTRL1;          //!< ADC Control Register 1
    volatile uint16_t      ADCTRL2;          //!< ADC Control Register 2
    volatile uint16_t      ADCMAXCONV;       //!< ADC Maximum Conversion Channels Register
    volatile uint16_t      ADCCHSELSEQ1;     //!< ADC Channel Select Sequencing Control Register 1
    volatile uint16_t      ADCCHSELSEQ2;     //!< ADC Channel Select Sequencing Control Register 2
    volatile uint16_t      ADCCHSELSEQ3;     //!< ADC Channel Select Sequencing Control Register 3
    volatile uint16_t      ADCCHSELSEQ4;     //!< ADC Channel Select Sequencing Control Register 4
    volatile uint16_t      ADCASEQSR;        //!< ADC Auto-Sequence Status Register
    volatile uint16_t      ADCRESULT[16];    //!< ADC result registers
    volatile uint16_t      ADCTRL3;          //!< ADC Control Register 3
    volatile uint16_t      ADCST;            //!< ADC Status Register
    volatile uint16_t      resvd_2[2];       //!< Reserved
    volatile uint16_t      ADCREFSEL;        //!< ADC Reference Select Register
    volatile uint16_t      ADCOFFTRIM;       //!< ADC Offset Trim Register
} ADC_Obj;


//! \brief Defines the analog-to-digital converter (ADC) handle
//!
typedef struct ADC_Obj  *ADC_Handle;


// **************************************************************************
// the globals


// **************************************************************************
// the function prototypes


//! \brief     Disables the analog-to-digital converter (ADC) band gap circuit
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disableBandGap(ADC_Handle adcHandle);


//! \brief     Disables the Sequencer override
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disableSeqOverride(ADC_Handle adcHandle);


//! \brief     Disables the analog-to-digital converter (ADC) core clock prescaler
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disableClkPrescale(ADC_Handle adcHandle);


//! \brief     Disables the ePWM SOCA for cascaded sequencer
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disablePwmSocASeq(ADC_Handle adcHandle);


//! \brief     Disables the ePWM SOCB for cascaded sequencer
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disablePwmSocBSeq(ADC_Handle adcHandle);


//! \brief     Disables the SEQ1 interrupt
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disableSeq1Int(ADC_Handle adcHandle);


//! \brief     Disables the SEQ2 interrupt
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_disableSeq2Int(ADC_Handle adcHandle);


//! \brief     Enables the analog-to-digital converter (ADC) band gap circuit
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableBandGap(ADC_Handle adcHandle);


//! \brief     Enables the Sequencer override
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableSeqOverride(ADC_Handle adcHandle);


//! \brief     Enables the analog-to-digital converter (ADC) core clock prescaler
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableClkPrescale(ADC_Handle adcHandle);


//! \brief     Enables the ePWM SOCA for cascaded sequencer
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enablePwmSocASeq(ADC_Handle adcHandle);


//! \brief     Enables the ePWM SOCB for cascaded sequencer
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enablePwmSocBSeq(ADC_Handle adcHandle);


//! \brief     Enables the SEQ1 interrupt
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableSeq1Int(ADC_Handle adcHandle);


//! \brief     Enables the SEQ2 interrupt
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableSeq2Int(ADC_Handle adcHandle);


//! \brief     Enables the SEQ1
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableSeq1(ADC_Handle adcHandle);


//! \brief     Enables the SEQ2
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_enableSeq2(ADC_Handle adcHandle);


//! \brief     Initializes the analog-to-digital converter (ADC) object handle
//! \param[in] pMemory   A pointer to the base address of the ADC registers
//! \param[in] numBytes  The number of bytes allocated for the ADC object, bytes
//! \return    The analog-to-digital converter (ADC) object handle
ADC_Handle ADC_init(void *pMemory, const size_t numBytes);


//! \brief     Powers down the analog-to-digital converter (ADC)
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_powerDown(ADC_Handle adcHandle);


//! \brief     Powers up the analog-to-digital converter (ADC)
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_powerUp(ADC_Handle adcHandle);


//! \brief     Software trigger start-of-conversion (SOC) for SEQ1
//! \param[in] adcHandle     The ADC handle
//! \return    The ADC result
inline void ADC_startSeq1(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;

    adc->ADCTRL2 |= ADC_ADCTRL2_SOC_SEQ1_BITS;

    return;
} // end of ADC_read() function


//! \brief     Software trigger start-of-conversion (SOC) for SEQ2
//! \param[in] adcHandle     The ADC handle
//! \return    The ADC result
inline void ADC_startSeq2(ADC_Handle adcHandle)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;

    adc->ADCTRL2 |= ADC_ADCTRL2_SOC_SEQ2_BITS;

    return;
} // end of ADC_read() function


//! \brief     Reads the specified ADC result (i.e. value)
//! \param[in] adcHandle     The ADC handle
//! \param[in] resultNumber  The result number for the ADCRESULT registers
//! \return    The ADC result
inline uint_least16_t ADC_readResult(ADC_Handle adcHandle, const ADC_ResultNumber_e resultNumber)
{
    ADC_Obj *adc = (ADC_Obj *)adcHandle;

    return(adc->ADCMIRROR[resultNumber]);
} // end of ADC_read() function


//! \brief     Resets the analog-to-digital converter (ADC)
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_reset(ADC_Handle adcHandle);


//! \brief     Resets the Sequencer 1
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_resetSeq1(ADC_Handle adcHandle);


//! \brief     Resets the Sequencer 2
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
void ADC_resetSeq2(ADC_Handle adcHandle);


//! \brief     Sets the suspend mode
//! \param[in] adcHandle    The analog-to-digital converter (ADC) object handle
//! \param[in] suspendMode  The suspend mode
void ADC_setSuspendMode(ADC_Handle adcHandle, const ADC_SuspendMode_e suspendMode);


//! \brief     Sets the sequence mode: dual or cascaced
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] seqMode     The sequence mode
void ADC_setSequenceMode(ADC_Handle adcHandle, const ADC_SeqMode_e seqMode);


//! \brief     Sets the sequence run mode: continuous or start-stop
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] runMode     The sequence run mode
void ADC_setSequenceRunMode(ADC_Handle adcHandle, const ADC_SeqRun_e seqMode);


//! \brief     Sets the acquisition window size
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] window      The acquisition window size
void ADC_setAcqWindow(ADC_Handle adcHandle, const ADC_AcqWindow_e window);


//! \brief     Sets the sample mode
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] sampleMode  The sample mode
void ADC_setSampleMode(ADC_Handle adcHandle, const ADC_SampleMode_e sampleMode);


//! \brief     Sets the ADC clock divisor
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] sampleMode  The clock divisor
void ADC_setClkDiv(ADC_Handle adcHandle, const ADC_ClkDiv_e clkDiv);


//! \brief     Sets the max conversion number for MAX_CONV1
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] convs  	   The conversions number
void ADC_setMaxConv1(ADC_Handle adcHandle, const ADC_MaxConv_e convs);


//! \brief     Sets the max conversion number for MAX_CONV2
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] convs  	   The conversions number
void ADC_setMaxConv2(ADC_Handle adcHandle, const ADC_MaxConv_e convs);


//! \brief     Sets the CONVx channel number
//! \param[in] adcHandle   The analog-to-digital converter (ADC) object handle
//! \param[in] convNumber  The CONVx number
//! \param[in] chanNumber  The channel number
void ADC_setConvChanNumber(ADC_Handle adcHandle, const ADC_ConvNumber_e convNumber, const ADC_ChanNumber_e chanNumber);


//! \brief     Sets the voltage reference source
//! \param[in] adcHandle  The analog-to-digital converter (ADC) object handle
//! \param[in] voltRef    The voltage reference source
void ADC_setVoltRefSrc(ADC_Handle adcHandle, const ADC_VoltageRefSrc_e voltRef);


#ifdef __cplusplus
}
#endif // extern "C"

//@}  // ingroup


#endif // end of _ADC_H_ definition

