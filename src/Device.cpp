
#include "Device.h"

using namespace dowa;

/*
void Device::enable() {
#if !defined( CINDER_MSW )
  ci::MotionManager::enable();
#endif
}
*/

ci::Quatf Device::getRotation() {
#if !defined( _MSC_VER )
  return ci::MotionManager::getRotation();
#else
  return ci::Quatf(0, 0, 0, 0);
#endif
}
