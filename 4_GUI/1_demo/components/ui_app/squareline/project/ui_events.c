// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: esp32_gui

#include "ui.h"

void dark_mode_on(lv_event_t *e)
{
    lv_color_t bg_color_white = lv_color_hex(0x111111);
    lv_color_t bg_color_black = lv_color_hex(0xFFFFFF);

    lv_obj_add_state(ui_Dark_Mode_Switch, LV_STATE_CHECKED);
    lv_obj_add_state(ui_Dark_Mode_Switch_Color, LV_STATE_CHECKED);
    lv_obj_add_state(ui_Dark_Mode_Switch_Sett, LV_STATE_CHECKED);

    lv_obj_set_style_text_color(ui_Dark_Mode_Label, bg_color_black, 0);
    lv_obj_set_style_text_color(ui_Dark_Mode_Label_Color, bg_color_black, 0);
    lv_obj_set_style_text_color(ui_Dark_Mode_Label_Sett, bg_color_black, 0);
    lv_obj_set_style_bg_color(ui_Home_Scr, bg_color_white, 0);
    lv_obj_set_style_bg_color(ui_Color_Scr, bg_color_white, 0);
    lv_obj_set_style_bg_color(ui_Settings_Scr, bg_color_white, 0);

    lv_obj_set_style_bg_color(ui_Settings_scroll_panel, bg_color_white, 0);
    lv_obj_set_style_border_color(ui_Settings_scroll_panel, bg_color_white, 0);
}

void dark_mode_off(lv_event_t *e)
{
    lv_color_t bg_color_white = lv_color_hex(0x111111);
    lv_color_t bg_color_black = lv_color_hex(0xFFFFFF);

    lv_obj_clear_state(ui_Dark_Mode_Switch, LV_STATE_CHECKED);
    lv_obj_clear_state(ui_Dark_Mode_Switch_Color, LV_STATE_CHECKED);
    lv_obj_clear_state(ui_Dark_Mode_Switch_Sett, LV_STATE_CHECKED);

    lv_obj_set_style_text_color(ui_Dark_Mode_Label, bg_color_white, 0);
    lv_obj_set_style_text_color(ui_Dark_Mode_Label_Color, bg_color_white, 0);
    lv_obj_set_style_text_color(ui_Dark_Mode_Label_Sett, bg_color_white, 0);
    lv_obj_set_style_bg_color(ui_Home_Scr, bg_color_black, 0);
    lv_obj_set_style_bg_color(ui_Color_Scr, bg_color_black, 0);
    lv_obj_set_style_bg_color(ui_Settings_Scr, bg_color_black, 0);

    lv_obj_set_style_bg_color(ui_Settings_scroll_panel, bg_color_black, 0);
    lv_obj_set_style_border_color(ui_Settings_scroll_panel, bg_color_black, 0);
}
