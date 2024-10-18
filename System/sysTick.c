#include "SysTick.h"

static u8 fac_us = 0;			//us��ʱ������	
static u16 fac_ms = 0;		//ms��ʱ������

//��ʼ���ӳٺ���
//SYSTICK��ʱ�ӹ̶�ΪAHBʱ�ӵ�1/8
//SYSCLK:ϵͳʱ��Ƶ��
void SysTick_Init(u8 SYSCLK)
{
	//	1.set clock source (crtl) of systick timer
	SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
	fac_us = SYSCLK/8;
	fac_ms = (u16)fac_us*1000;
}

/*******************************************************************************
* �� �� ��         : delay_us
* ��������		   : us��ʱ��
* ��    ��         : nus��Ҫ��ʱ��us��
					ע��:nus��ֵ,��Ҫ����798915us(���ֵ��2^24/fac_us@fac_us=21)
* ��    ��         : ��
*******************************************************************************/		 
void delay_us(u32 nus)
{
	u32 temp;
	SysTick->LOAD = nus*fac_us;		//ʱ�����
	SysTick->VAL = 0x00;					//��ռ�����
	SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk;	//��ʼ����	

	do
	{
		temp = SysTick->CTRL;
	}while((temp&0x01) && !(temp&(1<<16)));		//�ȴ�ʱ�䵽��  
	SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;//�رռ�����
	SysTick->VAL = 0x00;											//��ռ�����	
}

/*******************************************************************************
* �� �� ��         : delay_ms
* ��������		   : ms��ʱ��
* ��    ��         : nms��Ҫ��ʱ��ms��
					ע��:nms��ֵ,SysTick->LOADΪ24λ�Ĵ�����
					��Ҫ���� 2^24/1000/72M/8 =  1864ms
					��72M������,nms<=1864ms 
* ��    ��         : ��
*******************************************************************************/
void delay_ms(u16 nms)
{
	u32 temp;
	SysTick->LOAD = nms*fac_ms;			//ʱ�����(SysTick->LOADΪ24bit)
	SysTick->VAL = 0x00;						//��ռ�����
	SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk;	//��ʼ����  

	do
	{
		temp = SysTick->CTRL;
	}while((temp&0x01) && !(temp&(1<<16)));		//�ȴ�ʱ�䵽��  
	SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;//�رռ�����
	SysTick->VAL = 0x00;											//��ռ�����
}
