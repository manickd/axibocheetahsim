// Generated by gencpp from file unitree_legged_msgs/HighState.msg
// DO NOT EDIT!


#ifndef UNITREE_LEGGED_MSGS_MESSAGE_HIGHSTATE_H
#define UNITREE_LEGGED_MSGS_MESSAGE_HIGHSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <unitree_legged_msgs/IMU.h>
#include <unitree_legged_msgs/Cartesian.h>
#include <unitree_legged_msgs/Cartesian.h>
#include <unitree_legged_msgs/BmsState.h>

namespace unitree_legged_msgs
{
template <class ContainerAllocator>
struct HighState_
{
  typedef HighState_<ContainerAllocator> Type;

  HighState_()
    : levelFlag(0)
    , commVersion(0)
    , robotID(0)
    , SN(0)
    , bandWidth(0)
    , mode(0)
    , progress(0.0)
    , imu()
    , gaitType(0)
    , footRaiseHeight(0.0)
    , position()
    , bodyHeight(0.0)
    , velocity()
    , yawSpeed(0.0)
    , footPosition2Body()
    , footSpeed2Body()
    , bms()
    , footForce()
    , footForceEst()
    , wirelessRemote()
    , reserve(0)
    , crc(0)  {
      position.assign(0.0);

      velocity.assign(0.0);

      footForce.assign(0);

      footForceEst.assign(0);

      wirelessRemote.assign(0);
  }
  HighState_(const ContainerAllocator& _alloc)
    : levelFlag(0)
    , commVersion(0)
    , robotID(0)
    , SN(0)
    , bandWidth(0)
    , mode(0)
    , progress(0.0)
    , imu(_alloc)
    , gaitType(0)
    , footRaiseHeight(0.0)
    , position()
    , bodyHeight(0.0)
    , velocity()
    , yawSpeed(0.0)
    , footPosition2Body()
    , footSpeed2Body()
    , bms(_alloc)
    , footForce()
    , footForceEst()
    , wirelessRemote()
    , reserve(0)
    , crc(0)  {
  (void)_alloc;
      position.assign(0.0);

      velocity.assign(0.0);

      footPosition2Body.assign( ::unitree_legged_msgs::Cartesian_<ContainerAllocator> (_alloc));

      footSpeed2Body.assign( ::unitree_legged_msgs::Cartesian_<ContainerAllocator> (_alloc));

      footForce.assign(0);

      footForceEst.assign(0);

      wirelessRemote.assign(0);
  }



   typedef uint8_t _levelFlag_type;
  _levelFlag_type levelFlag;

   typedef uint16_t _commVersion_type;
  _commVersion_type commVersion;

   typedef uint16_t _robotID_type;
  _robotID_type robotID;

   typedef uint32_t _SN_type;
  _SN_type SN;

   typedef uint8_t _bandWidth_type;
  _bandWidth_type bandWidth;

   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef float _progress_type;
  _progress_type progress;

   typedef  ::unitree_legged_msgs::IMU_<ContainerAllocator>  _imu_type;
  _imu_type imu;

   typedef uint8_t _gaitType_type;
  _gaitType_type gaitType;

   typedef float _footRaiseHeight_type;
  _footRaiseHeight_type footRaiseHeight;

   typedef boost::array<float, 3>  _position_type;
  _position_type position;

   typedef float _bodyHeight_type;
  _bodyHeight_type bodyHeight;

   typedef boost::array<float, 3>  _velocity_type;
  _velocity_type velocity;

   typedef float _yawSpeed_type;
  _yawSpeed_type yawSpeed;

   typedef boost::array< ::unitree_legged_msgs::Cartesian_<ContainerAllocator> , 4>  _footPosition2Body_type;
  _footPosition2Body_type footPosition2Body;

   typedef boost::array< ::unitree_legged_msgs::Cartesian_<ContainerAllocator> , 4>  _footSpeed2Body_type;
  _footSpeed2Body_type footSpeed2Body;

   typedef  ::unitree_legged_msgs::BmsState_<ContainerAllocator>  _bms_type;
  _bms_type bms;

   typedef boost::array<int16_t, 4>  _footForce_type;
  _footForce_type footForce;

   typedef boost::array<int16_t, 4>  _footForceEst_type;
  _footForceEst_type footForceEst;

