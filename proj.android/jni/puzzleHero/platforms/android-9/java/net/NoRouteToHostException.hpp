/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.NoRouteToHostException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_NOROUTETOHOSTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_NOROUTETOHOSTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class SocketException; } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/IOException.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/net/SocketException.hpp>


namespace j2cpp {

namespace java { namespace net {

	class NoRouteToHostException;
	class NoRouteToHostException
		: public object<NoRouteToHostException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NoRouteToHostException(jobject jobj)
		: object<NoRouteToHostException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::net::SocketException>() const;
		operator local_ref<java::io::IOException>() const;
		operator local_ref<java::io::Serializable>() const;


		NoRouteToHostException();
		NoRouteToHostException(local_ref< java::lang::String > const&);
	}; //class NoRouteToHostException

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_NOROUTETOHOSTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_NOROUTETOHOSTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_NOROUTETOHOSTEXCEPTION_HPP_IMPL

namespace j2cpp {



java::net::NoRouteToHostException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::net::NoRouteToHostException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::net::NoRouteToHostException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::net::NoRouteToHostException::operator local_ref<java::net::SocketException>() const
{
	return local_ref<java::net::SocketException>(get_jobject());
}

java::net::NoRouteToHostException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}

java::net::NoRouteToHostException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::net::NoRouteToHostException::NoRouteToHostException()
: object<java::net::NoRouteToHostException>(
	call_new_object<
		java::net::NoRouteToHostException::J2CPP_CLASS_NAME,
		java::net::NoRouteToHostException::J2CPP_METHOD_NAME(0),
		java::net::NoRouteToHostException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::net::NoRouteToHostException::NoRouteToHostException(local_ref< java::lang::String > const &a0)
: object<java::net::NoRouteToHostException>(
	call_new_object<
		java::net::NoRouteToHostException::J2CPP_CLASS_NAME,
		java::net::NoRouteToHostException::J2CPP_METHOD_NAME(1),
		java::net::NoRouteToHostException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::net::NoRouteToHostException,"java/net/NoRouteToHostException")
J2CPP_DEFINE_METHOD(java::net::NoRouteToHostException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::NoRouteToHostException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_NOROUTETOHOSTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION