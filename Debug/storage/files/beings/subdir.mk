################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../storage/files/beings/Being.cpp \
../storage/files/beings/Hero.cpp \
../storage/files/beings/Monster.cpp 

OBJS += \
./storage/files/beings/Being.o \
./storage/files/beings/Hero.o \
./storage/files/beings/Monster.o 

CPP_DEPS += \
./storage/files/beings/Being.d \
./storage/files/beings/Hero.d \
./storage/files/beings/Monster.d 


# Each subdirectory must supply rules for building sources it contributes
storage/files/beings/%.o: ../storage/files/beings/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


