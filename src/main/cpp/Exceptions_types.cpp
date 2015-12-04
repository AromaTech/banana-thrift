/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Exceptions_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace tech { namespace aroma { namespace banana { namespace thrift { namespace exceptions {


InvalidArgumentException::~InvalidArgumentException() throw() {
}


void InvalidArgumentException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t InvalidArgumentException::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidArgumentException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidArgumentException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidArgumentException &a, InvalidArgumentException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

InvalidArgumentException::InvalidArgumentException(const InvalidArgumentException& other0) : TException() {
  message = other0.message;
  __isset = other0.__isset;
}
InvalidArgumentException& InvalidArgumentException::operator=(const InvalidArgumentException& other1) {
  message = other1.message;
  __isset = other1.__isset;
  return *this;
}
void InvalidArgumentException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidArgumentException(";
  out << "message=" << to_string(message);
  out << ")";
}

const char* InvalidArgumentException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidArgumentException";
  }
}


InvalidCredentialsException::~InvalidCredentialsException() throw() {
}


void InvalidCredentialsException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t InvalidCredentialsException::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidCredentialsException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidCredentialsException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidCredentialsException &a, InvalidCredentialsException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

InvalidCredentialsException::InvalidCredentialsException(const InvalidCredentialsException& other2) : TException() {
  message = other2.message;
  __isset = other2.__isset;
}
InvalidCredentialsException& InvalidCredentialsException::operator=(const InvalidCredentialsException& other3) {
  message = other3.message;
  __isset = other3.__isset;
  return *this;
}
void InvalidCredentialsException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidCredentialsException(";
  out << "message=" << to_string(message);
  out << ")";
}

const char* InvalidCredentialsException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidCredentialsException";
  }
}


ServiceDoesNotExistException::~ServiceDoesNotExistException() throw() {
}


void ServiceDoesNotExistException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t ServiceDoesNotExistException::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ServiceDoesNotExistException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ServiceDoesNotExistException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServiceDoesNotExistException &a, ServiceDoesNotExistException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

ServiceDoesNotExistException::ServiceDoesNotExistException(const ServiceDoesNotExistException& other4) : TException() {
  message = other4.message;
  __isset = other4.__isset;
}
ServiceDoesNotExistException& ServiceDoesNotExistException::operator=(const ServiceDoesNotExistException& other5) {
  message = other5.message;
  __isset = other5.__isset;
  return *this;
}
void ServiceDoesNotExistException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ServiceDoesNotExistException(";
  out << "message=" << to_string(message);
  out << ")";
}

const char* ServiceDoesNotExistException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: ServiceDoesNotExistException";
  }
}


ServiceAlreadyRegisteredException::~ServiceAlreadyRegisteredException() throw() {
}


void ServiceAlreadyRegisteredException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t ServiceAlreadyRegisteredException::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ServiceAlreadyRegisteredException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ServiceAlreadyRegisteredException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ServiceAlreadyRegisteredException &a, ServiceAlreadyRegisteredException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

ServiceAlreadyRegisteredException::ServiceAlreadyRegisteredException(const ServiceAlreadyRegisteredException& other6) : TException() {
  message = other6.message;
  __isset = other6.__isset;
}
ServiceAlreadyRegisteredException& ServiceAlreadyRegisteredException::operator=(const ServiceAlreadyRegisteredException& other7) {
  message = other7.message;
  __isset = other7.__isset;
  return *this;
}
void ServiceAlreadyRegisteredException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ServiceAlreadyRegisteredException(";
  out << "message=" << to_string(message);
  out << ")";
}

const char* ServiceAlreadyRegisteredException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: ServiceAlreadyRegisteredException";
  }
}


OperationFailedException::~OperationFailedException() throw() {
}


void OperationFailedException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t OperationFailedException::read(::apache::thrift::protocol::TProtocol* iprot) {

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
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t OperationFailedException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("OperationFailedException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OperationFailedException &a, OperationFailedException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

OperationFailedException::OperationFailedException(const OperationFailedException& other8) : TException() {
  message = other8.message;
  __isset = other8.__isset;
}
OperationFailedException& OperationFailedException::operator=(const OperationFailedException& other9) {
  message = other9.message;
  __isset = other9.__isset;
  return *this;
}
void OperationFailedException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "OperationFailedException(";
  out << "message=" << to_string(message);
  out << ")";
}

const char* OperationFailedException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: OperationFailedException";
  }
}

}}}}} // namespace
