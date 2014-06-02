#include "stereo_odometer.h"
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace viso2_ros{

  class StereoOdometerNodelet : public nodelet::Nodelet
  {

  public:
    StereoOdometerNodelet(){}

  private:
    void onInit(){
      odometer_.reset(new StereoOdometer("raw", getNodeHandle(), getPrivateNodeHandle()));
    }
    boost::shared_ptr<StereoOdometer> odometer_;

  };

}

PLUGINLIB_DECLARE_CLASS(viso2_ros, StereoOdometerNodelet, viso2_ros::StereoOdometerNodelet, nodelet::Nodelet);
