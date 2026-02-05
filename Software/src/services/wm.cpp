#include "wm.h"

#include "WiFi.h"
#include "state/remote.h"

WiFiManager wm;

bool isSoftwareUpdateAvailable = false;
bool isFilesystemUpdateAvailable = false;

void initWM() {
    WiFi.useStaticBuffers(true);
    WiFi.begin();

    wm.setSaveConfigCallback(
        []() { stateMachine->process_event(wifi_connected()); });
}

bool isUpdateAvailable() {
    if (WiFiClass::status() != WL_CONNECTED) {
        return false;
    }

#ifdef FORCE_UPDATE
    return true;
#endif

#ifdef NO_UPDATE
    return false;
#endif

    // TODO: check for updates
    return isSoftwareUpdateAvailable || isFilesystemUpdateAvailable;
}