/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "AuthenticationService_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace aroma { namespace banana { namespace thrift { namespace authentication { namespace service {


CreateTokenRequest::~CreateTokenRequest() throw() {
}


void CreateTokenRequest::__set_ownerId(const uuid& val) {
  this->ownerId = val;
}

void CreateTokenRequest::__set_lifetime(const LengthOfTime& val) {
  this->lifetime = val;
}

void CreateTokenRequest::__set_desiredTokenType(const TokenType val) {
  this->desiredTokenType = val;
}

uint32_t CreateTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->ownerId);
          this->__isset.ownerId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->lifetime.read(iprot);
          this->__isset.lifetime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->desiredTokenType = ( ::aroma::banana::thrift::authentication::TokenType::type)ecast0;
          this->__isset.desiredTokenType = true;
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

uint32_t CreateTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateTokenRequest");

  xfer += oprot->writeFieldBegin("ownerId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->ownerId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("lifetime", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->lifetime.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("desiredTokenType", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->desiredTokenType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateTokenRequest &a, CreateTokenRequest &b) {
  using ::std::swap;
  swap(a.ownerId, b.ownerId);
  swap(a.lifetime, b.lifetime);
  swap(a.desiredTokenType, b.desiredTokenType);
  swap(a.__isset, b.__isset);
}

CreateTokenRequest::CreateTokenRequest(const CreateTokenRequest& other1) {
  ownerId = other1.ownerId;
  lifetime = other1.lifetime;
  desiredTokenType = other1.desiredTokenType;
  __isset = other1.__isset;
}
CreateTokenRequest& CreateTokenRequest::operator=(const CreateTokenRequest& other2) {
  ownerId = other2.ownerId;
  lifetime = other2.lifetime;
  desiredTokenType = other2.desiredTokenType;
  __isset = other2.__isset;
  return *this;
}
void CreateTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateTokenRequest(";
  out << "ownerId=" << to_string(ownerId);
  out << ", " << "lifetime=" << to_string(lifetime);
  out << ", " << "desiredTokenType=" << to_string(desiredTokenType);
  out << ")";
}


CreateTokenResponse::~CreateTokenResponse() throw() {
}


void CreateTokenResponse::__set_token(const AuthenticationToken& val) {
  this->token = val;
}

uint32_t CreateTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->token.read(iprot);
          this->__isset.token = true;
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

uint32_t CreateTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CreateTokenResponse");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(CreateTokenResponse &a, CreateTokenResponse &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

CreateTokenResponse::CreateTokenResponse(const CreateTokenResponse& other3) {
  token = other3.token;
  __isset = other3.__isset;
}
CreateTokenResponse& CreateTokenResponse::operator=(const CreateTokenResponse& other4) {
  token = other4.token;
  __isset = other4.__isset;
  return *this;
}
void CreateTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "CreateTokenResponse(";
  out << "token=" << to_string(token);
  out << ")";
}


GetTokenInfoRequest::~GetTokenInfoRequest() throw() {
}


void GetTokenInfoRequest::__set_tokenId(const std::string& val) {
  this->tokenId = val;
}

void GetTokenInfoRequest::__set_tokenType(const TokenType val) {
  this->tokenType = val;
}

uint32_t GetTokenInfoRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->tokenId);
          this->__isset.tokenId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast5;
          xfer += iprot->readI32(ecast5);
          this->tokenType = ( ::aroma::banana::thrift::authentication::TokenType::type)ecast5;
          this->__isset.tokenType = true;
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

uint32_t GetTokenInfoRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GetTokenInfoRequest");

  xfer += oprot->writeFieldBegin("tokenId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->tokenId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("tokenType", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((int32_t)this->tokenType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GetTokenInfoRequest &a, GetTokenInfoRequest &b) {
  using ::std::swap;
  swap(a.tokenId, b.tokenId);
  swap(a.tokenType, b.tokenType);
  swap(a.__isset, b.__isset);
}

GetTokenInfoRequest::GetTokenInfoRequest(const GetTokenInfoRequest& other6) {
  tokenId = other6.tokenId;
  tokenType = other6.tokenType;
  __isset = other6.__isset;
}
GetTokenInfoRequest& GetTokenInfoRequest::operator=(const GetTokenInfoRequest& other7) {
  tokenId = other7.tokenId;
  tokenType = other7.tokenType;
  __isset = other7.__isset;
  return *this;
}
void GetTokenInfoRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GetTokenInfoRequest(";
  out << "tokenId=" << to_string(tokenId);
  out << ", " << "tokenType=" << to_string(tokenType);
  out << ")";
}


GetTokenInfoResponse::~GetTokenInfoResponse() throw() {
}


void GetTokenInfoResponse::__set_token(const AuthenticationToken& val) {
  this->token = val;
}

uint32_t GetTokenInfoResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->token.read(iprot);
          this->__isset.token = true;
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

