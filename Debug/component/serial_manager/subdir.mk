################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/serial_manager/serial_manager.c \
../component/serial_manager/serial_port_uart.c 

OBJS += \
./component/serial_manager/serial_manager.o \
./component/serial_manager/serial_port_uart.o 

C_DEPS += \
./component/serial_manager/serial_manager.d \
./component/serial_manager/serial_port_uart.d 


# Each subdirectory must supply rules for building sources it contributes
component/serial_manager/%.o: ../component/serial_manager/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__NEWLIB__ -DCPU_MKL27Z64VLH4 -DCPU_MKL27Z64VLH4_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\board" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\source" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\drivers" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\device" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\CMSIS" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\uart" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\utilities" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\serial_manager" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\lists" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m0plus -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


