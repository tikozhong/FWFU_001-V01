################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../usr/board_gpio/board.c 

OBJS += \
./usr/board_gpio/board.o 

C_DEPS += \
./usr/board_gpio/board.d 


# Each subdirectory must supply rules for building sources it contributes
usr/board_gpio/%.o usr/board_gpio/%.su: ../usr/board_gpio/%.c usr/board_gpio/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -DUSE_HAL_DRIVER -DSTM32G030xx -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/xCRC16" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/xMisc" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/xRingBuffer" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/xRs485Dev" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/xTask" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/xUartDev" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/flash_g030c8" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/gpio_input" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/gpio_output" -I"F:/project/ESL/ESL22-FU001-V01_GPIO1608/FW/V01/usr/board_gpio" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-usr-2f-board_gpio

clean-usr-2f-board_gpio:
	-$(RM) ./usr/board_gpio/board.d ./usr/board_gpio/board.o ./usr/board_gpio/board.su

.PHONY: clean-usr-2f-board_gpio

