#include "cameraControlParameters.h"

const char *CameraParameters::names[] = {
    "EXPOSURE_ABS",
    "EXPOSURE_AUTO",
    "EXPOSURE",
    "GAIN",
    "GLOBAL ANALOG MULTIPIER",
    "GLOBAL DIGITAL GAIN ",
    "GAIN_AUTO",
    "GAIN_BOOST",
    "RED GAIN",
    "RED ANALOG MULTIPIER",
    "RED DIGITAL GAIN",
    "GREEN GAIN",
    "GREEN ANALOG MULTIPIER",
    "GREEN DIGITAL GAIN",
    "BLUE GAIN",
    "BLUE ANALOG MULTIPIER",
    "BLUE DIGITAL GAIN",
    "GREEN2 GAIN",
    "GREEN2 ANALOG MULTIPIER",
    "GREEN2 DIGITAL GAIN",
    "IRIS",
    "FPS",
    "FOCUS",
    "ZOOM",
    "PIXELCLOCK",
    "HUE",
    "SATURATION",
    "SHARPNESS",
    "BRIGHTNESS",
    "CONTRAST",
    "GAMMA",
    "WHITE BALANCE",
    "AUTO WHITE BALANCE",
    "POWER LINE FREQUENCY",
    "BACKLIGHT COMPENSATION",
    "FOCUS RELATIVE",
    "AUTO_FOCUS",

    "UEYE MASTER FLASH DELAY",
    "UEYE MASTER FLASH DURATION",
    "UEYE SLAVE TRIGGER DELAY",

    "HORIZONTAL_FLIP",
    "VERTICAL_FLIP",

    "SHUTTER WIDTH UPPER",
    "SHUTTER WIDTH LOWER",
    "SHUTTER DELAY",
};

STATIC_ASSERT(CORE_COUNT_OF(CameraParameters::names) == CameraParameters::LAST, wrong_camera_parameter_num)
