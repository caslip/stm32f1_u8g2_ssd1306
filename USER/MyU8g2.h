#ifndef __MY_U8G2_H
#define __MY_U8G2_H

#include "u8g2.h"



//初始化u8g2
void u8g2_init(u8g2_t *u8g2);
void u8g2_FirstPage(u8g2_t *u8g2);

/* 绘制一个文本框
 * @param x x轴起始位置
 * @param y y轴起始位置
 * @param flags 选项，可以设置文本框的样式
 * 	- U8G2_BTN_BW0：文本周围没有边框
 * 	- U8G2_BTN_BW1：文本周围有1px边框
 *	- U8G2_BTN_BW2：文本周围有2px边框
 *	- U8G2_BTN_BW3：文本周围有3px边框
 *	- U8G2_BTN_SHADOW0
 *	- U8G2_BTN_SHADOW1
 *	- U8G2_BTN_SHADOW2
 *	- U8G2_BTN_INV：文字反转显示
 *	- U8G2_BTN_HCENTER
 *	- U8G2_BTN_XFRAME：在文字外框周围再加一层外框
 * @param width 文本的最小宽度。一般设置为0，表示文本宽度适用于框架
 * @param padding_h 文字与框之间前后的间隔
 * @param padding_v 文字与框之间上下的间隔
 * @param text：要显示的文字
 
 需要先设置字体，u8g2_font_amstrad_cpc_extended_8r，使用u8g2_SetFont函数
 eg: u8g2_SetFont(&u8g2, u8g2_font_amstrad_cpc_extended_8r);
 */
 
void u8g2_DrawButtonUTF8(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t flags, u8g2_uint_t width, u8g2_uint_t padding_h, u8g2_uint_t padding_v, const char *text);


/* 画一个条横线，开始坐标(x,y)，宽度w
 * @param x x轴起始位置
 * @param y y轴起始位置
 * @param w 线的宽度
 */

void u8g2_DrawHLine(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t len);

/* u8g2_DrawVLine，画一条垂直线，高度是h
 * @param x x轴起始位置
 * @param y y轴起始位置
 * @param h 线的高度
 */
 
void u8g2_DrawVLine(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t len);

/* 绘制一个方框，开始坐标(x,y)，宽度w，调试h
 * @param x x轴起始位置
 * @param y y轴起始位置
 * @param w 宽度
 * @param h 高度
 */
void u8g2_DrawBox(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h);


/* 绘制一个圆
 * @param x0 圆心的x坐标
 * @param y0 圆心的y坐标
 * @param rad 圆的半径，圆的直径是2*rad+1
 * @param h 样式选项
 * 	- U8G2_DRAW_UPPER_RIGHT：只画圆的右上部分
 *  - U8G2_DRAW_UPPER_LEFT：只画圆的左上部分
 * 	- U8G2_DRAW_LOWER_LEFT：只画圆的左下部分
 *  - U8G2_DRAW_LOWER_RIGHT：只画圆的右下部分
 * 	- U8G2_DRAW_ALL：画一个完整的圆
 */
void u8g2_DrawCircle(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rad, uint8_t opt);

/* 绘制一个实心圆，参数和u8g2_DrawCircle一样
 */
void u8g2_DrawDisc(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rad, uint8_t opt);

/* 绘制一个椭圆
 * @param x0 圆心的x坐标
 * @param y0 圆心的y坐标
 * @param rx 椭圆x轴方向的大小
 * @param ry 椭圆y轴方向的大小
 * @param h 样式选项
 * 	- U8G2_DRAW_UPPER_RIGHT：只画圆的右上部分
 *  - U8G2_DRAW_UPPER_LEFT：只画圆的左上部分
 * 	- U8G2_DRAW_LOWER_LEFT：只画圆的左下部分
 *  - U8G2_DRAW_LOWER_RIGHT：只画圆的右下部分
 * 	- U8G2_DRAW_ALL：画一个完整的圆
 */
void u8g2_DrawEllipse(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rx, u8g2_uint_t ry, uint8_t opt);

/* 绘制一个填充的椭圆，参数和u8g2_DrawEllipse一样
 */
void u8g2_DrawFilledEllipse(u8g2_t *u8g2, u8g2_uint_t x0, u8g2_uint_t y0, u8g2_uint_t rx, u8g2_uint_t ry, uint8_t opt);

/* 绘制一个矩形框
 * @param x 开始坐标x
 * @param y 开始坐标y
 * @param w 矩形的宽度
 * @param h 矩形的高度
 */
void u8g2_DrawFrame(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h);

