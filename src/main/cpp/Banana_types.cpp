/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Banana_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace banana { namespace thrift {

int _kUrgencyValues[] = {
  Urgency::INFORMATIONAL,
  Urgency::PRESSING,
  Urgency::CRITICAL
};
const char* _kUrgencyNames[] = {
  "INFORMATIONAL",
  "PRESSING",
  "CRITICAL"
};
const std::map<int, const char*> _Urgency_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kUrgencyValues, _kUrgencyNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kTimeUnitValues[] = {
  TimeUnit::MILLIS,
  TimeUnit::SECONDS,
  TimeUnit::MINUTES,
  TimeUnit::HOURS,
  TimeUnit::DAYS
};
const char* _kTimeUnitNames[] = {
  "MILLIS",
  "SECONDS",
  "MINUTES",
  "HOURS",
  "DAYS"
};
const std::map<int, const char*> _TimeUnit_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kTimeUnitValues, _kTimeUnitNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kImageTypeValues[] = {
  ImageType::JPEG,
  ImageType::PNG
};
const char* _kImageTypeNames[] = {
  "JPEG",
  "PNG"
};
const std::map<int, const char*> _ImageType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kImageTypeValues, _kImageTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kRoleValues[] = {
  Role::DEV,
  Role::OWNER
};
const char* _kRoleNames[] = {
  "DEV",
  "OWNER"
};
const std::map<int, const char*> _Role_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kRoleValues, _kRoleNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


Message::~Message() throw() {
}


void Message::__set_messageId(const std::string& val) {
  this->messageId = val;
}

void Message::__set_body(const std::string& val) {
  this->body = val;
}

void Message::__set_urgency(const Urgency::type val) {
  this->urgency = val;
}

void Message::__set_timeMessageSent(const timestamp val) {
  this->timeMessageSent = val;
}

void Message::__set_timeMessageReceived(const timestamp val) {
  this->timeMessageReceived = val;
}

void Message::__set_nameOfService(const std::string& val) {
  this->nameOfService = val;
}

uint32_t Message::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
          this->urgency = (Urgency::type)ecast0;
          this->__isset.urgency = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeMessageSent);
          this->__isset.timeMessageSent = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeMessageReceived);
          this->__isset.timeMessageReceived = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nameOfService);
          this->__isset.nameOfService = true;
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

uint32_t Message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Message");

  xfer += oprot->writeFieldBegin("messageId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->messageId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("body", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->body);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("urgency", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->urgency);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeMessageSent", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->timeMessageSent);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeMessageReceived", ::apache::thrift::protocol::T_I64, 5);
  xfer += oprot->writeI64(this->timeMessageReceived);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("nameOfService", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->nameOfService);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.messageId, b.messageId);
  swap(a.body, b.body);
  swap(a.urgency, b.urgency);
  swap(a.timeMessageSent, b.timeMessageSent);
  swap(a.timeMessageReceived, b.timeMessageReceived);
  swap(a.nameOfService, b.nameOfService);
  swap(a.__isset, b.__isset);
}

Message::Message(const Message& other1) {
  messageId = other1.messageId;
  body = other1.body;
  urgency = other1.urgency;
  timeMessageSent = other1.timeMessageSent;
  timeMessageReceived = other1.timeMessageReceived;
  nameOfService = other1.nameOfService;
  __isset = other1.__isset;
}
Message& Message::operator=(const Message& other2) {
  messageId = other2.messageId;
  body = other2.body;
  urgency = other2.urgency;
  timeMessageSent = other2.timeMessageSent;
  timeMessageReceived = other2.timeMessageReceived;
  nameOfService = other2.nameOfService;
  __isset = other2.__isset;
  return *this;
}
void Message::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Message(";
  out << "messageId=" << to_string(messageId);
  out << ", " << "body=" << to_string(body);
  out << ", " << "urgency=" << to_string(urgency);
  out << ", " << "timeMessageSent=" << to_string(timeMessageSent);
  out << ", " << "timeMessageReceived=" << to_string(timeMessageReceived);
  out << ", " << "nameOfService=" << to_string(nameOfService);
  out << ")";
}


