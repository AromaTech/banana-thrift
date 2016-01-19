/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef AuthenticationService_TYPES_H
#define AuthenticationService_TYPES_H

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


namespace aroma { namespace banana { namespace thrift { namespace authentication { namespace service {

typedef  ::aroma::banana::thrift::int int;

typedef  ::aroma::banana::thrift::long long;

typedef  ::aroma::banana::thrift::timestamp timestamp;

typedef class  ::aroma::banana::thrift::LengthOfTime LengthOfTime;

typedef  ::aroma::banana::thrift::uuid uuid;

typedef class  ::aroma::banana::thrift::authentication::ApplicationToken ApplicationToken;

typedef class  ::aroma::banana::thrift::authentication::AuthenticationToken AuthenticationToken;

typedef  ::aroma::banana::thrift::authentication::TokenType::type TokenType;

typedef class  ::aroma::banana::thrift::authentication::UserToken UserToken;

typedef class  ::aroma::banana::thrift::exceptions::AccountAlreadyExistsException AccountAlreadyExistsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidArgumentException InvalidArgumentException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidCredentialsException InvalidCredentialsException;

typedef class  ::aroma::banana::thrift::exceptions::InvalidTokenException InvalidTokenException;

typedef class  ::aroma::banana::thrift::exceptions::OperationFailedException OperationFailedException;

typedef class  ::aroma::banana::thrift::exceptions::UnauthorizedException UnauthorizedException;

class CreateTokenRequest;

class CreateTokenResponse;

class GetTokenInfoRequest;

class GetTokenInfoResponse;

class InvalidateTokenRequest;

class InvalidateTokenResponse;

class VerifyTokenRequest;

class VerifyTokenResponse;

typedef struct _CreateTokenRequest__isset {
  _CreateTokenRequest__isset() : ownerId(false), lifetime(false), desiredTokenType(false) {}
  bool ownerId :1;
  bool lifetime :1;
  bool desiredTokenType :1;
} _CreateTokenRequest__isset;

class CreateTokenRequest {
 public:

  CreateTokenRequest(const CreateTokenRequest&);
  CreateTokenRequest& operator=(const CreateTokenRequest&);
  CreateTokenRequest() : ownerId(), desiredTokenType(( ::aroma::banana::thrift::authentication::TokenType::type)0) {
  }

  virtual ~CreateTokenRequest() throw();
  uuid ownerId;
  LengthOfTime lifetime;
  TokenType desiredTokenType;

  _CreateTokenRequest__isset __isset;

  void __set_ownerId(const uuid& val);

  void __set_lifetime(const LengthOfTime& val);

  void __set_desiredTokenType(const TokenType val);

