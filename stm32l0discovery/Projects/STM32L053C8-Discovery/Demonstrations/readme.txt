/**
  @page Demo   Demo STM32L053C8-Discovery
 
  @verbatim
  ******************** (C) COPYRIGHT 2014 STMicroelectronics *******************
  * @file    readme.txt 
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    18-June-2014
  * @brief   Description of STM32L053C8-Discovery Demo
  ******************************************************************************
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  @endverbatim

@par Demo Description

At the beginning of the main program the HAL_Init() function is called to reset 
all the peripherals, initialize the Flash interface and the systick.
Then the SystemClock_Config() function is used to configure the system clock
(SYSCLK) to run at 16 MHz using the HSI as clock source.

Below you find the sequence to discover the demonstration :

  - Connect the STM32L0538-Discovery RevB board to a PC with a 'USB type A to Mini-B' cable
    through USB connector CN1 to power the board. Then red led LD1 (COM) and
    LD2 (PWR) light up.

  - LED3 and LED4 blink continuously.

  - The message "STM32L053 DISCOVERY DEMONSTRATION V1.0.0" is displayed on the 
    e-paper display (EPD) for 2 S. Then the main menu is displayed. The Demo 
    contains two applications: the USB Mouse Demo and the IDD Demo.
      - The USB Demo allows to control the movement of the Mouse cursor according to
        the Linear sensor position.
      - The IDD Measurement Demo allows to measure current values for the different 
        power modes. 


  - To selct one of the two applications use the linear sensor. The upper side is for
    the USB mouse Demo and the lower one is for Idd measurement Demo. 
    
    1. USB mouse Demo: Connect a second USB cable type A to mini-B between CN3 and
       the PC, then see the mouse cursor movement according linear sensor position.
       Each part of the linear sensor corresponds to a secific mouse movement 
       direction(Right, Left, Up, Down).
       Press User Button B1 to go back to the main menu.
       
       @note HSI48 is used as USB clock source. The 48 MHz clock for the USB is 
             derived from the RC48 Clock (HSI48): The HSI48 clock is generated 
             from an internal 48 MHz RC oscillator, coupled with the clock recovery
             system (CRS). The CRS allows automatic trimming of the internal HSI48,
             synchronized with USB SOF signal at 1KHz rate, to guarantee its optimal
             accuracy over the whole device operational range.   
      
    2. Idd measurement Demo: This part of the Demo allows to measure the Idd value
       for the different power modes which are Run mode, Sleep mode, LP Sleep mode
       and Stop mode.
         - For the low power modes(Sleep, LP Sleep and Stop) the display of the Idd 
           consumption is preceded by entering the MCU on the related LP mode and 
           turning off the LEDs, indicating that the MCU is in LP mode. 
           The wake up is done automatically after the end of the measurement through
           the EXTI line13. This Line is connected to the Multi Function Expander
           (MFX) circuit. 
         - Press User Button B1 to go back to the main menu.  


@note Care must be taken when using HAL_Delay(), this function provides accurate
      delay (in milliseconds) based on variable incremented in SysTick ISR. 
      This implies that if HAL_Delay() is called from a peripheral ISR process, 
      then the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
@note The application need to ensure that the SysTick time base is always set to
      1 millisecond to have correct HAL operation.


@par Hardware and Software environment

  - This example runs on STM32L051xx, STM32L052xx, STM32L053xx STM32L062xx and 
    STM32L063xx device lines RevZ.
    
  - This example has been tested with STM32L053C8-Discovery RevB board and can be
    easily tailored to any other supported device and development board.
    
  - Ensure that CN4 and JP4 jumpers are set to on (Discovery mode)
    and JP4 is in the ON position.   


@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example

 * <h3><center>&copy; COPYRIGHT STMicroelectronics</center></h3>
 */
                                                          