TimePeriod::~TimePeriod() throw() {
}


void TimePeriod::__set_unit(const TimeUnit::type val) {
  this->unit = val;
}

void TimePeriod::__set_value(const int val) {
  this->value = val;
}

uint32_t TimePeriod::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_unit = false;
  bool isset_value = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast3;
          xfer += iprot->readI32(ecast3);
          this->unit = (TimeUnit::type)ecast3;
          isset_unit = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->value);
          isset_value = true;
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

  if (!isset_unit)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TimePeriod::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TimePeriod");

  xfer += oprot->writeFieldBegin("unit", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->unit);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TimePeriod &a, TimePeriod &b) {
  using ::std::swap;
  swap(a.unit, b.unit);
  swap(a.value, b.value);
}

TimePeriod::TimePeriod(const TimePeriod& other4) {
  unit = other4.unit;
  value = other4.value;
}
TimePeriod& TimePeriod::operator=(const TimePeriod& other5) {
  unit = other5.unit;
  value = other5.value;
  return *this;
}
void TimePeriod::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TimePeriod(";
  out << "unit=" << to_string(unit);
  out << ", " << "value=" << to_string(value);
  out << ")";
}


Dimension::~Dimension() throw() {
}


void Dimension::__set_width(const int val) {
  this->width = val;
}

void Dimension::__set_height(const int val) {
  this->height = val;
}

uint32_t Dimension::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_width = false;
  bool isset_height = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->width);
          isset_width = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->height);
          isset_height = true;
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

  if (!isset_width)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_height)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Dimension::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Dimension");

  xfer += oprot->writeFieldBegin("width", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->width);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("height", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->height);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Dimension &a, Dimension &b) {
  using ::std::swap;
  swap(a.width, b.width);
  swap(a.height, b.height);
}

Dimension::Dimension(const Dimension& other6) {
  width = other6.width;
  height = other6.height;
}
Dimension& Dimension::operator=(const Dimension& other7) {
  width = other7.width;
  height = other7.height;
  return *this;
}
void Dimension::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Dimension(";
  out << "width=" << to_string(width);
  out << ", " << "height=" << to_string(height);
  out << ")";
}


Image::~Image() throw() {
}


void Image::__set_imageType(const ImageType::type val) {
  this->imageType = val;
}

void Image::__set_data(const std::string& val) {
  this->data = val;
}

void Image::__set_dimension(const Dimension& val) {
  this->dimension = val;
}

uint32_t Image::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast8;
          xfer += iprot->readI32(ecast8);
          this->imageType = (ImageType::type)ecast8;
          this->__isset.imageType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->data);
          this->__isset.data = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->dimension.read(iprot);
          this->__isset.dimension = true;
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

uint32_t Image::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Image");

  xfer += oprot->writeFieldBegin("imageType", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->imageType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("data", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->data);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dimension", ::apache::thrift::protocol::T_STRUCT, 3);
  xfer += this->dimension.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Image &a, Image &b) {
  using ::std::swap;
  swap(a.imageType, b.imageType);
  swap(a.data, b.data);
  swap(a.dimension, b.dimension);
  swap(a.__isset, b.__isset);
}

Image::Image(const Image& other9) {
  imageType = other9.imageType;
  data = other9.data;
  dimension = other9.dimension;
  __isset = other9.__isset;
}
Image& Image::operator=(const Image& other10) {
  imageType = other10.imageType;
  data = other10.data;
  dimension = other10.dimension;
  __isset = other10.__isset;
  return *this;
}
void Image::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Image(";
  out << "imageType=" << to_string(imageType);
  out << ", " << "data=" << to_string(data);
  out << ", " << "dimension=" << to_string(dimension);
  out << ")";
}


Developer::~Developer() throw() {
}


