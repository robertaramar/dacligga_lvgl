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

    lv_obj_t * view_main = lv_obj_create(NULL);
    lv_obj_set_name(view_main, "view_main");
    lv_obj_set_style_bg_color(view_main, DC_LIGHT_BACKGROUND, 0);

    lv_obj_t * column_main = column_create(view_main);
    lv_obj_set_name(column_main, "column_main");
    lv_obj_set_width(column_main, lv_pct(100));
    lv_obj_set_height(column_main, lv_pct(100));
    lv_obj_t * row_input_text = row_create(column_main);
    lv_obj_set_name(row_input_text, "row_input_text");
    lv_obj_set_width(row_input_text, lv_pct(100));
    lv_obj_set_height(row_input_text, lv_pct(10));
    lv_obj_set_style_flex_main_place(row_input_text, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_input_text, 2, 0);
    lv_obj_set_align(row_input_text, LV_ALIGN_CENTER);
    lv_obj_t * label_input = lv_label_create(row_input_text);
    lv_obj_set_name(label_input, "label_input");
    lv_label_set_text(label_input, "Inputs");
    lv_obj_set_style_text_font(label_input, big_shoulders_14, 0);
    lv_obj_set_width(label_input, lv_pct(100));
    lv_obj_set_style_text_align(label_input, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * row_inputs = row_create(column_main);
    lv_obj_set_name(row_inputs, "row_inputs");
    lv_obj_set_width(row_inputs, lv_pct(100));
    lv_obj_set_height(row_inputs, lv_pct(25));
    lv_obj_set_style_flex_main_place(row_inputs, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_inputs, 4, 0);
    lv_obj_set_style_border_width(row_inputs, 1, 0);
    lv_obj_set_style_border_side(row_inputs, LV_BORDER_SIDE_BOTTOM, 0);
    lv_obj_t * btn_input_uart = icon_button_create(row_inputs, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_input_uart, "btn_input_uart");
    lv_obj_set_height(btn_input_uart, lv_pct(100));
    lv_obj_bind_checked(btn_input_uart, &in_midi_uart);
    lv_obj_add_event_cb(btn_input_uart, input_button_callback, LV_EVENT_CLICKED, "CLOCKSOURCE_UART");
    
    lv_obj_t * btn_input_usb = icon_button_create(row_inputs, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_input_usb, "btn_input_usb");
    lv_obj_set_height(btn_input_usb, lv_pct(100));
    lv_obj_bind_checked(btn_input_usb, &in_midi_usb);
    lv_obj_add_event_cb(btn_input_usb, input_button_callback, LV_EVENT_CLICKED, "CLOCKSOURCE_USB");
    
    lv_obj_t * btn_input_internal = icon_button_create(row_inputs, icon_gear, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_input_internal, "btn_input_internal");
    lv_obj_set_height(btn_input_internal, lv_pct(100));
    lv_obj_bind_checked(btn_input_internal, &in_internal);
    lv_obj_add_event_cb(btn_input_internal, input_button_callback, LV_EVENT_CLICKED, "CLOCKSOURCE_INTERNAL");
    
    lv_obj_t * row_main_button = row_create(column_main);
    lv_obj_set_name(row_main_button, "row_main_button");
    lv_obj_set_width(row_main_button, lv_pct(100));
    lv_obj_set_height(row_main_button, lv_pct(30));
    lv_obj_set_style_flex_main_place(row_main_button, LV_FLEX_ALIGN_SPACE_EVENLY, 0);
    lv_obj_set_style_pad_all(row_main_button, 8, 0);
    lv_obj_set_align(row_main_button, LV_ALIGN_CENTER);
    lv_obj_set_style_border_color(row_main_button, lv_color_hex(0x000000), 0);
    lv_obj_t * btn_bpm_minus = lv_button_create(row_main_button);
    lv_obj_set_name(btn_bpm_minus, "btn_bpm_minus");
    lv_obj_set_align(btn_bpm_minus, LV_ALIGN_CENTER);
    lv_obj_set_width(btn_bpm_minus, lv_pct(20));
    lv_obj_set_height(btn_bpm_minus, lv_pct(90));
    lv_obj_set_style_pad_all(btn_bpm_minus, 0, 0);
    lv_obj_set_style_bg_color(btn_bpm_minus, lv_color_hex(0x000000), 0);
    lv_obj_set_style_margin_right(btn_bpm_minus, lv_pct(25), 0);
    lv_obj_t * label_button_minus = lv_label_create(btn_bpm_minus);
    lv_obj_set_name(label_button_minus, "label_button_minus");
    lv_label_set_text(label_button_minus, "-");
    lv_obj_set_style_text_color(label_button_minus, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_font(label_button_minus, big_shoulders_45, 0);
    lv_obj_set_width(label_button_minus, lv_pct(100));
    lv_obj_set_style_text_align(label_button_minus, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_add_event_cb(btn_bpm_minus, bpm_plusminus_callback, LV_EVENT_CLICKED, "bpm-minus");
    lv_obj_add_event_cb(btn_bpm_minus, bpm_plusminus_callback, LV_EVENT_LONG_PRESSED_REPEAT, "bpm-minus");
    
    lv_obj_t * btn_bpm = lv_button_create(row_main_button);
    lv_obj_set_name(btn_bpm, "btn_bpm");
    lv_obj_set_align(btn_bpm, LV_ALIGN_CENTER);
    lv_obj_set_width(btn_bpm, lv_pct(40));
    lv_obj_set_height(btn_bpm, lv_pct(90));
    lv_obj_set_style_pad_all(btn_bpm, 0, 0);
    lv_obj_set_style_bg_color(btn_bpm, lv_color_hex(0x800000), 0);
    lv_obj_bind_checked(btn_bpm, &bpm_running);
    lv_obj_t * label_bpm = lv_label_create(btn_bpm);
    lv_obj_set_name(label_bpm, "label_bpm");
    lv_label_bind_text(label_bpm, &bpm_active, NULL);
    lv_obj_set_style_text_font(label_bpm, big_shoulders_45, 0);
    lv_obj_set_width(label_bpm, lv_pct(100));
    lv_obj_set_style_text_align(label_bpm, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_add_event_cb(btn_bpm, bpm_button_callback, LV_EVENT_CLICKED, "bpm-button");
    lv_obj_add_style(btn_bpm, &bpm_button_checked, LV_STATE_CHECKED);
    
    lv_obj_t * btn_bpm_plus = lv_button_create(row_main_button);
    lv_obj_set_name(btn_bpm_plus, "btn_bpm_plus");
    lv_obj_set_align(btn_bpm_plus, LV_ALIGN_CENTER);
    lv_obj_set_width(btn_bpm_plus, lv_pct(20));
    lv_obj_set_height(btn_bpm_plus, lv_pct(90));
    lv_obj_set_style_pad_all(btn_bpm_plus, 0, 0);
    lv_obj_set_style_bg_color(btn_bpm_plus, lv_color_hex(0x000000), 0);
    lv_obj_set_style_margin_left(btn_bpm_plus, lv_pct(25), 0);
    lv_obj_t * label_button_plus = lv_label_create(btn_bpm_plus);
    lv_obj_set_name(label_button_plus, "label_button_plus");
    lv_label_set_text(label_button_plus, "+");
    lv_obj_set_style_text_color(label_button_plus, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_font(label_button_plus, big_shoulders_45, 0);
    lv_obj_set_width(label_button_plus, lv_pct(100));
    lv_obj_set_style_text_align(label_button_plus, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_add_event_cb(btn_bpm_plus, bpm_plusminus_callback, LV_EVENT_CLICKED, "bpm-plus");
    lv_obj_add_event_cb(btn_bpm_plus, bpm_plusminus_callback, LV_EVENT_LONG_PRESSED_REPEAT, "bpm-plus");
    
    lv_obj_t * row_outputs = row_create(column_main);
    lv_obj_set_name(row_outputs, "row_outputs");
    lv_obj_set_width(row_outputs, lv_pct(100));
    lv_obj_set_height(row_outputs, lv_pct(25));
    lv_obj_set_style_flex_main_place(row_outputs, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_outputs, 4, 0);
    lv_obj_set_style_text_color(row_outputs, lv_color_hex3(0xddd), 0);
    lv_obj_set_style_border_width(row_outputs, 1, 0);
    lv_obj_set_style_border_side(row_outputs, LV_BORDER_SIDE_TOP, 0);
    lv_obj_t * btn_output_uart = icon_button_create(row_outputs, icon_midi, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_uart, "btn_output_uart");
    lv_obj_set_height(btn_output_uart, lv_pct(100));
    lv_obj_bind_checked(btn_output_uart, &out_midi_uart);
    lv_obj_add_event_cb(btn_output_uart, output_button_callback, LV_EVENT_CLICKED, "EMITTER_UART");
    
    lv_obj_t * btn_output_usb = icon_button_create(row_outputs, icon_usb, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_usb, "btn_output_usb");
    lv_obj_set_height(btn_output_usb, lv_pct(100));
    lv_obj_bind_checked(btn_output_usb, &out_midi_usb);
    lv_obj_add_event_cb(btn_output_usb, output_button_callback, LV_EVENT_CLICKED, "EMITTER_USB");
    
    lv_obj_t * btn_output_lineout = icon_button_create(row_outputs, icon_lineout, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_lineout, "btn_output_lineout");
    lv_obj_set_height(btn_output_lineout, lv_pct(100));
    lv_obj_bind_checked(btn_output_lineout, &out_midi_lineout);
    lv_obj_add_event_cb(btn_output_lineout, output_button_callback, LV_EVENT_CLICKED, "EMITTER_LINEOUT");
    
    lv_obj_t * btn_output_buzzer = icon_button_create(row_outputs, icon_buzzer, lv_color_hex(0xb05cbb));
    lv_obj_set_name(btn_output_buzzer, "btn_output_buzzer");
    lv_obj_set_height(btn_output_buzzer, lv_pct(100));
    lv_obj_bind_checked(btn_output_buzzer, &out_midi_buzzer);
    lv_obj_add_event_cb(btn_output_buzzer, output_button_callback, LV_EVENT_CLICKED, "EMITTER_BUZZER");
    
    lv_obj_t * row_label_output = row_create(column_main);
    lv_obj_set_name(row_label_output, "row_label_output");
    lv_obj_set_width(row_label_output, lv_pct(100));
    lv_obj_set_height(row_label_output, lv_pct(10));
    lv_obj_set_style_flex_main_place(row_label_output, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_pad_all(row_label_output, 2, 0);
    lv_obj_set_align(row_label_output, LV_ALIGN_CENTER);
    lv_obj_t * label_output = lv_label_create(row_label_output);
    lv_obj_set_name(label_output, "label_output");
    lv_label_set_text(label_output, "Outputs");
    lv_obj_set_style_text_font(label_output, big_shoulders_14, 0);
    lv_obj_set_width(label_output, lv_pct(100));
    lv_obj_set_style_text_align(label_output, LV_TEXT_ALIGN_CENTER, 0);

    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(view_main, "screen_layouts");

    return view_main;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

