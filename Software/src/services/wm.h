#ifndef LOCKBOX_WM_H
#define LOCKBOX_WM_H

#include "WiFiManager.h"

extern WiFiManager wm;
extern bool isSoftwareUpdateAvailable;
extern bool isFilesystemUpdateAvailable;

bool isUpdateAvailable();

void initWM();

#endif // LOCKBOX_WM_H
