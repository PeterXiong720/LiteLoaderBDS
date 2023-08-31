#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LogAreaID : int {
    LOG_AREA_ALL           = 0x0,
    LOG_AREA_PLATFORM      = 0x1,
    LOG_AREA_ENTITY        = 0x2,
    LOG_AREA_DATABASE      = 0x3,
    LOG_AREA_GUI           = 0x4,
    LOG_AREA_SYSTEM        = 0x5,
    LOG_AREA_NETWORK       = 0x6,
    LOG_AREA_RENDER        = 0x7,
    LOG_AREA_MEMORY        = 0x8,
    LOG_AREA_ANIMATION     = 0x9,
    LOG_AREA_INPUT         = 0xA,
    LOG_AREA_LEVEL         = 0xB,
    LOG_AREA_SERVER        = 0xC,
    LOG_AREA_DLC           = 0xD,
    LOG_AREA_PHYSICS       = 0xE,
    LOG_AREA_FILE          = 0xF,
    LOG_AREA_STORAGE       = 0x10,
    LOG_AREA_REALMS        = 0x11,
    LOG_AREA_REALMSAPI     = 0x12,
    LOG_AREA_XBOXLIVE      = 0x13,
    LOG_AREA_USERMANAGER   = 0x14,
    LOG_AREA_XSAPI         = 0x15,
    LOG_AREA_PERF          = 0x16,
    LOG_AREA_TELEMETRY     = 0x17,
    LOG_AREA_BLOCKS        = 0x18,
    LOG_AREA_RAKNET        = 0x19,
    LOG_AREA_GAMEFACE      = 0x1A,
    LOG_AREA_SOUND         = 0x1B,
    LOG_AREA_INTERACTIVE   = 0x1C,
    LOG_AREA_SCRIPTING     = 0x1D,
    LOG_AREA_PLAYFAB       = 0x1E,
    LOG_AREA_AUTOMATION    = 0x1F,
    LOG_AREA_PERSONA       = 0x20,
    LOG_AREA_TEXTURE       = 0x21,
    LOG_AREA_ASSETPACKAGES = 0x22,
    LOG_AREA_ITEMS         = 0x23,
    LOG_AREA_SERVICES      = 0x24,
    LOG_AREA_VOLUMES       = 0x25,
    LOG_AREA_LOOTTABLE     = 0x26,
    LOG_AREA_SIDEBAR       = 0x27,
    LOG_AREA_LOCALIZATION  = 0x28,
    LOG_AREA_MOVEMENT      = 0x29,
    LOG_AREA_LIVEEVENTS    = 0x2A,
    LOG_AREA_EDITOR        = 0x2B,
    LOG_AREA_UNKNOWN       = 0x2C,
    LOG_AREA_INVALID       = 0x2710,
    NUM_LOG_AREAS          = 0x2711,
};
