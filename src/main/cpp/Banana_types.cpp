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

namespace tech { namespace aroma { namespace banana { namespace thrift {

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


Message::~Message() throw() {
}


void Message::__set_body(const std::string& val) {
  this->body = val;
}

void Message::__set_urgency(const Urgency::type val) {
  this->urgency = val;
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
          xfer += iprot->readString(this->body);
          this->__isset.body = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->urgency = (Urgency::type)ecast0;
          this->__isset.urgency = true;
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

  xfer += oprot->writeFieldBegin("body", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->body);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("urgency", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->urgency);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a.body, b.body);
  swap(a.urgency, b.urgency);
  swap(a.__isset, b.__isset);
}

Message::Message(const Message& other1) {
  body = other1.body;
  urgency = other1.urgency;
  __isset = other1.__isset;
}
Message& Message::operator=(const Message& other2) {
  body = other2.body;
  urgency = other2.urgency;
  __isset = other2.__isset;
  return *this;
}
void Message::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Message(";
  out << "body=" << to_string(body);
  out << ", " << "urgency=" << to_string(urgency);
  out << ")";
}


Call::~Call() throw() {
}


uint32_t Call::read(::apache::thrift::protocol::TProtocol* iprot) {

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
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Call::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Call");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Call &a, Call &b) {
  using ::std::swap;
  (void) a;
  (void) b;
}

Call::Call(const Call& other3) {
  (void) other3;
}
Call& Call::operator=(const Call& other4) {
  (void) other4;
  return *this;
}
void Call::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Call(";
  out << ")";
}


Service::~Service() throw() {
}


void Service::__set_owner(const std::string& val) {
  this->owner = val;
}

void Service::__set_timeOfRegistration(const timestamp val) {
  this->timeOfRegistration = val;
}

void Service::__set_name(const std::string& val) {
  this->name = val;
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
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->owner);
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

  xfer += oprot->writeFieldBegin("owner", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->owner);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("timeOfRegistration", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->timeOfRegistration);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->name);
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
  swap(a.__isset, b.__isset);
}

Service::Service(const Service& other5) {
  owner = other5.owner;
  timeOfRegistration = other5.timeOfRegistration;
  name = other5.name;
  __isset = other5.__isset;
}
Service& Service::operator=(const Service& other6) {
  owner = other6.owner;
  timeOfRegistration = other6.timeOfRegistration;
  name = other6.name;
  __isset = other6.__isset;
  return *this;
}
void Service::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Service(";
  out << "owner=" << to_string(owner);
  out << ", " << "timeOfRegistration=" << to_string(timeOfRegistration);
  out << ", " << "name=" << to_string(name);
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
          int32_t ecast7;
          xfer += iprot->readI32(ecast7);
          this->unit = (TimeUnit::type)ecast7;
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

TimePeriod::TimePeriod(const TimePeriod& other8) {
  unit = other8.unit;
  value = other8.value;
}
TimePeriod& TimePeriod::operator=(const TimePeriod& other9) {
  unit = other9.unit;
  value = other9.value;
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

Dimension::Dimension(const Dimension& other10) {
  width = other10.width;
  height = other10.height;
}
Dimension& Dimension::operator=(const Dimension& other11) {
  width = other11.width;
  height = other11.height;
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
          int32_t ecast12;
          xfer += iprot->readI32(ecast12);
          this->imageType = (ImageType::type)ecast12;
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

Image::Image(const Image& other13) {
  imageType = other13.imageType;
  data = other13.data;
  dimension = other13.dimension;
  __isset = other13.__isset;
}
Image& Image::operator=(const Image& other14) {
  imageType = other14.imageType;
  data = other14.data;
  dimension = other14.dimension;
  __isset = other14.__isset;
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

}}}} // namespace
