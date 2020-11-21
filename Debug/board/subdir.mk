################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/board.c \
../board/clock_config.c \
../board/peripherals.c \
../board/pin_mux.c 

OBJS += \
./board/board.o \
./board/clock_config.o \
./board/peripherals.o \
./board/pin_mux.o 

C_DEPS += \
./board/board.d \
./board/clock_config.d \
./board/peripherals.d \
./board/pin_mux.d 


# Each subdirectory must supply rules for building sources it contributes
board/%.o: ../board/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__NEWLIB__ -DCPU_MKL27Z64VLH4 -DCPU_MKL27Z64VLH4_cm0plus -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DSERIAL_PORT_TYPE_UART=1 -DSDK_DEBUGCONSOLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\board" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\source" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\drivers" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\device" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\CMSIS" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\uart" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\utilities" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\serial_manager" -I"C:\Users\Azalius\Documents\MCUXpressoIDE_11.2.0_4120\workspace\proj_ses_cpp\component\lists" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="../$(@D)/"=. -mcpu=cortex-m0plus -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


