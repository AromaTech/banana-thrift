/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Exceptions_TYPES_H
#define Exceptions_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace aroma { namespace thrift { namespace exceptions {

class InvalidArgumentException;

class InvalidCredentialsException;

class InvalidTokenException;

class AccountAlreadyExistsException;

class InvalidCodeException;

class UnauthorizedException;

class DoesNotExistException;

class ApplicationDoesNotExistException;

class ApplicationAlreadyRegisteredException;

class UserDoesNotExistException;

class ThroughoutExceededException;

class CustomChannelUnreachableException;

class ChannelDoesNotExistException;

class MessageDoesNotExistException;

class OrganizationDoesNotExistException;

class OperationFailedException;

typedef struct _InvalidArgumentException__isset {
  _InvalidArgumentException__isset() : message(true) {}
  bool message :1;
} _InvalidArgumentException__isset;

class InvalidArgumentException : public ::apache::thrift::TException {
 public:

  InvalidArgumentException(const InvalidArgumentException&);
  InvalidArgumentException& operator=(const InvalidArgumentException&);
  InvalidArgumentException() : message("Invalid Argument Received") {
  }

  virtual ~InvalidArgumentException() throw();
  std::string message;

  _InvalidArgumentException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidArgumentException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidArgumentException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidArgumentException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidArgumentException &a, InvalidArgumentException &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidArgumentException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidCredentialsException__isset {
  _InvalidCredentialsException__isset() : message(true) {}
  bool message :1;
} _InvalidCredentialsException__isset;

class InvalidCredentialsException : public ::apache::thrift::TException {
 public:

  InvalidCredentialsException(const InvalidCredentialsException&);
  InvalidCredentialsException& operator=(const InvalidCredentialsException&);
  InvalidCredentialsException() : message("Failed to Verify and Authenticate Credentials") {
  }

  virtual ~InvalidCredentialsException() throw();
  std::string message;

  _InvalidCredentialsException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidCredentialsException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidCredentialsException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidCredentialsException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidCredentialsException &a, InvalidCredentialsException &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidCredentialsException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidTokenException__isset {
  _InvalidTokenException__isset() : message(true) {}
  bool message :1;
} _InvalidTokenException__isset;

class InvalidTokenException : public ::apache::thrift::TException {
 public:

  InvalidTokenException(const InvalidTokenException&);
  InvalidTokenException& operator=(const InvalidTokenException&);
  InvalidTokenException() : message("The specified token is invalid") {
  }

  virtual ~InvalidTokenException() throw();
  std::string message;

  _InvalidTokenException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidTokenException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidTokenException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidTokenException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidTokenException &a, InvalidTokenException &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidTokenException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _AccountAlreadyExistsException__isset {
  _AccountAlreadyExistsException__isset() : message(true) {}
  bool message :1;
} _AccountAlreadyExistsException__isset;

class AccountAlreadyExistsException : public ::apache::thrift::TException {
 public:

  AccountAlreadyExistsException(const AccountAlreadyExistsException&);
  AccountAlreadyExistsException& operator=(const AccountAlreadyExistsException&);
  AccountAlreadyExistsException() : message("This email has already been registered. Reset your password if you forgot it.") {
  }

  virtual ~AccountAlreadyExistsException() throw();
  std::string message;

