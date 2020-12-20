#pragma once

#include "uiuc/PNG.h"
using namespace uiuc;
// Defining the effects to be done on the image.
PNG grayscale(PNG image);  
PNG createSpotlight(PNG image, int centerX, int centerY);
PNG illinify(PNG image);
PNG watermark(PNG firstImage, PNG secondImage);
