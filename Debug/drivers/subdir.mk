################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_gpio.c \
../drivers/fsl_i2c.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_smc.c \
../drivers/fsl_tpm.c \
../drivers/fsl_uart.c 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_gpio.o \
./drivers/fsl_i2c.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_smc.o \
./drivers/fsl_tpm.o \
./drivers/fsl_uart.o 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_gpio.d \
./drivers/fsl_i2c.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_smc.d \
./drivers/fsl_tpm.d \
./drivers/fsl_uart.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__NEWLIB__ -DCPU_MKL27Z64VLH4 -DCPU_MKL27Z64VLH4_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\CMSIS" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\utilities" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\lists" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\pwm" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\drivers" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\timer" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\serial_manager" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\device" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\uart" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\board" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\source" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\drivers" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\device" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\CMSIS" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\uart" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\utilities" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\serial_manager" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\lists" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m0plus -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


