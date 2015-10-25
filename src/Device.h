
#pragma once

#define CINDER_MAC
//#define CINDER_MSW

#include "cinder/Quaternion.h"

#if !defined( CINDER_MSW )
#include "../blocks/MotionManager/src/cinder/MotionImplCoreMotion.h"
#endif

namespace dowa {

  class Device {
  public:
    //static void       enable();
    static ci::Quatf  getRotation();
  };

}
