
#pragma once


#include "cinder/Quaternion.h"

#if defined( CINDER_COCOA_TOUCH )
#include "../blocks/MotionManager/src/cinder/MotionImplCoreMotion.h"
#endif

namespace dowa {

  class Device {
  public:
    static void       enable();
    static ci::Quatf  getRotation();
  };

}
