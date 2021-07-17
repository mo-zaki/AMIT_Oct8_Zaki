################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../slave.c 

OBJS += \
./slave.o 

C_DEPS += \
./slave.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\ahmed\eclipse-workspace\S_LAVE\MCAL\DIO\INC" -I"C:\Users\ahmed\eclipse-workspace\S_LAVE\MCAL\SPI" -I"C:\Users\ahmed\eclipse-workspace\S_LAVE\LIB" -I"C:\Users\ahmed\eclipse-workspace\S_LAVE\MCAL\UART" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


