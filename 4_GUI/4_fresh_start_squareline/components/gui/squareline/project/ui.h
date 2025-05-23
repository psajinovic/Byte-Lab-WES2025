// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: esp32_gui

#ifndef _ESP32_GUI_UI_H
#define _ESP32_GUI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

void SpinAndLargen_Animation(lv_obj_t * TargetObject, int delay);
void LargeBtn_Animation(lv_obj_t * TargetObject, int delay);
void MoveColorToCenter_Animation(lv_obj_t * TargetObject, int delay);
void MoveSettingsToCenter_Animation(lv_obj_t * TargetObject, int delay);
void HideBtn_Animation(lv_obj_t * TargetObject, int delay);
void ShowBtn_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Home_Scr
void ui_Home_Scr_screen_init(void);
extern lv_obj_t * ui_Home_Scr;
extern lv_obj_t * ui_Button1;
void ui_event_Label1(lv_event_t * e);
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui____initial_actions0;








void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
