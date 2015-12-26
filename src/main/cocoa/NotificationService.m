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

#import "Authentication.h"
#import "Banana.h"
#import "Endpoint.h"
#import "Exceptions.h"
#import "Notification.h"

#import "NotificationService.h"

@implementation NotificationService_SendNotificationRequest

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithToken: (NotificationService_AuthenticationToken) token event: (NotificationService_Event) event
{
  self = [super init];
  __token = [token retain_stub];
  __token_isset = YES;
  __event = [event retain_stub];
  __event_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"token"])
  {
    __token = [[decoder decodeObjectForKey: @"token"] retain_stub];
    __token_isset = YES;
  }
  if ([decoder containsValueForKey: @"event"])
  {
    __event = [[decoder decodeObjectForKey: @"event"] retain_stub];
    __event_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__token_isset)
  {
    [encoder encodeObject: __token forKey: @"token"];
  }
  if (__event_isset)
  {
    [encoder encodeObject: __event forKey: @"event"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __token_isset ? 2654435761 : 0;
  if (__token_isset)
  {
    hash = (hash * 31) ^ [__token hash];
  }
  hash = (hash * 31) ^ __event_isset ? 2654435761 : 0;
  if (__event_isset)
  {
    hash = (hash * 31) ^ [__event hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[NotificationService_SendNotificationRequest class]]) {
    return NO;
  }
  NotificationService_SendNotificationRequest *other = (NotificationService_SendNotificationRequest *)anObject;
  if ((__token_isset != other->__token_isset) ||
      (__token_isset && ((__token || other->__token) && ![__token isEqual:other->__token]))) {
    return NO;
  }
  if ((__event_isset != other->__event_isset) ||
      (__event_isset && ((__event || other->__event) && ![__event isEqual:other->__event]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__token release_stub];
  [__event release_stub];
  [super dealloc_stub];
}

- (BananaAuthentication_AuthenticationToken *) token {
  return [[__token retain_stub] autorelease_stub];
}

- (void) setToken: (BananaAuthentication_AuthenticationToken *) token {
  [token retain_stub];
  [__token release_stub];
  __token = token;
  __token_isset = YES;
}

- (BOOL) tokenIsSet {
  return __token_isset;
}

- (void) unsetToken {
  [__token release_stub];
  __token = nil;
  __token_isset = NO;
}

- (BananaNotifications_Event *) event {
  return [[__event retain_stub] autorelease_stub];
}

- (void) setEvent: (BananaNotifications_Event *) event {
  [event retain_stub];
  [__event release_stub];
  __event = event;
  __event_isset = YES;
}

- (BOOL) eventIsSet {
  return __event_isset;
}

- (void) unsetEvent {
  [__event release_stub];
  __event = nil;
  __event_isset = NO;
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
          BananaAuthentication_AuthenticationToken *fieldValue = [[BananaAuthentication_AuthenticationToken alloc] init];
          [fieldValue read: inProtocol];
          [self setToken: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRUCT) {
          BananaNotifications_Event *fieldValue = [[BananaNotifications_Event alloc] init];
          [fieldValue read: inProtocol];
          [self setEvent: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"SendNotificationRequest"];
  if (__token_isset) {
    if (__token != nil) {
      [outProtocol writeFieldBeginWithName: @"token" type: TType_STRUCT fieldID: 1];
      [__token write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  }
  if (__event_isset) {
    if (__event != nil) {
      [outProtocol writeFieldBeginWithName: @"event" type: TType_STRUCT fieldID: 2];
      [__event write: outProtocol];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"NotificationService_SendNotificationRequest("];
  [ms appendString: @"token:"];
  [ms appendFormat: @"%@", __token];
  [ms appendString: @",event:"];
  [ms appendFormat: @"%@", __event];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation NotificationService_SendNotificationResponse

- (id) init
{
  self = [super init];
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[NotificationService_SendNotificationResponse class]]) {
    return NO;
  }
  NotificationService_SendNotificationResponse *other = (NotificationService_SendNotificationResponse *)anObject;
  return YES;
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
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"SendNotificationResponse"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"NotificationService_SendNotificationResponse("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

static double NotificationService_API_VERSION = 1.5;
static NotificationService_int NotificationService_SERVICE_PORT = 9009;
static BananaEndpoint_TcpEndpoint * NotificationService_PRODUCTION_ENDPOINT;
static BananaEndpoint_TcpEndpoint * NotificationService_BETA_ENDPOINT;

@implementation NotificationService_NotificationServiceConstants
+ (void) initialize {
  NotificationService_PRODUCTION_ENDPOINT = [[BananaEndpoint_TcpEndpoint alloc] init];
  [NotificationService_PRODUCTION_ENDPOINT setHostname:@"notification-srv.banana.aroma.tech"];
  [NotificationService_PRODUCTION_ENDPOINT setPort:9009];

;
  NotificationService_BETA_ENDPOINT = [[BananaEndpoint_TcpEndpoint alloc] init];
  [NotificationService_BETA_ENDPOINT setHostname:@"notification-srv.beta.banana.aroma.tech"];
  [NotificationService_BETA_ENDPOINT setPort:9009];

;
}
+ (double) API_VERSION{
  return NotificationService_API_VERSION;
}
+ (NotificationService_int) SERVICE_PORT{
  return NotificationService_SERVICE_PORT;
}
+ (BananaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT{
  return NotificationService_PRODUCTION_ENDPOINT;
}
+ (BananaEndpoint_TcpEndpoint *) BETA_ENDPOINT{
  return NotificationService_BETA_ENDPOINT;
}
@end

@interface NotificationService_getApiVersion_args : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@implementation NotificationService_getApiVersion_args

- (id) init
{
  self = [super init];
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[NotificationService_getApiVersion_args class]]) {
    return NO;
  }
  NotificationService_getApiVersion_args *other = (NotificationService_getApiVersion_args *)anObject;
  return YES;
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
      default:
        [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        break;
    }
    [inProtocol readFieldEnd];
  }
  [inProtocol readStructEnd];
}

- (void) write: (id <TProtocol>) outProtocol {
  [outProtocol writeStructBeginWithName: @"getApiVersion_args"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"NotificationService_getApiVersion_args("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@interface NotificationService_GetApiVersion_result : NSObject <TBase, NSCoding> {
  double __success;

  BOOL __success_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=success, setter=setSuccess:) double success;
#endif

- (id) init;
- (id) initWithSuccess: (double) success;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (double) success;
- (void) setSuccess: (double) success;
#endif
- (BOOL) successIsSet;

@end

@implementation NotificationService_GetApiVersion_result

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithSuccess: (double) success
{
  self = [super init];
  __success = success;
  __success_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"success"])
  {
    __success = [decoder decodeDoubleForKey: @"success"];
    __success_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__success_isset)
  {
    [encoder encodeDouble: __success forKey: @"success"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __success_isset ? 2654435761 : 0;
  if (__success_isset)
  {
    hash = (hash * 31) ^ [@(__success) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[NotificationService_GetApiVersion_result class]]) {
    return NO;
  }
  NotificationService_GetApiVersion_result *other = (NotificationService_GetApiVersion_result *)anObject;
  if ((__success_isset != other->__success_isset) ||
      (__success_isset && (__success != other->__success))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [super dealloc_stub];
}

- (double) success {
  return __success;
}

- (void) setSuccess: (double) success {
  __success = success;
  __success_isset = YES;
}

- (BOOL) successIsSet {
  return __success_isset;
}

- (void) unsetSuccess {
  __success_isset = NO;
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
      case 0:
        if (fieldType == TType_DOUBLE) {
          double fieldValue = [inProtocol readDouble];
          [self setSuccess: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"GetApiVersion_result"];

  if (__success_isset) {
    [outProtocol writeFieldBeginWithName: @"success" type: TType_DOUBLE fieldID: 0];
    [outProtocol writeDouble: __success];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
}

- (void) validate {
  // check for required fields
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"NotificationService_GetApiVersion_result("];
  [ms appendString: @"success:"];
  [ms appendFormat: @"%f", __success];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@interface NotificationService_sendNotification_args : NSObject <TBase, NSCoding> {
  NotificationService_SendNotificationRequest * __request;

  BOOL __request_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=request, setter=setRequest:) NotificationService_SendNotificationRequest * request;
#endif

- (id) init;
- (id) initWithRequest: (NotificationService_SendNotificationRequest *) request;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NotificationService_SendNotificationRequest *) request;
- (void) setRequest: (NotificationService_SendNotificationRequest *) request;
#endif
- (BOOL) requestIsSet;

@end

@implementation NotificationService_sendNotification_args

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithRequest: (NotificationService_SendNotificationRequest *) request
{
  self = [super init];
  __request = [request retain_stub];
  __request_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"request"])
  {
    __request = [[decoder decodeObjectForKey: @"request"] retain_stub];
    __request_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__request_isset)
  {
    [encoder encodeObject: __request forKey: @"request"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __request_isset ? 2654435761 : 0;
  if (__request_isset)
  {
    hash = (hash * 31) ^ [__request hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[NotificationService_sendNotification_args class]]) {
    return NO;
  }
  NotificationService_sendNotification_args *other = (NotificationService_sendNotification_args *)anObject;
  if ((__request_isset != other->__request_isset) ||
      (__request_isset && ((__request || other->__request) && ![__request isEqual:other->__request]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__request release_stub];
  [super dealloc_stub];
}

- (NotificationService_SendNotificationRequest *) request {
  return [[__request retain_stub] autorelease_stub];
}

- (void) setRequest: (NotificationService_SendNotificationRequest *) request {
  [request retain_stub];
  [__request release_stub];
  __request = request;
  __request_isset = YES;
}

- (BOOL) requestIsSet {
  return __request_isset;
}

- (void) unsetRequest {
  [__request release_stub];
  __request = nil;
  __request_isset = NO;
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
          NotificationService_SendNotificationRequest *fieldValue = [[NotificationService_SendNotificationRequest alloc] init];
          [fieldValue read: inProtocol];
          [self setRequest: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"sendNotification_args"];
  if (__request_isset) {
    if (__request != nil) {
      [outProtocol writeFieldBeginWithName: @"request" type: TType_STRUCT fieldID: 1];
      [__request write: outProtocol];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"NotificationService_sendNotification_args("];
  [ms appendString: @"request:"];
  [ms appendFormat: @"%@", __request];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@interface NotificationService_SendNotification_result : NSObject <TBase, NSCoding> {
  NotificationService_SendNotificationResponse * __success;
  NotificationService_InvalidArgumentException __ex1;
  NotificationService_OperationFailedException __ex2;
  NotificationService_InvalidTokenException __ex3;

  BOOL __success_isset;
  BOOL __ex1_isset;
  BOOL __ex2_isset;
  BOOL __ex3_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=success, setter=setSuccess:) NotificationService_SendNotificationResponse * success;
@property (nonatomic, retain, getter=ex1, setter=setEx1:) NotificationService_InvalidArgumentException ex1;
@property (nonatomic, retain, getter=ex2, setter=setEx2:) NotificationService_OperationFailedException ex2;
@property (nonatomic, retain, getter=ex3, setter=setEx3:) NotificationService_InvalidTokenException ex3;
#endif

- (id) init;
- (id) initWithSuccess: (NotificationService_SendNotificationResponse *) success ex1: (NotificationService_InvalidArgumentException) ex1 ex2: (NotificationService_OperationFailedException) ex2 ex3: (NotificationService_InvalidTokenException) ex3;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NotificationService_SendNotificationResponse *) success;
- (void) setSuccess: (NotificationService_SendNotificationResponse *) success;
#endif
- (BOOL) successIsSet;

#if !__has_feature(objc_arc)
- (NotificationService_InvalidArgumentException) ex1;
- (void) setEx1: (NotificationService_InvalidArgumentException) ex1;
#endif
- (BOOL) ex1IsSet;

#if !__has_feature(objc_arc)
- (NotificationService_OperationFailedException) ex2;
- (void) setEx2: (NotificationService_OperationFailedException) ex2;
#endif
- (BOOL) ex2IsSet;

#if !__has_feature(objc_arc)
- (NotificationService_InvalidTokenException) ex3;
- (void) setEx3: (NotificationService_InvalidTokenException) ex3;
#endif
- (BOOL) ex3IsSet;

@end

@implementation NotificationService_SendNotification_result

- (id) init
{
  self = [super init];
#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
#endif
  return self;
}

- (id) initWithSuccess: (NotificationService_SendNotificationResponse *) success ex1: (NotificationService_InvalidArgumentException) ex1 ex2: (NotificationService_OperationFailedException) ex2 ex3: (NotificationService_InvalidTokenException) ex3
{
  self = [super init];
  __success = [success retain_stub];
  __success_isset = YES;
  __ex1 = [ex1 retain_stub];
  __ex1_isset = YES;
  __ex2 = [ex2 retain_stub];
  __ex2_isset = YES;
  __ex3 = [ex3 retain_stub];
  __ex3_isset = YES;
  return self;
}

- (id) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if ([decoder containsValueForKey: @"success"])
  {
    __success = [[decoder decodeObjectForKey: @"success"] retain_stub];
    __success_isset = YES;
  }
  if ([decoder containsValueForKey: @"ex1"])
  {
    __ex1 = [[decoder decodeObjectForKey: @"ex1"] retain_stub];
    __ex1_isset = YES;
  }
  if ([decoder containsValueForKey: @"ex2"])
  {
    __ex2 = [[decoder decodeObjectForKey: @"ex2"] retain_stub];
    __ex2_isset = YES;
  }
  if ([decoder containsValueForKey: @"ex3"])
  {
    __ex3 = [[decoder decodeObjectForKey: @"ex3"] retain_stub];
    __ex3_isset = YES;
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (__success_isset)
  {
    [encoder encodeObject: __success forKey: @"success"];
  }
  if (__ex1_isset)
  {
    [encoder encodeObject: __ex1 forKey: @"ex1"];
  }
  if (__ex2_isset)
  {
    [encoder encodeObject: __ex2 forKey: @"ex2"];
  }
  if (__ex3_isset)
  {
    [encoder encodeObject: __ex3 forKey: @"ex3"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ __success_isset ? 2654435761 : 0;
  if (__success_isset)
  {
    hash = (hash * 31) ^ [__success hash];
  }
  hash = (hash * 31) ^ __ex1_isset ? 2654435761 : 0;
  if (__ex1_isset)
  {
    hash = (hash * 31) ^ [__ex1 hash];
  }
  hash = (hash * 31) ^ __ex2_isset ? 2654435761 : 0;
  if (__ex2_isset)
  {
    hash = (hash * 31) ^ [__ex2 hash];
  }
  hash = (hash * 31) ^ __ex3_isset ? 2654435761 : 0;
  if (__ex3_isset)
  {
    hash = (hash * 31) ^ [__ex3 hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[NotificationService_SendNotification_result class]]) {
    return NO;
  }
  NotificationService_SendNotification_result *other = (NotificationService_SendNotification_result *)anObject;
  if ((__success_isset != other->__success_isset) ||
      (__success_isset && ((__success || other->__success) && ![__success isEqual:other->__success]))) {
    return NO;
  }
  if ((__ex1_isset != other->__ex1_isset) ||
      (__ex1_isset && ((__ex1 || other->__ex1) && ![__ex1 isEqual:other->__ex1]))) {
    return NO;
  }
  if ((__ex2_isset != other->__ex2_isset) ||
      (__ex2_isset && ((__ex2 || other->__ex2) && ![__ex2 isEqual:other->__ex2]))) {
    return NO;
  }
  if ((__ex3_isset != other->__ex3_isset) ||
      (__ex3_isset && ((__ex3 || other->__ex3) && ![__ex3 isEqual:other->__ex3]))) {
    return NO;
  }
  return YES;
}

- (void) dealloc
{
  [__success release_stub];
  [__ex1 release_stub];
  [__ex2 release_stub];
  [__ex3 release_stub];
  [super dealloc_stub];
}

- (NotificationService_SendNotificationResponse *) success {
  return [[__success retain_stub] autorelease_stub];
}

- (void) setSuccess: (NotificationService_SendNotificationResponse *) success {
  [success retain_stub];
  [__success release_stub];
  __success = success;
  __success_isset = YES;
}

- (BOOL) successIsSet {
  return __success_isset;
}

- (void) unsetSuccess {
  [__success release_stub];
  __success = nil;
  __success_isset = NO;
}

- (BananaException_InvalidArgumentException *) ex1 {
  return [[__ex1 retain_stub] autorelease_stub];
}

- (void) setEx1: (BananaException_InvalidArgumentException *) ex1 {
  [ex1 retain_stub];
  [__ex1 release_stub];
  __ex1 = ex1;
  __ex1_isset = YES;
}

- (BOOL) ex1IsSet {
  return __ex1_isset;
}

- (void) unsetEx1 {
  [__ex1 release_stub];
  __ex1 = nil;
  __ex1_isset = NO;
}

- (BananaException_OperationFailedException *) ex2 {
  return [[__ex2 retain_stub] autorelease_stub];
}

- (void) setEx2: (BananaException_OperationFailedException *) ex2 {
  [ex2 retain_stub];
  [__ex2 release_stub];
  __ex2 = ex2;
  __ex2_isset = YES;
}

- (BOOL) ex2IsSet {
  return __ex2_isset;
}

- (void) unsetEx2 {
  [__ex2 release_stub];
  __ex2 = nil;
  __ex2_isset = NO;
}

- (BananaException_InvalidTokenException *) ex3 {
  return [[__ex3 retain_stub] autorelease_stub];
}

- (void) setEx3: (BananaException_InvalidTokenException *) ex3 {
  [ex3 retain_stub];
  [__ex3 release_stub];
  __ex3 = ex3;
  __ex3_isset = YES;
}

- (BOOL) ex3IsSet {
  return __ex3_isset;
}

- (void) unsetEx3 {
  [__ex3 release_stub];
  __ex3 = nil;
  __ex3_isset = NO;
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
      case 0:
        if (fieldType == TType_STRUCT) {
          NotificationService_SendNotificationResponse *fieldValue = [[NotificationService_SendNotificationResponse alloc] init];
          [fieldValue read: inProtocol];
          [self setSuccess: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 1:
        if (fieldType == TType_STRUCT) {
          BananaException_InvalidArgumentException *fieldValue = [[BananaException_InvalidArgumentException alloc] init];
          [fieldValue read: inProtocol];
          [self setEx1: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 2:
        if (fieldType == TType_STRUCT) {
          BananaException_OperationFailedException *fieldValue = [[BananaException_OperationFailedException alloc] init];
          [fieldValue read: inProtocol];
          [self setEx2: fieldValue];
          [fieldValue release_stub];
        } else { 
          [TProtocolUtil skipType: fieldType onProtocol: inProtocol];
        }
        break;
      case 3:
        if (fieldType == TType_STRUCT) {
          BananaException_InvalidTokenException *fieldValue = [[BananaException_InvalidTokenException alloc] init];
          [fieldValue read: inProtocol];
          [self setEx3: fieldValue];
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
  [outProtocol writeStructBeginWithName: @"SendNotification_result"];

  if (__success_isset) {
    if (__success != nil) {
      [outProtocol writeFieldBeginWithName: @"success" type: TType_STRUCT fieldID: 0];
      [__success write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  } else if (__ex1_isset) {
    if (__ex1 != nil) {
      [outProtocol writeFieldBeginWithName: @"ex1" type: TType_STRUCT fieldID: 1];
      [__ex1 write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  } else if (__ex2_isset) {
    if (__ex2 != nil) {
      [outProtocol writeFieldBeginWithName: @"ex2" type: TType_STRUCT fieldID: 2];
      [__ex2 write: outProtocol];
      [outProtocol writeFieldEnd];
    }
  } else if (__ex3_isset) {
    if (__ex3 != nil) {
      [outProtocol writeFieldBeginWithName: @"ex3" type: TType_STRUCT fieldID: 3];
      [__ex3 write: outProtocol];
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
  NSMutableString * ms = [NSMutableString stringWithString: @"NotificationService_SendNotification_result("];
  [ms appendString: @"success:"];
  [ms appendFormat: @"%@", __success];
  [ms appendString: @",ex1:"];
  [ms appendFormat: @"%@", __ex1];
  [ms appendString: @",ex2:"];
  [ms appendFormat: @"%@", __ex2];
  [ms appendString: @",ex3:"];
  [ms appendFormat: @"%@", __ex3];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@implementation NotificationService_NotificationServiceClient
- (id) initWithProtocol: (id <TProtocol>) protocol
{
  return [self initWithInProtocol: protocol outProtocol: protocol];
}

- (id) initWithInProtocol: (id <TProtocol>) anInProtocol outProtocol: (id <TProtocol>) anOutProtocol
{
  self = [super init];
  inProtocol = [anInProtocol retain_stub];
  outProtocol = [anOutProtocol retain_stub];
  return self;
}

- (void) send_getApiVersion
{
  [outProtocol writeMessageBeginWithName: @"getApiVersion" type: TMessageType_CALL sequenceID: 0];
  [outProtocol writeStructBeginWithName: @"getApiVersion_args"];
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
  [outProtocol writeMessageEnd];
}

- (double) recv_getApiVersion
{
  TApplicationException * x = [self checkIncomingMessageException];
  if (x != nil)  {
    @throw x;
  }
  NotificationService_GetApiVersion_result * result = [[[NotificationService_GetApiVersion_result alloc] init] autorelease_stub];
  [result read: inProtocol];
  [inProtocol readMessageEnd];
  if ([result successIsSet]) {
    return [result success];
  }
  @throw [TApplicationException exceptionWithType: TApplicationException_MISSING_RESULT
                                           reason: @"getApiVersion failed: unknown result"];
}

- (double) getApiVersion
{
  [self send_getApiVersion];
  [[outProtocol transport] flush];
  return [self recv_getApiVersion];
}

- (void) send_sendNotification: (NotificationService_SendNotificationRequest *) request
{
  [outProtocol writeMessageBeginWithName: @"sendNotification" type: TMessageType_CALL sequenceID: 0];
  [outProtocol writeStructBeginWithName: @"sendNotification_args"];
  if (request != nil)  {
    [outProtocol writeFieldBeginWithName: @"request" type: TType_STRUCT fieldID: 1];
    [request write: outProtocol];
    [outProtocol writeFieldEnd];
  }
  [outProtocol writeFieldStop];
  [outProtocol writeStructEnd];
  [outProtocol writeMessageEnd];
}

- (NotificationService_SendNotificationResponse *) recv_sendNotification
{
  TApplicationException * x = [self checkIncomingMessageException];
  if (x != nil)  {
    @throw x;
  }
  NotificationService_SendNotification_result * result = [[[NotificationService_SendNotification_result alloc] init] autorelease_stub];
  [result read: inProtocol];
  [inProtocol readMessageEnd];
  if ([result successIsSet]) {
    return [result success];
  }
  if ([result ex1IsSet]) {
    @throw [result ex1];
  }
  if ([result ex2IsSet]) {
    @throw [result ex2];
  }
  if ([result ex3IsSet]) {
    @throw [result ex3];
  }
  @throw [TApplicationException exceptionWithType: TApplicationException_MISSING_RESULT
                                           reason: @"sendNotification failed: unknown result"];
}

- (NotificationService_SendNotificationResponse *) sendNotification: (NotificationService_SendNotificationRequest *) request
{
  [self send_sendNotification : request];
  [[outProtocol transport] flush];
  return [self recv_sendNotification];
}

@end

@implementation NotificationService_NotificationServiceProcessor

- (id) initWithNotificationService: (id <NotificationService_NotificationService>) service
{
self = [super init];
if (!self) {
  return nil;
}
mService = [service retain_stub];
mMethodMap = [[NSMutableDictionary dictionary] retain_stub];
{
  SEL s = @selector(process_getApiVersion_withSequenceID:inProtocol:outProtocol:);
  NSMethodSignature * sig = [self methodSignatureForSelector: s];
  NSInvocation * invocation = [NSInvocation invocationWithMethodSignature: sig];
  [invocation setSelector: s];
  [invocation retainArguments];
  [mMethodMap setValue: invocation forKey: @"getApiVersion"];
}
{
  SEL s = @selector(process_sendNotification_withSequenceID:inProtocol:outProtocol:);
  NSMethodSignature * sig = [self methodSignatureForSelector: s];
  NSInvocation * invocation = [NSInvocation invocationWithMethodSignature: sig];
  [invocation setSelector: s];
  [invocation retainArguments];
  [mMethodMap setValue: invocation forKey: @"sendNotification"];
}
return self;
}

- (id<NotificationService_NotificationService>) service
{
  return [[mService retain_stub] autorelease_stub];
}

- (BOOL) processOnInputProtocol: (id <TProtocol>) inProtocol
                 outputProtocol: (id <TProtocol>) outProtocol
{
  NSString * messageName;
  int messageType;
  int seqID;
  [inProtocol readMessageBeginReturningName: &messageName
                                       type: &messageType
                                 sequenceID: &seqID];
  NSInvocation * invocation = [mMethodMap valueForKey: messageName];
  if (invocation == nil) {
    [TProtocolUtil skipType: TType_STRUCT onProtocol: inProtocol];
    [inProtocol readMessageEnd];
    TApplicationException * x = [TApplicationException exceptionWithType: TApplicationException_UNKNOWN_METHOD reason: [NSString stringWithFormat: @"Invalid method name: '%@'", messageName]];
    [outProtocol writeMessageBeginWithName: messageName
                                      type: TMessageType_EXCEPTION
                                sequenceID: seqID];
    [x write: outProtocol];
    [outProtocol writeMessageEnd];
    [[outProtocol transport] flush];
    return YES;
  }
  // NSInvocation does not conform to NSCopying protocol
  NSInvocation * i = [NSInvocation invocationWithMethodSignature: [invocation methodSignature]];
  [i setSelector: [invocation selector]];
  [i setArgument: &seqID atIndex: 2];
  [i setArgument: &inProtocol atIndex: 3];
  [i setArgument: &outProtocol atIndex: 4];
  [i setTarget: self];
  [i invoke];
  return YES;
}

- (void) process_getApiVersion_withSequenceID: (int32_t) seqID inProtocol: (id<TProtocol>) inProtocol outProtocol: (id<TProtocol>) outProtocol
{
NotificationService_getApiVersion_args * args = [[NotificationService_getApiVersion_args alloc] init];
[args read: inProtocol];
[inProtocol readMessageEnd];
NotificationService_GetApiVersion_result * result = [[NotificationService_GetApiVersion_result alloc] init];
[result setSuccess: [mService getApiVersion]];
[outProtocol writeMessageBeginWithName: @"getApiVersion"
                                  type: TMessageType_REPLY
                            sequenceID: seqID];
[result write: outProtocol];
[outProtocol writeMessageEnd];
[[outProtocol transport] flush];
[result release_stub];
[args release_stub];
}

- (void) process_sendNotification_withSequenceID: (int32_t) seqID inProtocol: (id<TProtocol>) inProtocol outProtocol: (id<TProtocol>) outProtocol
{
NotificationService_sendNotification_args * args = [[NotificationService_sendNotification_args alloc] init];
[args read: inProtocol];
[inProtocol readMessageEnd];
NotificationService_SendNotification_result * result = [[NotificationService_SendNotification_result alloc] init];
[result setSuccess: [mService sendNotification: [args request]]];
[outProtocol writeMessageBeginWithName: @"sendNotification"
                                  type: TMessageType_REPLY
                            sequenceID: seqID];
[result write: outProtocol];
[outProtocol writeMessageEnd];
[[outProtocol transport] flush];
[result release_stub];
[args release_stub];
}

- (void) dealloc
{
[mService release_stub];
[mMethodMap release_stub];
[super dealloc_stub];
}

@end

