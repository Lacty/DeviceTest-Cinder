
#pragma once


#include "cinder/Quaternion.h"

#if !defined( _MSW_VER )
#include "../blocks/MotionManager/src/cinder/MotionImplCoreMotion.h"
#endif

namespace dowa {

  class Device {
  public:
    //static void       enable();
    static ci::Quatf  getRotation();
  };

}
