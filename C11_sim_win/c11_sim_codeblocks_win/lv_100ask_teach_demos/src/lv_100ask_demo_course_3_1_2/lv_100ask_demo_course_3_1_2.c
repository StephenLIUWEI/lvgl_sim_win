/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_3_1_2.c
 * @author  百问科技
 * @version V1.0
 * @date    2022-01-14
 * @brief	3_1_2 课的课堂代码
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2022-01-14     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2021 深圳百问网科技有限公司<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_teach_demos.h"

#if LV_USE_100ASK_DEMO_COURSE_3_1_2

#include "lv_100ask_demo_course_3_1_2.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/

void lv_100ask_demo_course_3_1_2(void)
{
    /* 创建一个基础对象 label */
    lv_obj_t * label = lv_label_create(lv_scr_act());                           // 创建一个label部件(对象),他的父对象是活动屏幕对象

    LV_FONT_DECLARE(LV_FONT_NORMAL_24);                         // 声明外部字库


    //lv_obj_set_style_text_font(label, &lv_font_simsun_16_cjk, 0);             // 使用内置的 cjk 字库
    lv_obj_set_style_text_font(label, &LV_FONT_NORMAL_24, 0);   // 使用自定义的字库

    lv_label_set_text(label, "可孚医疗股份有限公司abcd123.,<>';'[]ABCD");             // 显示文字（注意当前文件文本的编码格式，要使用 utf-8 编码）

}


#endif /* LV_USE_100ASK_DEMO_COURSE_3_1_2 */
