// Generated by gencpp from file tca_turtlebot/GwptServiceResponse.msg
// DO NOT EDIT!


#ifndef TCA_TURTLEBOT_MESSAGE_GWPTSERVICERESPONSE_H
#define TCA_TURTLEBOT_MESSAGE_GWPTSERVICERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tca_turtlebot
{
template <class ContainerAllocator>
struct GwptServiceResponse_
{
  typedef GwptServiceResponse_<ContainerAllocator> Type;

  GwptServiceResponse_()
    : success(false)  {
    }
  GwptServiceResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GwptServiceResponse_

typedef ::tca_turtlebot::GwptServiceResponse_<std::allocator<void> > GwptServiceResponse;

typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceResponse > GwptServiceResponsePtr;
typedef boost::shared_ptr< ::tca_turtlebot::GwptServiceResponse const> GwptServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator1> & lhs, const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator1> & lhs, const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tca_turtlebot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tca_turtlebot/GwptServiceResponse";
  }

  static const char* value(const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
;
  }

  static const char* value(const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GwptServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tca_turtlebot::GwptServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCA_TURTLEBOT_MESSAGE_GWPTSERVICERESPONSE_H