   typedef boost::array<uint8_t, 40>  _wirelessRemote_type;
  _wirelessRemote_type wirelessRemote;

   typedef uint32_t _reserve_type;
  _reserve_type reserve;

   typedef uint32_t _crc_type;
  _crc_type crc;





  typedef boost::shared_ptr< ::unitree_legged_msgs::HighState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::unitree_legged_msgs::HighState_<ContainerAllocator> const> ConstPtr;

}; // struct HighState_

typedef ::unitree_legged_msgs::HighState_<std::allocator<void> > HighState;

typedef boost::shared_ptr< ::unitree_legged_msgs::HighState > HighStatePtr;
typedef boost::shared_ptr< ::unitree_legged_msgs::HighState const> HighStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::unitree_legged_msgs::HighState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::unitree_legged_msgs::HighState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::unitree_legged_msgs::HighState_<ContainerAllocator1> & lhs, const ::unitree_legged_msgs::HighState_<ContainerAllocator2> & rhs)
{
  return lhs.levelFlag == rhs.levelFlag &&
    lhs.commVersion == rhs.commVersion &&
    lhs.robotID == rhs.robotID &&
    lhs.SN == rhs.SN &&
    lhs.bandWidth == rhs.bandWidth &&
    lhs.mode == rhs.mode &&
    lhs.progress == rhs.progress &&
    lhs.imu == rhs.imu &&
    lhs.gaitType == rhs.gaitType &&
    lhs.footRaiseHeight == rhs.footRaiseHeight &&
    lhs.position == rhs.position &&
    lhs.bodyHeight == rhs.bodyHeight &&
    lhs.velocity == rhs.velocity &&
    lhs.yawSpeed == rhs.yawSpeed &&
    lhs.footPosition2Body == rhs.footPosition2Body &&
    lhs.footSpeed2Body == rhs.footSpeed2Body &&
    lhs.bms == rhs.bms &&
    lhs.footForce == rhs.footForce &&
    lhs.footForceEst == rhs.footForceEst &&
    lhs.wirelessRemote == rhs.wirelessRemote &&
    lhs.reserve == rhs.reserve &&
    lhs.crc == rhs.crc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::unitree_legged_msgs::HighState_<ContainerAllocator1> & lhs, const ::unitree_legged_msgs::HighState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace unitree_legged_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::unitree_legged_msgs::HighState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::unitree_legged_msgs::HighState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::unitree_legged_msgs::HighState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b52a86799f89d67cea890e18e2a7bf68";
  }

  static const char* value(const ::unitree_legged_msgs::HighState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb52a86799f89d67cULL;
  static const uint64_t static_value2 = 0xea890e18e2a7bf68ULL;
};

