#ifndef __MY_U8G2_H
#define __MY_U8G2_H

#include "u8g2.h"



//��ʼ��u8g2
void u8g2_init(u8g2_t *u8g2);
void u8g2_FirstPage(u8g2_t *u8g2);

/* ����һ���ı���
 * @param x x����ʼλ��
 * @param y y����ʼλ��
 * @param flags ѡ����������ı������ʽ
 * 	- U8G2_BTN_BW0���ı���Χû�б߿�
 * 	- U8G2_BTN_BW1���ı���Χ��1px�߿�
 *	- U8G2_BTN_BW2���ı���Χ��2px�߿�
 *	- U8G2_BTN_BW3���ı���Χ��3px�߿�
 *	- U8G2_BTN_SHADOW0
 *	- U8G2_BTN_SHADOW1
 *	- U8G2_BTN_SHADOW2
 *	- U8G2_BTN_INV�����ַ�ת��ʾ
 *	- U8G2_BTN_HCENTER
 *	- U8G2_BTN_XFRAME�������������Χ�ټ�һ�����
 * @param width �ı�����С��ȡ�һ������Ϊ0����ʾ�ı���������ڿ��
 * @param padding_h �������֮��ǰ��ļ��
 * @param padding_v �������֮�����µļ��
 * @param text��Ҫ��ʾ������
 
 ��Ҫ���������壬u8g2_font_amstrad_cpc_extended_8r��ʹ��u8g2_SetFont����
 eg: u8g2_SetFont(&u8g2, u8g2_font_amstrad_cpc_extended_8r);
 */
 
void u8g2_DrawButtonUTF8(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t flags, u8g2_uint_t width, u8g2_uint_t padding_h, u8g2_uint_t padding_v, const char *text);


/* ��һ�������ߣ���ʼ����(x,y)�����w
 * @param x x����ʼλ��
 * @param y y����ʼλ��
 * @param w �ߵĿ��
 */

void u8g2_DrawHLine(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t len);

/* u8g2_DrawVLine����һ����ֱ�ߣ��߶���h
 * @param x x����ʼλ��
 * @param y y����ʼλ��
 * @param h �ߵĸ߶�
 */
 
void u8g2_DrawVLine(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t len);

/* ����һ�����򣬿�ʼ����(x,y)�����w������h
 * @param x x����ʼλ��
 * @param y y����ʼλ��
 * @param w ���
 * @param h �߶�
 */
void u8g2_DrawBox(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h);


/* ����һ��Բ
 * @param x0 Բ�ĵ�x����
 * @param y0 Բ�ĵ�y����
 * @param rad Բ�İ뾶��Բ��ֱ����2*rad+1
 * @param h ��ʽѡ��
 * 	- U8G2_DRAW_UPPER_RIGHT��ֻ��Բ�����ϲ���
 *  - U8G2_DRAW_UPPER_LEFT��ֻ��Բ�����ϲ���
 * 	- U8G2_DRAW_LOWER_LEFT��ֻ��Բ�����²���
 *  - U8G2_DRAW_LOWER_RIGHT��ֻ��Բ�����²���
 * 	- U8G2_DRAW_ALL����һ��������Բ
 */
void u8g2_DrawCircle(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rad, uint8_t opt);

/* ����һ��ʵ��Բ��������u8g2_DrawCircleһ��
 */
void u8g2_DrawDisc(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rad, uint8_t opt);

/* ����һ����Բ
 * @param x0 Բ�ĵ�x����
 * @param y0 Բ�ĵ�y����
 * @param rx ��Բx�᷽��Ĵ�С
 * @param ry ��Բy�᷽��Ĵ�С
 * @param h ��ʽѡ��
 * 	- U8G2_DRAW_UPPER_RIGHT��ֻ��Բ�����ϲ���
 *  - U8G2_DRAW_UPPER_LEFT��ֻ��Բ�����ϲ���
 * 	- U8G2_DRAW_LOWER_LEFT��ֻ��Բ�����²���
 *  - U8G2_DRAW_LOWER_RIGHT��ֻ��Բ�����²���
 * 	- U8G2_DRAW_ALL����һ��������Բ
 */
void u8g2_DrawEllipse(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rx, u8g2_uint_t ry, uint8_t opt);

/* ����һ��������Բ��������u8g2_DrawEllipseһ��
 */
void u8g2_DrawFilledEllipse(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rx, u8g2_uint_t ry, uint8_t opt);

/* ����һ�����ο�
 * @param x ��ʼ����x
 * @param y ��ʼ����y
 * @param w ���εĿ��
 * @param h ���εĸ߶�
 */
void u8g2_DrawFrame(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h);

/* ���Ƶ����ַ�
 * @param x �ַ�����x
 * @param y �ַ�����y
 * @param encoding �ַ���ţ�������������ַ��й�
 
 �ú���Ҳ��Ҫ��ǰ�������壬Ҳ�����ַ���
 eg:u8g2_SetFont(&u8g2, u8g2_font_open_iconic_embedded_6x_t);
 */
 
 
