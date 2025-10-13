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

    static lv_style_t bpm_button_checked;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&bpm_button_checked);
        lv_style_set_bg_opa(&bpm_button_checked, (255 * 100 / 100));
        lv_style_set_bg_color(&bpm_button_checked, lv_color_hex(0x008000));

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
    lv_label_set_text(lv_label_0, "Inputs");
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
    lv_obj_t * btn_input_uart = icon_button_create(row_1, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_input_uart, "btn_input_uart");
    lv_obj_set_height(btn_input_uart, lv_pct(100));
    lv_obj_bind_checked(btn_input_uart, &in_midi_uart);
    lv_obj_add_event_cb(btn_input_uart, input_button_callback, LV_EVENT_CLICKED, "CLOCKSOURCE_UART");
    
    lv_obj_t * btn_input_usb = icon_button_create(row_1, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_input_usb, "btn_input_usb");
    lv_obj_set_height(btn_input_usb, lv_pct(100));
    lv_obj_bind_checked(btn_input_usb, &in_midi_usb);
    lv_obj_add_event_cb(btn_input_usb, input_button_callback, LV_EVENT_CLICKED, "CLOCKSOURCE_USB");
    
    lv_obj_t * btn_input_internal = icon_button_create(row_1, icon_gear, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_input_internal, "btn_input_internal");
    lv_obj_set_height(btn_input_internal, lv_pct(100));
    lv_obj_bind_checked(btn_input_internal, &in_internal);
    lv_obj_add_event_cb(btn_input_internal, input_button_callback, LV_EVENT_CLICKED, "CLOCKSOURCE_INTERNAL");
    
    lv_obj_t * row_2 = row_create(column_0);
    lv_obj_set_width(row_2, lv_pct(100));
    lv_obj_set_height(row_2, lv_pct(30));
    lv_obj_set_style_flex_main_place(row_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_all(row_2, 8, 0);
    lv_obj_set_align(row_2, LV_ALIGN_CENTER);
    lv_obj_set_style_border_color(row_2, lv_color_hex(0x000000), 0);
    lv_obj_t * btn_bpm_minus = lv_button_create(row_2);
    lv_obj_set_name(btn_bpm_minus, "btn_bpm_minus");
    lv_obj_set_align(btn_bpm_minus, LV_ALIGN_CENTER);
    lv_obj_set_width(btn_bpm_minus, lv_pct(20));
    lv_obj_set_height(btn_bpm_minus, lv_pct(90));
    lv_obj_set_style_pad_all(btn_bpm_minus, 0, 0);
    lv_obj_set_style_pad_left(btn_bpm_minus, lv_pct(15), 0);
    lv_obj_set_style_bg_color(btn_bpm_minus, lv_color_hex(0x000000), 0);
    lv_obj_set_style_margin_right(btn_bpm_minus, lv_pct(25), 0);
    lv_obj_t * lv_label_1 = lv_label_create(btn_bpm_minus);
    lv_label_set_text(lv_label_1, "-");
    lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_font(lv_label_1, big_shoulders_45, 0);
    lv_obj_set_width(lv_label_1, lv_pct(20));
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * btn_bpm = lv_button_create(row_2);
    lv_obj_set_name(btn_bpm, "btn_bpm");
    lv_obj_set_align(btn_bpm, LV_ALIGN_CENTER);
    lv_obj_set_width(btn_bpm, lv_pct(40));
    lv_obj_set_height(btn_bpm, lv_pct(90));
    lv_obj_set_style_pad_all(btn_bpm, 0, 0);
    lv_obj_set_style_bg_color(btn_bpm, lv_color_hex(0x800000), 0);
    lv_obj_bind_checked(btn_bpm, &bpm_running);
    lv_obj_t * lv_label_2 = lv_label_create(btn_bpm);
    lv_label_bind_text(lv_label_2, &bpm_active, NULL);
    lv_obj_set_style_text_font(lv_label_2, big_shoulders_45, 0);
    lv_obj_set_width(lv_label_2, lv_pct(100));
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_add_event_cb(btn_bpm, bpm_button_callback, LV_EVENT_CLICKED, "bpm-button");
    lv_obj_add_style(btn_bpm, &bpm_button_checked, LV_STATE_CHECKED);
    
    lv_obj_t * btn_bpm_plus = lv_button_create(row_2);
    lv_obj_set_name(btn_bpm_plus, "btn_bpm_plus");
    lv_obj_set_align(btn_bpm_plus, LV_ALIGN_CENTER);
    lv_obj_set_width(btn_bpm_plus, lv_pct(20));
    lv_obj_set_height(btn_bpm_plus, lv_pct(90));
    lv_obj_set_style_pad_all(btn_bpm_plus, 0, 0);
    lv_obj_set_style_pad_left(btn_bpm_plus, lv_pct(15), 0);
    lv_obj_set_style_bg_color(btn_bpm_plus, lv_color_hex(0x000000), 0);
    lv_obj_set_style_margin_left(btn_bpm_plus, lv_pct(25), 0);
    lv_obj_t * lv_label_3 = lv_label_create(btn_bpm_plus);
    lv_label_set_text(lv_label_3, "+");
    lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_font(lv_label_3, big_shoulders_45, 0);
    lv_obj_set_width(lv_label_3, lv_pct(20));
    lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * row_3 = row_create(column_0);
    lv_obj_set_width(row_3, lv_pct(100));
    lv_obj_set_height(row_3, lv_pct(25));
    lv_obj_set_style_flex_main_place(row_3, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_3, 4, 0);
    lv_obj_set_style_text_color(row_3, lv_color_hex3(0xddd), 0);
    lv_obj_set_style_border_width(row_3, 1, 0);
    lv_obj_set_style_border_side(row_3, LV_BORDER_SIDE_TOP, 0);
    lv_obj_t * btn_output_uart = icon_button_create(row_3, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_uart, "btn_output_uart");
    lv_obj_set_height(btn_output_uart, lv_pct(100));
    lv_obj_bind_checked(btn_output_uart, &out_midi_uart);
    lv_obj_add_event_cb(btn_output_uart, output_button_callback, LV_EVENT_CLICKED, "EMITTER_UART");
    
    lv_obj_t * btn_output_usb = icon_button_create(row_3, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_usb, "btn_output_usb");
    lv_obj_set_height(btn_output_usb, lv_pct(100));
    lv_obj_bind_checked(btn_output_usb, &out_midi_usb);
    lv_obj_add_event_cb(btn_output_usb, output_button_callback, LV_EVENT_CLICKED, "EMITTER_USB");
    
    lv_obj_t * btn_output_lineout = icon_button_create(row_3, icon_lineout, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_lineout, "btn_output_lineout");
    lv_obj_set_height(btn_output_lineout, lv_pct(100));
    lv_obj_bind_checked(btn_output_lineout, &out_midi_lineout);
    lv_obj_add_event_cb(btn_output_lineout, output_button_callback, LV_EVENT_CLICKED, "EMITTER_LINEOUT");
    
    lv_obj_t * btn_output_buzzer = icon_button_create(row_3, icon_buzzer, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_buzzer, "btn_output_buzzer");
    lv_obj_set_height(btn_output_buzzer, lv_pct(100));
    lv_obj_bind_checked(btn_output_buzzer, &out_midi_buzzer);
    lv_obj_add_event_cb(btn_output_buzzer, output_button_callback, LV_EVENT_CLICKED, "EMITTER_BUZZER");
    
    lv_obj_t * row_4 = row_create(column_0);
    lv_obj_set_width(row_4, lv_pct(100));
    lv_obj_set_height(row_4, lv_pct(10));
    lv_obj_set_style_flex_main_place(row_4, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_4, 2, 0);
    lv_obj_set_align(row_4, LV_ALIGN_CENTER);
    lv_obj_t * lv_label_4 = lv_label_create(row_4);
    lv_label_set_text(lv_label_4, "Outputs");
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

