#include "../inc/demo_page1.h"

#include "../../lvgl/lvgl.h"









void demo_page1(void)
{

#if 0
    lv_obj_t * obj = lv_obj_create(lv_scr_act());
    //lv_obj_set_size(obj, 700, 450);
    //lv_obj_set_size(obj, LV_PCT(40), LV_PCT(20));
    //lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);

    LV_IMG_DECLARE(lvgl_logo);

    lv_obj_t *img= lv_img_create(obj); // 创建img对象
    lv_img_set_src(img, &lvgl_logo); // 设置图像数据源，文件类型可以是：1.jpg, 1.sjpg, 1.png, 1.bmp
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);  // 居中显示
#endif // 0

#if 1
        /* 创建一个基础对象 label */
    lv_obj_t * label = lv_label_create(lv_scr_act());                           // 创建一个label部件(对象),他的父对象是活动屏幕对象

    LV_FONT_DECLARE(LV_FONT_NORMAL_24);                         // 声明外部字库


    //lv_obj_set_style_text_font(label, &lv_font_simsun_16_cjk, 0);             // 使用内置的 cjk 字库
    lv_obj_set_style_text_font(label, &LV_FONT_NORMAL_24, 0);   // 使用自定义的字库

    lv_label_set_text(label, "可孚医疗股份有限公司abcd123.,<>';'[]ABCD");             // 显示文字（注意当前文件文本的编码格式，要使用 utf-8 编码）

#endif
}
