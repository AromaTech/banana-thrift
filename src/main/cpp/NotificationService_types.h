/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef NotificationService_TYPES_H
#define NotificationService_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>
#include "Authentication_types.h"
#include "Aroma_types.h"
#include "Channels_types.h"
#include "Endpoint_types.h"
#include "Events_types.h"
#include "Exceptions_types.h"


namespace aroma { namespace thrift { namespace notification { namespace service {

typedef  ::tech::aroma::thrift::int int;

typedef  ::tech::aroma::thrift::long long;

typedef  ::tech::aroma::thrift::timestamp timestamp;

typedef  ::tech::aroma::thrift::uuid uuid;

typedef class  ::aroma::thrift::authentication::AuthenticationToken AuthenticationToken;

typedef class  ::tech::aroma::thrift::Application Application;

typedef  ::tech::aroma::thrift::Urgency::type Urgency;

typedef class  ::tech::aroma::thrift::User User;

typedef class  ::aroma::thrift::channels::AromaChannel AromaChannel;

typedef class  ::aroma::thrift::events::Event Event;

typedef class  ::aroma::thrift::exceptions::AccountAlreadyExistsException AccountAlreadyExistsException;

typedef class  ::aroma::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::aroma::thrift::exceptions::InvalidCredentialsException InvalidCredentialsException;

typedef class  ::aroma::thrift::exceptions::InvalidTokenException InvalidTokenException;

typedef class  ::aroma::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::aroma::thrift::exceptions::ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException;

typedef class  ::aroma::thrift::exceptions::ApplicationDoesNotExistException ApplicationDoesNotExistException;

typedef class  ::aroma::thrift::exceptions::CustomChannelUnreachableException CustomChannelUnreachableException;

typedef class  ::aroma::thrift::exceptions::ChannelDoesNotExistException ChannelDoesNotExistException;

typedef class  ::aroma::thrift::exceptions::UnauthorizedException UnauthorizedException;

class SendNotificationRequest;

class SendNotificationResponse;

typedef struct _SendNotificationRequest__isset {
  _SendNotificationRequest__isset() : token(false), event(false), channels(false) {}
  bool token :1;
  bool event :1;
  bool channels :1;
} _SendNotificationRequest__isset;

class SendNotificationRequest : public virtual ::apache::thrift::TBase {
 public:

  SendNotificationRequest(const SendNotificationRequest&);
  SendNotificationRequest& operator=(const SendNotificationRequest&);
  SendNotificationRequest() {
  }

  virtual ~SendNotificationRequest() throw();
  AuthenticationToken token;
  Event event;
  std::map<AromaChannel, User>  channels;

  _SendNotificationRequest__isset __isset;

  void __set_token(const AuthenticationToken& val);

  void __set_event(const Event& val);

  void __set_channels(const std::map<AromaChannel, User> & val);

  bool operator == (const SendNotificationRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    if (!(event == rhs.event))
      return false;
    if (!(channels == rhs.channels))
      return false;
    return true;
  }
  bool operator != (const SendNotificationRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendNotificationRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendNotificationRequest &a, SendNotificationRequest &b);

std::ostream& operator<<(std::ostream& out, const SendNotificationRequest& obj);

typedef struct _SendNotificationResponse__isset {
  _SendNotificationResponse__isset() : notificationId(false) {}
  bool notificationId :1;
} _SendNotificationResponse__isset;

class SendNotificationResponse : public virtual ::apache::thrift::TBase {
 public:

  SendNotificationResponse(const SendNotificationResponse&);
  SendNotificationResponse& operator=(const SendNotificationResponse&);
  SendNotificationResponse() : notificationId() {
  }

  virtual ~SendNotificationResponse() throw();
  uuid notificationId;

  _SendNotificationResponse__isset __isset;

  void __set_notificationId(const uuid& val);

  bool operator == (const SendNotificationResponse & rhs) const
  {
    if (__isset.notificationId != rhs.__isset.notificationId)
      return false;
    else if (__isset.notificationId && !(notificationId == rhs.notificationId))
      return false;
    return true;
  }
  bool operator != (const SendNotificationResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SendNotificationResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(SendNotificationResponse &a, SendNotificationResponse &b);

std::ostream& operator<<(std::ostream& out, const SendNotificationResponse& obj);

}}}} // namespace

#endif
