################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/files/logic/GenLeLoot.cpp 

OBJS += \
./src/files/logic/GenLeLoot.o 

CPP_DEPS += \
./src/files/logic/GenLeLoot.d 


# Each subdirectory must supply rules for building sources it contributes
src/files/logic/%.o: ../src/files/logic/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


