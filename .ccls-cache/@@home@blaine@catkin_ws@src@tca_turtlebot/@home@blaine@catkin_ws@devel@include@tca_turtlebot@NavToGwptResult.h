// Generated by gencpp from file tca_turtlebot/NavToGwptResult.msg
// DO NOT EDIT!


#ifndef TCA_TURTLEBOT_MESSAGE_NAVTOGWPTRESULT_H
#define TCA_TURTLEBOT_MESSAGE_NAVTOGWPTRESULT_H


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
struct NavToGwptResult_
{
  typedef NavToGwptResult_<ContainerAllocator> Type;

  NavToGwptResult_()
    : res(false)  {
    }
  NavToGwptResult_(const ContainerAllocator& _alloc)
    : res(false)  {
  (void)_alloc;
    }



   typedef uint8_t _res_type;
  _res_type res;





  typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> const> ConstPtr;

}; // struct NavToGwptResult_

typedef ::tca_turtlebot::NavToGwptResult_<std::allocator<void> > NavToGwptResult;

typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptResult > NavToGwptResultPtr;
typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptResult const> NavToGwptResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator1> & lhs, const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator2> & rhs)
{
  return lhs.res == rhs.res;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator1> & lhs, const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tca_turtlebot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e27848a10f8e7e4030443887dfea101b";
  }

  static const char* value(const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe27848a10f8e7e40ULL;
  static const uint64_t static_value2 = 0x30443887dfea101bULL;
};

template<class ContainerAllocator>
struct DataType< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tca_turtlebot/NavToGwptResult";
  }

  static const char* value(const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Result\n"
"bool res\n"
;
  }

  static const char* value(const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.res);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavToGwptResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tca_turtlebot::NavToGwptResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tca_turtlebot::NavToGwptResult_<ContainerAllocator>& v)
  {
    s << indent << "res: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.res);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCA_TURTLEBOT_MESSAGE_NAVTOGWPTRESULT_H
