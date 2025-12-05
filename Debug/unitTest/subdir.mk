################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../unitTest/testBeamlet.cpp \
../unitTest/testCluster.cpp \
../unitTest/testPoint.cpp \
../unitTest/testUtilities.cpp 

OBJS += \
./unitTest/testBeamlet.o \
./unitTest/testCluster.o \
./unitTest/testPoint.o \
./unitTest/testUtilities.o 

CPP_DEPS += \
./unitTest/testBeamlet.d \
./unitTest/testCluster.d \
./unitTest/testPoint.d \
./unitTest/testUtilities.d 


# Each subdirectory must supply rules for building sources it contributes
unitTest/%.o: ../unitTest/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/oarslan3/PathPlanningWithBeamlets" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


