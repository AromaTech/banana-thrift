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


enum Banana_Urgency {
  Urgency_INFORMATIONAL = 1,
  Urgency_PRESSING = 2,
  Urgency_CRITICAL = 3
};

enum Banana_TimeUnit {
  TimeUnit_MILLIS = 0,
  TimeUnit_SECONDS = 1,
  TimeUnit_MINUTES = 2,
  TimeUnit_HOURS = 3,
  TimeUnit_DAYS = 4
};

enum Banana_ImageType {
  ImageType_JPEG = 1,
  ImageType_PNG = 2
};

typedef int32_t Banana_int;

typedef int64_t Banana_long;

typedef int64_t Banana_timestamp;

@interface Banana_Message : NSObject <TBase, NSCoding> {
  NSString * __body;
  int __urgency;

  BOOL __body_isset;
  BOOL __urgency_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=body, setter=setBody:) NSString * body;
@property (nonatomic, getter=urgency, setter=setUrgency:) int urgency;
#endif

- (id) init;
- (id) initWithBody: (NSString *) body urgency: (int) urgency;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) body;
- (void) setBody: (NSString *) body;
#endif
- (BOOL) bodyIsSet;

#if !__has_feature(objc_arc)
- (int) urgency;
- (void) setUrgency: (int) urgency;
#endif
- (BOOL) urgencyIsSet;

@end

@interface Banana_Call : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@interface Banana_TimePeriod : NSObject <TBase, NSCoding> {
  int __unit;
  Banana_int __value;

  BOOL __unit_isset;
  BOOL __value_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=unit, setter=setUnit:) int unit;
@property (nonatomic, getter=value, setter=setValue:) Banana_int value;
#endif

- (id) init;
- (id) initWithUnit: (int) unit value: (Banana_int) value;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) unit;
- (void) setUnit: (int) unit;
#endif
- (BOOL) unitIsSet;

#if !__has_feature(objc_arc)
- (Banana_int) value;
- (void) setValue: (Banana_int) value;
#endif
- (BOOL) valueIsSet;

@end

@interface Banana_Dimension : NSObject <TBase, NSCoding> {
  Banana_int __width;
  Banana_int __height;

  BOOL __width_isset;
  BOOL __height_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=width, setter=setWidth:) Banana_int width;
@property (nonatomic, getter=height, setter=setHeight:) Banana_int height;
#endif

- (id) init;
- (id) initWithWidth: (Banana_int) width height: (Banana_int) height;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (Banana_int) width;
- (void) setWidth: (Banana_int) width;
#endif
- (BOOL) widthIsSet;

#if !__has_feature(objc_arc)
- (Banana_int) height;
- (void) setHeight: (Banana_int) height;
#endif
- (BOOL) heightIsSet;

@end

@interface Banana_Image : NSObject <TBase, NSCoding> {
  int __imageType;
  NSData * __data;
  Banana_Dimension * __dimension;

  BOOL __imageType_isset;
  BOOL __data_isset;
  BOOL __dimension_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=imageType, setter=setImageType:) int imageType;
@property (nonatomic, retain, getter=data, setter=setData:) NSData * data;
@property (nonatomic, retain, getter=dimension, setter=setDimension:) Banana_Dimension * dimension;
#endif

- (id) init;
- (id) initWithImageType: (int) imageType data: (NSData *) data dimension: (Banana_Dimension *) dimension;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) imageType;
- (void) setImageType: (int) imageType;
#endif
- (BOOL) imageTypeIsSet;

#if !__has_feature(objc_arc)
- (NSData *) data;
- (void) setData: (NSData *) data;
#endif
- (BOOL) dataIsSet;

#if !__has_feature(objc_arc)
- (Banana_Dimension *) dimension;
- (void) setDimension: (Banana_Dimension *) dimension;
#endif
- (BOOL) dimensionIsSet;

@end

@interface Banana_BananaConstants : NSObject {
}
@end