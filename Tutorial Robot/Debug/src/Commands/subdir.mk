################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/ExampleCommand.cpp \
../src/Commands/armseqeunce.cpp \
../src/Commands/getyposition.cpp \
../src/Commands/rotatearm90degree.cpp \
../src/Commands/turnleft.cpp 

ORG_ECLIPSE_CDT_MSVC_CL_OUTPUTTYPE_OUTPUTS += \
./src/Commands/ExampleCommand.obj \
./src/Commands/armseqeunce.obj \
./src/Commands/getyposition.obj \
./src/Commands/rotatearm90degree.obj \
./src/Commands/turnleft.obj 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.obj: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler (cl)'
	cl /c /EHs /MD /Zi /I"C:\Users\Luke Garceau/wpilib/cpp/current/include" /nologo /Fo"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


