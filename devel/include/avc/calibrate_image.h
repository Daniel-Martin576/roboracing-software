// Generated by gencpp from file avc/calibrate_image.msg
// DO NOT EDIT!


#ifndef AVC_MESSAGE_CALIBRATE_IMAGE_H
#define AVC_MESSAGE_CALIBRATE_IMAGE_H

#include <ros/service_traits.h>


#include <avc/calibrate_imageRequest.h>
#include <avc/calibrate_imageResponse.h>


namespace avc
{

struct calibrate_image
{

typedef calibrate_imageRequest Request;
typedef calibrate_imageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct calibrate_image
} // namespace avc


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::avc::calibrate_image > {
  static const char* value()
  {
    return "40ee6ef1a25dadfb2e938d870cf568c0";
  }

  static const char* value(const ::avc::calibrate_image&) { return value(); }
};

template<>
struct DataType< ::avc::calibrate_image > {
  static const char* value()
  {
    return "avc/calibrate_image";
  }

  static const char* value(const ::avc::calibrate_image&) { return value(); }
};


// service_traits::MD5Sum< ::avc::calibrate_imageRequest> should match 
// service_traits::MD5Sum< ::avc::calibrate_image > 
template<>
struct MD5Sum< ::avc::calibrate_imageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::avc::calibrate_image >::value();
  }
  static const char* value(const ::avc::calibrate_imageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::avc::calibrate_imageRequest> should match 
// service_traits::DataType< ::avc::calibrate_image > 
template<>
struct DataType< ::avc::calibrate_imageRequest>
{
  static const char* value()
  {
    return DataType< ::avc::calibrate_image >::value();
  }
  static const char* value(const ::avc::calibrate_imageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::avc::calibrate_imageResponse> should match 
// service_traits::MD5Sum< ::avc::calibrate_image > 
template<>
struct MD5Sum< ::avc::calibrate_imageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::avc::calibrate_image >::value();
  }
  static const char* value(const ::avc::calibrate_imageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::avc::calibrate_imageResponse> should match 
// service_traits::DataType< ::avc::calibrate_image > 
template<>
struct DataType< ::avc::calibrate_imageResponse>
{
  static const char* value()
  {
    return DataType< ::avc::calibrate_image >::value();
  }
  static const char* value(const ::avc::calibrate_imageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AVC_MESSAGE_CALIBRATE_IMAGE_H
