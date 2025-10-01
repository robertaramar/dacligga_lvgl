/**
 * @file screen_layouts_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "screen_layouts_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_layouts_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);

    lv_obj_t * column_0 = column_create(lv_obj_0);
    lv_obj_set_width(column_0, lv_pct(100));
    lv_obj_set_height(column_0, lv_pct(100));

    lv_obj_t * row_0 = row_create(column_0);
    lv_obj_set_width(row_0, lv_pct(100));
    lv_obj_set_height(row_0, lv_pct(30));
    lv_obj_set_style_flex_main_place(row_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_0, 8, 0);
    lv_obj_set_style_bg_opa(row_0, (255 * 100 / 100), 0);
    lv_obj_set_style_bg_color(row_0, lv_color_hex(0xffffff), 0);

    lv_obj_t * icon_button_0 = icon_button_create(row_0, icon_midi, lv_color_hex(0xa86868));
    lv_obj_set_height(icon_button_0, lv_pct(100));


    lv_obj_t * icon_button_1 = icon_button_create(row_0, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_1, lv_pct(100));


    lv_obj_t * icon_button_2 = icon_button_create(row_0, icon_gear, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_2, lv_pct(100));



    lv_obj_t * row_1 = row_create(column_0);
    lv_obj_set_width(row_1, lv_pct(100));
    lv_obj_set_height(row_1, lv_pct(40));
    lv_obj_set_style_flex_main_place(row_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_all(row_1, 8, 0);
    lv_obj_set_style_bg_opa(row_1, (255 * 100 / 100), 0);
    lv_obj_set_style_bg_color(row_1, lv_color_hex(0xf1f6a7), 0);
    lv_obj_set_align(row_1, LV_ALIGN_CENTER);

    lv_obj_t * lv_button_0 = lv_button_create(row_1);
    lv_obj_set_align(lv_button_0, LV_ALIGN_CENTER);
    lv_obj_set_height(lv_button_0, lv_pct(90));
    lv_obj_set_style_pad_all(lv_button_0, 4, 0);
    lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0x7c0000), 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "120");
    lv_obj_set_style_text_font(lv_label_0, big_shoulders_80, 0);




    lv_obj_t * row_2 = row_create(column_0);
    lv_obj_set_width(row_2, lv_pct(100));
    lv_obj_set_height(row_2, lv_pct(30));
    lv_obj_set_style_flex_main_place(row_2, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_2, 8, 0);
    lv_obj_set_style_bg_opa(row_2, (255 * 100 / 100), 0);
    lv_obj_set_style_bg_color(row_2, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_color(row_2, lv_color_hex3(0xddd), 0);

    lv_obj_t * icon_button_3 = icon_button_create(row_2, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_3, lv_pct(100));


    lv_obj_t * icon_button_4 = icon_button_create(row_2, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_4, lv_pct(100));


    lv_obj_t * icon_button_5 = icon_button_create(row_2, icon_earbuds, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_5, lv_pct(100));


    lv_obj_t * icon_button_6 = icon_button_create(row_2, icon_speaker, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_6, lv_pct(100));





    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "screen_layouts");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/