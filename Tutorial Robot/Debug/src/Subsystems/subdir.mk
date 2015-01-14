################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Subsystems/ExampleSubsystem.cpp \
../src/Subsystems/drivetrain.cpp \
../src/Subsystems/rotatearm90.cpp 

ORG_ECLIPSE_CDT_MSVC_CL_OUTPUTTYPE_OUTPUTS += \
./src/Subsystems/ExampleSubsystem.obj \
./src/Subsystems/drivetrain.obj \
./src/Subsystems/rotatearm90.obj 


# Each subdirectory must supply rules for building sources it contributes
src/Subsystems/%.obj: ../src/Subsystems/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler (cl)'
	cl /c /EHs /MD /Zi /I"C:\Users\Luke Garceau/wpilib/cpp/current/include" /nologo /Fo"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


