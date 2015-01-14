################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/Subsystems/subdir.mk
-include src/Commands/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
ORG_ECLIPSE_CDT_MSVC_LINK_OUTPUTTYPE_DLL_OUTPUTS += \
default.dll \


# All Target
all: FRCUserProgram

# Tool invocations
FRCUserProgram: 
	@echo 'Building target: $@'
	@echo 'Invoking: Linker (link)'
	link / /debug /nologo /OUT:"FRCUserProgram"
	@echo 'Finished building target: $@'
	@echo ' '

default.dll: FRCUserProgram 

# Other Targets
clean:
	-$(RM) $(ORG_ECLIPSE_CDT_MSVC_LINK_OUTPUTTYPE_OUTPUTS)$(ORG_ECLIPSE_CDT_MSVC_CL_OUTPUTTYPE_OUTPUTS)$(ORG_ECLIPSE_CDT_MSVC_RC_OUTPUTTYPE_OUTPUTS)$(ORG_ECLIPSE_CDT_MSVC_LINK_OUTPUTTYPE_DLL_OUTPUTS) FRCUserProgram
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
