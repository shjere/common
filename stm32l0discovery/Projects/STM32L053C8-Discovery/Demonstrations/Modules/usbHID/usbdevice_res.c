/**
  ******************************************************************************
  * @file    usbdevice_res.c
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    18-June-2014   
  * @brief   Resources define for USB Device module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
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
  */

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup USB_DEVICE_MODULE
  * @{
  */

/** @defgroup USB_DEVICE_RES
  * @brief usb device ressources 
  * @{
  */

//#define x_width 28
//#define x_height 146
static uint8_t FullSlider_pic[] = {
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x00, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x01, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x03, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x07, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x0f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x1f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0x3f, 0x40, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0x7f, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x40, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x41, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x43, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x47, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x4f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0xc0, 0xff, 0x7f, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
0x00, 0x00, 0x00, 0xf0, 
};

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