uint32_t GetTokenInfoResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GetTokenInfoResponse");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GetTokenInfoResponse &a, GetTokenInfoResponse &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

GetTokenInfoResponse::GetTokenInfoResponse(const GetTokenInfoResponse& other8) {
  token = other8.token;
  __isset = other8.__isset;
}
GetTokenInfoResponse& GetTokenInfoResponse::operator=(const GetTokenInfoResponse& other9) {
  token = other9.token;
  __isset = other9.__isset;
  return *this;
}
void GetTokenInfoResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GetTokenInfoResponse(";
  out << "token=" << to_string(token);
  out << ")";
}


InvalidateTokenRequest::~InvalidateTokenRequest() throw() {
}


void InvalidateTokenRequest::__set_token(const AuthenticationToken& val) {
  this->token = val;
}

uint32_t InvalidateTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += this->token.read(iprot);
          this->__isset.token = true;
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

uint32_t InvalidateTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidateTokenRequest");

  xfer += oprot->writeFieldBegin("token", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->token.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidateTokenRequest &a, InvalidateTokenRequest &b) {
  using ::std::swap;
  swap(a.token, b.token);
  swap(a.__isset, b.__isset);
}

InvalidateTokenRequest::InvalidateTokenRequest(const InvalidateTokenRequest& other10) {
  token = other10.token;
  __isset = other10.__isset;
}
InvalidateTokenRequest& InvalidateTokenRequest::operator=(const InvalidateTokenRequest& other11) {
  token = other11.token;
  __isset = other11.__isset;
  return *this;
}
void InvalidateTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidateTokenRequest(";
  out << "token=" << to_string(token);
  out << ")";
}


InvalidateTokenResponse::~InvalidateTokenResponse() throw() {
}


void InvalidateTokenResponse::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t InvalidateTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t InvalidateTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidateTokenResponse");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidateTokenResponse &a, InvalidateTokenResponse &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

InvalidateTokenResponse::InvalidateTokenResponse(const InvalidateTokenResponse& other12) {
  message = other12.message;
  __isset = other12.__isset;
}
InvalidateTokenResponse& InvalidateTokenResponse::operator=(const InvalidateTokenResponse& other13) {
  message = other13.message;
  __isset = other13.__isset;
  return *this;
}
void InvalidateTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidateTokenResponse(";
  out << "message=" << to_string(message);
  out << ")";
}


VerifyTokenRequest::~VerifyTokenRequest() throw() {
}


void VerifyTokenRequest::__set_tokenId(const std::string& val) {
  this->tokenId = val;
}

void VerifyTokenRequest::__set_ownerId(const std::string& val) {
  this->ownerId = val;
__isset.ownerId = true;
}

uint32_t VerifyTokenRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->tokenId);
          this->__isset.tokenId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->ownerId);
          this->__isset.ownerId = true;
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

uint32_t VerifyTokenRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("VerifyTokenRequest");

  xfer += oprot->writeFieldBegin("tokenId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->tokenId);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.ownerId) {
    xfer += oprot->writeFieldBegin("ownerId", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->ownerId);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(VerifyTokenRequest &a, VerifyTokenRequest &b) {
  using ::std::swap;
  swap(a.tokenId, b.tokenId);
  swap(a.ownerId, b.ownerId);
  swap(a.__isset, b.__isset);
}

VerifyTokenRequest::VerifyTokenRequest(const VerifyTokenRequest& other14) {
  tokenId = other14.tokenId;
  ownerId = other14.ownerId;
  __isset = other14.__isset;
}
VerifyTokenRequest& VerifyTokenRequest::operator=(const VerifyTokenRequest& other15) {
  tokenId = other15.tokenId;
  ownerId = other15.ownerId;
  __isset = other15.__isset;
  return *this;
}
void VerifyTokenRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyTokenRequest(";
  out << "tokenId=" << to_string(tokenId);
  out << ", " << "ownerId="; (__isset.ownerId ? (out << to_string(ownerId)) : (out << "<null>"));
  out << ")";
}


VerifyTokenResponse::~VerifyTokenResponse() throw() {
}


void VerifyTokenResponse::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t VerifyTokenResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

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

uint32_t VerifyTokenResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("VerifyTokenResponse");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(VerifyTokenResponse &a, VerifyTokenResponse &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

VerifyTokenResponse::VerifyTokenResponse(const VerifyTokenResponse& other16) {
  message = other16.message;
  __isset = other16.__isset;
}
VerifyTokenResponse& VerifyTokenResponse::operator=(const VerifyTokenResponse& other17) {
  message = other17.message;
  __isset = other17.__isset;
  return *this;
}
void VerifyTokenResponse::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "VerifyTokenResponse(";
  out << "message=" << to_string(message);
  out << ")";
}

}}}}} // namespace
