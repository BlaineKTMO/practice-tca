// Generated by gencpp from file tca_turtlebot/GwptServiceRequest.msg
// DO NOT EDIT!


#ifndef TCA_TURTLEBOT_MESSAGE_GWPTSERVICEREQUEST_H
#define TCA_TURTLEBOT_MESSAGE_GWPTSERVICEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace tca_turtlebot
{
template <class ContainerAllocator>
struct GwptServiceRequest_
{
  typedef GwptServiceRequest_<ContainerAllocator> Type;

  GwptServiceRequest_()
    : point()  {
    }
  GwptServiceRequest_(const ContainerAllocator& _alloc)
    : point(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _point_type;
  _point_type point;





  typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GwptServiceRequest_

typedef ::tca_turtlebot::GwptServiceRequest_<std::allocator<void> > GwptServiceRequest;

typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceRequest > GwptServiceRequestPtr;
typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceRequest const> GwptServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator1> & lhs, const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.point == rhs.point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator1> & lhs, const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tca_turtlebot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a7c84ff13976aa04656e56e300124444";
  }

  static const char* value(const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa7c84ff13976aa04ULL;
  static const uint64_t static_value2 = 0x656e56e300124444ULL;
};

template<class ContainerAllocator>
struct DataType< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tca_turtlebot/GwptServiceRequest";
  }

  static const char* value(const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point point\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GwptServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tca_turtlebot::GwptServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCA_TURTLEBOT_MESSAGE_GWPTSERVICEREQUEST_H