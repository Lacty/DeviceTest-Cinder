
#include "Device.h"

using namespace dowa;


void Device::enable() {
#if defined( CINDER_COCOA_TOUCH )
  return ci::MotionManager::enable();
#endif
}

ci::Quatf Device::getRotation() {
#if defined( CINDER_COCOA_TOUCH )
  return ci::MotionManager::getRotation();
#else
  return ci::Quatf(0, 0, 0, 0);
#endif
}
