/**
  @page IWDG_WinwdowMode	IWDG Reset with window mode
  
  @verbatim
  ******************** (C) COPYRIGHT 2014 STMicroelectronics *******************
  * @file    Examples/IWDG/IWDG_WinwdowMode/readme.txt 
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-June-2014
  * @brief   Description of the Independent Watchdog Example.
  ******************************************************************************
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

  *
  ******************************************************************************
  @endverbatim

@par Example Description 

This example shows how to update at regular period the IWDG reload counter and 
how to simulate a software fault generating an MCU IWDG reset on expiry of a 
programmed time period, using  HAL IWDG API.

At the beginning of the main program the HAL_Init() function is called to reset 
all the peripherals, initialize the Flash interface and the systick.
Then the SystemClock_Config() function is used to configure the system
clock (SYSCLK) to run at 2 MHz.

The IWDG timeout is set to 762 ms (the timeout may varies due to LSI frequency 
dispersion).

The Window option is enabled with a window register value set to 400 ms.
To prevent a reset, the downcounter must be reloaded when its value is:
	-lower than the window register value (400ms)
	-greater than 0x0
The IWDG counter is therefore refreshed each 450 ms in the main program infinite loop to 
prevent a IWDG reset.
LED3 is also toggled each 450 ms indicating that the program is running. 

An EXTI Line is connected to a GPIO pin, and configured to generate an interrupt
on the rising edge of the signal.

The EXTI Line is used to simulate a software failure: once the EXTI Line event 
occurs, by pressing the Key push-button, the corresponding interrupt is served.

In the ISR, a write to invalid address generates a Hardfault exception containing
an infinite loop and preventing to return to main program (the IWDG counter is 
not refreshed).
As a result, when the IWDG counter falls to 0, the IWDG reset occurs.
If the IWDG reset is generated, after the system resumes from reset, LED3 turns on for 4 seconds.

If the EXTI Line event does not occur, the IWDG counter is indefinitely refreshed
in the main program infinite loop, and there is no IWDG reset.


@note Care must be taken when using HAL_Delay(), this function provides accurate
      delay (in milliseconds) based on variable incremented in SysTick ISR. This
      implies that if HAL_Delay() is called from a peripheral ISR process, then 
      the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
@note The application need to ensure that the SysTick time base is always set to 1 millisecond
      to have correct HAL operation.

@par Directory contents  
 
  - IWDG/IWDG_WinwdowMode/Inc/stm32l0xx_it.h          Interrupt handlers header file
  - IWDG/IWDG_WinwdowMode/Inc/main.h                  Header for main.c module
  - IWDG/IWDG_WinwdowMode/Src/stm32l0xx_it.c          Interrupt handlers
  - IWDG/IWDG_WinwdowMode/Src/main.c                  Main program
  - IWDG/IWDG_WinwdowMode/Src/stm32l0xx_hal_msp.c     HAL MSP module
  - IWDG/IWDG_WinwdowMode/Src/system_stm32l0xx.c      STM32L0xx system configuration file
     
@par Hardware and Software environment

  - This example runs on STM32L051xx, STM32L052xx, STM32L053xx STM32L062xx and 
    STM32L063xx device lines RevZ
    
  - This example has been tested with STM32L0538-DISCO RevB board and can be
    easily tailored to any other supported device and development board.   


@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example
 
   
 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
 