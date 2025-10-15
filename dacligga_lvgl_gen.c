/**
 * @file dacligga_lvgl_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "dacligga_lvgl_gen.h"

#if LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Global styles
 *----------------*/

lv_style_t style_disabled;
lv_style_t style_reset;
lv_style_t figma_import_test;

/*----------------
 * Fonts
 *----------------*/

lv_font_t * big_shoulders_45;
extern lv_font_t big_shoulders_45_data;
lv_font_t * big_shoulders_14;
extern lv_font_t big_shoulders_14_data;

/*----------------
 * Images
 *----------------*/

const void * icon_lineout;
extern const void * icon_lineout_data;
const void * icon_gear;
extern const void * icon_gear_data;
const void * icon_midi;
extern const void * icon_midi_data;
const void * icon_buzzer;
extern const void * icon_buzzer_data;
const void * icon_usb;
extern const void * icon_usb_data;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t dark_theme;
lv_subject_t bpm_active;
lv_subject_t bpm_running;
lv_subject_t bpm_midi_uart;
lv_subject_t bpm_midi_usb;
lv_subject_t bpm_internal;
lv_subject_t in_midi_uart;
lv_subject_t in_midi_usb;
lv_subject_t in_internal;
lv_subject_t out_midi_uart;
lv_subject_t out_midi_usb;
lv_subject_t out_midi_lineout;
lv_subject_t out_midi_buzzer;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void dacligga_lvgl_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_disabled);
        lv_style_set_opa_layered(&style_disabled, (255 * 60 / 100));

        lv_style_init(&style_reset);
        lv_style_set_width(&style_reset, LV_SIZE_CONTENT);
        lv_style_set_height(&style_reset, LV_SIZE_CONTENT);
        lv_style_set_bg_opa(&style_reset, 0);
        lv_style_set_border_width(&style_reset, 0);
        lv_style_set_radius(&style_reset, 0);
        lv_style_set_pad_all(&style_reset, 0);

        lv_style_init(&figma_import_test);
        lv_style_set_width(&figma_import_test, 24);
        lv_style_set_height(&figma_import_test, 24);

        style_inited = true;
    }

    /*----------------
     * Fonts
     *----------------*/

    /* get font 'big_shoulders_45' from a C array */
    big_shoulders_45 = &big_shoulders_45_data;
    /* get font 'big_shoulders_14' from a C array */
    big_shoulders_14 = &big_shoulders_14_data;


    /*----------------
     * Images
     *----------------*/
    icon_lineout = &icon_lineout_data;
    icon_gear = &icon_gear_data;
    icon_midi = &icon_midi_data;
    icon_buzzer = &icon_buzzer_data;
    icon_usb = &icon_usb_data;

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&dark_theme, 0);
    lv_subject_init_int(&bpm_active, 121);
    lv_subject_init_int(&bpm_running, 0);
    lv_subject_init_int(&bpm_midi_uart, 100);
    lv_subject_init_int(&bpm_midi_usb, 111);
    lv_subject_init_int(&bpm_internal, 99);
    lv_subject_init_int(&in_midi_uart, 0);
    lv_subject_init_int(&in_midi_usb, 0);
    lv_subject_init_int(&in_internal, 0);
    lv_subject_init_int(&out_midi_uart, 0);
    lv_subject_init_int(&out_midi_usb, 0);
    lv_subject_init_int(&out_midi_lineout, 0);
    lv_subject_init_int(&out_midi_buzzer, 0);

    /*----------------
     * Translations
     *----------------*/

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "big_shoulders_45", big_shoulders_45);
    lv_xml_register_font(NULL, "big_shoulders_14", big_shoulders_14);

    /* Register subjects */
    lv_xml_register_subject(NULL, "dark_theme", &dark_theme);
    lv_xml_register_subject(NULL, "bpm_active", &bpm_active);
    lv_xml_register_subject(NULL, "bpm_running", &bpm_running);
    lv_xml_register_subject(NULL, "bpm_midi_uart", &bpm_midi_uart);
    lv_xml_register_subject(NULL, "bpm_midi_usb", &bpm_midi_usb);
    lv_xml_register_subject(NULL, "bpm_internal", &bpm_internal);
    lv_xml_register_subject(NULL, "in_midi_uart", &in_midi_uart);
    lv_xml_register_subject(NULL, "in_midi_usb", &in_midi_usb);
    lv_xml_register_subject(NULL, "in_internal", &in_internal);
    lv_xml_register_subject(NULL, "out_midi_uart", &out_midi_uart);
    lv_xml_register_subject(NULL, "out_midi_usb", &out_midi_usb);
    lv_xml_register_subject(NULL, "out_midi_lineout", &out_midi_lineout);
    lv_xml_register_subject(NULL, "out_midi_buzzer", &out_midi_buzzer);

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "input_button_callback", input_button_callback);
    lv_xml_register_event_cb(NULL, "bpm_plusminus_callback", bpm_plusminus_callback);
    lv_xml_register_event_cb(NULL, "bpm_button_callback", bpm_button_callback);
    lv_xml_register_event_cb(NULL, "output_button_callback", output_button_callback);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "icon_lineout", icon_lineout);
    lv_xml_register_image(NULL, "icon_gear", icon_gear);
    lv_xml_register_image(NULL, "icon_midi", icon_midi);
    lv_xml_register_image(NULL, "icon_buzzer", icon_buzzer);
    lv_xml_register_image(NULL, "icon_usb", icon_usb);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) input_button_callback(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("input_button_callback was called\n");
}
void __attribute__((weak)) bpm_plusminus_callback(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("bpm_plusminus_callback was called\n");
}
void __attribute__((weak)) bpm_button_callback(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("bpm_button_callback was called\n");
}
void __attribute__((weak)) output_button_callback(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("output_button_callback was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/