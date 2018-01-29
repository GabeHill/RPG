################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../storage/files/loot/Armor.cpp \
../storage/files/loot/Loot.cpp \
../storage/files/loot/Weapon.cpp 

OBJS += \
./storage/files/loot/Armor.o \
./storage/files/loot/Loot.o \
./storage/files/loot/Weapon.o 

CPP_DEPS += \
./storage/files/loot/Armor.d \
./storage/files/loot/Loot.d \
./storage/files/loot/Weapon.d 


# Each subdirectory must supply rules for building sources it contributes
storage/files/loot/%.o: ../storage/files/loot/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


