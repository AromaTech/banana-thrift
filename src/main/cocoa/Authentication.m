/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TProtocolFactory.h"
#import "TBaseClient.h"

#import "Banana.h"

#import "Authentication.h"

@implementation BananaAuthentication_ServiceToken

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithId: (NSString *) id serviceName: (NSString *) serviceName organization: (NSString *) organization timeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration
{
  self = [super init];
  __id = [id retain_stub];
  __id_isset = YES;
  __serviceName = [serviceName retain_stub];
  __serviceName_isset = YES;
  __organization = [organization retain_stub];
  __organization_isset = YES;
  __timeOfExpiration = timeOfExpiration;
  __timeOfExpiration_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"id"])
  {
    __id = [[decoder decodeObjectForKey: @"id"] retain_stub];
    __id_isset = YES;
  }
  if ([decoder containsValueForKey: @"serviceName"])
  {
    __serviceName = [[decoder decodeObjectForKey: @"serviceName"] retain_stub];
    __serviceName_isset = YES;
  }
  if ([decoder containsValueForKey: @"organization"])
  {
    __organization = [[decoder decodeObjectForKey: @"organization"] retain_stub];
    __organization_isset = YES;
  }
  if ([decoder containsValueForKey: @"timeOfExpiration"])
  {
    __timeOfExpiration = [decoder decodeInt64ForKey: @"timeOfExpiration"];
    __timeOfExpiration_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__id_isset)
  {
    [encoder encodeObject: __id forKey: @"id"];
  }
  if (__serviceName_isset)
  {
    [encoder encodeObject: __serviceName forKey: @"serviceName"];
  }
  if (__organization_isset)
  {
    [encoder encodeObject: __organization forKey: @"organization"];
  }
  if (__timeOfExpiration_isset)
  {
    [encoder encodeInt64: __timeOfExpiration forKey: @"timeOfExpiration"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __id_isset ? 2654435761 : 0;
  if (__id_isset)
  {
    hash = (hash * 31) ^ [__id hash];
  }
  hash = (hash * 31) ^ __serviceName_isset ? 2654435761 : 0;
  if (__serviceName_isset)
  {
    hash = (hash * 31) ^ [__serviceName hash];
  }
  hash = (hash * 31) ^ __organization_isset ? 2654435761 : 0;
  if (__organization_isset)
  {
    hash = (hash * 31) ^ [__organization hash];
  }
  hash = (hash * 31) ^ __timeOfExpiration_isset ? 2654435761 : 0;
  if (__timeOfExpiration_isset)
  {
    hash = (hash * 31) ^ [@(__timeOfExpiration) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaAuthentication_ServiceToken class]]) {
    return NO;
  }
  BananaAuthentication_ServiceToken *other = (BananaAuthentication_ServiceToken *)anObject;
  if ((__id_isset != other->__id_isset) ||
      (__id_isset && ((__id || other->__id) && ![__id isEqual:other->__id]))) {
    return NO;
  }
  if ((__serviceName_isset != other->__serviceName_isset) ||
      (__serviceName_isset && ((__serviceName || other->__serviceName) && ![__serviceName isEqual:other->__serviceName]))) {
    return NO;
  }
  if ((__organization_isset != other->__organization_isset) ||
      (__organization_isset && ((__organization || other->__organization) && ![__organization isEqual:other->__organization]))) {
    return NO;
  }
  if ((__timeOfExpiration_isset != other->__timeOfExpiration_isset) ||
      (__timeOfExpiration_isset && (__timeOfExpiration != other->__timeOfExpiration))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__id release_stub];
  [__serviceName release_stub];
  [__organization release_stub];
  [super dealloc_stub];
}

- (NSString *) id {
  return [[__id retain_stub] autorelease_stub];
}

- (void) setId: (NSString *) id {
  [id retain_stub];
  [__id release_stub];
  __id = id;
  __id_isset = YES;
}

- (BOOL) idIsSet {
  return __id_isset;
}

- (void) unsetId {
  [__id release_stub];
  __id = nil;
  __id_isset = NO;
}

- (NSString *) serviceName {
  return [[__serviceName retain_stub] autorelease_stub];
}

