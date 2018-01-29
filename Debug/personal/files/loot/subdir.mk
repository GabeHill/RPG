################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../personal/files/loot/Armor.cpp \
../personal/files/loot/Loot.cpp \
../personal/files/loot/Weapon.cpp 

OBJS += \
./personal/files/loot/Armor.o \
./personal/files/loot/Loot.o \
./personal/files/loot/Weapon.o 

CPP_DEPS += \
./personal/files/loot/Armor.d \
./personal/files/loot/Loot.d \
./personal/files/loot/Weapon.d 


# Each subdirectory must supply rules for building sources it contributes
personal/files/loot/%.o: ../personal/files/loot/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


