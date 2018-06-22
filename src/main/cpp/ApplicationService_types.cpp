/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ApplicationService_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace thrift { namespace application { namespace service {


SendMessageRequest::~SendMessageRequest() throw() {
}


void SendMessageRequest::__set_applicationToken(const ApplicationToken& val) {
  this->applicationToken = val;
}

void SendMessageRequest::__set_body(const std::string& val) {
  this->body = val;
}

void SendMessageRequest::__set_urgency(const Urgency val) {
  this->urgency = val;
}

void SendMessageRequest::__set_timeOfMessage(const timestamp val) {
  this->timeOfMessage = val;
__isset.timeOfMessage = true;
}

void SendMessageRequest::__set_title(const std::string& val) {
  this->title = val;
}

void SendMessageRequest::__set_hostname(const std::string& val) {
  this->hostname = val;
__isset.hostname = true;
}

void SendMessageRequest::__set_macAddress(const std::string& val) {
  this->macAddress = val;
__isset.macAddress = true;
}

void SendMessageRequest::__set_ipv4Address(const std::string& val) {
  this->ipv4Address = val;
__isset.ipv4Address = true;
}

void SendMessageRequest::__set_deviceName(const std::string& val) {
  this->deviceName = val;
__isset.deviceName = true;
}

void SendMessageRequest::__set_operatingSystemName(const std::string& val) {
  this->operatingSystemName = val;
__isset.operatingSystemName = true;
}
std::ostream& operator<<(std::ostream& out, const SendMessageRequest& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t SendMessageRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->applicationToken.read(iprot);
          this->__isset.applicationToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->body);
          this->__isset.body = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->urgency = ( ::tech::aroma::thrift::Urgency::type)ecast0;
          this->__isset.urgency = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeOfMessage);
          this->__isset.timeOfMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->title);
          this->__isset.title = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->hostname);
          this->__isset.hostname = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->macAddress);
          this->__isset.macAddress = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->ipv4Address);
          this->__isset.ipv4Address = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->deviceName);
          this->__isset.deviceName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->operatingSystemName);
          this->__isset.operatingSystemName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SendMessageRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SendMessageRequest");

  xfer += oprot->writeFieldBegin("applicationToken", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->applicationToken.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("body", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->body);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("urgency", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->urgency);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.timeOfMessage) {
    xfer += oprot->writeFieldBegin("timeOfMessage", ::apache::thrift::protocol::T_I64, 4);
    xfer += oprot->writeI64(this->timeOfMessage);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("title", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->title);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.hostname) {
    xfer += oprot->writeFieldBegin("hostname", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->hostname);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.macAddress) {
    xfer += oprot->writeFieldBegin("macAddress", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->macAddress);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.ipv4Address) {
    xfer += oprot->writeFieldBegin("ipv4Address", ::apache::thrift::protocol::T_STRING, 8);
    xfer += oprot->writeString(this->ipv4Address);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.deviceName) {
    xfer += oprot->writeFieldBegin("deviceName", ::apache::thrift::protocol::T_STRING, 9);
    xfer += oprot->writeString(this->deviceName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.operatingSystemName) {
    xfer += oprot->writeFieldBegin("operatingSystemName", ::apache::thrift::protocol::T_STRING, 10);
    xfer += oprot->writeString(this->operatingSystemName);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SendMessageRequest &a, SendMessageRequest &b) {
  using ::std::swap;
  swap(a.applicationToken, b.applicationToken);
  swap(a.body, b.body);
  swap(a.urgency, b.urgency);
  swap(a.timeOfMessage, b.timeOfMessage);
  swap(a.title, b.title);
  swap(a.hostname, b.hostname);
  swap(a.macAddress, b.macAddress);
  swap(a.ipv4Address, b.ipv4Address);
  swap(a.deviceName, b.deviceName);
  swap(a.operatingSystemName, b.operatingSystemName);
  swap(a.__isset, b.__isset);
}

SendMessageRequest::SendMessageRequest(const SendMessageRequest& other1) {
  applicationToken = other1.applicationToken;
  body = other1.body;
  urgency = other1.urgency;
  timeOfMessage = other1.timeOfMessage;
  title = other1.title;
  hostname = other1.hostname;
  macAddress = other1.macAddress;
  ipv4Address = other1.ipv4Address;
  deviceName = other1.deviceName;
  operatingSystemName = other1.operatingSystemName;
  __isset = other1.__isset;
}
SendMessageRequest& SendMessageRequest::operator=(const SendMessageRequest& other2) {
  applicationToken = other2.applicationToken;
  body = other2.body;
  urgency = other2.urgency;
  timeOfMessage = other2.timeOfMessage;
  title = other2.title;
  hostname = other2.hostname;
  macAddress = other2.macAddress;
  ipv4Address = other2.ipv4Address;
  deviceName = other2.deviceName;
  operatingSystemName = other2.operatingSystemName;
  __isset = other2.__isset;
  return *this;
}
void SendMessageRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SendMessageRequest(";
  out << "applicationToken=" << to_string(applicationToken);
  out << ", " << "body=" << to_string(body);
  out << ", " << "urgency=" << to_string(urgency);
  out << ", " << "timeOfMessage="; (__isset.timeOfMessage ? (out << to_string(timeOfMessage)) : (out << "<null>"));
  out << ", " << "title=" << to_string(title);
  out << ", " << "hostname="; (__isset.hostname ? (out << to_string(hostname)) : (out << "<null>"));
  out << ", " << "macAddress="; (__isset.macAddress ? (out << to_string(macAddress)) : (out << "<null>"));
  out << ", " << "ipv4Address="; (__isset.ipv4Address ? (out << to_string(ipv4Address)) : (out << "<null>"));
  out << ", " << "deviceName="; (__isset.deviceName ? (out << to_string(deviceName)) : (out << "<null>"));
  out << ", " << "operatingSystemName="; (__isset.operatingSystemName ? (out << to_string(operatingSystemName)) : (out << "<null>"));
  out << ")";
}


SendMessageResponse::~SendMessageResponse() throw() {
}


void SendMessageResponse::__set_messageId(const std::string& val) {
  this->messageId = val;
}
std::ostream& operator<<(std::ostream& out, const SendMessageResponse& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t SendMessageResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->messageId);
          this->__isset.messageId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SendMessageResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("SendMessageResponse");

  xfer += oprot->writeFieldBegin("messageId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->messageId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SendMessageResponse &a, SendMessageResponse &b) {
  using ::std::swap;
  swap(a.messageId, b.messageId);
  swap(a.__isset, b.__isset);
}

SendMessageResponse::SendMessageResponse(const SendMessageResponse& other3) {
  messageId = other3.messageId;
  __isset = other3.__isset;
}
SendMessageResponse& SendMessageResponse::operator=(const SendMessageResponse& other4) {
  messageId = other4.messageId;
  __isset = other4.__isset;
  return *this;
}
void SendMessageResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "SendMessageResponse(";
  out << "messageId=" << to_string(messageId);
  out << ")";
}

}}}} // namespace
