/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */  

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "Delay.h"
#include "stdio.h"
#include "SysTick.h"
#include "oled.h"
#include "u8g2.h"

//void draw(u8g2_t *u8g2)
//{
//    u8g2_SetFontMode(u8g2, 1); /*字体模式选择*/
//    u8g2_SetFontDirection(u8g2, 0); /*字体方向选择*/
//    u8g2_SetFont(u8g2, u8g2_font_inb24_mf); /*字库选择*/
//    u8g2_DrawStr(u8g2, 0, 20, "U");
//    
//    u8g2_SetFontDirection(u8g2, 1);
//    u8g2_SetFont(u8g2, u8g2_font_inb30_mn);
//    u8g2_DrawStr(u8g2, 21,8,"8");
//        
//    u8g2_SetFontDirection(u8g2, 0);
//    u8g2_SetFont(u8g2, u8g2_font_inb24_mf);
//    u8g2_DrawStr(u8g2, 51,30,"g");
//    u8g2_DrawStr(u8g2, 67,30,"\xb2");
//    
//    u8g2_DrawHLine(u8g2, 2, 35, 47);
//    u8g2_DrawHLine(u8g2, 3, 36, 47);
//    u8g2_DrawVLine(u8g2, 45, 32, 12);
//    u8g2_DrawVLine(u8g2, 46, 33, 12);
//  
//    u8g2_SetFont(u8g2, u8g2_font_amstrad_cpc_extended_8r);
//    u8g2_DrawStr(u8g2, 1,54,"github.x/x/u8g2");
//}

int main(void){
    
	
	u8g2_t u8g2;
	SysTick_Init(72);

  	u8g2_init(&u8g2);

	
	while (1)
	{		
		u8g2_FirstPage(&u8g2);
		do
		{
			u8g2_DrawStr(&u8g2, 21,8,"8");
		} while (u8g2_NextPage(&u8g2)); 
	}

}

