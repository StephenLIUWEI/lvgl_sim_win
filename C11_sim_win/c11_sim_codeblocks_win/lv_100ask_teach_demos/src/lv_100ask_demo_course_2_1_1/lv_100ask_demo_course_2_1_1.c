/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_2_1_1.c
 * @author  ���ʿƼ�
 * @version V1.0
 * @date    2021-12-02
 * @brief	2_1_1�εĿ��ô���
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2021-12-02     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2021 ���ڰ������Ƽ����޹�˾<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_teach_demos.h"

#if LV_USE_100ASK_DEMO_COURSE_2_1_1

#include "lv_100ask_demo_course_2_1_1.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/


void lv_100ask_demo_course_2_1_1(void)
{
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj, 700, 450);
    //lv_obj_set_size(obj, LV_PCT(40), LV_PCT(20));
    lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);

    //lv_obj_t * label = lv_label_create(obj);
    //lv_label_set_text_fmt(label, "Hello, LVGL!\nLVGL V%d.%d.%d\nhttps://www.100ask.net", lv_version_major(), lv_version_minor(), lv_version_patch());
    //lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);










}


#endif /* LV_USE_100ASK_DEMO_COURSE_2_1_1 */
