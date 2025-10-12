/**
 * @file screen_layouts_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_layouts_gen.h"
#include "dacligga_lvgl.h"

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
    lv_obj_set_style_bg_color(lv_obj_0, DC_LIGHT_BACKGROUND, 0);

    lv_obj_t * column_0 = column_create(lv_obj_0);
    lv_obj_set_width(column_0, lv_pct(100));
    lv_obj_set_height(column_0, lv_pct(100));
    lv_obj_t * row_0 = row_create(column_0);
    lv_obj_set_width(row_0, lv_pct(100));
    lv_obj_set_height(row_0, lv_pct(10));
    lv_obj_set_style_flex_main_place(row_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_0, 2, 0);
    lv_obj_set_align(row_0, LV_ALIGN_CENTER);
    lv_obj_t * lv_label_0 = lv_label_create(row_0);
    lv_label_set_translation_tag(lv_label_0, "inputs");
    lv_obj_set_style_text_font(lv_label_0, big_shoulders_14, 0);
    lv_obj_set_width(lv_label_0, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * row_1 = row_create(column_0);
    lv_obj_set_width(row_1, lv_pct(100));
    lv_obj_set_height(row_1, lv_pct(25));
    lv_obj_set_style_flex_main_place(row_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_1, 4, 0);
    lv_obj_set_style_border_width(row_1, 1, 0);
    lv_obj_set_style_border_side(row_1, LV_BORDER_SIDE_BOTTOM, 0);
    lv_obj_t * icon_button_0 = icon_button_create(row_1, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_0, lv_pct(100));
    lv_obj_bind_checked(icon_button_0, &in_midi_uart);
    lv_obj_add_event_cb(icon_button_0, input_button_callback, LV_EVENT_CLICKED, "input-uart");
    
    lv_obj_t * icon_button_1 = icon_button_create(row_1, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_1, lv_pct(100));
    lv_obj_bind_checked(icon_button_1, &in_midi_usb);
    lv_obj_add_event_cb(icon_button_1, input_button_callback, LV_EVENT_CLICKED, "input-usb");
    
    lv_obj_t * icon_button_2 = icon_button_create(row_1, icon_gear, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_2, lv_pct(100));
    lv_obj_bind_checked(icon_button_2, &in_internal);
    lv_obj_add_event_cb(icon_button_2, input_button_callback, LV_EVENT_CLICKED, "input-internal");
    
    lv_obj_t * row_2 = row_create(column_0);
    lv_obj_set_width(row_2, lv_pct(100));
    lv_obj_set_height(row_2, lv_pct(30));
    lv_obj_set_style_flex_main_place(row_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_all(row_2, 8, 0);
    lv_obj_set_align(row_2, LV_ALIGN_CENTER);
    lv_obj_set_style_border_color(row_2, lv_color_hex(0x000000), 0);
    lv_obj_t * lv_label_1 = lv_label_create(row_2);
    lv_obj_set_width(lv_label_1, lv_pct(20));
    lv_obj_set_height(lv_label_1, lv_pct(100));
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_obj_set_flag(lv_label_1, LV_OBJ_FLAG_HIDDEN, false);
    lv_obj_set_style_align(lv_label_1, LV_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_1, HEARTBEAT_LEFT);
    lv_obj_set_style_text_font(lv_label_1, big_shoulders_45, 0);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_button_0 = lv_button_create(row_2);
    lv_obj_set_align(lv_button_0, LV_ALIGN_CENTER);
    lv_obj_set_width(lv_button_0, lv_pct(40));
    lv_obj_set_height(lv_button_0, lv_pct(90));
    lv_obj_set_style_pad_all(lv_button_0, 0, 0);
    lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0x7c0000), 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_label_bind_text(lv_label_2, &bpm_active, NULL);
    lv_obj_set_style_text_font(lv_label_2, big_shoulders_45, 0);
    lv_obj_set_width(lv_label_2, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_add_event_cb(lv_button_0, bpm_button_callback, LV_EVENT_CLICKED, "bpm-button");
    
    lv_obj_t * lv_label_3 = lv_label_create(row_2);
    lv_obj_set_width(lv_label_3, lv_pct(20));
    lv_obj_set_height(lv_label_3, lv_pct(100));
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    lv_obj_set_flag(lv_label_3, LV_OBJ_FLAG_HIDDEN, false);
    lv_obj_set_style_align(lv_label_3, LV_ALIGN_CENTER, 0);
    lv_label_set_text(lv_label_3, HEARTBEAT_RIGHT);
    lv_obj_set_style_text_font(lv_label_3, big_shoulders_45, 0);
    lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * row_3 = row_create(column_0);
    lv_obj_set_width(row_3, lv_pct(100));
    lv_obj_set_height(row_3, lv_pct(25));
    lv_obj_set_style_flex_main_place(row_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_3, 4, 0);
    lv_obj_set_style_text_color(row_3, lv_color_hex3(0xddd), 0);
    lv_obj_set_style_border_width(row_3, 1, 0);
    lv_obj_set_style_border_side(row_3, LV_BORDER_SIDE_TOP, 0);
    lv_obj_t * icon_button_3 = icon_button_create(row_3, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_3, lv_pct(100));
    lv_obj_bind_checked(icon_button_3, &out_midi_uart);
    lv_obj_add_event_cb(icon_button_3, output_button_callback, LV_EVENT_CLICKED, "output-uart");
    
    lv_obj_t * icon_button_4 = icon_button_create(row_3, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_4, lv_pct(100));
    lv_obj_bind_checked(icon_button_4, &out_midi_usb);
    lv_obj_add_event_cb(icon_button_4, output_button_callback, LV_EVENT_CLICKED, "output-usb");
    
    lv_obj_t * icon_button_5 = icon_button_create(row_3, icon_lineout, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_5, lv_pct(100));
    lv_obj_bind_checked(icon_button_5, &out_midi_lineout);
    lv_obj_add_event_cb(icon_button_5, output_button_callback, LV_EVENT_CLICKED, "output-lineout");
    
    lv_obj_t * icon_button_6 = icon_button_create(row_3, icon_buzzer, lv_color_hex(0xb05cbb));
    lv_obj_set_height(icon_button_6, lv_pct(100));
    lv_obj_bind_checked(icon_button_6, &out_midi_buzzer);
    lv_obj_add_event_cb(icon_button_6, output_button_callback, LV_EVENT_CLICKED, "output-buzzer");
    
    lv_obj_t * row_4 = row_create(column_0);
    lv_obj_set_width(row_4, lv_pct(100));
    lv_obj_set_height(row_4, lv_pct(10));
    lv_obj_set_style_flex_main_place(row_4, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_4, 2, 0);
    lv_obj_set_align(row_4, LV_ALIGN_CENTER);
    lv_obj_t * lv_label_4 = lv_label_create(row_4);
    lv_label_set_translation_tag(lv_label_4, "outputs");
    lv_obj_set_style_text_font(lv_label_4, big_shoulders_14, 0);
    lv_obj_set_width(lv_label_4, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);

    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "screen_layouts");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

