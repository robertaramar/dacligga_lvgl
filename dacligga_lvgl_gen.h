/**
 * @file dacligga_lvgl_gen.h
 */

#ifndef DACLIGGA_LVGL_GEN_H
#define DACLIGGA_LVGL_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

#define UNIT_SM 6

#define UNIT_MD 12

#define UNIT_LG 18

#define UNIT_XL 24

#define OPA_MUTED lv_pct(20)

#define LIGHT lv_color_hex(0xffffff)

#define DARK lv_color_hex(0x0e0e0e)

#define SURFACE_PRIMARY_LIGHT lv_color_hex(0x0e0e0e)

#define TEXT_ON_SURFACE_PRIMARY_LIGHT lv_color_hex(0xffffff)

#define SURFACE_PRIMARY_DARK lv_color_hex(0xffffff)

#define TEXT_ON_SURFACE_PRIMARY_DARK lv_color_hex(0x0e0e0e)

#define BG_PRIMARY_LIGHT lv_color_hex(0xffffff)

#define BG_PRIMARY_DARK lv_color_hex(0x0e0e0e)

#define BG_SECONDARY_LIGHT lv_color_hex(0xf0f0f0)

#define BG_SECONDARY_DARK lv_color_hex(0x373130)

#define BG_TERTIARY_LIGHT lv_color_hex(0xf0f0f0)

#define BG_TERTIARY_DARK lv_color_hex(0x373130)

#define ACCENT1_LIGHT lv_color_hex(0xAF4ADE)

#define ACCENT1_DARK lv_color_hex(0xAF4ADE)

#define ACCENT1_50_LIGHT lv_color_hex(0xD2B1F6)

#define ACCENT1_50_DARK lv_color_hex(0x7E4CB7)

#define ACCENT2_LIGHT lv_color_hex(0xe9deaf)

#define ACCENT2_DARK lv_color_hex(0x887A3D)

#define ACCENT2_50_LIGHT lv_color_hex(0xf3f0e7)

#define ACCENT2_50_DARK lv_color_hex(0x4A473E)

#define DC_LIGHT_BACKGROUND lv_color_hex(0xf1f6a7)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t style_disabled;
extern lv_style_t style_reset;
extern lv_style_t figma_import_test;

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * big_shoulders_45;

extern lv_font_t * big_shoulders_14;

/*----------------
 * Images
 *----------------*/

extern const void * icon_earbuds;
extern const void * icon_gear;
extern const void * icon_midi;
extern const void * icon_speaker;
extern const void * icon_usb;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t dark_theme;
extern lv_subject_t bpm_active;
extern lv_subject_t bpm_midi_uart;
extern lv_subject_t bpm_midi_usb;
extern lv_subject_t bpm_internal;
extern lv_subject_t in_midi_uart;
extern lv_subject_t in_midi_usb;
extern lv_subject_t in_internal;
extern lv_subject_t out_midi_uart;
extern lv_subject_t out_midi_usb;
extern lv_subject_t out_midi_lineout;
extern lv_subject_t out_midi_buzzer;
extern lv_subject_t out_midi_uart_note_emphasized;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void dacligga_lvgl_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/button/button_gen.h"
#include "components/column/column_gen.h"
#include "components/icon_button/icon_button_gen.h"
#include "components/row/row_gen.h"
#include "screens/screen_layouts_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*DACLIGGA_LVGL_GEN_H*/