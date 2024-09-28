#include "../inc/demo_page1.h"

#include "../../lvgl/lvgl.h"




void demo_page1(void)
{
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    //lv_obj_set_size(obj, LV_PCT(20), LV_PCT(10));
    lv_obj_set_size(obj, LV_PCT(40), LV_PCT(20));
    lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t * label = lv_label_create(obj);
    lv_label_set_text_fmt(label, "H4444444ello, LVGL!\nLVGL V%d.%d.%d\nhttps://www.100ask.net", lv_version_major(), lv_version_minor(), lv_version_patch());
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

}



