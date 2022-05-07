#include "displayapp/screens/WatchFaceBlocks.h"
#include <cmath>
#include <lvgl/lvgl.h>
//#include "displayapp/screens/BatteryIcon.h"
//#include "displayapp/screens/BleIcon.h"
//#include "displayapp/screens/Symbols.h"
//#include "displayapp/screens/NotificationIcon.h"
#include "components/settings/Settings.h"

//LV_IMG_DECLARE(bg_clock);

using namespace Pinetime::Applications::Screens;

WatchFaceBlocks::WatchFaceBlocks(Pinetime::Applications::DisplayApp* app,
                                 Controllers::DateTime& dateTimeController)//,
                                 //Controllers::Battery& batteryController,
                                 //Controllers::Ble& bleController,
                                 //Controllers::NotificationManager& notificationManager,
                                 //Controllers::Settings& settingsController)
  : Screen(app),
    currentDateTime {{}},
    dateTimeController {dateTimeController} {
    //batteryController {batteryController},
    //bleController {bleController},
    //notificationManager {notificationManager},
    //settingsController {settingsController} {

    }

WatchFaceBlocks::~WatchFaceBlocks() {

}

void WatchFaceBlocks::Refresh()
{
  currentDateTime = dateTimeController.CurrentDateTime();

  if (currentDateTime.IsUpdated()) {
    lv_area_t block;
  }
}