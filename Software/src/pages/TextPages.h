#ifndef TEXT_PAGES_H
#define TEXT_PAGES_H

#include "Arduino.h"
#include "constants/Strings.h"

struct TextPage {
    String title;
    String description;
    String qrValue = EMPTY_STRING;

    String leftButtonText = EMPTY_STRING;
    String rightButtonText = EMPTY_STRING;
};

static const TextPage updatePage = {
    .title = UPDATING_TITLE,
    .description = UPDATING_DESCRIPTION,
    .leftButtonText = CANCEL_STRING,
};

static const TextPage updateFilesystemPage = {
    .title = "Updating Filesystem",
    .description = "Updating filesystem...",
    .leftButtonText = CANCEL_STRING,
};

static const TextPage updateSoftwarePage = {
    .title = "Updating Software",
    .description = "Updating software...",
    .leftButtonText = CANCEL_STRING,
};

static const TextPage updateDonePage = {
    .title = "Update Complete",
    .description = "Update complete!",
    .leftButtonText = CANCEL_STRING,
};

static const TextPage deviceSearchPage = {
    .title = DEVICE_SEARCH_TITLE,
    .description = DEVICE_SEARCH_DESCRIPTION,
    .leftButtonText = CANCEL_STRING,
};

static const TextPage deviceConnectingPage = {
    .title = "Connecting",
    .description = "Connecting to device...",
    .leftButtonText = CANCEL_STRING,
};

static const TextPage deviceStopPage = {.title = DEVICE_STOP_TITLE,
                                        .description = DEVICE_STOP_DESCRIPTION,
                                        .leftButtonText = GO_BACK,
                                        .rightButtonText = GO_HOME};

static const TextPage wifiSettingsPage = {
    .title = WIFI_SETTINGS_TITLE,
    .description = WIFI_SETTINGS_DESCRIPTION,
    .qrValue = WIFI_SETTINGS_QR_VALUE,
    .leftButtonText = GO_BACK};

static const TextPage wifiConnectedPage = {
    .title = WIFI_CONNECTED_TITLE,
    .description = WIFI_CONNECTED_DESCRIPTION,
    .leftButtonText = GO_BACK};

// OSSM Menu Pages

static const TextPage ossmHelpPage = {
    .title = "OSSM Help",
    .description =
        "Visit research-and-desire.com/ossm for guides, troubleshooting, and "
        "firmware updates.",
    .qrValue = "https://research-and-desire.com/ossm", // TODO: put the correct URL here and make sure the QR code is generated correctly for it and make sure it's not overflowing the QR code's capacity,
    .leftButtonText = GO_BACK,
};

static const TextPage ossmRestartConfirmPage = {
    .title = "Restart OSSM?",
    .description =
        "This will restart your OSSM device. The remote will stay on but "
        "disconnect.",
    .leftButtonText = CANCEL_STRING,
    .rightButtonText = "Restart",
};

static const TextPage ossmRestartingPage = {
    .title = "Restarting OSSM",
    .description = "Your OSSM is restarting. Please wait...",
};

#endif  // TEXT_PAGES_H