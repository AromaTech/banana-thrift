/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BananaService_TYPES_H
#define BananaService_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Banana_types.h"
#include "Endpoint_types.h"
#include "Exceptions_types.h"


namespace tech { namespace aroma { namespace banana { namespace thrift { namespace service {

typedef int32_t int;

typedef int64_t long;

typedef int64_t timestamp;

typedef class  ::tech::aroma::banana::thrift::Dimension Dimension;

typedef class  ::tech::aroma::banana::thrift::Image Image;

typedef class  ::tech::aroma::banana::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::tech::aroma::banana::thrift::exceptions::InvalidCredentialsException InvalidCredentialsException;

typedef class  ::tech::aroma::banana::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::tech::aroma::banana::thrift::exceptions::ServiceDoesNotExistException ServiceDoesNotExistException;

class ProvisionServiceRequest;

class ProvisionServiceResponse;

class SubscribeToServiceRequest;

class SubscribeToServiceResponse;

class RegisterHealthCheckRequest;

class RegisterHealthCheckResponse;

typedef struct _ProvisionServiceRequest__isset {
  _ProvisionServiceRequest__isset() : token(false), serviceName(false), programmingLanguage(false), organization(false), icon(false) {}
  bool token :1;
  bool serviceName :1;
  bool programmingLanguage :1;
  bool organization :1;
  bool icon :1;
} _ProvisionServiceRequest__isset;

class ProvisionServiceRequest {
 public:

  ProvisionServiceRequest(const ProvisionServiceRequest&);
  ProvisionServiceRequest& operator=(const ProvisionServiceRequest&);
  ProvisionServiceRequest() : token(), serviceName(), programmingLanguage(), organization() {
  }

  virtual ~ProvisionServiceRequest() throw();
  std::string token;
  std::string serviceName;
  std::string programmingLanguage;
  std::string organization;
  Image icon;

  _ProvisionServiceRequest__isset __isset;

  void __set_token(const std::string& val);

  void __set_serviceName(const std::string& val);

  void __set_programmingLanguage(const std::string& val);

  void __set_organization(const std::string& val);

  void __set_icon(const Image& val);

