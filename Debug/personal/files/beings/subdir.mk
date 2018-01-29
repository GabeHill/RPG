################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../personal/files/beings/Being.cpp \
../personal/files/beings/Hero.cpp \
../personal/files/beings/Monster.cpp 

OBJS += \
./personal/files/beings/Being.o \
./personal/files/beings/Hero.o \
./personal/files/beings/Monster.o 

CPP_DEPS += \
./personal/files/beings/Being.d \
./personal/files/beings/Hero.d \
./personal/files/beings/Monster.d 


# Each subdirectory must supply rules for building sources it contributes
personal/files/beings/%.o: ../personal/files/beings/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


