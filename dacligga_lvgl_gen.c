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
lv_font_t * geist_semibold_12;
lv_font_t * geist_semibold_14;
lv_font_t * geist_bold_16;
lv_font_t * geist_semibold_20;
lv_font_t * geist_semibold_28;
lv_font_t * geist_regular_12;
lv_font_t * geist_regular_14;
lv_font_t * geist_light_60;
lv_font_t * literata_80;
lv_font_t * abril_fatface_80;
lv_font_t * big_shoulders_80;

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
    /* create tiny ttf font "geist_semibold_12" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
    geist_semibold_12 = lv_tiny_ttf_create_file(buf, 12);
    /* create tiny ttf font "geist_semibold_14" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
    geist_semibold_14 = lv_tiny_ttf_create_file(buf, 14);
    /* create tiny ttf font "geist_bold_16" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
    geist_bold_16 = lv_tiny_ttf_create_file(buf, 16);
    /* create tiny ttf font "geist_semibold_20" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
    geist_semibold_20 = lv_tiny_ttf_create_file(buf, 20);
    /* create tiny ttf font "geist_semibold_28" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-SemiBold.ttf");
    geist_semibold_28 = lv_tiny_ttf_create_file(buf, 28);
    /* create tiny ttf font "geist_regular_12" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-Regular.ttf");
    geist_regular_12 = lv_tiny_ttf_create_file(buf, 12);
    /* create tiny ttf font "geist_regular_14" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-Regular.ttf");
    geist_regular_14 = lv_tiny_ttf_create_file(buf, 14);
    /* create tiny ttf font "geist_light_60" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Geist/Geist-Light.ttf");
    geist_light_60 = lv_tiny_ttf_create_file(buf, 60);
    /* create tiny ttf font "literata_80" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Literata/Literata-Bold.ttf");
    literata_80 = lv_tiny_ttf_create_file(buf, 80);
    /* create tiny ttf font "abril_fatface_80" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/AbrilFatface/AbrilFatface-Regular.ttf");
    abril_fatface_80 = lv_tiny_ttf_create_file(buf, 80);
    /* create tiny ttf font "big_shoulders_80" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/BigShoulders/BigShoulders-Bold.ttf");
    big_shoulders_80 = lv_tiny_ttf_create_file(buf, 60);

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
    lv_xml_register_font(NULL, "geist_semibold_12", geist_semibold_12);
    lv_xml_register_font(NULL, "geist_semibold_14", geist_semibold_14);
    lv_xml_register_font(NULL, "geist_bold_16", geist_bold_16);
    lv_xml_register_font(NULL, "geist_semibold_20", geist_semibold_20);
    lv_xml_register_font(NULL, "geist_semibold_28", geist_semibold_28);
    lv_xml_register_font(NULL, "geist_regular_12", geist_regular_12);
    lv_xml_register_font(NULL, "geist_regular_14", geist_regular_14);
    lv_xml_register_font(NULL, "geist_light_60", geist_light_60);
    lv_xml_register_font(NULL, "literata_80", literata_80);
    lv_xml_register_font(NULL, "abril_fatface_80", abril_fatface_80);
    lv_xml_register_font(NULL, "big_shoulders_80", big_shoulders_80);

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