template<class ContainerAllocator>
struct DataType< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "unitree_legged_msgs/HighState";
  }

  static const char* value(const ::unitree_legged_msgs::HighState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 levelFlag\n"
"uint16 commVersion                  # Old version Aliengo does not have\n"
"uint16 robotID                      # Old version Aliengo does not have\n"
"uint32 SN                           # Old version Aliengo does not have\n"
"uint8 bandWidth                     # Old version Aliengo does not have\n"
"uint8 mode\n"
"float32 progress                    # new on Go1, reserve\n"
"IMU imu\n"
"uint8 gaitType                      # new on Go1, 0.idle  1.trot  2.trot running  3.climb stair\n"
"float32 footRaiseHeight             # (unit: m, default: 0.08m), foot up height while walking\n"
"float32[3] position                 # (unit: m), from own odometry in inertial frame, usually drift\n"
"float32 bodyHeight                  # (unit: m, default: 0.28m)\n"
"float32[3] velocity                 # (unit: m/s), forwardSpeed, sideSpeed, rotateSpeed in body frame\n"
"float32 yawSpeed                    # (unit: rad/s), rotateSpeed in body frame        \n"
"Cartesian[4] footPosition2Body      # foot position relative to body\n"
"Cartesian[4] footSpeed2Body         # foot speed relative to body\n"
"#int8[20] temperature\n"
"BmsState bms\n"
"int16[4] footForce                  # Old version Aliengo is different\n"
"int16[4] footForceEst               # Old version Aliengo does not have\n"
"uint8[40] wirelessRemote\n"
"uint32 reserve                      # Old version Aliengo does not have\n"
"uint32 crc\n"
"================================================================================\n"
"MSG: unitree_legged_msgs/IMU\n"
"float32[4] quaternion\n"
"float32[3] gyroscope\n"
"float32[3] accelerometer\n"
"int8 temperature\n"
"================================================================================\n"
"MSG: unitree_legged_msgs/Cartesian\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: unitree_legged_msgs/BmsState\n"
"uint8 version_h\n"
"uint8 version_l\n"
"uint8 bms_status\n"
"uint8 SOC                  # SOC 0-100%\n"
"int32 current              # mA\n"
"uint16 cycle\n"
"int8[2] BQ_NTC             # x1 degrees centigrade\n"
"int8[2] MCU_NTC            # x1 degrees centigrade\n"
"uint16[10] cell_vol        # cell voltage mV\n"
;
  }

  static const char* value(const ::unitree_legged_msgs::HighState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.levelFlag);
      stream.next(m.commVersion);
      stream.next(m.robotID);
      stream.next(m.SN);
      stream.next(m.bandWidth);
      stream.next(m.mode);
      stream.next(m.progress);
      stream.next(m.imu);
      stream.next(m.gaitType);
      stream.next(m.footRaiseHeight);
      stream.next(m.position);
      stream.next(m.bodyHeight);
      stream.next(m.velocity);
      stream.next(m.yawSpeed);
      stream.next(m.footPosition2Body);
      stream.next(m.footSpeed2Body);
      stream.next(m.bms);
      stream.next(m.footForce);
      stream.next(m.footForceEst);
      stream.next(m.wirelessRemote);
      stream.next(m.reserve);
      stream.next(m.crc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HighState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::unitree_legged_msgs::HighState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::unitree_legged_msgs::HighState_<ContainerAllocator>& v)
  {
    s << indent << "levelFlag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.levelFlag);
    s << indent << "commVersion: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.commVersion);
    s << indent << "robotID: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.robotID);
    s << indent << "SN: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.SN);
    s << indent << "bandWidth: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bandWidth);
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "progress: ";
    Printer<float>::stream(s, indent + "  ", v.progress);
    s << indent << "imu: ";
    s << std::endl;
    Printer< ::unitree_legged_msgs::IMU_<ContainerAllocator> >::stream(s, indent + "  ", v.imu);
    s << indent << "gaitType: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gaitType);
    s << indent << "footRaiseHeight: ";
    Printer<float>::stream(s, indent + "  ", v.footRaiseHeight);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "bodyHeight: ";
    Printer<float>::stream(s, indent + "  ", v.bodyHeight);
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "yawSpeed: ";
    Printer<float>::stream(s, indent + "  ", v.yawSpeed);
    s << indent << "footPosition2Body[]" << std::endl;
    for (size_t i = 0; i < v.footPosition2Body.size(); ++i)
    {
      s << indent << "  footPosition2Body[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::unitree_legged_msgs::Cartesian_<ContainerAllocator> >::stream(s, indent + "    ", v.footPosition2Body[i]);
    }
    s << indent << "footSpeed2Body[]" << std::endl;
    for (size_t i = 0; i < v.footSpeed2Body.size(); ++i)
    {
      s << indent << "  footSpeed2Body[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::unitree_legged_msgs::Cartesian_<ContainerAllocator> >::stream(s, indent + "    ", v.footSpeed2Body[i]);
    }
    s << indent << "bms: ";
    s << std::endl;
    Printer< ::unitree_legged_msgs::BmsState_<ContainerAllocator> >::stream(s, indent + "  ", v.bms);
    s << indent << "footForce[]" << std::endl;
    for (size_t i = 0; i < v.footForce.size(); ++i)
    {
      s << indent << "  footForce[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.footForce[i]);
    }
    s << indent << "footForceEst[]" << std::endl;
    for (size_t i = 0; i < v.footForceEst.size(); ++i)
    {
      s << indent << "  footForceEst[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.footForceEst[i]);
    }
    s << indent << "wirelessRemote[]" << std::endl;
    for (size_t i = 0; i < v.wirelessRemote.size(); ++i)
    {
      s << indent << "  wirelessRemote[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.wirelessRemote[i]);
    }
    s << indent << "reserve: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reserve);
    s << indent << "crc: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.crc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UNITREE_LEGGED_MSGS_MESSAGE_HIGHSTATE_H
