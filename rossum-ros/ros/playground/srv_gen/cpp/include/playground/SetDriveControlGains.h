/* Auto-generated by genmsg_cpp for file /home/administrator/myros/drh-robotics-ros/79/ros/playground/srv/SetDriveControlGains.srv */
#ifndef PLAYGROUND_SERVICE_SETDRIVECONTROLGAINS_H
#define PLAYGROUND_SERVICE_SETDRIVECONTROLGAINS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace playground
{
template <class ContainerAllocator>
struct SetDriveControlGainsRequest_ {
  typedef SetDriveControlGainsRequest_<ContainerAllocator> Type;

  SetDriveControlGainsRequest_()
  : kp(0.0)
  , ki(0.0)
  , kd(0.0)
  {
  }

  SetDriveControlGainsRequest_(const ContainerAllocator& _alloc)
  : kp(0.0)
  , ki(0.0)
  , kd(0.0)
  {
  }

  typedef float _kp_type;
  float kp;

  typedef float _ki_type;
  float ki;

  typedef float _kd_type;
  float kd;


  typedef boost::shared_ptr< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::playground::SetDriveControlGainsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetDriveControlGainsRequest
typedef  ::playground::SetDriveControlGainsRequest_<std::allocator<void> > SetDriveControlGainsRequest;

typedef boost::shared_ptr< ::playground::SetDriveControlGainsRequest> SetDriveControlGainsRequestPtr;
typedef boost::shared_ptr< ::playground::SetDriveControlGainsRequest const> SetDriveControlGainsRequestConstPtr;


template <class ContainerAllocator>
struct SetDriveControlGainsResponse_ {
  typedef SetDriveControlGainsResponse_<ContainerAllocator> Type;

  SetDriveControlGainsResponse_()
  {
  }

  SetDriveControlGainsResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::playground::SetDriveControlGainsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetDriveControlGainsResponse
typedef  ::playground::SetDriveControlGainsResponse_<std::allocator<void> > SetDriveControlGainsResponse;

typedef boost::shared_ptr< ::playground::SetDriveControlGainsResponse> SetDriveControlGainsResponsePtr;
typedef boost::shared_ptr< ::playground::SetDriveControlGainsResponse const> SetDriveControlGainsResponseConstPtr;

struct SetDriveControlGains
{

typedef SetDriveControlGainsRequest Request;
typedef SetDriveControlGainsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetDriveControlGains
} // namespace playground

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::playground::SetDriveControlGainsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "08d0ca1f582560895ecba909de1d88ec";
  }

  static const char* value(const  ::playground::SetDriveControlGainsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x08d0ca1f58256089ULL;
  static const uint64_t static_value2 = 0x5ecba909de1d88ecULL;
};

template<class ContainerAllocator>
struct DataType< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "playground/SetDriveControlGainsRequest";
  }

  static const char* value(const  ::playground::SetDriveControlGainsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 kp\n\
float32 ki\n\
float32 kd\n\
\n\
";
  }

  static const char* value(const  ::playground::SetDriveControlGainsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::playground::SetDriveControlGainsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::playground::SetDriveControlGainsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "playground/SetDriveControlGainsResponse";
  }

  static const char* value(const  ::playground::SetDriveControlGainsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::playground::SetDriveControlGainsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::playground::SetDriveControlGainsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.kp);
    stream.next(m.ki);
    stream.next(m.kd);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetDriveControlGainsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::playground::SetDriveControlGainsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetDriveControlGainsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<playground::SetDriveControlGains> {
  static const char* value() 
  {
    return "08d0ca1f582560895ecba909de1d88ec";
  }

  static const char* value(const playground::SetDriveControlGains&) { return value(); } 
};

template<>
struct DataType<playground::SetDriveControlGains> {
  static const char* value() 
  {
    return "playground/SetDriveControlGains";
  }

  static const char* value(const playground::SetDriveControlGains&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<playground::SetDriveControlGainsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "08d0ca1f582560895ecba909de1d88ec";
  }

  static const char* value(const playground::SetDriveControlGainsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<playground::SetDriveControlGainsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "playground/SetDriveControlGains";
  }

  static const char* value(const playground::SetDriveControlGainsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<playground::SetDriveControlGainsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "08d0ca1f582560895ecba909de1d88ec";
  }

  static const char* value(const playground::SetDriveControlGainsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<playground::SetDriveControlGainsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "playground/SetDriveControlGains";
  }

  static const char* value(const playground::SetDriveControlGainsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PLAYGROUND_SERVICE_SETDRIVECONTROLGAINS_H

