/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TProtocolFactory.h"
#import "TApplicationError.h"
#import "TProtocolError.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TBaseClient.h"

#import "AromaAuthentication_Authentication.h"
#import "Aroma_Aroma.h"
#import "AromaChannels_Channels.h"
#import "AromaEndpoint_Endpoint.h"
#import "AromaEvents_Events.h"
#import "AromaException_Exceptions.h"
#import "ApplicationService_ApplicationService.h"
#import "AromaService_AromaService.h"

#import "MessageService_MessageService.h"

NSString *MessageService_MessageServiceErrorDomain = @"MessageService_MessageServiceErrorDomain";

MessageService_int MessageService_SERVICE_PORT = 7011;
AromaEndpoint_TcpEndpoint * MessageService_PRODUCTION_ENDPOINT;
AromaEndpoint_TcpEndpoint * MessageService_BETA_ENDPOINT;
Aroma_LengthOfTime * MessageService_DEFAULT_MESSAGE_LIFETIME;

@implementation MessageService_MessageServiceConstants

+ (void) initialize {

  MessageService_PRODUCTION_ENDPOINT = [AromaEndpoint_TcpEndpoint new];
  [MessageService_PRODUCTION_ENDPOINT setHostname:@"message-srv.aroma.tech"];
  [MessageService_PRODUCTION_ENDPOINT setPort:7011];
;

  MessageService_BETA_ENDPOINT = [AromaEndpoint_TcpEndpoint new];
  [MessageService_BETA_ENDPOINT setHostname:@"message-srv.beta.aroma.tech"];
  [MessageService_BETA_ENDPOINT setPort:7011];
;

  MessageService_DEFAULT_MESSAGE_LIFETIME = [Aroma_LengthOfTime new];
  [MessageService_DEFAULT_MESSAGE_LIFETIME setValue:1];
  [MessageService_DEFAULT_MESSAGE_LIFETIME setUnit:5];
;
}

+ (AromaEndpoint_TcpEndpoint *) PRODUCTION_ENDPOINT {
  return MessageService_PRODUCTION_ENDPOINT;
}

+ (AromaEndpoint_TcpEndpoint *) BETA_ENDPOINT {
  return MessageService_BETA_ENDPOINT;
}

+ (Aroma_LengthOfTime *) DEFAULT_MESSAGE_LIFETIME {
  return MessageService_DEFAULT_MESSAGE_LIFETIME;
}
@end

@interface MessageService_MessageService_getApiVersion_args : NSObject <TBase, NSCoding, NSCopying> 



@end

@implementation MessageService_MessageService_getApiVersion_args

- (instancetype) init
{
  self = [super init];
  if (self)  {
  }
  return self;
}

- (instancetype) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if (self)   {
  }
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
  if (![anObject isKindOfClass:[MessageService_MessageService_getApiVersion_args class]]) {
    return NO;
  }
  return YES;
}

- (instancetype) copyWithZone:(NSZone *)zone
{
  MessageService_MessageService_getApiVersion_args * val = [MessageService_MessageService_getApiVersion_args new];
  return val;
}

- (BOOL) read: (id <TProtocol>) inProtocol error: (NSError *__autoreleasing *)__thriftError
{
  NSString * fieldName;
  SInt32 fieldType;
  SInt32 fieldID;

  if (![inProtocol readStructBeginReturningName: NULL error: __thriftError]) return NO;
  while (true)
  {
    if (![inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID error: __thriftError]) return NO;
    if (fieldType == TTypeSTOP) { 
      break;
    }
    switch (fieldID)
    {
      default:
        if (![TProtocolUtil skipType: fieldType onProtocol: inProtocol error: __thriftError]) return NO;
        break;
    }
    if (![inProtocol readFieldEnd: __thriftError]) return NO;
  }
  if (![inProtocol readStructEnd: __thriftError]) return NO;
  return YES;
}

