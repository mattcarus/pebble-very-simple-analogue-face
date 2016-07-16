#pragma once

#include "pebble.h"

static const GPathInfo MINUTE_HAND_POINTS = {
  4, (GPoint []) {
    { -3, 0 },
    { 3, 0 },
    { 3, -75 },
    {-3, -75 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  4, (GPoint []){
    {-4, 0 },
    { 4, 0 },
    { 4, -55 },
    {-4, -55 }
  }
};
