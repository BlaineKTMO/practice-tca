// Generated by gencpp from file tca_turtlebot/IwptServiceRequest.msg
// DO NOT EDIT!


#ifndef TCA_TURTLEBOT_MESSAGE_IWPTSERVICEREQUEST_H
#define TCA_TURTLEBOT_MESSAGE_IWPTSERVICEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>

namespace tca_turtlebot
{
template <class ContainerAllocator>
struct IwptServiceRequest_
{
  typedef IwptServiceRequest_<ContainerAllocator> Type;

  IwptServiceRequest_()
    : gwpt()  {
    }
  IwptServiceRequest_(const ContainerAllocator& _alloc)
    : gwpt(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _gwpt_type;
  _gwpt_type gwpt;





  typedef boost::shared_ptr< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct IwptServiceRequest_

typedef ::tca_turtlebot::IwptServiceRequest_<std::allocator<void> > IwptServiceRequest;

typedef boost::shared_ptr< ::tca_turtlebot::IwptServiceRequest > IwptServiceRequestPtr;
typedef boost::shared_ptr< ::tca_turtlebot::IwptServiceRequest const> IwptServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator1> & lhs, const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.gwpt == rhs.gwpt;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator1> & lhs, const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tca_turtlebot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f08aad0ca3c6c2164dd30addb8ac107";
  }

  static const char* value(const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f08aad0ca3c6c21ULL;
  static const uint64_t static_value2 = 0x64dd30addb8ac107ULL;
};

template<class ContainerAllocator>
struct DataType< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tca_turtlebot/IwptServiceRequest";
  }

  static const char* value(const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PoseStamped gwpt\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gwpt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IwptServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tca_turtlebot::IwptServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "gwpt: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.gwpt);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCA_TURTLEBOT_MESSAGE_IWPTSERVICEREQUEST_H
