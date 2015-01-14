################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandBase.cpp \
../src/OI.cpp \
../src/Robot.cpp 

ORG_ECLIPSE_CDT_MSVC_CL_OUTPUTTYPE_OUTPUTS += \
./src/CommandBase.obj \
./src/OI.obj \
./src/Robot.obj 


# Each subdirectory must supply rules for building sources it contributes
src/%.obj: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler (cl)'
	cl /c /EHs /MD /Zi /I"C:\Users\Luke Garceau/wpilib/cpp/current/include" /nologo /Fo"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


