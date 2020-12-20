/**
 * @file HSLAPixel.h
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // HSLAPixel class definition .

  class HSLAPixel
  {
      public:
        double h;
        double s;
        double l;
        double a;


        HSLAPixel();   // defalut constructor


        HSLAPixel(double hue, double saturation, double luminance); // when alpha = 1.0 copy constructor


        HSLAPixel(double hue, double saturation, double luminance, double alpha);  // copy constructor
  };


}