- (void) setServiceName: (NSString *) serviceName {
  [serviceName retain_stub];
  [__serviceName release_stub];
  __serviceName = serviceName;
  __serviceName_isset = YES;
}

- (BOOL) serviceNameIsSet {
  return __serviceName_isset;
}

- (void) unsetServiceName {
  [__serviceName release_stub];
  __serviceName = nil;
  __serviceName_isset = NO;
}

- (NSString *) organization {
  return [[__organization retain_stub] autorelease_stub];
}

- (void) setOrganization: (NSString *) organization {
  [organization retain_stub];
  [__organization release_stub];
  __organization = organization;
  __organization_isset = YES;
}

- (BOOL) organizationIsSet {
  return __organization_isset;
}

- (void) unsetOrganization {
  [__organization release_stub];
  __organization = nil;
  __organization_isset = NO;
}

- (int64_t) timeOfExpiration {
  return __timeOfExpiration;
}

- (void) setTimeOfExpiration: (int64_t) timeOfExpiration {
  __timeOfExpiration = timeOfExpiration;
  __timeOfExpiration_isset = YES;
}

- (BOOL) timeOfExpirationIsSet {
  return __timeOfExpiration_isset;
}

- (void) unsetTimeOfExpiration {
  __timeOfExpiration_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setId: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setServiceName: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 3:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setOrganization: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 4:
        if (fieldType == TType_I64) {
          int64_t fieldValue = [inProtocol readI64];
          [self setTimeOfExpiration: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"ServiceToken"];
  if (__id_isset) {
    if (__id != nil) {
      [outProtocol writeFieldBeginWithName: @"id" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __id];
      [outProtocol writeFieldEnd];
    }
  }
  if (__serviceName_isset) {
    if (__serviceName != nil) {
      [outProtocol writeFieldBeginWithName: @"serviceName" type: TType_STRING fieldID: 2];
      [outProtocol writeString: __serviceName];
      [outProtocol writeFieldEnd];
    }
  }
  if (__organization_isset) {
    if (__organization != nil) {
      [outProtocol writeFieldBeginWithName: @"organization" type: TType_STRING fieldID: 3];
      [outProtocol writeString: __organization];
      [outProtocol writeFieldEnd];
    }
  }
  if (__timeOfExpiration_isset) {
    [outProtocol writeFieldBeginWithName: @"timeOfExpiration" type: TType_I64 fieldID: 4];
    [outProtocol writeI64: __timeOfExpiration];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaAuthentication_ServiceToken("];
  [ms appendString: @"id:"];
  [ms appendFormat: @"\"%@\"", __id];
  [ms appendString: @",serviceName:"];
  [ms appendFormat: @"\"%@\"", __serviceName];
  [ms appendString: @",organization:"];
  [ms appendFormat: @"\"%@\"", __organization];
  [ms appendString: @",timeOfExpiration:"];
  [ms appendFormat: @"%qi", __timeOfExpiration];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaAuthentication_DeveloperToken

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
  self.oauthProvider = @"github";

#endif
  return self;
}

- (id) initWithId: (NSString *) id oauthProvider: (NSString *) oauthProvider timeOfExpiration: (BananaAuthentication_timestamp) timeOfExpiration organization: (NSString *) organization
{
  self = [super init];
  __id = [id retain_stub];
  __id_isset = YES;
  __oauthProvider = [oauthProvider retain_stub];
  __oauthProvider_isset = YES;
  __timeOfExpiration = timeOfExpiration;
  __timeOfExpiration_isset = YES;
  __organization = [organization retain_stub];
  __organization_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"id"])
  {
    __id = [[decoder decodeObjectForKey: @"id"] retain_stub];
    __id_isset = YES;
  }
  if ([decoder containsValueForKey: @"oauthProvider"])
  {
    __oauthProvider = [[decoder decodeObjectForKey: @"oauthProvider"] retain_stub];
    __oauthProvider_isset = YES;
  }
  if ([decoder containsValueForKey: @"timeOfExpiration"])
  {
    __timeOfExpiration = [decoder decodeInt64ForKey: @"timeOfExpiration"];
    __timeOfExpiration_isset = YES;
  }
  if ([decoder containsValueForKey: @"organization"])
  {
    __organization = [[decoder decodeObjectForKey: @"organization"] retain_stub];
    __organization_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__id_isset)
  {
    [encoder encodeObject: __id forKey: @"id"];
  }
  if (__oauthProvider_isset)
  {
    [encoder encodeObject: __oauthProvider forKey: @"oauthProvider"];
  }
  if (__timeOfExpiration_isset)
  {
    [encoder encodeInt64: __timeOfExpiration forKey: @"timeOfExpiration"];
  }
  if (__organization_isset)
  {
    [encoder encodeObject: __organization forKey: @"organization"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __id_isset ? 2654435761 : 0;
  if (__id_isset)
  {
    hash = (hash * 31) ^ [__id hash];
  }
  hash = (hash * 31) ^ __oauthProvider_isset ? 2654435761 : 0;
  if (__oauthProvider_isset)
  {
    hash = (hash * 31) ^ [__oauthProvider hash];
  }
  hash = (hash * 31) ^ __timeOfExpiration_isset ? 2654435761 : 0;
  if (__timeOfExpiration_isset)
  {
    hash = (hash * 31) ^ [@(__timeOfExpiration) hash];
  }
  hash = (hash * 31) ^ __organization_isset ? 2654435761 : 0;
  if (__organization_isset)
  {
    hash = (hash * 31) ^ [__organization hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaAuthentication_DeveloperToken class]]) {
    return NO;
  }
  BananaAuthentication_DeveloperToken *other = (BananaAuthentication_DeveloperToken *)anObject;
  if ((__id_isset != other->__id_isset) ||
      (__id_isset && ((__id || other->__id) && ![__id isEqual:other->__id]))) {
    return NO;
  }
  if ((__oauthProvider_isset != other->__oauthProvider_isset) ||
      (__oauthProvider_isset && ((__oauthProvider || other->__oauthProvider) && ![__oauthProvider isEqual:other->__oauthProvider]))) {
    return NO;
  }
  if ((__timeOfExpiration_isset != other->__timeOfExpiration_isset) ||
      (__timeOfExpiration_isset && (__timeOfExpiration != other->__timeOfExpiration))) {
    return NO;
  }
  if ((__organization_isset != other->__organization_isset) ||
      (__organization_isset && ((__organization || other->__organization) && ![__organization isEqual:other->__organization]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__id release_stub];
  [__oauthProvider release_stub];
  [__organization release_stub];
  [super dealloc_stub];
}

- (NSString *) id {
  return [[__id retain_stub] autorelease_stub];
}

- (void) setId: (NSString *) id {
  [id retain_stub];
  [__id release_stub];
  __id = id;
  __id_isset = YES;
}

- (BOOL) idIsSet {
  return __id_isset;
}

- (void) unsetId {
  [__id release_stub];
  __id = nil;
  __id_isset = NO;
}

- (NSString *) oauthProvider {
  return [[__oauthProvider retain_stub] autorelease_stub];
}

- (void) setOauthProvider: (NSString *) oauthProvider {
  [oauthProvider retain_stub];
  [__oauthProvider release_stub];
  __oauthProvider = oauthProvider;
  __oauthProvider_isset = YES;
}

- (BOOL) oauthProviderIsSet {
  return __oauthProvider_isset;
}

- (void) unsetOauthProvider {
  [__oauthProvider release_stub];
  __oauthProvider = nil;
  __oauthProvider_isset = NO;
}

- (int64_t) timeOfExpiration {
  return __timeOfExpiration;
}

- (void) setTimeOfExpiration: (int64_t) timeOfExpiration {
  __timeOfExpiration = timeOfExpiration;
  __timeOfExpiration_isset = YES;
}

- (BOOL) timeOfExpirationIsSet {
  return __timeOfExpiration_isset;
}

- (void) unsetTimeOfExpiration {
  __timeOfExpiration_isset = NO;
}

- (NSString *) organization {
  return [[__organization retain_stub] autorelease_stub];
}

- (void) setOrganization: (NSString *) organization {
  [organization retain_stub];
  [__organization release_stub];
  __organization = organization;
  __organization_isset = YES;
}

- (BOOL) organizationIsSet {
  return __organization_isset;
}

- (void) unsetOrganization {
  [__organization release_stub];
  __organization = nil;
  __organization_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setId: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setOauthProvider: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 3:
        if (fieldType == TType_I64) {
          int64_t fieldValue = [inProtocol readI64];
          [self setTimeOfExpiration: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 4:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setOrganization: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"DeveloperToken"];
  if (__id_isset) {
    if (__id != nil) {
      [outProtocol writeFieldBeginWithName: @"id" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __id];
      [outProtocol writeFieldEnd];
    }
  }
  if (__oauthProvider_isset) {
    if (__oauthProvider != nil) {
      [outProtocol writeFieldBeginWithName: @"oauthProvider" type: TType_STRING fieldID: 2];
      [outProtocol writeString: __oauthProvider];
      [outProtocol writeFieldEnd];
    }
  }
  if (__timeOfExpiration_isset) {
    [outProtocol writeFieldBeginWithName: @"timeOfExpiration" type: TType_I64 fieldID: 3];
    [outProtocol writeI64: __timeOfExpiration];
    [outProtocol writeFieldEnd];
  }
  if (__organization_isset) {
    if (__organization != nil) {
      [outProtocol writeFieldBeginWithName: @"organization" type: TType_STRING fieldID: 4];
      [outProtocol writeString: __organization];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaAuthentication_DeveloperToken("];
  [ms appendString: @"id:"];
  [ms appendFormat: @"\"%@\"", __id];
  [ms appendString: @",oauthProvider:"];
  [ms appendFormat: @"\"%@\"", __oauthProvider];
  [ms appendString: @",timeOfExpiration:"];
  [ms appendFormat: @"%qi", __timeOfExpiration];
  [ms appendString: @",organization:"];
  [ms appendFormat: @"\"%@\"", __organization];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaAuthentication_GithubToken

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithUsername: (NSString *) username email: (NSString *) email oauthToken: (NSString *) oauthToken
{
  self = [super init];
  __username = [username retain_stub];
  __username_isset = YES;
  __email = [email retain_stub];
  __email_isset = YES;
  __oauthToken = [oauthToken retain_stub];
  __oauthToken_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"username"])
  {
    __username = [[decoder decodeObjectForKey: @"username"] retain_stub];
    __username_isset = YES;
  }
  if ([decoder containsValueForKey: @"email"])
  {
    __email = [[decoder decodeObjectForKey: @"email"] retain_stub];
    __email_isset = YES;
  }
  if ([decoder containsValueForKey: @"oauthToken"])
  {
    __oauthToken = [[decoder decodeObjectForKey: @"oauthToken"] retain_stub];
    __oauthToken_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__username_isset)
  {
    [encoder encodeObject: __username forKey: @"username"];
  }
  if (__email_isset)
  {
    [encoder encodeObject: __email forKey: @"email"];
  }
  if (__oauthToken_isset)
  {
    [encoder encodeObject: __oauthToken forKey: @"oauthToken"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __username_isset ? 2654435761 : 0;
  if (__username_isset)
  {
    hash = (hash * 31) ^ [__username hash];
  }
  hash = (hash * 31) ^ __email_isset ? 2654435761 : 0;
  if (__email_isset)
  {
    hash = (hash * 31) ^ [__email hash];
  }
  hash = (hash * 31) ^ __oauthToken_isset ? 2654435761 : 0;
  if (__oauthToken_isset)
  {
    hash = (hash * 31) ^ [__oauthToken hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaAuthentication_GithubToken class]]) {
    return NO;
  }
  BananaAuthentication_GithubToken *other = (BananaAuthentication_GithubToken *)anObject;
  if ((__username_isset != other->__username_isset) ||
      (__username_isset && ((__username || other->__username) && ![__username isEqual:other->__username]))) {
    return NO;
  }
  if ((__email_isset != other->__email_isset) ||
      (__email_isset && ((__email || other->__email) && ![__email isEqual:other->__email]))) {
    return NO;
  }
  if ((__oauthToken_isset != other->__oauthToken_isset) ||
      (__oauthToken_isset && ((__oauthToken || other->__oauthToken) && ![__oauthToken isEqual:other->__oauthToken]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__username release_stub];
  [__email release_stub];
  [__oauthToken release_stub];
  [super dealloc_stub];
}

- (NSString *) username {
  return [[__username retain_stub] autorelease_stub];
}

- (void) setUsername: (NSString *) username {
  [username retain_stub];
  [__username release_stub];
  __username = username;
  __username_isset = YES;
}

- (BOOL) usernameIsSet {
  return __username_isset;
}

- (void) unsetUsername {
  [__username release_stub];
  __username = nil;
  __username_isset = NO;
}

- (NSString *) email {
  return [[__email retain_stub] autorelease_stub];
}

- (void) setEmail: (NSString *) email {
  [email retain_stub];
  [__email release_stub];
  __email = email;
  __email_isset = YES;
}

- (BOOL) emailIsSet {
  return __email_isset;
}

- (void) unsetEmail {
  [__email release_stub];
  __email = nil;
  __email_isset = NO;
}

- (NSString *) oauthToken {
  return [[__oauthToken retain_stub] autorelease_stub];
}

- (void) setOauthToken: (NSString *) oauthToken {
  [oauthToken retain_stub];
  [__oauthToken release_stub];
  __oauthToken = oauthToken;
  __oauthToken_isset = YES;
}

- (BOOL) oauthTokenIsSet {
  return __oauthToken_isset;
}

- (void) unsetOauthToken {
  [__oauthToken release_stub];
  __oauthToken = nil;
  __oauthToken_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setUsername: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setEmail: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 3:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setOauthToken: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"GithubToken"];
  if (__username_isset) {
    if (__username != nil) {
      [outProtocol writeFieldBeginWithName: @"username" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __username];
      [outProtocol writeFieldEnd];
    }
  }
  if (__email_isset) {
    if (__email != nil) {
      [outProtocol writeFieldBeginWithName: @"email" type: TType_STRING fieldID: 2];
      [outProtocol writeString: __email];
      [outProtocol writeFieldEnd];
    }
  }
  if (__oauthToken_isset) {
    if (__oauthToken != nil) {
      [outProtocol writeFieldBeginWithName: @"oauthToken" type: TType_STRING fieldID: 3];
      [outProtocol writeString: __oauthToken];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
  if (!__oauthToken_isset) {
    @throw [TProtocolException exceptionWithName: @"TProtocolException"
                               reason: @"Required field 'oauthToken' is not set."];
  }
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaAuthentication_GithubToken("];
  [ms appendString: @"username:"];
  [ms appendFormat: @"\"%@\"", __username];
  [ms appendString: @",email:"];
  [ms appendFormat: @"\"%@\"", __email];
  [ms appendString: @",oauthToken:"];
  [ms appendFormat: @"\"%@\"", __oauthToken];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaAuthentication_Password

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithEncryptedPassword: (NSString *) encryptedPassword
{
  self = [super init];
  __encryptedPassword = [encryptedPassword retain_stub];
  __encryptedPassword_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"encryptedPassword"])
  {
    __encryptedPassword = [[decoder decodeObjectForKey: @"encryptedPassword"] retain_stub];
    __encryptedPassword_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__encryptedPassword_isset)
  {
    [encoder encodeObject: __encryptedPassword forKey: @"encryptedPassword"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __encryptedPassword_isset ? 2654435761 : 0;
  if (__encryptedPassword_isset)
  {
    hash = (hash * 31) ^ [__encryptedPassword hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaAuthentication_Password class]]) {
    return NO;
  }
  BananaAuthentication_Password *other = (BananaAuthentication_Password *)anObject;
  if ((__encryptedPassword_isset != other->__encryptedPassword_isset) ||
      (__encryptedPassword_isset && ((__encryptedPassword || other->__encryptedPassword) && ![__encryptedPassword isEqual:other->__encryptedPassword]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__encryptedPassword release_stub];
  [super dealloc_stub];
}

- (NSString *) encryptedPassword {
  return [[__encryptedPassword retain_stub] autorelease_stub];
}

- (void) setEncryptedPassword: (NSString *) encryptedPassword {
  [encryptedPassword retain_stub];
  [__encryptedPassword release_stub];
  __encryptedPassword = encryptedPassword;
  __encryptedPassword_isset = YES;
}

- (BOOL) encryptedPasswordIsSet {
  return __encryptedPassword_isset;
}

- (void) unsetEncryptedPassword {
  [__encryptedPassword release_stub];
  __encryptedPassword = nil;
  __encryptedPassword_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setEncryptedPassword: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Password"];
  if (__encryptedPassword_isset) {
    if (__encryptedPassword != nil) {
      [outProtocol writeFieldBeginWithName: @"encryptedPassword" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __encryptedPassword];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaAuthentication_Password("];
  [ms appendString: @"encryptedPassword:"];
  [ms appendFormat: @"\"%@\"", __encryptedPassword];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaAuthentication_AromaAccount

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithUsername: (NSString *) username password: (BananaAuthentication_Password *) password
{
  self = [super init];
  __username = [username retain_stub];
  __username_isset = YES;
  __password = [password retain_stub];
  __password_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"username"])
  {
    __username = [[decoder decodeObjectForKey: @"username"] retain_stub];
    __username_isset = YES;
  }
  if ([decoder containsValueForKey: @"password"])
  {
    __password = [[decoder decodeObjectForKey: @"password"] retain_stub];
    __password_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__username_isset)
  {
    [encoder encodeObject: __username forKey: @"username"];
  }
  if (__password_isset)
  {
    [encoder encodeObject: __password forKey: @"password"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __username_isset ? 2654435761 : 0;
  if (__username_isset)
  {
    hash = (hash * 31) ^ [__username hash];
  }
  hash = (hash * 31) ^ __password_isset ? 2654435761 : 0;
  if (__password_isset)
  {
    hash = (hash * 31) ^ [__password hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaAuthentication_AromaAccount class]]) {
    return NO;
  }
  BananaAuthentication_AromaAccount *other = (BananaAuthentication_AromaAccount *)anObject;
  if ((__username_isset != other->__username_isset) ||
      (__username_isset && ((__username || other->__username) && ![__username isEqual:other->__username]))) {
    return NO;
  }
  if ((__password_isset != other->__password_isset) ||
      (__password_isset && ((__password || other->__password) && ![__password isEqual:other->__password]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__username release_stub];
  [__password release_stub];
  [super dealloc_stub];
}

- (NSString *) username {
  return [[__username retain_stub] autorelease_stub];
}

- (void) setUsername: (NSString *) username {
  [username retain_stub];
  [__username release_stub];
  __username = username;
  __username_isset = YES;
}

- (BOOL) usernameIsSet {
  return __username_isset;
}

- (void) unsetUsername {
  [__username release_stub];
  __username = nil;
  __username_isset = NO;
}

- (BananaAuthentication_Password *) password {
  return [[__password retain_stub] autorelease_stub];
}

- (void) setPassword: (BananaAuthentication_Password *) password {
  [password retain_stub];
  [__password release_stub];
  __password = password;
  __password_isset = YES;
}

- (BOOL) passwordIsSet {
  return __password_isset;
}

- (void) unsetPassword {
  [__password release_stub];
  __password = nil;
  __password_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRING) {
          NSString * fieldValue = [inProtocol readString];
          [self setUsername: fieldValue];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_Password *fieldValue = [[BananaAuthentication_Password alloc] init];
          [fieldValue read: inProtocol];
          [self setPassword: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"AromaAccount"];
  if (__username_isset) {
    if (__username != nil) {
      [outProtocol writeFieldBeginWithName: @"username" type: TType_STRING fieldID: 1];
      [outProtocol writeString: __username];
      [outProtocol writeFieldEnd];
    }
  }
  if (__password_isset) {
    if (__password != nil) {
      [outProtocol writeFieldBeginWithName: @"password" type: TType_STRUCT fieldID: 2];
      [__password write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaAuthentication_AromaAccount("];
  [ms appendString: @"username:"];
  [ms appendFormat: @"\"%@\"", __username];
  [ms appendString: @",password:"];
  [ms appendFormat: @"%@", __password];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation BananaAuthentication_Credentials

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithGithubToken: (BananaAuthentication_GithubToken *) githubToken aromaAccount: (BananaAuthentication_AromaAccount *) aromaAccount
{
  self = [super init];
  __githubToken = [githubToken retain_stub];
  __githubToken_isset = YES;
  __aromaAccount = [aromaAccount retain_stub];
  __aromaAccount_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"githubToken"])
  {
    __githubToken = [[decoder decodeObjectForKey: @"githubToken"] retain_stub];
    __githubToken_isset = YES;
  }
  if ([decoder containsValueForKey: @"aromaAccount"])
  {
    __aromaAccount = [[decoder decodeObjectForKey: @"aromaAccount"] retain_stub];
    __aromaAccount_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__githubToken_isset)
  {
    [encoder encodeObject: __githubToken forKey: @"githubToken"];
  }
  if (__aromaAccount_isset)
  {
    [encoder encodeObject: __aromaAccount forKey: @"aromaAccount"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __githubToken_isset ? 2654435761 : 0;
  if (__githubToken_isset)
  {
    hash = (hash * 31) ^ [__githubToken hash];
  }
  hash = (hash * 31) ^ __aromaAccount_isset ? 2654435761 : 0;
  if (__aromaAccount_isset)
  {
    hash = (hash * 31) ^ [__aromaAccount hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[BananaAuthentication_Credentials class]]) {
    return NO;
  }
  BananaAuthentication_Credentials *other = (BananaAuthentication_Credentials *)anObject;
  if ((__githubToken_isset != other->__githubToken_isset) ||
      (__githubToken_isset && ((__githubToken || other->__githubToken) && ![__githubToken isEqual:other->__githubToken]))) {
    return NO;
  }
  if ((__aromaAccount_isset != other->__aromaAccount_isset) ||
      (__aromaAccount_isset && ((__aromaAccount || other->__aromaAccount) && ![__aromaAccount isEqual:other->__aromaAccount]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__githubToken release_stub];
  [__aromaAccount release_stub];
  [super dealloc_stub];
}

- (BananaAuthentication_GithubToken *) githubToken {
  return [[__githubToken retain_stub] autorelease_stub];
}

- (void) setGithubToken: (BananaAuthentication_GithubToken *) githubToken {
  [githubToken retain_stub];
  [__githubToken release_stub];
  __githubToken = githubToken;
  __githubToken_isset = YES;
}

- (BOOL) githubTokenIsSet {
  return __githubToken_isset;
}

- (void) unsetGithubToken {
  [__githubToken release_stub];
  __githubToken = nil;
  __githubToken_isset = NO;
}

- (BananaAuthentication_AromaAccount *) aromaAccount {
  return [[__aromaAccount retain_stub] autorelease_stub];
}

- (void) setAromaAccount: (BananaAuthentication_AromaAccount *) aromaAccount {
  [aromaAccount retain_stub];
  [__aromaAccount release_stub];
  __aromaAccount = aromaAccount;
  __aromaAccount_isset = YES;
}

- (BOOL) aromaAccountIsSet {
  return __aromaAccount_isset;
}

- (void) unsetAromaAccount {
  [__aromaAccount release_stub];
  __aromaAccount = nil;
  __aromaAccount_isset = NO;
}

- (void) read: (id <TProtocol>) inProtocol
{
  NSString * fieldName;
  int fieldType;
  int fieldID;

  [inProtocol readStructBeginReturningName: NULL];
  while (true)
  {
    [inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID];
    if (fieldType == TType_STOP) { 
      break;
    }
    switch (fieldID)
    {
      case 1:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_GithubToken *fieldValue = [[BananaAuthentication_GithubToken alloc] init];
          [fieldValue read: inProtocol];
          [self setGithubToken: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRUCT) {
          BananaAuthentication_AromaAccount *fieldValue = [[BananaAuthentication_AromaAccount alloc] init];
          [fieldValue read: inProtocol];
          [self setAromaAccount: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"Credentials"];
  if (__githubToken_isset) {
    if (__githubToken != nil) {
      [outProtocol writeFieldBeginWithName: @"githubToken" type: TType_STRUCT fieldID: 1];
      [__githubToken write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  if (__aromaAccount_isset) {
    if (__aromaAccount != nil) {
      [outProtocol writeFieldBeginWithName: @"aromaAccount" type: TType_STRUCT fieldID: 2];
      [__aromaAccount write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"BananaAuthentication_Credentials("];
  [ms appendString: @"githubToken:"];
  [ms appendFormat: @"%@", __githubToken];
  [ms appendString: @",aromaAccount:"];
  [ms appendFormat: @"%@", __aromaAccount];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end


@implementation BananaAuthentication_AuthenticationConstants
+ (void) initialize {
}
@end

