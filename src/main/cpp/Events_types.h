/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Events_TYPES_H
#define Events_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Authentication_types.h"
#include "Banana_types.h"


namespace aroma { namespace banana { namespace thrift { namespace events {

typedef class  ::aroma::banana::thrift::authentication::ApplicationToken ApplicationToken;

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

typedef class  ::aroma::banana::thrift::User User;

typedef class  ::aroma::banana::thrift::Application Application;

class ApplicationTokenRenewed;

class ApplicationTokenRegenerated;

class ApplicationSentMessage;

class HealthCheckFailed;

class HealthCheckBackToNormal;

class OwnerApprovedRequest;

class GeneralEvent;

class EventType;

class Event;

typedef struct _ApplicationTokenRenewed__isset {
  _ApplicationTokenRenewed__isset() : message(true), user(false), applicationToken(false), applicationId(false), applicationName(false) {}
  bool message :1;
  bool user :1;
  bool applicationToken :1;
  bool applicationId :1;
  bool applicationName :1;
} _ApplicationTokenRenewed__isset;

class ApplicationTokenRenewed {
 public:

  ApplicationTokenRenewed(const ApplicationTokenRenewed&);
  ApplicationTokenRenewed& operator=(const ApplicationTokenRenewed&);
  ApplicationTokenRenewed() : message("Application Token has been renewed"), applicationId(), applicationName() {
  }

  virtual ~ApplicationTokenRenewed() throw();
  std::string message;
  User user;
  ApplicationToken applicationToken;
  std::string applicationId;
  std::string applicationName;

  _ApplicationTokenRenewed__isset __isset;

  void __set_message(const std::string& val);

  void __set_user(const User& val);