/* 绘制单个字符
 * @param x 字符坐标x
 * @param y 字符坐标y
 * @param encoding 字符编号，这个与制作的字符有关
 
 该函数也需要提前设置字体，也就是字符集
 eg:u8g2_SetFont(&u8g2, u8g2_font_open_iconic_embedded_6x_t);
 */
 
 
u8g2_uint_t u8g2_DrawGlyph(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, uint16_t encoding);
/* 显示的字符放大一倍
 */
u8g2_uint_t u8g2_DrawGlyphX2(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, uint16_t encoding);

/* 写一个字符串，不支持中文
 * @param x 起始坐标x
 * @param y 起始坐标y
 * @param s 要显示的字符串
 */
u8g2_uint_t u8g2_DrawStr(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

/* 放大一倍显示，参数和u8g2_DrawStr一样
 */
u8g2_uint_t u8g2_DrawStrX2(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);


/* 写一个字符串，支持中文
 * @param x 起始坐标x
 * @param y 起始坐标y
 * @param s 要显示的字符串
 */
u8g2_uint_t u8g2_DrawUTF8(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

/* 放大一倍显示，参数和u8g2_DrawUTF8一样
 */
u8g2_uint_t u8g2_DrawUTF8X2(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, const char *s);

/* 绘制一个三角形，带填充
 * @param x0,y0 三角形一个顶点的坐
 * @param x1,y1 三角形第二个顶点的坐
 * @param x2,y2 三角形第三个顶点的坐
 */
void u8g2_DrawTriangle(u8g2_t *u8g2, int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2);


/* 加载一个位图
 * @param x0,y0 起始坐标
 * @param x1,y1 位图的宽度
 * @param x2,y2 位图的高度
 */
void u8g2_DrawXBM(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h, const uint8_t *bitmap);

/* 实际使用和u8g2_DrawXBM一样，官网说是bitmap参数不一样，但是没有发现差别
 */
void u8g2_DrawXBMP(u8g2_t *u8g2, u8g2_uint_t x, u8g2_uint_t y, u8g2_uint_t w, u8g2_uint_t h, const uint8_t *bitmap);

/* 屏幕截图
 * @param out 一个带char *类型指针的回调函数
 * 将u8g2缓冲区的内容写入指定的对象（Arduino/C++）或回调函数（纯C接口）。
   此功能可用于实现屏幕截图/屏幕捕获功能。输出格式为XBM或PBM。
 */
void u8g2_WriteBufferPBM(u8g2_t *u8g2, void (*out)(const char *s));
void u8g2_WriteBufferXBM(u8g2_t *u8g2, void (*out)(const char *s));
void u8g2_WriteBufferPBM2(u8g2_t *u8g2, void (*out)(const char *s));
void u8g2_WriteBufferXBM2(u8g2_t *u8g2, void (*out)(const char *s));

/* 绘制一个下拉列表
 * @param title 下拉列表的标题
 * @param start_pos 开始选中的位置
 * @param sl 下拉列表的内容，每个选项用\n分隔
 */
uint8_t u8g2_UserInterfaceSelectionList(u8g2_t *u8g2, const char *title, uint8_t start_pos, const char *sl);

/* 绘制一个带按钮的信息提示框
 * @param title 第一行提示信息
 * @param title2 第二行提示信息
 * @param title3 第三行提示信息
 * @param buttons 按键列表，可以定义多个按钮中间以\n分隔
 */
uint8_t u8g2_UserInterfaceMessage(u8g2_t *u8g2, const char *title1, const char *title2, const char *title3, const char *buttons);

/* 绘制一个带按钮的信息提示框
 * @param title 提示信息
 * @param pre 值之前的文本
 * @param value 显示的值
 * @param lo 最小值，可由用户选择。
 * @param hi 最大值，可由用户选择。
 * @param digits 位数（1到3）。
 * @param post 值后面的文本。
 */
uint8_t u8g2_UserInterfaceInputValue(u8g2_t *u8g2, const char *title, const char *pre, uint8_t *value, uint8_t lo, uint8_t hi, uint8_t digits, const char *post);

/* 	计算字符串所占的像素
 *	@param s 被计算的字符串
 *	@return 返回字符串所占的像素宽度
 */
u8g2_uint_t u8g2_GetUTF8Width(u8g2_t *u8g2, const char *s);
/* 和上面函数一样 */
u8g2_uint_t u8g2_GetStrWidth(u8g2_t *u8g2, const char *s);

/* 	设置背景位图是否透明
 *	@param is_transparent，0不透明，1透明
 *	
 */
void u8g2_SetBitmapMode(u8g2_t *u8g2, uint8_t is_transparent);

/* 设置显示旋转，在u8g2_init里面已经有设置
 */
void u8g2_SetDisplayRotation(u8g2_t *u8g2, const u8g2_cb_t *u8g2_cb);

#endif
