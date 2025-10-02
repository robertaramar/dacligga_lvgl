/**
 * @file dacligga_lvgl_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "dacligga_lvgl_gen.h"

#if LV_USE_XML
#endif

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
extern uint8_t BigShoulders_Bold_ttf_data[];
extern size_t BigShoulders_Bold_ttf_data_size;
lv_font_t * big_shoulders_14;

/*----------------
 * Images
 *----------------*/
const void * icon_earbuds;
const void * icon_gear;
const void * icon_midi;
const void * icon_speaker;
const void * icon_usb;

/*----------------
 * Subjects
 *----------------*/
lv_subject_t dark_theme;
lv_subject_t move_goal_target;
lv_subject_t location1_temp;
lv_subject_t location2_temp;
lv_subject_t thermostat_on;
lv_subject_t thermostat_temp;
lv_subject_t room_temp;
lv_subject_t alarm_on;
lv_subject_t alarm_hour;
lv_subject_t alarm_min;
lv_subject_t speaker;
lv_subject_t speaker_vol;
lv_subject_t light_temperature;
lv_subject_t light_temperature_temp;
lv_subject_t song_played;
lv_subject_t song_liked;
lv_subject_t song_playing;

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
    /* create tiny ttf font 'big_shoulders_45' from C array */
    big_shoulders_45 = lv_tiny_ttf_create_data(BigShoulders_Bold_ttf_data, BigShoulders_Bold_ttf_data_size, 45);
    /* create tiny ttf font 'big_shoulders_14' from C array */
    big_shoulders_14 = lv_tiny_ttf_create_data(BigShoulders_Bold_ttf_data, BigShoulders_Bold_ttf_data_size, 14);

    /*----------------
     * Images
     *----------------*/
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/earbuds.png");
    icon_earbuds = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/gear.png");
    icon_gear = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/midi.png");
    icon_midi = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/speaker.png");
    icon_speaker = lv_strdup(buf);
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/usb.png");
    icon_usb = lv_strdup(buf);


    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&dark_theme, 0);
    lv_subject_init_int(&move_goal_target, 800);
    lv_subject_init_int(&location1_temp, 25);
    lv_subject_init_int(&location2_temp, 34);
    lv_subject_init_int(&thermostat_on, 1);
    lv_subject_init_int(&thermostat_temp, 16);
    lv_subject_init_int(&room_temp, 24);
    lv_subject_init_int(&alarm_on, 1);
    lv_subject_init_int(&alarm_hour, 06);
    lv_subject_init_int(&alarm_min, 36);
    lv_subject_init_int(&speaker, 1);
    lv_subject_init_int(&speaker_vol, 40);
    lv_subject_init_int(&light_temperature, 1);
    lv_subject_init_int(&light_temperature_temp, 3000);
    lv_subject_init_int(&song_played, 130);
    lv_subject_init_int(&song_liked, 0);
    lv_subject_init_int(&song_playing, 0);

    /*----------------
     * Translations
     *----------------*/


#if LV_USE_XML
    /*Register widgets*/

    /* Register fonts */
    lv_xml_register_font(NULL, "big_shoulders_45", big_shoulders_45);
    lv_xml_register_font(NULL, "big_shoulders_14", big_shoulders_14);

    /* Register subjects */
    lv_xml_register_subject(NULL, "dark_theme", &dark_theme);
    lv_xml_register_subject(NULL, "move_goal_target", &move_goal_target);
    lv_xml_register_subject(NULL, "location1_temp", &location1_temp);
    lv_xml_register_subject(NULL, "location2_temp", &location2_temp);
    lv_xml_register_subject(NULL, "thermostat_on", &thermostat_on);
    lv_xml_register_subject(NULL, "thermostat_temp", &thermostat_temp);
    lv_xml_register_subject(NULL, "room_temp", &room_temp);
    lv_xml_register_subject(NULL, "alarm_on", &alarm_on);
    lv_xml_register_subject(NULL, "alarm_hour", &alarm_hour);
    lv_xml_register_subject(NULL, "alarm_min", &alarm_min);
    lv_xml_register_subject(NULL, "speaker", &speaker);
    lv_xml_register_subject(NULL, "speaker_vol", &speaker_vol);
    lv_xml_register_subject(NULL, "light_temperature", &light_temperature);
    lv_xml_register_subject(NULL, "light_temperature_temp", &light_temperature_temp);
    lv_xml_register_subject(NULL, "song_played", &song_played);
    lv_xml_register_subject(NULL, "song_liked", &song_liked);
    lv_xml_register_subject(NULL, "song_playing", &song_playing);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)

    /* Register images */
    lv_xml_register_image(NULL, "icon_earbuds", icon_earbuds);
    lv_xml_register_image(NULL, "icon_gear", icon_gear);
    lv_xml_register_image(NULL, "icon_midi", icon_midi);
    lv_xml_register_image(NULL, "icon_speaker", icon_speaker);
    lv_xml_register_image(NULL, "icon_usb", icon_usb);
#endif

#if LV_USE_XML == 0
    /*--------------------
    *  Permanent screens
    *-------------------*/

    /*If XML is enabled it's assumed that the permanent screens are created
     *manaully from XML using lv_xml_create()*/

#endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/