u8g2_uint_t u8g2_DrawGlyph(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, uint16_t encoding);
/* ��ʾ���ַ��Ŵ�һ��
 */
u8g2_uint_t u8g2_DrawGlyphX2(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, uint16_t encoding);

/* дһ���ַ�������֧������
 * @param x ��ʼ����x
 * @param y ��ʼ����y
 * @param s Ҫ��ʾ���ַ���
 */
u8g2_uint_t u8g2_DrawStr(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

/* �Ŵ�һ����ʾ��������u8g2_DrawStrһ��
 */
u8g2_uint_t u8g2_DrawStrX2(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);


/* дһ���ַ�����֧������
 * @param x ��ʼ����x
 * @param y ��ʼ����y
 * @param s Ҫ��ʾ���ַ���
 */
u8g2_uint_t u8g2_DrawUTF8(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

/* �Ŵ�һ����ʾ��������u8g2_DrawUTF8һ��
 */
u8g2_uint_t u8g2_DrawUTF8X2(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

/* ����һ�������Σ������
 * @param x0,y0 ������һ���������
 * @param x1,y1 �����εڶ����������
 * @param x2,y2 �����ε������������
 */
void u8g2_DrawTriangle(u8g2_t *u8g2, int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2);


/* ����һ��λͼ
 * @param x0,y0 ��ʼ����
 * @param x1,y1 λͼ�Ŀ��
 * @param x2,y2 λͼ�ĸ߶�
 */
void u8g2_DrawXBM(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h, const uint8_t *bitmap);

/* ʵ��ʹ�ú�u8g2_DrawXBMһ��������˵��bitmap������һ��������û�з��ֲ��
 */
void u8g2_DrawXBMP(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h, const uint8_t *bitmap);

/* ��Ļ��ͼ
 * @param out һ����char *����ָ��Ļص�����
 * ��u8g2������������д��ָ���Ķ���Arduino/C++����ص���������C�ӿڣ���
   �˹��ܿ�����ʵ����Ļ��ͼ/��Ļ�����ܡ������ʽΪXBM��PBM��
 */
void u8g2_WriteBufferPBM(u8g2_t *u8g2, void (*out)(const char *s));
void u8g2_WriteBufferXBM(u8g2_t *u8g2, void (*out)(const char *s));
void u8g2_WriteBufferPBM2(u8g2_t *u8g2, void (*out)(const char *s));
void u8g2_WriteBufferXBM2(u8g2_t *u8g2, void (*out)(const char *s));

/* ����һ�������б�
 * @param title �����б�ı���
 * @param start_pos ��ʼѡ�е�λ��
 * @param sl �����б�����ݣ�ÿ��ѡ����\n�ָ�
 */
uint8_t u8g2_UserInterfaceSelectionList(u8g2_t *u8g2, const char *title, uint8_t start_pos, const char *sl);

/* ����һ������ť����Ϣ��ʾ��
 * @param title ��һ����ʾ��Ϣ
 * @param title2 �ڶ�����ʾ��Ϣ
 * @param title3 ��������ʾ��Ϣ
 * @param buttons �����б����Զ�������ť�м���\n�ָ�
 */
uint8_t u8g2_UserInterfaceMessage(u8g2_t *u8g2, const char *title1, const char *title2, const char *title3, const char *buttons);

/* ����һ������ť����Ϣ��ʾ��
 * @param title ��ʾ��Ϣ
 * @param pre ֵ֮ǰ���ı�
 * @param value ��ʾ��ֵ
 * @param lo ��Сֵ�������û�ѡ��
 * @param hi ���ֵ�������û�ѡ��
 * @param digits λ����1��3����
 * @param post ֵ������ı���
 */
uint8_t u8g2_UserInterfaceInputValue(u8g2_t *u8g2, const char *title, const char *pre, uint8_t *value, uint8_t lo, uint8_t hi, uint8_t digits, const char *post);

/* 	�����ַ�����ռ������
 *	@param s ��������ַ���
 *	@return �����ַ�����ռ�����ؿ��
 */
u8g2_uint_t u8g2_GetUTF8Width(u8g2_t *u8g2, const char *s);
/* �����溯��һ�� */
u8g2_uint_t u8g2_GetStrWidth(u8g2_t *u8g2, const char *s);

/* 	���ñ���λͼ�Ƿ�͸��
 *	@param is_transparent��0��͸����1͸��
 *	
 */
void u8g2_SetBitmapMode(u8g2_t *u8g2, uint8_t is_transparent);

/* ������ʾ��ת����u8g2_init�����Ѿ�������
 */
void u8g2_SetDisplayRotation(u8g2_t *u8g2, const u8g2_cb_t *u8g2_cb);

#endif
