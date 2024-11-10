﻿#include "Menu.h"
#include "lvgl.h"

class DriveModeMenu : public Menu {
public:
    DriveModeMenu();
    static void create_menu();
    

private:
    static int speed;
    static bool increasing;
    static lv_obj_t* drive_screen;
    static lv_timer_t* speed_timer;
    static void speed_update_cb(lv_timer_t* timer);
    static void back_btn_event_handler(lv_event_t* e);

};

