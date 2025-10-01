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

    lv_obj_t * row_0 = row_create(column_0);
    lv_obj_set_width(row_0, lv_pct(100));
    lv_obj_set_style_flex_main_place(row_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_0, 8, 0);
    lv_obj_set_style_bg_opa(row_0, (255 * 100 / 100), 0);
    lv_obj_set_style_bg_color(row_0, lv_color_hex(0x002c57), 0);

    lv_obj_t * button_0 = button_create(row_0, "First");


    lv_obj_t * button_1 = button_create(row_0, "Second");


    lv_obj_t * button_2 = button_create(row_0, "Third");



    lv_obj_t * column_1 = column_create(column_0);
    lv_obj_set_style_pad_all(column_1, 8, 0);
    lv_obj_set_style_pad_row(column_1, 8, 0);

    lv_obj_t * lv_checkbox_0 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_0, "First");


    lv_obj_t * lv_checkbox_1 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_1, "Second");


    lv_obj_t * lv_checkbox_2 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_2, "Third");
    lv_obj_set_flag(lv_checkbox_2, LV_OBJ_FLAG_IGNORE_LAYOUT, true);
    lv_obj_set_x(lv_checkbox_2, 142);
    lv_obj_set_y(lv_checkbox_2, 15);


    lv_obj_t * lv_checkbox_3 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_3, "Forth");


    lv_obj_t * lv_checkbox_4 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_4, "Fifth");


    lv_obj_t * lv_checkbox_5 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_5, "Sixts");


    lv_obj_t * lv_checkbox_6 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_6, "Sevents");


    lv_obj_t * lv_checkbox_7 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_7, "Eighth");


    lv_obj_t * lv_checkbox_8 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_8, "Nine");


    lv_obj_t * lv_checkbox_9 = lv_checkbox_create(column_1);
    lv_checkbox_set_text(lv_checkbox_9, "Tenth");



    lv_obj_t * row_1 = row_create(column_0);
    lv_obj_set_width(row_1, lv_pct(100));
    lv_obj_set_style_flex_main_place(row_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_1, 8, 0);
    lv_obj_set_style_bg_opa(row_1, (255 * 100 / 100), 0);
    lv_obj_set_style_bg_color(row_1, lv_color_hex3(0x111), 0);
    lv_obj_set_style_text_color(row_1, lv_color_hex3(0xddd), 0);

    lv_obj_t * lv_label_0 = lv_label_create(row_1);
    lv_label_set_text(lv_label_0, "Made by LVGL's UI editor");




    lv_obj_t * button_3 = button_create(lv_obj_0, "Floating");
    lv_obj_set_flag(button_3, LV_OBJ_FLAG_FLOATING, true);
    lv_obj_set_align(button_3, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_set_x(button_3, -20);
    lv_obj_set_y(button_3, -12);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "screen_layouts");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/