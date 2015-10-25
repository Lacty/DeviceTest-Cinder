
#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

#include "Device.h"

using namespace ci;
using namespace ci::app;
using namespace std;
using namespace dowa;

class DeviceTestApp : public AppNative {
public:
  void setup();
  void mouseDown(MouseEvent event);
  void update();
  void draw();
};

void DeviceTestApp::setup() {
  gl::enable(GL_CULL_FACE);
}

void DeviceTestApp::mouseDown(MouseEvent event) {}

void DeviceTestApp::update() {
  console() << Device::getRotation() << std::endl;
}

void DeviceTestApp::draw() {
	gl::clear(Color(0.4f, 0.4f, 0.4f));
  
  gl::pushModelView();
  gl::translate(getWindowCenter());
  gl::rotate(Device::getRotation());
  gl::drawColorCube(Vec3f::zero(), Vec3f(100, 100, 100));
  gl::popModelView();
}

CINDER_APP_NATIVE( DeviceTestApp, RendererGl )