  bool operator == (const CreateTokenRequest & rhs) const
  {
    if (!(ownerId == rhs.ownerId))
      return false;
    if (!(lifetime == rhs.lifetime))
      return false;
    if (!(desiredTokenType == rhs.desiredTokenType))
      return false;
    return true;
  }
  bool operator != (const CreateTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CreateTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CreateTokenRequest &a, CreateTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const CreateTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _CreateTokenResponse__isset {
  _CreateTokenResponse__isset() : token(false) {}
  bool token :1;
} _CreateTokenResponse__isset;

class CreateTokenResponse {
 public:

  CreateTokenResponse(const CreateTokenResponse&);
  CreateTokenResponse& operator=(const CreateTokenResponse&);
  CreateTokenResponse() {
  }

  virtual ~CreateTokenResponse() throw();
  AuthenticationToken token;

  _CreateTokenResponse__isset __isset;

  void __set_token(const AuthenticationToken& val);

  bool operator == (const CreateTokenResponse & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const CreateTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CreateTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(CreateTokenResponse &a, CreateTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const CreateTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetTokenInfoRequest__isset {
  _GetTokenInfoRequest__isset() : tokenId(false), tokenType(false) {}
  bool tokenId :1;
  bool tokenType :1;
} _GetTokenInfoRequest__isset;

class GetTokenInfoRequest {
 public:

  GetTokenInfoRequest(const GetTokenInfoRequest&);
  GetTokenInfoRequest& operator=(const GetTokenInfoRequest&);
  GetTokenInfoRequest() : tokenId(), tokenType(( ::aroma::banana::thrift::authentication::TokenType::type)0) {
  }

  virtual ~GetTokenInfoRequest() throw();
  std::string tokenId;
  TokenType tokenType;

  _GetTokenInfoRequest__isset __isset;

  void __set_tokenId(const std::string& val);

  void __set_tokenType(const TokenType val);

  bool operator == (const GetTokenInfoRequest & rhs) const
  {
    if (!(tokenId == rhs.tokenId))
      return false;
    if (!(tokenType == rhs.tokenType))
      return false;
    return true;
  }
  bool operator != (const GetTokenInfoRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetTokenInfoRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetTokenInfoRequest &a, GetTokenInfoRequest &b);

inline std::ostream& operator<<(std::ostream& out, const GetTokenInfoRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _GetTokenInfoResponse__isset {
  _GetTokenInfoResponse__isset() : token(false) {}
  bool token :1;
} _GetTokenInfoResponse__isset;

class GetTokenInfoResponse {
 public:

  GetTokenInfoResponse(const GetTokenInfoResponse&);
  GetTokenInfoResponse& operator=(const GetTokenInfoResponse&);
  GetTokenInfoResponse() {
  }

  virtual ~GetTokenInfoResponse() throw();
  AuthenticationToken token;

  _GetTokenInfoResponse__isset __isset;

  void __set_token(const AuthenticationToken& val);

  bool operator == (const GetTokenInfoResponse & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const GetTokenInfoResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetTokenInfoResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GetTokenInfoResponse &a, GetTokenInfoResponse &b);

inline std::ostream& operator<<(std::ostream& out, const GetTokenInfoResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidateTokenRequest__isset {
  _InvalidateTokenRequest__isset() : token(false) {}
  bool token :1;
} _InvalidateTokenRequest__isset;

class InvalidateTokenRequest {
 public:

  InvalidateTokenRequest(const InvalidateTokenRequest&);
  InvalidateTokenRequest& operator=(const InvalidateTokenRequest&);
  InvalidateTokenRequest() {
  }

  virtual ~InvalidateTokenRequest() throw();
  AuthenticationToken token;

  _InvalidateTokenRequest__isset __isset;

  void __set_token(const AuthenticationToken& val);

  bool operator == (const InvalidateTokenRequest & rhs) const
  {
    if (!(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const InvalidateTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidateTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InvalidateTokenRequest &a, InvalidateTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidateTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _InvalidateTokenResponse__isset {
  _InvalidateTokenResponse__isset() : message(true) {}
  bool message :1;
} _InvalidateTokenResponse__isset;

class InvalidateTokenResponse {
 public:

  InvalidateTokenResponse(const InvalidateTokenResponse&);
  InvalidateTokenResponse& operator=(const InvalidateTokenResponse&);
  InvalidateTokenResponse() : message("Operation completed successfully") {
  }

  virtual ~InvalidateTokenResponse() throw();
  std::string message;

  _InvalidateTokenResponse__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const InvalidateTokenResponse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const InvalidateTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidateTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(InvalidateTokenResponse &a, InvalidateTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const InvalidateTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _VerifyTokenRequest__isset {
  _VerifyTokenRequest__isset() : tokenId(false), ownerId(false) {}
  bool tokenId :1;
  bool ownerId :1;
} _VerifyTokenRequest__isset;

class VerifyTokenRequest {
 public:

  VerifyTokenRequest(const VerifyTokenRequest&);
  VerifyTokenRequest& operator=(const VerifyTokenRequest&);
  VerifyTokenRequest() : tokenId(), ownerId() {
  }

  virtual ~VerifyTokenRequest() throw();
  std::string tokenId;
  std::string ownerId;

  _VerifyTokenRequest__isset __isset;

  void __set_tokenId(const std::string& val);

  void __set_ownerId(const std::string& val);

  bool operator == (const VerifyTokenRequest & rhs) const
  {
    if (!(tokenId == rhs.tokenId))
      return false;
    if (__isset.ownerId != rhs.__isset.ownerId)
      return false;
    else if (__isset.ownerId && !(ownerId == rhs.ownerId))
      return false;
    return true;
  }
  bool operator != (const VerifyTokenRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VerifyTokenRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VerifyTokenRequest &a, VerifyTokenRequest &b);

inline std::ostream& operator<<(std::ostream& out, const VerifyTokenRequest& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _VerifyTokenResponse__isset {
  _VerifyTokenResponse__isset() : message(false) {}
  bool message :1;
} _VerifyTokenResponse__isset;

class VerifyTokenResponse {
 public:

  VerifyTokenResponse(const VerifyTokenResponse&);
  VerifyTokenResponse& operator=(const VerifyTokenResponse&);
  VerifyTokenResponse() : message() {
  }

  virtual ~VerifyTokenResponse() throw();
  std::string message;

  _VerifyTokenResponse__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const VerifyTokenResponse & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const VerifyTokenResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const VerifyTokenResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(VerifyTokenResponse &a, VerifyTokenResponse &b);

inline std::ostream& operator<<(std::ostream& out, const VerifyTokenResponse& obj)
{
  obj.printTo(out);
  return out;
}

}}}}} // namespace

#endif
