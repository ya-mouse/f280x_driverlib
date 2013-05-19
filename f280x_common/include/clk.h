#ifndef _CLK_H_
#define _CLK_H_

//#############################################################################
//
//! \file   f2802x_common/include/clk.h
//!
//! \brief  Contains public interface to various functions related to the 
//!         clock (CLK) object 
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

#include "f280x_common/include/cpu.h"
#include "f280x_common/include/pwm.h"


//!
//! \defgroup CLK

//!
//! \ingroup CLK
//@{


#ifdef __cplusplus
extern "C" {
#endif


// **************************************************************************
// the defines


//! \brief Defines the base address of the clock (CLK) registers
//!
#define  CLK_BASE_ADDR                   (0x00007010)

//! \brief Defines the location of the TBCLKSYNC bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_TBCLKSYNC_BITS      (1 << 2)

//! \brief Defines the location of the ADCENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_ADCENCLK_BITS       (1 << 3)

//! \brief Defines the location of the I2CAENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_I2CAENCLK_BITS      (1 << 4)

//! \brief Defines the location of the SPICENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_SPICENCLK_BITS      (1 << 6)

//! \brief Defines the location of the SPIDENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_SPIDENCLK_BITS      (1 << 7)

//! \brief Defines the location of the SPIAENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_SPIAENCLK_BITS      (1 << 8)

//! \brief Defines the location of the SPIBENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_SPIBENCLK_BITS      (1 << 9)

//! \brief Defines the location of the SCIAENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_SCIAENCLK_BITS      (1 << 10)

//! \brief Defines the location of the SCIBENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_SCIBENCLK_BITS      (1 << 11)

//! \brief Defines the location of the ECANAENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_ECANAENCLK_BITS     (1 << 14)

//! \brief Defines the location of the ECANBENCLK bits in the PCLKCR0 register
//!
#define  CLK_PCLKCR0_ECANBENCLK_BITS     (1 << 15)


//! \brief Defines the location of the EPWM1ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM1ENCLK_BITS     (1 << 0)

//! \brief Defines the location of the EPWM2ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM2ENCLK_BITS     (1 << 1)

//! \brief Defines the location of the EPWM3ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM3ENCLK_BITS     (1 << 2)

//! \brief Defines the location of the EPWM4ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM4ENCLK_BITS     (1 << 3)

//! \brief Defines the location of the EPWM5ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM5ENCLK_BITS     (1 << 4)

//! \brief Defines the location of the EPWM6ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM6ENCLK_BITS     (1 << 5)

//! \brief Defines the location of the EPWM7ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM7ENCLK_BITS     (1 << 6)

//! \brief Defines the location of the EPWM8ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EPWM8ENCLK_BITS     (1 << 7)

//! \brief Defines the location of the ECAP1ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_ECAP1ENCLK_BITS     (1 << 8)

//! \brief Defines the location of the ECAP2ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_ECAP2ENCLK_BITS     (1 << 9)

//! \brief Defines the location of the ECAP3ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_ECAP3ENCLK_BITS     (1 << 10)

//! \brief Defines the location of the ECAP4ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_ECAP4ENCLK_BITS     (1 << 11)

//! \brief Defines the location of the EQEP1ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EQEP1ENCLK_BITS     (1 << 14)

//! \brief Defines the location of the EQEP2ENCLK bits in the PCLKCR1 register
//!
#define  CLK_PCLKCR1_EQEP2ENCLK_BITS     (1 << 15)


//! \brief Defines the location of the HSPNCLK bits in the HISPCP register
//!
#define  CLK_HISPCP_HSPCLK_BITS          (7 << 0)


//! \brief Defines the location of the LSPNCLK bits in the LOSPCP register
//!
#define  CLK_LOSPCP_LSPCLK_BITS          (7 << 0)


//! \brief Defines the location of the XCLKOUTDIV bits in the XCLK register
//!
#define  CLK_XCLK_XCLKOUTDIV_BITS        (3 << 0)


// **************************************************************************
// the typedefs


//! \brief Enumeration to define the external clock output frequency
//!
typedef enum
{
    CLK_ClkOutPreScaler_SysClkOut_by_4=(0 << 0),  //!< Denotes XCLKOUT = SYSCLKOUT/4
    CLK_ClkOutPreScaler_SysClkOut_by_2=(1 << 0),  //!< Denotes XCLKOUT = SYSCLKOUT/2
    CLK_ClkOutPreScaler_SysClkOut_by_1=(2 << 0),  //!< Denotes XCLKOUT = SYSCLKOUT/1
    CLK_ClkOutPreScaler_Off                       //!< Denotes XCLKOUT = Off
} CLK_ClkOutPreScaler_e;


//! \brief Enumeration to define the CPU timer numbers
//!
typedef enum
{
    CLK_CpuTimerNumber_0=(1 << 8),  //!< Denotes CPU timer number 0
    CLK_CpuTimerNumber_1=(1 << 9),  //!< Denotes CPU timer number 1
    CLK_CpuTimerNumber_2=(1 << 10)  //!< Denotes CPU timer number 2
} CLK_CpuTimerNumber_e;


//! \brief Enumeration to define the high speed clock prescaler, which sets the clock frequency
//!
typedef enum
{
    CLK_HiSpdPreScaler_SysClkOut_by_1=(0 << 0),  //!< Denotes High Speed Clock = SYSCLKOUT/1
    CLK_HiSpdPreScaler_SysClkOut_by_2=(1 << 0),  //!< Denotes High Speed Clock = SYSCLKOUT/2
    CLK_HiSpdPreScaler_SysClkOut_by_4=(2 << 0),  //!< Denotes High Speed Clock = SYSCLKOUT/4
    CLK_HiSpdPreScaler_SysClkOut_by_6=(3 << 0),  //!< Denotes High Speed Clock = SYSCLKOUT/6
    CLK_HiSpdPreScaler_SysClkOut_by_8=(4 << 0),  //!< Denotes High Speed Clock = SYSCLKOUT/8
    CLK_HiSpdPreScaler_SysClkOut_by_10=(5 << 0), //!< Denotes High Speed Clock = SYSCLKOUT/10
    CLK_HiSpdPreScaler_SysClkOut_by_12=(6 << 0), //!< Denotes High Speed Clock = SYSCLKOUT/12
    CLK_HiSpdPreScaler_SysClkOut_by_14=(7 << 0)  //!< Denotes High Speed Clock = SYSCLKOUT/14
} CLK_HiSpdPreScaler_e;


//! \brief Enumeration to define the low speed clock prescaler, which sets the clock frequency
//!
typedef enum
{
    CLK_LowSpdPreScaler_SysClkOut_by_1=(0 << 0),  //!< Denotes Low Speed Clock = SYSCLKOUT/1
    CLK_LowSpdPreScaler_SysClkOut_by_2=(1 << 0),  //!< Denotes Low Speed Clock = SYSCLKOUT/2
    CLK_LowSpdPreScaler_SysClkOut_by_4=(2 << 0),  //!< Denotes Low Speed Clock = SYSCLKOUT/4
    CLK_LowSpdPreScaler_SysClkOut_by_6=(3 << 0),  //!< Denotes Low Speed Clock = SYSCLKOUT/6
    CLK_LowSpdPreScaler_SysClkOut_by_8=(4 << 0),  //!< Denotes Low Speed Clock = SYSCLKOUT/8
    CLK_LowSpdPreScaler_SysClkOut_by_10=(5 << 0), //!< Denotes Low Speed Clock = SYSCLKOUT/10
    CLK_LowSpdPreScaler_SysClkOut_by_12=(6 << 0), //!< Denotes Low Speed Clock = SYSCLKOUT/12
    CLK_LowSpdPreScaler_SysClkOut_by_14=(7 << 0)  //!< Denotes Low Speed Clock = SYSCLKOUT/14
} CLK_LowSpdPreScaler_e;


//! \brief Enumeration to define the PLL clock register, which sets the clock frequency
//!
typedef enum
{
    CLK_PllDiv_OscClk_bypass=(0 << 0),  //!< Denotes DIV value = OSCCLK
    CLK_PllDiv_OscClk_by_1=(1 << 0),    //!< Denotes DIV value = OSCCLK*1
    CLK_PllDiv_OscClk_by_2=(2 << 0),    //!< Denotes DIV value = OSCCLK*2
    CLK_PllDiv_OscClk_by_3=(3 << 0),    //!< Denotes DIV value = OSCCLK*3
    CLK_PllDiv_OscClk_by_4=(4 << 0),    //!< Denotes DIV value = OSCCLK*4
    CLK_PllDiv_OscClk_by_5=(5 << 0),    //!< Denotes DIV value = OSCCLK*5
    CLK_PllDiv_OscClk_by_6=(6 << 0),    //!< Denotes DIV value = OSCCLK*6
    CLK_PllDiv_OscClk_by_7=(7 << 0),    //!< Denotes DIV value = OSCCLK*7
    CLK_PllDiv_OscClk_by_8=(8 << 0),    //!< Denotes DIV value = OSCCLK*8
    CLK_PllDiv_OscClk_by_9=(9 << 0),    //!< Denotes DIV value = OSCCLK*9
    CLK_PllDiv_OscClk_by_10=(10 << 0)   //!< Denotes DIV value = OSCCLK*10
} CLK_PllDiv_e;


//! \brief Enumeration to define the timer 2 prescaler, which sets the timer 2 frequency
//!
typedef enum
{
    CLK_Timer2PreScaler_by_1=(0 << 5), //!< Denotes a CPU timer 2 clock pre-scaler value of divide by 1
    CLK_Timer2PreScaler_by_2=(1 << 5), //!< Denotes a CPU timer 2 clock pre-scaler value of divide by 2
    CLK_Timer2PreScaler_by_4=(2 << 5), //!< Denotes a CPU timer 2 clock pre-scaler value of divide by 4
    CLK_Timer2PreScaler_by_8=(3 << 5), //!< Denotes a CPU timer 2 clock pre-scaler value of divide by 8
    CLK_Timer2PreScaler_by_16=(4 << 5) //!< Denotes a CPU timer 2 clock pre-scaler value of divide by 16
} CLK_Timer2PreScaler_e;


//! \brief Enumeration to define the timer 2 source
//!
typedef enum
{
    CLK_Timer2Src_SysClk=(0 << 3),   //!< Denotes the CPU timer 2 clock source is SYSCLKOUT
    CLK_Timer2Src_ExtOsc=(1 << 3),   //!< Denotes the CPU timer 2 clock source is external oscillator
    CLK_Timer2Src_IntOsc1=(2 << 3),  //!< Denotes the CPU timer 2 clock source is internal oscillator 1
    CLK_Timer2Src_IntOsc2=(3 << 3)   //!< Denotes the CPU timer 2 clock source is internal oscillator 2
} CLK_Timer2Src_e;


//! \brief Enumeration to define the watchdog clock source
//!
typedef enum
{
    CLK_WdClkSrc_IntOsc1=(0 << 2),         //!< Denotes the watchdog clock source is internal oscillator 1
    CLK_WdClkSrc_ExtOscOrIntOsc2=(1 << 2)  //!< Denotes the watchdog clock source is external oscillator or internal oscillator 2
} CLK_WdClkSrc_e;


//! \brief Defines the clock (CLK) object
//!
typedef struct _CLK_Obj_
{
    volatile uint16_t   XCLK;         //!< XCLKOUT/XCLKIN Control
    volatile uint16_t   rsvd_1[9];	  //!< Reserved
    volatile uint16_t   HISPCP;       //!< High-Speed Peripheral Clock Pre-Scaler Register
    volatile uint16_t   LOSPCP;       //!< Low-Speed Peripheral Clock Pre-Scaler Register
    volatile uint16_t   PCLKCR0;      //!< Peripheral Clock Control Register 0
    volatile uint16_t   PCLKCR1;      //!< Peripheral Clock Control Register 1
    volatile uint16_t   LPMCR0;       //!< Low-Power Mode Control Register 0
} CLK_Obj;


//! \brief Defines the clock (CLK) handle
//!
typedef struct CLK_Obj *CLK_Handle;


// **************************************************************************
// the globals


// **************************************************************************
// the function prototypes


//! \brief     Disables the ADC clock
//! \param[in] clkHandle  The clock (CLK) object handle
void CLK_disableAdcClock(CLK_Handle clkHandle);


//! \brief     Disables the ECANA clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEcanaClock(CLK_Handle clkHandle);


//! \brief     Disables the ECANB clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEcanbClock(CLK_Handle clkHandle);


//! \brief     Disables the ECAP1 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEcap1Clock(CLK_Handle clkHandle);


//! \brief     Disables the ECAP2 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEcap2Clock(CLK_Handle clkHandle);


//! \brief     Disables the ECAP3 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEcap3Clock(CLK_Handle clkHandle);


//! \brief     Disables the ECAP4 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEcap4Clock(CLK_Handle clkHandle);


//! \brief     Disables the EQEP1 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEqep1Clock(CLK_Handle clkHandle);


//! \brief     Disables the EQEP2 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableEqep2Clock(CLK_Handle clkHandle);


//! \brief     Disables the I2C clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableI2cClock(CLK_Handle clkHandle);


//! \brief     Disables the pwm clock
//! \param[in] clkHandle   The clock (CLK) object handle
//! \param[in] pwmNumber   The PWM number
void CLK_disablePwmClock(CLK_Handle clkHandle,const PWM_Number_e pwmNumber);


//! \brief     Disables the SCI-A clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableSciaClock(CLK_Handle clkHandle);


//! \brief     Disables the SCI-B clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableScibClock(CLK_Handle clkHandle);


//! \brief     Disables the SPI-A clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableSpiaClock(CLK_Handle clkHandle);


//! \brief     Disables the SPI-B clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableSpibClock(CLK_Handle clkHandle);


//! \brief     Disables the SPI-C clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableSpicClock(CLK_Handle clkHandle);


//! \brief     Disables the SPI-D clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableSpidClock(CLK_Handle clkHandle);


//! \brief     Disables the ePWM module time base clock sync signal
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_disableTbClockSync(CLK_Handle clkHandle);


//! \brief     Enables the ADC clock
//! \param[in] clkHandle  The clock (CLK) object handle
void CLK_enableAdcClock(CLK_Handle clkHandle);


//! \brief     Enables the ECANA clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEcanaClock(CLK_Handle clkHandle);


//! \brief     Enables the ECAP1 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEcap1Clock(CLK_Handle clkHandle);


//! \brief     Enables the ECAP2 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEcap2Clock(CLK_Handle clkHandle);


//! \brief     Enables the ECAP3 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEcap3Clock(CLK_Handle clkHandle);


//! \brief     Enables the ECAP4 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEcap4Clock(CLK_Handle clkHandle);


//! \brief     Enables the EQEP1 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEqep1Clock(CLK_Handle clkHandle);


//! \brief     Enables the EQEP2 clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableEqep2Clock(CLK_Handle clkHandle);


//! \brief     Enables the I2C clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableI2cClock(CLK_Handle clkHandle);


//! \brief     Enables the pwm clock
//! \param[in] clkHandle   The clock (CLK) object handle
//! \param[in] pwmNumber   The PWM number
void CLK_enablePwmClock(CLK_Handle clkHandle,const PWM_Number_e pwmNumber);


//! \brief     Enables the SCI-A clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableSciaClock(CLK_Handle clkHandle);


//! \brief     Enables the SCI-B clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableScibClock(CLK_Handle clkHandle);


//! \brief     Enables the SPI-A clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableSpiaClock(CLK_Handle clkHandle);


//! \brief     Enables the SPI-B clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableSpibClock(CLK_Handle clkHandle);


//! \brief     Enables the SPI-C clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableSpicClock(CLK_Handle clkHandle);


//! \brief     Enables the SPI-D clock
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableSpidClock(CLK_Handle clkHandle);


//! \brief     Enables the ePWM module time base clock sync signal
//! \param[in] clkHandle   The clock (CLK) object handle
void CLK_enableTbClockSync(CLK_Handle clkHandle);


//! \brief     Initializes the clock (CLK) object handle
//! \param[in] pMemory     A pointer to the base address of the CLK registers
//! \param[in] numBytes    The number of bytes allocated for the CLK object, bytes
//! \return    The clock (CLK) object handle
CLK_Handle CLK_init(void *pMemory,const size_t numBytes);


//! \brief     Sets the external clock out prescaler
//! \param[in] clkHandle  The clock (CLK) object handle
//! \param[in] preScaler  The prescaler value
void CLK_setClkOutPreScaler(CLK_Handle clkHandle,
                            const CLK_ClkOutPreScaler_e preScaler);


//! \brief     Sets the high speed peripheral clock prescaler
//! \param[in] clkHandle  The clock (CLK) object handle
//! \param[in] preScaler  The prescaler value
void CLK_setHiSpdPreScaler(CLK_Handle clkHandle,
                            const CLK_HiSpdPreScaler_e preScaler);


//! \brief     Sets the low speed peripheral clock prescaler
//! \param[in] clkHandle  The clock (CLK) object handle
//! \param[in] preScaler  The prescaler value
void CLK_setLowSpdPreScaler(CLK_Handle clkHandle,
                            const CLK_LowSpdPreScaler_e preScaler);


#ifdef __cplusplus
}
#endif // extern "C"

//@}  // ingroup


#endif  // end of _CLK_H_ definition

