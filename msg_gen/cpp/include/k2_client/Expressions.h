/* Auto-generated by genmsg_cpp for file /home/prdemo/ros/local/k2_client/msg/Expressions.msg */
#ifndef K2_CLIENT_MESSAGE_EXPRESSIONS_H
#define K2_CLIENT_MESSAGE_EXPRESSIONS_H
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


namespace k2_client
{
template <class ContainerAllocator>
struct Expressions_ {
  typedef Expressions_<ContainerAllocator> Type;

  Expressions_()
  : neutral(false)
  , happy(false)
  {
  }

  Expressions_(const ContainerAllocator& _alloc)
  : neutral(false)
  , happy(false)
  {
  }

  typedef uint8_t _neutral_type;
  uint8_t neutral;

  typedef uint8_t _happy_type;
  uint8_t happy;


  typedef boost::shared_ptr< ::k2_client::Expressions_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::k2_client::Expressions_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Expressions
typedef  ::k2_client::Expressions_<std::allocator<void> > Expressions;

typedef boost::shared_ptr< ::k2_client::Expressions> ExpressionsPtr;
typedef boost::shared_ptr< ::k2_client::Expressions const> ExpressionsConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::k2_client::Expressions_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::k2_client::Expressions_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace k2_client

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::k2_client::Expressions_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::k2_client::Expressions_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::k2_client::Expressions_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5cb5b766a73d02643dd57183072cb85d";
  }

  static const char* value(const  ::k2_client::Expressions_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5cb5b766a73d0264ULL;
  static const uint64_t static_value2 = 0x3dd57183072cb85dULL;
};

template<class ContainerAllocator>
struct DataType< ::k2_client::Expressions_<ContainerAllocator> > {
  static const char* value() 
  {
    return "k2_client/Expressions";
  }

  static const char* value(const  ::k2_client::Expressions_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::k2_client::Expressions_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool neutral\n\
bool happy\n\
";
  }

  static const char* value(const  ::k2_client::Expressions_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::k2_client::Expressions_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::k2_client::Expressions_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.neutral);
    stream.next(m.happy);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Expressions_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::k2_client::Expressions_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::k2_client::Expressions_<ContainerAllocator> & v) 
  {
    s << indent << "neutral: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.neutral);
    s << indent << "happy: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.happy);
  }
};


} // namespace message_operations
} // namespace ros

#endif // K2_CLIENT_MESSAGE_EXPRESSIONS_H