- (BOOL) write: (id <TProtocol>) outProtocol error: (NSError *__autoreleasing *)__thriftError {
  if (![outProtocol writeStructBeginWithName: @"MessageService_getApiVersion_args" error: __thriftError]) return NO;
  if (![outProtocol writeFieldStop: __thriftError]) return NO;
  if (![outProtocol writeStructEnd: __thriftError]) return NO;
  return YES;
}

- (BOOL) validate: (NSError *__autoreleasing *)__thriftError {
  // check for required fields
  return YES;
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"MessageService_MessageService_getApiVersion_args("];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@interface MessageService_MessageService_getApiVersion_result : NSObject <TBase, NSCoding, NSCopying> 

@property (assign, nonatomic) double success;
@property (assign, nonatomic) BOOL successIsSet;
- (void) unsetSuccess;


- (instancetype) initWithSuccess: (double) success;

@end

@implementation MessageService_MessageService_getApiVersion_result

- (instancetype) init
{
  self = [super init];
  if (self)  {
  }
  return self;
}

- (instancetype) initWithSuccess: (double) success
{
  self = [super init];
  if (self)  {
    _success = success;
    _successIsSet = YES;
  }
  return self;
}

- (instancetype) initWithCoder: (NSCoder *) decoder
{
  self = [super init];
  if (self)   {
    if ([decoder containsValueForKey: @"success"])
    {
      _success = [decoder decodeDoubleForKey: @"success"];
      _successIsSet = YES;
    }
  }
  return self;
}

- (void) encodeWithCoder: (NSCoder *) encoder
{
  if (_successIsSet)
  {
    [encoder encodeDouble: _success forKey: @"success"];
  }
}

- (NSUInteger) hash
{
  NSUInteger hash = 17;
  hash = (hash * 31) ^ _successIsSet ? 2654435761 : 0;
  if (_successIsSet)
  {
    hash = (hash * 31) ^ [@(_success) hash];
  }
  return hash;
}

- (BOOL) isEqual: (id) anObject
{
  if (self == anObject) {
    return YES;
  }
  if (![anObject isKindOfClass:[MessageService_MessageService_getApiVersion_result class]]) {
    return NO;
  }
  MessageService_MessageService_getApiVersion_result *other = (MessageService_MessageService_getApiVersion_result *)anObject;
  if ((_successIsSet != other->_successIsSet) ||
      (_successIsSet && (_success != other->_success))) {
    return NO;
  }
  return YES;
}

- (instancetype) copyWithZone:(NSZone *)zone
{
  MessageService_MessageService_getApiVersion_result * val = [MessageService_MessageService_getApiVersion_result new];
  if (_successIsSet)
  {
    val.success = self.success;
  }
  return val;
}

- (void) setSuccess: (double) success {
  _success = success;
  _successIsSet = YES;
}

- (void) unsetSuccess {
  _successIsSet = NO;
}

- (BOOL) read: (id <TProtocol>) inProtocol error: (NSError *__autoreleasing *)__thriftError
{
  NSString * fieldName;
  SInt32 fieldType;
  SInt32 fieldID;

  if (![inProtocol readStructBeginReturningName: NULL error: __thriftError]) return NO;
  while (true)
  {
    if (![inProtocol readFieldBeginReturningName: &fieldName type: &fieldType fieldID: &fieldID error: __thriftError]) return NO;
    if (fieldType == TTypeSTOP) { 
      break;
    }
    switch (fieldID)
    {
      case 0:
        if (fieldType == TTypeDOUBLE) {
          double fieldValue;
          if (![inProtocol readDouble:&fieldValue error: __thriftError]) return NO;
          self.success = fieldValue;
        } else { 
          if (![TProtocolUtil skipType: fieldType onProtocol: inProtocol error: __thriftError]) return NO;
        }
        break;
      default:
        if (![TProtocolUtil skipType: fieldType onProtocol: inProtocol error: __thriftError]) return NO;
        break;
    }
    if (![inProtocol readFieldEnd: __thriftError]) return NO;
  }
  if (![inProtocol readStructEnd: __thriftError]) return NO;
  return YES;
}

