################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/files/loot/Armor.cpp \
../src/files/loot/Loot.cpp \
../src/files/loot/Weapon.cpp 

OBJS += \
./src/files/loot/Armor.o \
./src/files/loot/Loot.o \
./src/files/loot/Weapon.o 

CPP_DEPS += \
./src/files/loot/Armor.d \
./src/files/loot/Loot.d \
./src/files/loot/Weapon.d 


# Each subdirectory must supply rules for building sources it contributes
src/files/loot/%.o: ../src/files/loot/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


