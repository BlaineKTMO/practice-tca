// Generated by gencpp from file tca_turtlebot/IwptService.msg
// DO NOT EDIT!


#ifndef TCA_TURTLEBOT_MESSAGE_IWPTSERVICE_H
#define TCA_TURTLEBOT_MESSAGE_IWPTSERVICE_H

#include <ros/service_traits.h>


#include <tca_turtlebot/IwptServiceRequest.h>
#include <tca_turtlebot/IwptServiceResponse.h>


namespace tca_turtlebot
{

struct IwptService
{

typedef IwptServiceRequest Request;
typedef IwptServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct IwptService
} // namespace tca_turtlebot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tca_turtlebot::IwptService > {
  static const char* value()
  {
    return "8c0abd7c3349327ff94f274ae6418502";
  }

  static const char* value(const ::tca_turtlebot::IwptService&) { return value(); }
};

template<>
struct DataType< ::tca_turtlebot::IwptService > {
  static const char* value()
  {
    return "tca_turtlebot/IwptService";
  }

  static const char* value(const ::tca_turtlebot::IwptService&) { return value(); }
};


// service_traits::MD5Sum< ::tca_turtlebot::IwptServiceRequest> should match
// service_traits::MD5Sum< ::tca_turtlebot::IwptService >
template<>
struct MD5Sum< ::tca_turtlebot::IwptServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tca_turtlebot::IwptService >::value();
  }
  static const char* value(const ::tca_turtlebot::IwptServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tca_turtlebot::IwptServiceRequest> should match
// service_traits::DataType< ::tca_turtlebot::IwptService >
template<>
struct DataType< ::tca_turtlebot::IwptServiceRequest>
{
  static const char* value()
  {
    return DataType< ::tca_turtlebot::IwptService >::value();
  }
  static const char* value(const ::tca_turtlebot::IwptServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tca_turtlebot::IwptServiceResponse> should match
// service_traits::MD5Sum< ::tca_turtlebot::IwptService >
template<>
struct MD5Sum< ::tca_turtlebot::IwptServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tca_turtlebot::IwptService >::value();
  }
  static const char* value(const ::tca_turtlebot::IwptServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tca_turtlebot::IwptServiceResponse> should match
// service_traits::DataType< ::tca_turtlebot::IwptService >
template<>
struct DataType< ::tca_turtlebot::IwptServiceResponse>
{
  static const char* value()
  {
    return DataType< ::tca_turtlebot::IwptService >::value();
  }
  static const char* value(const ::tca_turtlebot::IwptServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCA_TURTLEBOT_MESSAGE_IWPTSERVICE_H