- (BOOL) write: (id <TProtocol>) outProtocol error: (NSError *__autoreleasing *)__thriftError {
  if (![outProtocol writeStructBeginWithName: @"MessageService_getApiVersion_result" error: __thriftError]) return NO;

  if (_successIsSet) {
    if (![outProtocol writeFieldBeginWithName: @"success" type: TTypeDOUBLE fieldID: 0 error: __thriftError]) return NO;
    if (![outProtocol writeDouble: _success error: __thriftError]) return NO;
    if (![outProtocol writeFieldEnd: __thriftError]) return NO;
  }
  if (![outProtocol writeFieldStop: __thriftError]) return NO;
  if (![outProtocol writeStructEnd: __thriftError]) return NO;
  return YES;
}

- (BOOL) validate: (NSError *__autoreleasing *)__thriftError {
  // check for required fields
  return YES;
}

- (NSString *) description {
  NSMutableString * ms = [NSMutableString stringWithString: @"MessageService_MessageService_getApiVersion_result("];
  [ms appendString: @"success:"];
  [ms appendFormat: @"%f", _success];
  [ms appendString: @")"];
  return [NSString stringWithString: ms];
}

@end

@interface MessageService_MessageServiceClient () {

  id<TProtocol> inProtocol;
  id<TProtocol> outProtocol;

}

@end

@implementation MessageService_MessageServiceClient
- (id) initWithProtocol: (id <TProtocol>) protocol
{
  return [self initWithInProtocol: protocol outProtocol: protocol];
}

- (id) initWithInProtocol: (id <TProtocol>) anInProtocol outProtocol: (id <TProtocol>) anOutProtocol
{
  self = [super init];
  if (self)   {
    inProtocol = anInProtocol;
    outProtocol = anOutProtocol;
  }
  return self;
}

- (BOOL) send_getApiVersion: (NSError *__autoreleasing *)__thriftError
{
  if (![outProtocol writeMessageBeginWithName: @"getApiVersion" type: TMessageTypeCALL sequenceID: 0 error: __thriftError]) return NO;
  if (![outProtocol writeStructBeginWithName: @"MessageService_getApiVersion_args" error: __thriftError]) return NO;
  if (![outProtocol writeFieldStop: __thriftError]) return NO;
  if (![outProtocol writeStructEnd: __thriftError]) return NO;
  if (![outProtocol writeMessageEnd: __thriftError]) return NO;
  return YES;
}

- (BOOL) recv_getApiVersion: (double *) result error: (NSError *__autoreleasing *)__thriftError
{
  NSError *incomingException = [self checkIncomingMessageException: inProtocol];
  if (incomingException)  {
    if (__thriftError)    {
      *__thriftError = incomingException;
    }
    return NO;
  }
  MessageService_MessageService_getApiVersion_result * resulter = [MessageService_MessageService_getApiVersion_result new];
  if (![resulter read: inProtocol error: __thriftError]) return NO;
  if (![inProtocol readMessageEnd: __thriftError]) return NO;
  if (resulter.successIsSet)  {
    *result = resulter.success;
    return YES;
  }
  if (__thriftError)  {
    *__thriftError = [NSError errorWithDomain: TApplicationErrorDomain
                                         code: TApplicationErrorMissingResult
                                     userInfo: @{TApplicationErrorMethodKey: @"getApiVersion"}];
  }
  return NO;
}

- (NSNumber *) getApiVersion: (NSError *__autoreleasing *)__thriftError
{
  if (![self send_getApiVersion: __thriftError]) return nil;
  if (![[outProtocol transport] flush: __thriftError]) return nil;
  double __result;
  if (![self recv_getApiVersion: &__result error: __thriftError]) return nil;
  return @(__result);
}

@end

