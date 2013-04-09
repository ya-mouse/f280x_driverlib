################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /opt/ti/ccsv5/tools/compiler/c2000_6.1.0

ORDERED_OBJS += \
"./wdog.obj" \
"./timer.obj" \
"./sci.obj" \
"./pwm.obj" \
"./pll.obj" \
"./pie.obj" \
"./gpio.obj" \
"./flash.obj" \
"./cpu.obj" \
"./clk.obj" \
"./adc.obj" \
"./DSP280x_usDelay.obj" \
"./DSP280x_SysCtrl.obj" \
"./DSP280x_Spi.obj" \
"./DSP280x_Sci.obj" \
"./DSP280x_SWPrioritizedPieVect.obj" \
"./DSP280x_SWPrioritizedDefaultIsr.obj" \
"./DSP280x_PieVect.obj" \
"./DSP280x_PieCtrl.obj" \
"./DSP280x_MemCopy.obj" \
"./DSP280x_I2C.obj" \
"./DSP280x_Gpio.obj" \
"./DSP280x_GlobalVariableDefs.obj" \
"./DSP280x_EQep.obj" \
"./DSP280x_EPwm.obj" \
"./DSP280x_ECap.obj" \
"./DSP280x_ECan.obj" \
"./DSP280x_DisInt.obj" \
"./DSP280x_DefaultIsr.obj" \
"./DSP280x_DBGIER.obj" \
"./DSP280x_CpuTimers.obj" \
"./DSP280x_CodeStartBranch.obj" \
"./DSP280x_CSMPasswords.obj" \
"./DSP280x_Adc.obj" \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: ../../lib/driverlib.lib

# Tool invocations
../../lib/driverlib.lib: $(OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Archiver'
	"/opt/ti/ccsv5/tools/compiler/c2000_6.1.0/bin/ar2000" r "../../lib/driverlib.lib" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C2000_LIBRARY_OUTPUTS__QUOTED) "../../lib/driverlib.lib"
	-$(RM) "DSP280x_Adc.pp" "DSP280x_CpuTimers.pp" "DSP280x_DefaultIsr.pp" "DSP280x_ECan.pp" "DSP280x_ECap.pp" "DSP280x_EPwm.pp" "DSP280x_EQep.pp" "DSP280x_GlobalVariableDefs.pp" "DSP280x_Gpio.pp" "DSP280x_I2C.pp" "DSP280x_MemCopy.pp" "DSP280x_PieCtrl.pp" "DSP280x_PieVect.pp" "DSP280x_SWPrioritizedDefaultIsr.pp" "DSP280x_SWPrioritizedPieVect.pp" "DSP280x_Sci.pp" "DSP280x_Spi.pp" "DSP280x_SysCtrl.pp" "adc.pp" "clk.pp" "cpu.pp" "flash.pp" "gpio.pp" "pie.pp" "pll.pp" "pwm.pp" "sci.pp" "timer.pp" "wdog.pp" 
	-$(RM) "DSP280x_Adc.obj" "DSP280x_CSMPasswords.obj" "DSP280x_CodeStartBranch.obj" "DSP280x_CpuTimers.obj" "DSP280x_DBGIER.obj" "DSP280x_DefaultIsr.obj" "DSP280x_DisInt.obj" "DSP280x_ECan.obj" "DSP280x_ECap.obj" "DSP280x_EPwm.obj" "DSP280x_EQep.obj" "DSP280x_GlobalVariableDefs.obj" "DSP280x_Gpio.obj" "DSP280x_I2C.obj" "DSP280x_MemCopy.obj" "DSP280x_PieCtrl.obj" "DSP280x_PieVect.obj" "DSP280x_SWPrioritizedDefaultIsr.obj" "DSP280x_SWPrioritizedPieVect.obj" "DSP280x_Sci.obj" "DSP280x_Spi.obj" "DSP280x_SysCtrl.obj" "DSP280x_usDelay.obj" "adc.obj" "clk.obj" "cpu.obj" "flash.obj" "gpio.obj" "pie.obj" "pll.obj" "pwm.obj" "sci.obj" "timer.obj" "wdog.obj" 
	-$(RM) "DSP280x_CSMPasswords.pp" "DSP280x_CodeStartBranch.pp" "DSP280x_DBGIER.pp" "DSP280x_DisInt.pp" "DSP280x_usDelay.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