void Developer::__set_email(const std::string& val) {
  this->email = val;
}

void Developer::__set_name(const std::string& val) {
  this->name = val;
__isset.name = true;
}

void Developer::__set_username(const std::string& val) {
  this->username = val;
__isset.username = true;
}

void Developer::__set_role(const Role::type val) {
  this->role = val;
}

uint32_t Developer::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
          xfer += iprot->readString(this->email);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast11;
          xfer += iprot->readI32(ecast11);
          this->role = (Role::type)ecast11;
          this->__isset.role = true;
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

uint32_t Developer::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Developer");

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->email);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.name) {
    xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->name);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.username) {
    xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->username);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("role", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32((int32_t)this->role);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Developer &a, Developer &b) {
  using ::std::swap;
  swap(a.email, b.email);
  swap(a.name, b.name);
  swap(a.username, b.username);
  swap(a.role, b.role);
  swap(a.__isset, b.__isset);
}

Developer::Developer(const Developer& other12) {
  email = other12.email;
  name = other12.name;
  username = other12.username;
  role = other12.role;
  __isset = other12.__isset;
}
Developer& Developer::operator=(const Developer& other13) {
  email = other13.email;
  name = other13.name;
  username = other13.username;
  role = other13.role;
  __isset = other13.__isset;
  return *this;
}
void Developer::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Developer(";
  out << "email=" << to_string(email);
  out << ", " << "name="; (__isset.name ? (out << to_string(name)) : (out << "<null>"));
  out << ", " << "username="; (__isset.username ? (out << to_string(username)) : (out << "<null>"));
  out << ", " << "role=" << to_string(role);
  out << ")";
}


Service::~Service() throw() {
}


void Service::__set_owner(const Developer& val) {
  this->owner = val;
}

void Service::__set_timeOfRegistration(const timestamp val) {
  this->timeOfRegistration = val;
}

void Service::__set_name(const std::string& val) {
  this->name = val;
}

void Service::__set_id(const std::string& val) {
  this->id = val;
}

void Service::__set_totalMessagesSent(const long val) {
  this->totalMessagesSent = val;
}

uint32_t Service::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
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
          xfer += this->owner.read(iprot);
          this->__isset.owner = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeOfRegistration);
          this->__isset.timeOfRegistration = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->totalMessagesSent);
          this->__isset.totalMessagesSent = true;
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

uint32_t Service::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Service");

  xfer += oprot->writeFieldBegin("owner", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->owner.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeOfRegistration", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timeOfRegistration);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("totalMessagesSent", ::apache::thrift::protocol::T_I64, 5);
  xfer += oprot->writeI64(this->totalMessagesSent);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Service &a, Service &b) {
  using ::std::swap;
  swap(a.owner, b.owner);
  swap(a.timeOfRegistration, b.timeOfRegistration);
  swap(a.name, b.name);
  swap(a.id, b.id);
  swap(a.totalMessagesSent, b.totalMessagesSent);
  swap(a.__isset, b.__isset);
}

Service::Service(const Service& other14) {
  owner = other14.owner;
  timeOfRegistration = other14.timeOfRegistration;
  name = other14.name;
  id = other14.id;
  totalMessagesSent = other14.totalMessagesSent;
  __isset = other14.__isset;
}
Service& Service::operator=(const Service& other15) {
  owner = other15.owner;
  timeOfRegistration = other15.timeOfRegistration;
  name = other15.name;
  id = other15.id;
  totalMessagesSent = other15.totalMessagesSent;
  __isset = other15.__isset;
  return *this;
}
void Service::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Service(";
  out << "owner=" << to_string(owner);
  out << ", " << "timeOfRegistration=" << to_string(timeOfRegistration);
  out << ", " << "name=" << to_string(name);
  out << ", " << "id=" << to_string(id);
  out << ", " << "totalMessagesSent=" << to_string(totalMessagesSent);
  out << ")";
}

}}} // namespace