  bool operator == (const ProvisionServiceRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (!(serviceName == rhs.serviceName))
      return false;
    if (__isset.programmingLanguage != rhs.__isset.programmingLanguage)
      return false;
    else if (__isset.programmingLanguage && !(programmingLanguage == rhs.programmingLanguage))
      return false;
    if (!(organization == rhs.organization))
      return false;
    if (__isset.icon != rhs.__isset.icon)
      return false;
    else if (__isset.icon && !(icon == rhs.icon))
      return false;
    return true;
  }
  bool operator != (const ProvisionServiceRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProvisionServiceRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ProvisionServiceRequest &a, ProvisionServiceRequest &b);

inline std::ostream& operator<<(std::ostream& out, const ProvisionServiceRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ProvisionServiceResponse__isset {
  _ProvisionServiceResponse__isset() : bananaToken(false), serviceName(false) {}
  bool bananaToken :1;
  bool serviceName :1;
} _ProvisionServiceResponse__isset;

class ProvisionServiceResponse {
 public:

  ProvisionServiceResponse(const ProvisionServiceResponse&);
  ProvisionServiceResponse& operator=(const ProvisionServiceResponse&);
  ProvisionServiceResponse() : bananaToken(), serviceName() {
  }

  virtual ~ProvisionServiceResponse() throw();
  std::string bananaToken;
  std::string serviceName;

  _ProvisionServiceResponse__isset __isset;

  void __set_bananaToken(const std::string& val);

  void __set_serviceName(const std::string& val);

  bool operator == (const ProvisionServiceResponse & rhs) const
  {
    if (!(bananaToken == rhs.bananaToken))
      return false;
    if (!(serviceName == rhs.serviceName))
      return false;
    return true;
  }
  bool operator != (const ProvisionServiceResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProvisionServiceResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ProvisionServiceResponse &a, ProvisionServiceResponse &b);

inline std::ostream& operator<<(std::ostream& out, const ProvisionServiceResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SubscribeToServiceRequest__isset {
  _SubscribeToServiceRequest__isset() : token(false), serviceName(false), organization(false) {}
  bool token :1;
  bool serviceName :1;
  bool organization :1;
} _SubscribeToServiceRequest__isset;

class SubscribeToServiceRequest {
 public:

  SubscribeToServiceRequest(const SubscribeToServiceRequest&);
  SubscribeToServiceRequest& operator=(const SubscribeToServiceRequest&);
  SubscribeToServiceRequest() : token(), serviceName(), organization() {
  }

  virtual ~SubscribeToServiceRequest() throw();
  std::string token;
  std::string serviceName;
  std::string organization;

  _SubscribeToServiceRequest__isset __isset;

  void __set_token(const std::string& val);

  void __set_serviceName(const std::string& val);

  void __set_organization(const std::string& val);

  bool operator == (const SubscribeToServiceRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (!(serviceName == rhs.serviceName))
      return false;
    if (__isset.organization != rhs.__isset.organization)
      return false;
    else if (__isset.organization && !(organization == rhs.organization))
      return false;
    return true;
  }
  bool operator != (const SubscribeToServiceRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SubscribeToServiceRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SubscribeToServiceRequest &a, SubscribeToServiceRequest &b);

inline std::ostream& operator<<(std::ostream& out, const SubscribeToServiceRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _SubscribeToServiceResponse__isset {
  _SubscribeToServiceResponse__isset() : message(false) {}
  bool message :1;
} _SubscribeToServiceResponse__isset;

class SubscribeToServiceResponse {
 public:

  SubscribeToServiceResponse(const SubscribeToServiceResponse&);
  SubscribeToServiceResponse& operator=(const SubscribeToServiceResponse&);
  SubscribeToServiceResponse() : message() {
  }

  virtual ~SubscribeToServiceResponse() throw();
  std::string message;

  _SubscribeToServiceResponse__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const SubscribeToServiceResponse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const SubscribeToServiceResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SubscribeToServiceResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SubscribeToServiceResponse &a, SubscribeToServiceResponse &b);

inline std::ostream& operator<<(std::ostream& out, const SubscribeToServiceResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _RegisterHealthCheckRequest__isset {
  _RegisterHealthCheckRequest__isset() : endpoint(false) {}
  bool endpoint :1;
} _RegisterHealthCheckRequest__isset;

class RegisterHealthCheckRequest {
 public:

  RegisterHealthCheckRequest(const RegisterHealthCheckRequest&);
  RegisterHealthCheckRequest& operator=(const RegisterHealthCheckRequest&);
  RegisterHealthCheckRequest() {
  }

  virtual ~RegisterHealthCheckRequest() throw();
   ::tech::aroma::banana::thrift::endpoint::Endpoint endpoint;

  _RegisterHealthCheckRequest__isset __isset;

  void __set_endpoint(const  ::tech::aroma::banana::thrift::endpoint::Endpoint& val);

  bool operator == (const RegisterHealthCheckRequest & rhs) const
  {
    if (!(endpoint == rhs.endpoint))
      return false;
    return true;
  }
  bool operator != (const RegisterHealthCheckRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RegisterHealthCheckRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RegisterHealthCheckRequest &a, RegisterHealthCheckRequest &b);

inline std::ostream& operator<<(std::ostream& out, const RegisterHealthCheckRequest& obj)
{
  obj.printTo(out);
  return out;
}


class RegisterHealthCheckResponse {
 public:

  RegisterHealthCheckResponse(const RegisterHealthCheckResponse&);
  RegisterHealthCheckResponse& operator=(const RegisterHealthCheckResponse&);
  RegisterHealthCheckResponse() {
  }

  virtual ~RegisterHealthCheckResponse() throw();

  bool operator == (const RegisterHealthCheckResponse & /* rhs */) const
  {
    return true;
  }
  bool operator != (const RegisterHealthCheckResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RegisterHealthCheckResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RegisterHealthCheckResponse &a, RegisterHealthCheckResponse &b);

inline std::ostream& operator<<(std::ostream& out, const RegisterHealthCheckResponse& obj)
{
  obj.printTo(out);
  return out;
}

}}}}} // namespace

#endif