  _AccountAlreadyExistsException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const AccountAlreadyExistsException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const AccountAlreadyExistsException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AccountAlreadyExistsException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(AccountAlreadyExistsException &a, AccountAlreadyExistsException &b);

inline std::ostream& operator<<(std::ostream& out, const AccountAlreadyExistsException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidCodeException__isset {
  _InvalidCodeException__isset() : message(true) {}
  bool message :1;
} _InvalidCodeException__isset;

class InvalidCodeException : public ::apache::thrift::TException {
 public:

  InvalidCodeException(const InvalidCodeException&);
  InvalidCodeException& operator=(const InvalidCodeException&);
  InvalidCodeException() : message("The Reset Password is invalid") {
  }

  virtual ~InvalidCodeException() throw();
  std::string message;

  _InvalidCodeException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidCodeException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidCodeException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidCodeException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(InvalidCodeException &a, InvalidCodeException &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidCodeException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _UnauthorizedException__isset {
  _UnauthorizedException__isset() : message(true) {}
  bool message :1;
} _UnauthorizedException__isset;

class UnauthorizedException : public ::apache::thrift::TException {
 public:

  UnauthorizedException(const UnauthorizedException&);
  UnauthorizedException& operator=(const UnauthorizedException&);
  UnauthorizedException() : message("Only an Owner can do that") {
  }

  virtual ~UnauthorizedException() throw();
  std::string message;

  _UnauthorizedException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const UnauthorizedException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const UnauthorizedException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnauthorizedException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(UnauthorizedException &a, UnauthorizedException &b);

inline std::ostream& operator<<(std::ostream& out, const UnauthorizedException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _DoesNotExistException__isset {
  _DoesNotExistException__isset() : message(true) {}
  bool message :1;
} _DoesNotExistException__isset;

class DoesNotExistException : public ::apache::thrift::TException {
 public:

  DoesNotExistException(const DoesNotExistException&);
  DoesNotExistException& operator=(const DoesNotExistException&);
  DoesNotExistException() : message("The requested resource does not exist") {
  }

  virtual ~DoesNotExistException() throw();
  std::string message;

  _DoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const DoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const DoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(DoesNotExistException &a, DoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const DoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationDoesNotExistException__isset {
  _ApplicationDoesNotExistException__isset() : message(true) {}
  bool message :1;
} _ApplicationDoesNotExistException__isset;

class ApplicationDoesNotExistException : public ::apache::thrift::TException {
 public:

  ApplicationDoesNotExistException(const ApplicationDoesNotExistException&);
  ApplicationDoesNotExistException& operator=(const ApplicationDoesNotExistException&);
  ApplicationDoesNotExistException() : message("The Specified Application does not exist.") {
  }

  virtual ~ApplicationDoesNotExistException() throw();
  std::string message;

  _ApplicationDoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ApplicationDoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationDoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationDoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ApplicationDoesNotExistException &a, ApplicationDoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationDoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ApplicationAlreadyRegisteredException__isset {
  _ApplicationAlreadyRegisteredException__isset() : message(true) {}
  bool message :1;
} _ApplicationAlreadyRegisteredException__isset;

class ApplicationAlreadyRegisteredException : public ::apache::thrift::TException {
 public:

  ApplicationAlreadyRegisteredException(const ApplicationAlreadyRegisteredException&);
  ApplicationAlreadyRegisteredException& operator=(const ApplicationAlreadyRegisteredException&);
  ApplicationAlreadyRegisteredException() : message("This Channel has already been registered for this Application.") {
  }

  virtual ~ApplicationAlreadyRegisteredException() throw();
  std::string message;

  _ApplicationAlreadyRegisteredException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ApplicationAlreadyRegisteredException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ApplicationAlreadyRegisteredException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationAlreadyRegisteredException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ApplicationAlreadyRegisteredException &a, ApplicationAlreadyRegisteredException &b);

inline std::ostream& operator<<(std::ostream& out, const ApplicationAlreadyRegisteredException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _UserDoesNotExistException__isset {
  _UserDoesNotExistException__isset() : message(true) {}
  bool message :1;
} _UserDoesNotExistException__isset;

class UserDoesNotExistException : public ::apache::thrift::TException {
 public:

  UserDoesNotExistException(const UserDoesNotExistException&);
  UserDoesNotExistException& operator=(const UserDoesNotExistException&);
  UserDoesNotExistException() : message("The User you're referring to does not exist.") {
  }

  virtual ~UserDoesNotExistException() throw();
  std::string message;

  _UserDoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const UserDoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const UserDoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserDoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(UserDoesNotExistException &a, UserDoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const UserDoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ThroughoutExceededException__isset {
  _ThroughoutExceededException__isset() : message(true) {}
  bool message :1;
} _ThroughoutExceededException__isset;

class ThroughoutExceededException : public ::apache::thrift::TException {
 public:

  ThroughoutExceededException(const ThroughoutExceededException&);
  ThroughoutExceededException& operator=(const ThroughoutExceededException&);
  ThroughoutExceededException() : message("You have exceeded your allocated throughput. Buy more or slow down.") {
  }

  virtual ~ThroughoutExceededException() throw();
  std::string message;

  _ThroughoutExceededException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ThroughoutExceededException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ThroughoutExceededException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ThroughoutExceededException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ThroughoutExceededException &a, ThroughoutExceededException &b);

inline std::ostream& operator<<(std::ostream& out, const ThroughoutExceededException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CustomChannelUnreachableException__isset {
  _CustomChannelUnreachableException__isset() : message(true) {}
  bool message :1;
} _CustomChannelUnreachableException__isset;

class CustomChannelUnreachableException : public ::apache::thrift::TException {
 public:

  CustomChannelUnreachableException(const CustomChannelUnreachableException&);
  CustomChannelUnreachableException& operator=(const CustomChannelUnreachableException&);
  CustomChannelUnreachableException() : message("The Custom Channel you've supplied could not be reached. Please ensure the Application is reachable and operational.") {
  }

  virtual ~CustomChannelUnreachableException() throw();
  std::string message;

  _CustomChannelUnreachableException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const CustomChannelUnreachableException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const CustomChannelUnreachableException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomChannelUnreachableException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(CustomChannelUnreachableException &a, CustomChannelUnreachableException &b);

inline std::ostream& operator<<(std::ostream& out, const CustomChannelUnreachableException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _ChannelDoesNotExistException__isset {
  _ChannelDoesNotExistException__isset() : message(true) {}
  bool message :1;
} _ChannelDoesNotExistException__isset;

class ChannelDoesNotExistException : public ::apache::thrift::TException {
 public:

  ChannelDoesNotExistException(const ChannelDoesNotExistException&);
  ChannelDoesNotExistException& operator=(const ChannelDoesNotExistException&);
  ChannelDoesNotExistException() : message("The Channel specified does not exist in the System.") {
  }

  virtual ~ChannelDoesNotExistException() throw();
  std::string message;

  _ChannelDoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ChannelDoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ChannelDoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChannelDoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(ChannelDoesNotExistException &a, ChannelDoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const ChannelDoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MessageDoesNotExistException__isset {
  _MessageDoesNotExistException__isset() : message(true) {}
  bool message :1;
} _MessageDoesNotExistException__isset;

class MessageDoesNotExistException : public ::apache::thrift::TException {
 public:

  MessageDoesNotExistException(const MessageDoesNotExistException&);
  MessageDoesNotExistException& operator=(const MessageDoesNotExistException&);
  MessageDoesNotExistException() : message("The Message specified does not exist.") {
  }

  virtual ~MessageDoesNotExistException() throw();
  std::string message;

  _MessageDoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const MessageDoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const MessageDoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageDoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(MessageDoesNotExistException &a, MessageDoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const MessageDoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OrganizationDoesNotExistException__isset {
  _OrganizationDoesNotExistException__isset() : message(true) {}
  bool message :1;
} _OrganizationDoesNotExistException__isset;

class OrganizationDoesNotExistException : public ::apache::thrift::TException {
 public:

  OrganizationDoesNotExistException(const OrganizationDoesNotExistException&);
  OrganizationDoesNotExistException& operator=(const OrganizationDoesNotExistException&);
  OrganizationDoesNotExistException() : message("The Organization specified does not exist.") {
  }

  virtual ~OrganizationDoesNotExistException() throw();
  std::string message;

  _OrganizationDoesNotExistException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const OrganizationDoesNotExistException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const OrganizationDoesNotExistException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OrganizationDoesNotExistException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(OrganizationDoesNotExistException &a, OrganizationDoesNotExistException &b);

inline std::ostream& operator<<(std::ostream& out, const OrganizationDoesNotExistException& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _OperationFailedException__isset {
  _OperationFailedException__isset() : message(true) {}
  bool message :1;
} _OperationFailedException__isset;

class OperationFailedException : public ::apache::thrift::TException {
 public:

  OperationFailedException(const OperationFailedException&);
  OperationFailedException& operator=(const OperationFailedException&);
  OperationFailedException() : message("The Operation could not be completed") {
  }

  virtual ~OperationFailedException() throw();
  std::string message;

  _OperationFailedException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const OperationFailedException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const OperationFailedException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OperationFailedException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(OperationFailedException &a, OperationFailedException &b);

inline std::ostream& operator<<(std::ostream& out, const OperationFailedException& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif
