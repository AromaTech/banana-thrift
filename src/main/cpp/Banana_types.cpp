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
  Urgency::LOW,
  Urgency::MEDIUM,
  Urgency::HIGH
};
const char* _kUrgencyNames[] = {
  "LOW",
  "MEDIUM",
  "HIGH"
};
const std::map<int, const char*> _Urgency_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kUrgencyValues, _kUrgencyNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kTimeUnitValues[] = {
  TimeUnit::MILLIS,
  TimeUnit::SECONDS,
  TimeUnit::MINUTES,
  TimeUnit::HOURS,
  TimeUnit::DAYS,
  TimeUnit::WEEKS
};
const char* _kTimeUnitNames[] = {
  "MILLIS",
  "SECONDS",
  "MINUTES",
  "HOURS",
  "DAYS",
  "WEEKS"
};
const std::map<int, const char*> _TimeUnit_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kTimeUnitValues, _kTimeUnitNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

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
  Role::DEVELOPER,
  Role::OPERATIONS,
  Role::MANAGER,
  Role::PRODUCT,
  Role::QA
};
const char* _kRoleNames[] = {
  "DEVELOPER",
  "OPERATIONS",
  "MANAGER",
  "PRODUCT",
  "QA"
};
const std::map<int, const char*> _Role_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kRoleValues, _kRoleNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kProgrammingLanguageValues[] = {
  ProgrammingLanguage::JAVA,
  ProgrammingLanguage::CPP,
  ProgrammingLanguage::C_SHARP,
  ProgrammingLanguage::C,
  ProgrammingLanguage::OBJECTIVE_C,
  ProgrammingLanguage::SWIFT,
  ProgrammingLanguage::DOT_NET,
  ProgrammingLanguage::RUBY,
  ProgrammingLanguage::GROOVY,
  ProgrammingLanguage::PYTHON,
  ProgrammingLanguage::PHP,
  ProgrammingLanguage::NODE,
  ProgrammingLanguage::DART,
  ProgrammingLanguage::OTHER
};
const char* _kProgrammingLanguageNames[] = {
  "JAVA",
  "CPP",
  "C_SHARP",
  "C",
  "OBJECTIVE_C",
  "SWIFT",
  "DOT_NET",
  "RUBY",
  "GROOVY",
  "PYTHON",
  "PHP",
  "NODE",
  "DART",
  "OTHER"
};
const std::map<int, const char*> _ProgrammingLanguage_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(14, _kProgrammingLanguageValues, _kProgrammingLanguageNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


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

void Message::__set_timeOfCreation(const timestamp val) {
  this->timeOfCreation = val;
}

void Message::__set_timeMessageReceived(const timestamp val) {
  this->timeMessageReceived = val;
}

void Message::__set_applicationName(const std::string& val) {
  this->applicationName = val;
}

void Message::__set_hostname(const std::string& val) {
  this->hostname = val;
__isset.hostname = true;
}

void Message::__set_macAddress(const std::string& val) {
  this->macAddress = val;
__isset.macAddress = true;
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
          xfer += iprot->readI64(this->timeOfCreation);
          this->__isset.timeOfCreation = true;
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
          xfer += iprot->readString(this->applicationName);
          this->__isset.applicationName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->hostname);
          this->__isset.hostname = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->macAddress);
          this->__isset.macAddress = true;
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

  xfer += oprot->writeFieldBegin("timeOfCreation", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->timeOfCreation);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeMessageReceived", ::apache::thrift::protocol::T_I64, 5);
  xfer += oprot->writeI64(this->timeMessageReceived);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationName", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->applicationName);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.hostname) {
    xfer += oprot->writeFieldBegin("hostname", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->hostname);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.macAddress) {
    xfer += oprot->writeFieldBegin("macAddress", ::apache::thrift::protocol::T_STRING, 8);
    xfer += oprot->writeString(this->macAddress);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.messageId, b.messageId);
  swap(a.body, b.body);
  swap(a.urgency, b.urgency);
  swap(a.timeOfCreation, b.timeOfCreation);
  swap(a.timeMessageReceived, b.timeMessageReceived);
  swap(a.applicationName, b.applicationName);
  swap(a.hostname, b.hostname);
  swap(a.macAddress, b.macAddress);
  swap(a.__isset, b.__isset);
}

Message::Message(const Message& other1) {
  messageId = other1.messageId;
  body = other1.body;
  urgency = other1.urgency;
  timeOfCreation = other1.timeOfCreation;
  timeMessageReceived = other1.timeMessageReceived;
  applicationName = other1.applicationName;
  hostname = other1.hostname;
  macAddress = other1.macAddress;
  __isset = other1.__isset;
}
Message& Message::operator=(const Message& other2) {
  messageId = other2.messageId;
  body = other2.body;
  urgency = other2.urgency;
  timeOfCreation = other2.timeOfCreation;
  timeMessageReceived = other2.timeMessageReceived;
  applicationName = other2.applicationName;
  hostname = other2.hostname;
  macAddress = other2.macAddress;
  __isset = other2.__isset;
  return *this;
}
void Message::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Message(";
  out << "messageId=" << to_string(messageId);
  out << ", " << "body=" << to_string(body);
  out << ", " << "urgency=" << to_string(urgency);
  out << ", " << "timeOfCreation=" << to_string(timeOfCreation);
  out << ", " << "timeMessageReceived=" << to_string(timeMessageReceived);
  out << ", " << "applicationName=" << to_string(applicationName);
  out << ", " << "hostname="; (__isset.hostname ? (out << to_string(hostname)) : (out << "<null>"));
  out << ", " << "macAddress="; (__isset.macAddress ? (out << to_string(macAddress)) : (out << "<null>"));
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


User::~User() throw() {
}


void User::__set_email(const std::string& val) {
  this->email = val;
}

void User::__set_name(const std::string& val) {
  this->name = val;
__isset.name = true;
}

void User::__set_username(const std::string& val) {
  this->username = val;
__isset.username = true;
}

void User::__set_roles(const std::vector<Role::type> & val) {
  this->roles = val;
}

uint32_t User::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->roles.clear();
            uint32_t _size11;
            ::apache::thrift::protocol::TType _etype14;
            xfer += iprot->readListBegin(_etype14, _size11);
            this->roles.resize(_size11);
            uint32_t _i15;
            for (_i15 = 0; _i15 < _size11; ++_i15)
            {
              int32_t ecast16;
              xfer += iprot->readI32(ecast16);
              this->roles[_i15] = (Role::type)ecast16;
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.roles = true;
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

uint32_t User::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("User");

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
  xfer += oprot->writeFieldBegin("roles", ::apache::thrift::protocol::T_LIST, 4);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I32, static_cast<uint32_t>(this->roles.size()));
    std::vector<Role::type> ::const_iterator _iter17;
    for (_iter17 = this->roles.begin(); _iter17 != this->roles.end(); ++_iter17)
    {
      xfer += oprot->writeI32((int32_t)(*_iter17));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(User &a, User &b) {
  using ::std::swap;
  swap(a.email, b.email);
  swap(a.name, b.name);
  swap(a.username, b.username);
  swap(a.roles, b.roles);
  swap(a.__isset, b.__isset);
}

User::User(const User& other18) {
  email = other18.email;
  name = other18.name;
  username = other18.username;
  roles = other18.roles;
  __isset = other18.__isset;
}
User& User::operator=(const User& other19) {
  email = other19.email;
  name = other19.name;
  username = other19.username;
  roles = other19.roles;
  __isset = other19.__isset;
  return *this;
}
void User::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "User(";
  out << "email=" << to_string(email);
  out << ", " << "name="; (__isset.name ? (out << to_string(name)) : (out << "<null>"));
  out << ", " << "username="; (__isset.username ? (out << to_string(username)) : (out << "<null>"));
  out << ", " << "roles=" << to_string(roles);
  out << ")";
}


Application::~Application() throw() {
}


void Application::__set_owners(const std::vector<User> & val) {
  this->owners = val;
}

void Application::__set_timeOfProvisioning(const timestamp val) {
  this->timeOfProvisioning = val;
}

void Application::__set_name(const std::string& val) {
  this->name = val;
}

void Application::__set_id(const std::string& val) {
  this->id = val;
}

void Application::__set_totalMessagesSent(const long val) {
  this->totalMessagesSent = val;
}

void Application::__set_icon(const Image& val) {
  this->icon = val;
__isset.icon = true;
}

void Application::__set_programmingLanguage(const ProgrammingLanguage::type val) {
  this->programmingLanguage = val;
__isset.programmingLanguage = true;
}

void Application::__set_subscribers(const std::vector<User> & val) {
  this->subscribers = val;
__isset.subscribers = true;
}

uint32_t Application::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->owners.clear();
            uint32_t _size20;
            ::apache::thrift::protocol::TType _etype23;
            xfer += iprot->readListBegin(_etype23, _size20);
            this->owners.resize(_size20);
            uint32_t _i24;
            for (_i24 = 0; _i24 < _size20; ++_i24)
            {
              xfer += this->owners[_i24].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.owners = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeOfProvisioning);
          this->__isset.timeOfProvisioning = true;
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
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->icon.read(iprot);
          this->__isset.icon = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast25;
          xfer += iprot->readI32(ecast25);
          this->programmingLanguage = (ProgrammingLanguage::type)ecast25;
          this->__isset.programmingLanguage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->subscribers.clear();
            uint32_t _size26;
            ::apache::thrift::protocol::TType _etype29;
            xfer += iprot->readListBegin(_etype29, _size26);
            this->subscribers.resize(_size26);
            uint32_t _i30;
            for (_i30 = 0; _i30 < _size26; ++_i30)
            {
              xfer += this->subscribers[_i30].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.subscribers = true;
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

uint32_t Application::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Application");

  xfer += oprot->writeFieldBegin("owners", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->owners.size()));
    std::vector<User> ::const_iterator _iter31;
    for (_iter31 = this->owners.begin(); _iter31 != this->owners.end(); ++_iter31)
    {
      xfer += (*_iter31).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeOfProvisioning", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timeOfProvisioning);
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

  if (this->__isset.icon) {
    xfer += oprot->writeFieldBegin("icon", ::apache::thrift::protocol::T_STRUCT, 6);
    xfer += this->icon.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.programmingLanguage) {
    xfer += oprot->writeFieldBegin("programmingLanguage", ::apache::thrift::protocol::T_I32, 7);
    xfer += oprot->writeI32((int32_t)this->programmingLanguage);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.subscribers) {
    xfer += oprot->writeFieldBegin("subscribers", ::apache::thrift::protocol::T_LIST, 8);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->subscribers.size()));
      std::vector<User> ::const_iterator _iter32;
      for (_iter32 = this->subscribers.begin(); _iter32 != this->subscribers.end(); ++_iter32)
      {
        xfer += (*_iter32).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Application &a, Application &b) {
  using ::std::swap;
  swap(a.owners, b.owners);
  swap(a.timeOfProvisioning, b.timeOfProvisioning);
  swap(a.name, b.name);
  swap(a.id, b.id);
  swap(a.totalMessagesSent, b.totalMessagesSent);
  swap(a.icon, b.icon);
  swap(a.programmingLanguage, b.programmingLanguage);
  swap(a.subscribers, b.subscribers);
  swap(a.__isset, b.__isset);
}

Application::Application(const Application& other33) {
  owners = other33.owners;
  timeOfProvisioning = other33.timeOfProvisioning;
  name = other33.name;
  id = other33.id;
  totalMessagesSent = other33.totalMessagesSent;
  icon = other33.icon;
  programmingLanguage = other33.programmingLanguage;
  subscribers = other33.subscribers;
  __isset = other33.__isset;
}
Application& Application::operator=(const Application& other34) {
  owners = other34.owners;
  timeOfProvisioning = other34.timeOfProvisioning;
  name = other34.name;
  id = other34.id;
  totalMessagesSent = other34.totalMessagesSent;
  icon = other34.icon;
  programmingLanguage = other34.programmingLanguage;
  subscribers = other34.subscribers;
  __isset = other34.__isset;
  return *this;
}
void Application::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Application(";
  out << "owners=" << to_string(owners);
  out << ", " << "timeOfProvisioning=" << to_string(timeOfProvisioning);
  out << ", " << "name=" << to_string(name);
  out << ", " << "id=" << to_string(id);
  out << ", " << "totalMessagesSent=" << to_string(totalMessagesSent);
  out << ", " << "icon="; (__isset.icon ? (out << to_string(icon)) : (out << "<null>"));
  out << ", " << "programmingLanguage="; (__isset.programmingLanguage ? (out << to_string(programmingLanguage)) : (out << "<null>"));
  out << ", " << "subscribers="; (__isset.subscribers ? (out << to_string(subscribers)) : (out << "<null>"));
  out << ")";
}


ServiceAnnouncement::~ServiceAnnouncement() throw() {
}


void ServiceAnnouncement::__set_message(const std::string& val) {
  this->message = val;
}

void ServiceAnnouncement::__set_importance(const Urgency::type val) {
  this->importance = val;
}

void ServiceAnnouncement::__set_id(const std::string& val) {
  this->id = val;
}

void ServiceAnnouncement::__set_timeOfExpiration(const timestamp val) {
  this->timeOfExpiration = val;
}

uint32_t ServiceAnnouncement::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast35;
          xfer += iprot->readI32(ecast35);
          this->importance = (Urgency::type)ecast35;
          this->__isset.importance = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->timeOfExpiration);
          this->__isset.timeOfExpiration = true;
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

uint32_t ServiceAnnouncement::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ServiceAnnouncement");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("importance", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->importance);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeOfExpiration", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->timeOfExpiration);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServiceAnnouncement &a, ServiceAnnouncement &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.importance, b.importance);
  swap(a.id, b.id);
  swap(a.timeOfExpiration, b.timeOfExpiration);
  swap(a.__isset, b.__isset);
}

ServiceAnnouncement::ServiceAnnouncement(const ServiceAnnouncement& other36) {
  message = other36.message;
  importance = other36.importance;
  id = other36.id;
  timeOfExpiration = other36.timeOfExpiration;
  __isset = other36.__isset;
}
ServiceAnnouncement& ServiceAnnouncement::operator=(const ServiceAnnouncement& other37) {
  message = other37.message;
  importance = other37.importance;
  id = other37.id;
  timeOfExpiration = other37.timeOfExpiration;
  __isset = other37.__isset;
  return *this;
}
void ServiceAnnouncement::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ServiceAnnouncement(";
  out << "message=" << to_string(message);
  out << ", " << "importance=" << to_string(importance);
  out << ", " << "id=" << to_string(id);
  out << ", " << "timeOfExpiration=" << to_string(timeOfExpiration);
  out << ")";
}

}}} // namespace