  void __set_applicationToken(const ApplicationToken& val);

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  bool operator == (const ApplicationTokenRenewed & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    if (!(user == rhs.user))
      return false;
    if (__isset.applicationToken != rhs.__isset.applicationToken)
      return false;
    else if (__isset.applicationToken && !(applicationToken == rhs.applicationToken))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    return true;
  }
  bool operator != (const ApplicationTokenRenewed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationTokenRenewed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationTokenRenewed &a, ApplicationTokenRenewed &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationTokenRenewed& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationTokenRegenerated__isset {
  _ApplicationTokenRegenerated__isset() : message(true), user(false), applicationToken(false), applicationId(false), applicationName(false) {}
  bool message :1;
  bool user :1;
  bool applicationToken :1;
  bool applicationId :1;
  bool applicationName :1;
} _ApplicationTokenRegenerated__isset;

class ApplicationTokenRegenerated {
 public:

  ApplicationTokenRegenerated(const ApplicationTokenRegenerated&);
  ApplicationTokenRegenerated& operator=(const ApplicationTokenRegenerated&);
  ApplicationTokenRegenerated() : message("Application Token has been re-created"), applicationId(), applicationName() {
  }

  virtual ~ApplicationTokenRegenerated() throw();
  std::string message;
  User user;
  ApplicationToken applicationToken;
  std::string applicationId;
  std::string applicationName;

  _ApplicationTokenRegenerated__isset __isset;

  void __set_message(const std::string& val);

  void __set_user(const User& val);

  void __set_applicationToken(const ApplicationToken& val);

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  bool operator == (const ApplicationTokenRegenerated & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    if (!(user == rhs.user))
      return false;
    if (__isset.applicationToken != rhs.__isset.applicationToken)
      return false;
    else if (__isset.applicationToken && !(applicationToken == rhs.applicationToken))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    return true;
  }
  bool operator != (const ApplicationTokenRegenerated &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationTokenRegenerated & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationTokenRegenerated &a, ApplicationTokenRegenerated &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationTokenRegenerated& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationSentMessage__isset {
  _ApplicationSentMessage__isset() : message(true), messageSentByApplication(false), applicationId(false), applicationName(false) {}
  bool message :1;
  bool messageSentByApplication :1;
  bool applicationId :1;
  bool applicationName :1;
} _ApplicationSentMessage__isset;

class ApplicationSentMessage {
 public:

  ApplicationSentMessage(const ApplicationSentMessage&);
  ApplicationSentMessage& operator=(const ApplicationSentMessage&);
  ApplicationSentMessage() : message("Application has sent an Alert"), applicationId(), applicationName() {
  }

  virtual ~ApplicationSentMessage() throw();
  std::string message;
   ::aroma::banana::thrift::Message messageSentByApplication;
  std::string applicationId;
  std::string applicationName;

  _ApplicationSentMessage__isset __isset;

  void __set_message(const std::string& val);

  void __set_messageSentByApplication(const  ::aroma::banana::thrift::Message& val);

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  bool operator == (const ApplicationSentMessage & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    if (__isset.messageSentByApplication != rhs.__isset.messageSentByApplication)
      return false;
    else if (__isset.messageSentByApplication && !(messageSentByApplication == rhs.messageSentByApplication))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    return true;
  }
  bool operator != (const ApplicationSentMessage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationSentMessage & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ApplicationSentMessage &a, ApplicationSentMessage &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationSentMessage& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HealthCheckFailed__isset {
  _HealthCheckFailed__isset() : message(true), hostname(false), applicationId(false), applicationName(false) {}
  bool message :1;
  bool hostname :1;
  bool applicationId :1;
  bool applicationName :1;
} _HealthCheckFailed__isset;

class HealthCheckFailed {
 public:

  HealthCheckFailed(const HealthCheckFailed&);
  HealthCheckFailed& operator=(const HealthCheckFailed&);
  HealthCheckFailed() : message("Application failed a Health Check"), hostname(), applicationId(), applicationName() {
  }

  virtual ~HealthCheckFailed() throw();
  std::string message;
  std::string hostname;
  std::string applicationId;
  std::string applicationName;

  _HealthCheckFailed__isset __isset;

  void __set_message(const std::string& val);

  void __set_hostname(const std::string& val);

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  bool operator == (const HealthCheckFailed & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    if (__isset.hostname != rhs.__isset.hostname)
      return false;
    else if (__isset.hostname && !(hostname == rhs.hostname))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    return true;
  }
  bool operator != (const HealthCheckFailed &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HealthCheckFailed & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HealthCheckFailed &a, HealthCheckFailed &b);

inline std::ostream& operator<<(std::ostream& out, const HealthCheckFailed& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HealthCheckBackToNormal__isset {
  _HealthCheckBackToNormal__isset() : message(true), applicationId(false), applicationName(false) {}
  bool message :1;
  bool applicationId :1;
  bool applicationName :1;
} _HealthCheckBackToNormal__isset;

class HealthCheckBackToNormal {
 public:

  HealthCheckBackToNormal(const HealthCheckBackToNormal&);
  HealthCheckBackToNormal& operator=(const HealthCheckBackToNormal&);
  HealthCheckBackToNormal() : message("Application's Health is back to normal"), applicationId(), applicationName() {
  }

  virtual ~HealthCheckBackToNormal() throw();
  std::string message;
  std::string applicationId;
  std::string applicationName;

  _HealthCheckBackToNormal__isset __isset;

  void __set_message(const std::string& val);

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  bool operator == (const HealthCheckBackToNormal & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    return true;
  }
  bool operator != (const HealthCheckBackToNormal &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HealthCheckBackToNormal & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HealthCheckBackToNormal &a, HealthCheckBackToNormal &b);

inline std::ostream& operator<<(std::ostream& out, const HealthCheckBackToNormal& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OwnerApprovedRequest__isset {
  _OwnerApprovedRequest__isset() : message(true), applicationId(false), applicationName(false), owner(false) {}
  bool message :1;
  bool applicationId :1;
  bool applicationName :1;
  bool owner :1;
} _OwnerApprovedRequest__isset;

class OwnerApprovedRequest {
 public:

  OwnerApprovedRequest(const OwnerApprovedRequest&);
  OwnerApprovedRequest& operator=(const OwnerApprovedRequest&);
  OwnerApprovedRequest() : message("Application Owner approved your request"), applicationId(), applicationName() {
  }

  virtual ~OwnerApprovedRequest() throw();
  std::string message;
  std::string applicationId;
  std::string applicationName;
  User owner;

  _OwnerApprovedRequest__isset __isset;

  void __set_message(const std::string& val);

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  void __set_owner(const User& val);

  bool operator == (const OwnerApprovedRequest & rhs) const
  {
    if (__isset.message != rhs.__isset.message)
      return false;
    else if (__isset.message && !(message == rhs.message))
      return false;
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    if (!(owner == rhs.owner))
      return false;
    return true;
  }
  bool operator != (const OwnerApprovedRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OwnerApprovedRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(OwnerApprovedRequest &a, OwnerApprovedRequest &b);

inline std::ostream& operator<<(std::ostream& out, const OwnerApprovedRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GeneralEvent__isset {
  _GeneralEvent__isset() : applicationId(false), applicationName(false), message(false), timestamp(false) {}
  bool applicationId :1;
  bool applicationName :1;
  bool message :1;
  bool timestamp :1;
} _GeneralEvent__isset;

class GeneralEvent {
 public:

  GeneralEvent(const GeneralEvent&);
  GeneralEvent& operator=(const GeneralEvent&);
  GeneralEvent() : applicationId(), applicationName(), message(), timestamp(0) {
  }

  virtual ~GeneralEvent() throw();
  std::string applicationId;
  std::string applicationName;
  std::string message;
  timestamp timestamp;

  _GeneralEvent__isset __isset;

  void __set_applicationId(const std::string& val);

  void __set_applicationName(const std::string& val);

  void __set_message(const std::string& val);

  void __set_timestamp(const timestamp val);

  bool operator == (const GeneralEvent & rhs) const
  {
    if (!(applicationId == rhs.applicationId))
      return false;
    if (!(applicationName == rhs.applicationName))
      return false;
    if (!(message == rhs.message))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    return true;
  }
  bool operator != (const GeneralEvent &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GeneralEvent & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GeneralEvent &a, GeneralEvent &b);

inline std::ostream& operator<<(std::ostream& out, const GeneralEvent& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _EventType__isset {
  _EventType__isset() : healthCheckFailed(false), healthCheckBackToNormal(false), applicationTokenRenewed(false), applicationTokenRegenerated(false), applicationSentMessage(false), ownerApprovedRequest(false), generalEvent(false) {}
  bool healthCheckFailed :1;
  bool healthCheckBackToNormal :1;
  bool applicationTokenRenewed :1;
  bool applicationTokenRegenerated :1;
  bool applicationSentMessage :1;
  bool ownerApprovedRequest :1;
  bool generalEvent :1;
} _EventType__isset;

class EventType {
 public:

  EventType(const EventType&);
  EventType& operator=(const EventType&);
  EventType() {
  }

  virtual ~EventType() throw();
  HealthCheckFailed healthCheckFailed;
  HealthCheckBackToNormal healthCheckBackToNormal;
  ApplicationTokenRenewed applicationTokenRenewed;
  ApplicationTokenRegenerated applicationTokenRegenerated;
  ApplicationSentMessage applicationSentMessage;
  OwnerApprovedRequest ownerApprovedRequest;
  GeneralEvent generalEvent;

  _EventType__isset __isset;

  void __set_healthCheckFailed(const HealthCheckFailed& val);

  void __set_healthCheckBackToNormal(const HealthCheckBackToNormal& val);

  void __set_applicationTokenRenewed(const ApplicationTokenRenewed& val);

  void __set_applicationTokenRegenerated(const ApplicationTokenRegenerated& val);

  void __set_applicationSentMessage(const ApplicationSentMessage& val);

  void __set_ownerApprovedRequest(const OwnerApprovedRequest& val);

  void __set_generalEvent(const GeneralEvent& val);

  bool operator == (const EventType & rhs) const
  {
    if (!(healthCheckFailed == rhs.healthCheckFailed))
      return false;
    if (!(healthCheckBackToNormal == rhs.healthCheckBackToNormal))
      return false;
    if (!(applicationTokenRenewed == rhs.applicationTokenRenewed))
      return false;
    if (!(applicationTokenRegenerated == rhs.applicationTokenRegenerated))
      return false;
    if (!(applicationSentMessage == rhs.applicationSentMessage))
      return false;
    if (!(ownerApprovedRequest == rhs.ownerApprovedRequest))
      return false;
    if (!(generalEvent == rhs.generalEvent))
      return false;
    return true;
  }
  bool operator != (const EventType &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventType & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(EventType &a, EventType &b);

inline std::ostream& operator<<(std::ostream& out, const EventType& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _Event__isset {
  _Event__isset() : eventType(false), timestamp(false), eventId(false) {}
  bool eventType :1;
  bool timestamp :1;
  bool eventId :1;
} _Event__isset;

class Event {
 public:

  Event(const Event&);
  Event& operator=(const Event&);
  Event() : timestamp(0), eventId() {
  }

  virtual ~Event() throw();
  EventType eventType;
  timestamp timestamp;
  std::string eventId;

  _Event__isset __isset;

  void __set_eventType(const EventType& val);

  void __set_timestamp(const timestamp val);

  void __set_eventId(const std::string& val);

  bool operator == (const Event & rhs) const
  {
    if (!(eventType == rhs.eventType))
      return false;
    if (!(timestamp == rhs.timestamp))
      return false;
    if (!(eventId == rhs.eventId))
      return false;
    return true;
  }
  bool operator != (const Event &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Event & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Event &a, Event &b);

inline std::ostream& operator<<(std::ostream& out, const Event& obj)
{
  obj.printTo(out);
  return out;
}

}}}} // namespace

#endif
