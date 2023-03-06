// Generated by gencpp from file tca_turtlebot/NavToGwptFeedback.msg
// DO NOT EDIT!


#ifndef TCA_TURTLEBOT_MESSAGE_NAVTOGWPTFEEDBACK_H
#define TCA_TURTLEBOT_MESSAGE_NAVTOGWPTFEEDBACK_H


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
struct NavToGwptFeedback_
{
  typedef NavToGwptFeedback_<ContainerAllocator> Type;

  NavToGwptFeedback_()
    : progress(0.0)  {
    }
  NavToGwptFeedback_(const ContainerAllocator& _alloc)
    : progress(0.0)  {
  (void)_alloc;
    }



   typedef float _progress_type;
  _progress_type progress;





  typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct NavToGwptFeedback_

typedef ::tca_turtlebot::NavToGwptFeedback_<std::allocator<void> > NavToGwptFeedback;

typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptFeedback > NavToGwptFeedbackPtr;
typedef boost::shared_ptr< ::tca_turtlebot::NavToGwptFeedback const> NavToGwptFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator1> & lhs, const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.progress == rhs.progress;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator1> & lhs, const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tca_turtlebot

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "70805092fd20e110765c7b79e8efb737";
  }

  static const char* value(const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x70805092fd20e110ULL;
  static const uint64_t static_value2 = 0x765c7b79e8efb737ULL;
};

template<class ContainerAllocator>
struct DataType< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tca_turtlebot/NavToGwptFeedback";
  }

  static const char* value(const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Progress\n"
"float32 progress\n"
;
  }

  static const char* value(const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.progress);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavToGwptFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tca_turtlebot::NavToGwptFeedback_<ContainerAllocator>& v)
  {
    s << indent << "progress: ";
    Printer<float>::stream(s, indent + "  ", v.progress);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCA_TURTLEBOT_MESSAGE_NAVTOGWPTFEEDBACK_H
