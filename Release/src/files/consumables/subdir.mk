################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/files/consumables/Berry.cpp \
../src/files/consumables/HealthPot.cpp \
../src/files/consumables/ManaPot.cpp 

OBJS += \
./src/files/consumables/Berry.o \
./src/files/consumables/HealthPot.o \
./src/files/consumables/ManaPot.o 

CPP_DEPS += \
./src/files/consumables/Berry.d \
./src/files/consumables/HealthPot.d \
./src/files/consumables/ManaPot.d 


# Each subdirectory must supply rules for building sources it contributes
src/files/consumables/%.o: ../src/files/consumables/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


