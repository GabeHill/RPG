################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/files/beings/Being.cpp \
../src/files/beings/Hero.cpp \
../src/files/beings/Monster.cpp 

OBJS += \
./src/files/beings/Being.o \
./src/files/beings/Hero.o \
./src/files/beings/Monster.o 

CPP_DEPS += \
./src/files/beings/Being.d \
./src/files/beings/Hero.d \
./src/files/beings/Monster.d 


# Each subdirectory must supply rules for building sources it contributes
src/files/beings/%.o: ../src/files/beings/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