@interface MessageService_MessageServiceProcessor () {
  id <MessageService_MessageService> service;
  NSDictionary * methodMap;
}
@end

@implementation MessageService_MessageServiceProcessor

- (id) initWithMessageService: (id <MessageService_MessageService>) aService
{
  self = [super init];
  if (self)   {
    service = aService;
    methodMap = [NSMutableDictionary dictionary];
    {
      SEL s = @selector(process_getApiVersion_withSequenceID:inProtocol:outProtocol:error:);
      NSMethodSignature * sig = [self methodSignatureForSelector: s];
      NSInvocation * invocation = [NSInvocation invocationWithMethodSignature: sig];
      [invocation setSelector: s];
      [invocation retainArguments];
      [methodMap setValue: invocation forKey: @"getApiVersion"];
    }
  }
  return self;
}

- (id<MessageService_MessageService>) service
{
  return service;
}

- (BOOL) processOnInputProtocol: (id <TProtocol>) inProtocol
                 outputProtocol: (id <TProtocol>) outProtocol
                          error: (NSError *__autoreleasing *)__thriftError
{
  NSString * messageName;
  SInt32 messageType;
  SInt32 seqID;
  if (![inProtocol readMessageBeginReturningName: &messageName
                                       type: &messageType
                                 sequenceID: &seqID
                                      error: __thriftError]) return NO;
  NSInvocation * invocation = [methodMap valueForKey: messageName];
  if (invocation == nil) {
    if (![TProtocolUtil skipType: TTypeSTRUCT onProtocol: inProtocol error: __thriftError]) return NO;
    if (![inProtocol readMessageEnd: __thriftError]) return NO;
    NSError * x = [NSError errorWithDomain: TApplicationErrorDomain
                                      code: TApplicationErrorUnknownMethod
                                  userInfo: @{TApplicationErrorMethodKey: messageName}];
    if (![outProtocol writeMessageBeginWithName: messageName
                                           type: TMessageTypeEXCEPTION
                                     sequenceID: seqID
                                          error: __thriftError]) return NO;
    if (![x write: outProtocol error: __thriftError]) return NO;
    if (![outProtocol writeMessageEnd: __thriftError]) return NO;
    if (![[outProtocol transport] flush: __thriftError]) return NO;
    return YES;
  }
  // NSInvocation does not conform to NSCopying protocol
  NSInvocation * i = [NSInvocation invocationWithMethodSignature: [invocation methodSignature]];
  [i setSelector: [invocation selector]];
  [i setArgument: &seqID atIndex: 2];
  [i setArgument: &inProtocol atIndex: 3];
  [i setArgument: &outProtocol atIndex: 4];
  [i setArgument: &__thriftError atIndex: 5];
  [i setTarget: self];
  [i invoke];
  return YES;
}

- (BOOL) process_getApiVersion_withSequenceID: (SInt32) seqID inProtocol: (id<TProtocol>) inProtocol outProtocol: (id<TProtocol>) outProtocol error:(NSError *__autoreleasing *)__thriftError
{
  MessageService_MessageService_getApiVersion_args * args = [MessageService_MessageService_getApiVersion_args new];
  if (![args read: inProtocol error: __thriftError]) return NO;
  if (![inProtocol readMessageEnd: __thriftError]) return NO;
  MessageService_MessageService_getApiVersion_result * result = [MessageService_MessageService_getApiVersion_result new];
  NSNumber * serviceResult = [service getApiVersion: __thriftError];
  if (!serviceResult) return NO;
  [result setSuccess: [serviceResult doubleValue]];
  if (![outProtocol writeMessageBeginWithName: @"getApiVersion"
                                         type: TMessageTypeREPLY
                                   sequenceID: seqID
                                        error: __thriftError]) return NO;
  if (![result write: outProtocol error: __thriftError]) return NO;
  if (![outProtocol writeMessageEnd: __thriftError]) return NO;
  if (![[outProtocol transport] flush: __thriftError]) return NO;
  return YES;
}
@end

