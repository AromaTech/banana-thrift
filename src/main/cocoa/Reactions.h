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

#import "Aroma.h"
#import "Exceptions.h"

typedef Aroma_int AromaReactions_int;

typedef Aroma_long AromaReactions_long;

typedef Aroma_timestamp AromaReactions_timestamp;

typedef Aroma_uuid AromaReactions_uuid;

@interface AromaReactions_MatcherAll : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@interface AromaReactions_MatcherTitleIs : NSObject <TBase, NSCoding> {
  NSString * __expectedTitle;

  BOOL __expectedTitle_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=expectedTitle, setter=setExpectedTitle:) NSString * expectedTitle;
#endif

- (id) init;
- (id) initWithExpectedTitle: (NSString *) expectedTitle;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) expectedTitle;
- (void) setExpectedTitle: (NSString *) expectedTitle;
#endif
- (BOOL) expectedTitleIsSet;

@end

@interface AromaReactions_MatcherTitleContains : NSObject <TBase, NSCoding> {
  NSString * __substring;

  BOOL __substring_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=substring, setter=setSubstring:) NSString * substring;
#endif

- (id) init;
- (id) initWithSubstring: (NSString *) substring;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) substring;
- (void) setSubstring: (NSString *) substring;
#endif
- (BOOL) substringIsSet;

@end

@interface AromaReactions_MatcherBodyIs : NSObject <TBase, NSCoding> {
  NSString * __expectedBody;

  BOOL __expectedBody_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=expectedBody, setter=setExpectedBody:) NSString * expectedBody;
#endif

- (id) init;
- (id) initWithExpectedBody: (NSString *) expectedBody;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) expectedBody;
- (void) setExpectedBody: (NSString *) expectedBody;
#endif
- (BOOL) expectedBodyIsSet;

@end

@interface AromaReactions_MatcherBodyContains : NSObject <TBase, NSCoding> {
  NSString * __substring;

  BOOL __substring_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=substring, setter=setSubstring:) NSString * substring;
#endif

- (id) init;
- (id) initWithSubstring: (NSString *) substring;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) substring;
- (void) setSubstring: (NSString *) substring;
#endif
- (BOOL) substringIsSet;

@end

@interface AromaReactions_MatcherUrgencyEquals : NSObject <TBase, NSCoding> {
  int __urgency;

  BOOL __urgency_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, getter=urgency, setter=setUrgency:) int urgency;
#endif

- (id) init;
- (id) initWithUrgency: (int) urgency;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (int) urgency;
- (void) setUrgency: (int) urgency;
#endif
- (BOOL) urgencyIsSet;

@end

@interface AromaReactions_MatcherHostnameEquals : NSObject <TBase, NSCoding> {
  NSString * __expectedHostname;

  BOOL __expectedHostname_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=expectedHostname, setter=setExpectedHostname:) NSString * expectedHostname;
#endif

- (id) init;
- (id) initWithExpectedHostname: (NSString *) expectedHostname;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) expectedHostname;
- (void) setExpectedHostname: (NSString *) expectedHostname;
#endif
- (BOOL) expectedHostnameIsSet;

@end

@interface AromaReactions_AromaMatcher : NSObject <TBase, NSCoding> {
  AromaReactions_MatcherAll * __all;
  AromaReactions_MatcherTitleIs * __titleIs;
  AromaReactions_MatcherTitleContains * __titleContains;
  AromaReactions_MatcherBodyIs * __bodyIs;
  AromaReactions_MatcherBodyContains * __bodyContains;
  AromaReactions_MatcherUrgencyEquals * __urgencyEquals;
  AromaReactions_MatcherHostnameEquals * __hostnameEquals;

  BOOL __all_isset;
  BOOL __titleIs_isset;
  BOOL __titleContains_isset;
  BOOL __bodyIs_isset;
  BOOL __bodyContains_isset;
  BOOL __urgencyEquals_isset;
  BOOL __hostnameEquals_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=all, setter=setAll:) AromaReactions_MatcherAll * all;
@property (nonatomic, retain, getter=titleIs, setter=setTitleIs:) AromaReactions_MatcherTitleIs * titleIs;
@property (nonatomic, retain, getter=titleContains, setter=setTitleContains:) AromaReactions_MatcherTitleContains * titleContains;
@property (nonatomic, retain, getter=bodyIs, setter=setBodyIs:) AromaReactions_MatcherBodyIs * bodyIs;
@property (nonatomic, retain, getter=bodyContains, setter=setBodyContains:) AromaReactions_MatcherBodyContains * bodyContains;
@property (nonatomic, retain, getter=urgencyEquals, setter=setUrgencyEquals:) AromaReactions_MatcherUrgencyEquals * urgencyEquals;
@property (nonatomic, retain, getter=hostnameEquals, setter=setHostnameEquals:) AromaReactions_MatcherHostnameEquals * hostnameEquals;
#endif

- (id) init;
- (id) initWithAll: (AromaReactions_MatcherAll *) all titleIs: (AromaReactions_MatcherTitleIs *) titleIs titleContains: (AromaReactions_MatcherTitleContains *) titleContains bodyIs: (AromaReactions_MatcherBodyIs *) bodyIs bodyContains: (AromaReactions_MatcherBodyContains *) bodyContains urgencyEquals: (AromaReactions_MatcherUrgencyEquals *) urgencyEquals hostnameEquals: (AromaReactions_MatcherHostnameEquals *) hostnameEquals;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherAll *) all;
- (void) setAll: (AromaReactions_MatcherAll *) all;
#endif
- (BOOL) allIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherTitleIs *) titleIs;
- (void) setTitleIs: (AromaReactions_MatcherTitleIs *) titleIs;
#endif
- (BOOL) titleIsIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherTitleContains *) titleContains;
- (void) setTitleContains: (AromaReactions_MatcherTitleContains *) titleContains;
#endif
- (BOOL) titleContainsIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherBodyIs *) bodyIs;
- (void) setBodyIs: (AromaReactions_MatcherBodyIs *) bodyIs;
#endif
- (BOOL) bodyIsIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherBodyContains *) bodyContains;
- (void) setBodyContains: (AromaReactions_MatcherBodyContains *) bodyContains;
#endif
- (BOOL) bodyContainsIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherUrgencyEquals *) urgencyEquals;
- (void) setUrgencyEquals: (AromaReactions_MatcherUrgencyEquals *) urgencyEquals;
#endif
- (BOOL) urgencyEqualsIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_MatcherHostnameEquals *) hostnameEquals;
- (void) setHostnameEquals: (AromaReactions_MatcherHostnameEquals *) hostnameEquals;
#endif
- (BOOL) hostnameEqualsIsSet;

@end

@interface AromaReactions_ActionPostToSlackChannel : NSObject <TBase, NSCoding> {
  NSString * __slackChannel;
  BOOL __includeBody;

  BOOL __slackChannel_isset;
  BOOL __includeBody_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=slackChannel, setter=setSlackChannel:) NSString * slackChannel;
@property (nonatomic, getter=includeBody, setter=setIncludeBody:) BOOL includeBody;
#endif

- (id) init;
- (id) initWithSlackChannel: (NSString *) slackChannel includeBody: (BOOL) includeBody;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) slackChannel;
- (void) setSlackChannel: (NSString *) slackChannel;
#endif
- (BOOL) slackChannelIsSet;

#if !__has_feature(objc_arc)
- (BOOL) includeBody;
- (void) setIncludeBody: (BOOL) includeBody;
#endif
- (BOOL) includeBodyIsSet;

@end

@interface AromaReactions_ActionPostToSlackUser : NSObject <TBase, NSCoding> {
  NSString * __slackUsername;
  BOOL __includeBody;

  BOOL __slackUsername_isset;
  BOOL __includeBody_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=slackUsername, setter=setSlackUsername:) NSString * slackUsername;
@property (nonatomic, getter=includeBody, setter=setIncludeBody:) BOOL includeBody;
#endif

- (id) init;
- (id) initWithSlackUsername: (NSString *) slackUsername includeBody: (BOOL) includeBody;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) slackUsername;
- (void) setSlackUsername: (NSString *) slackUsername;
#endif
- (BOOL) slackUsernameIsSet;

#if !__has_feature(objc_arc)
- (BOOL) includeBody;
- (void) setIncludeBody: (BOOL) includeBody;
#endif
- (BOOL) includeBodyIsSet;

@end

@interface AromaReactions_ActionSendEmail : NSObject <TBase, NSCoding> {
  NSString * __emailAddress;
  BOOL __includeBody;

  BOOL __emailAddress_isset;
  BOOL __includeBody_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=emailAddress, setter=setEmailAddress:) NSString * emailAddress;
@property (nonatomic, getter=includeBody, setter=setIncludeBody:) BOOL includeBody;
#endif

- (id) init;
- (id) initWithEmailAddress: (NSString *) emailAddress includeBody: (BOOL) includeBody;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) emailAddress;
- (void) setEmailAddress: (NSString *) emailAddress;
#endif
- (BOOL) emailAddressIsSet;

#if !__has_feature(objc_arc)
- (BOOL) includeBody;
- (void) setIncludeBody: (BOOL) includeBody;
#endif
- (BOOL) includeBodyIsSet;

@end

@interface AromaReactions_ActionIgnore : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@interface AromaReactions_ActionDeleteMessage : NSObject <TBase, NSCoding> {
}

- (id) init;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

@end

@interface AromaReactions_ActionRespondToCode : NSObject <TBase, NSCoding> {
  NSString * __messageToSend;

  BOOL __messageToSend_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=messageToSend, setter=setMessageToSend:) NSString * messageToSend;
#endif

- (id) init;
- (id) initWithMessageToSend: (NSString *) messageToSend;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSString *) messageToSend;
- (void) setMessageToSend: (NSString *) messageToSend;
#endif
- (BOOL) messageToSendIsSet;

@end

@interface AromaReactions_ActionForwardToUsers : NSObject <TBase, NSCoding> {
  NSMutableArray * __userIds;

  BOOL __userIds_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=userIds, setter=setUserIds:) NSMutableArray * userIds;
#endif

- (id) init;
- (id) initWithUserIds: (NSMutableArray *) userIds;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (NSMutableArray *) userIds;
- (void) setUserIds: (NSMutableArray *) userIds;
#endif
- (BOOL) userIdsIsSet;

@end

@interface AromaReactions_AromaAction : NSObject <TBase, NSCoding> {
  AromaReactions_ActionPostToSlackChannel * __postToSlackChannel;
  AromaReactions_ActionPostToSlackUser * __postToSlackUser;
  AromaReactions_ActionSendEmail * __sendEmail;
  AromaReactions_ActionIgnore * __ignore;
  AromaReactions_ActionDeleteMessage * __deleteMessage;
  AromaReactions_ActionRespondToCode * __respondToCode;
  AromaReactions_ActionForwardToUsers * __forwardToUsers;

  BOOL __postToSlackChannel_isset;
  BOOL __postToSlackUser_isset;
  BOOL __sendEmail_isset;
  BOOL __ignore_isset;
  BOOL __deleteMessage_isset;
  BOOL __respondToCode_isset;
  BOOL __forwardToUsers_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=postToSlackChannel, setter=setPostToSlackChannel:) AromaReactions_ActionPostToSlackChannel * postToSlackChannel;
@property (nonatomic, retain, getter=postToSlackUser, setter=setPostToSlackUser:) AromaReactions_ActionPostToSlackUser * postToSlackUser;
@property (nonatomic, retain, getter=sendEmail, setter=setSendEmail:) AromaReactions_ActionSendEmail * sendEmail;
@property (nonatomic, retain, getter=ignore, setter=setIgnore:) AromaReactions_ActionIgnore * ignore;
@property (nonatomic, retain, getter=deleteMessage, setter=setDeleteMessage:) AromaReactions_ActionDeleteMessage * deleteMessage;
@property (nonatomic, retain, getter=respondToCode, setter=setRespondToCode:) AromaReactions_ActionRespondToCode * respondToCode;
@property (nonatomic, retain, getter=forwardToUsers, setter=setForwardToUsers:) AromaReactions_ActionForwardToUsers * forwardToUsers;
#endif

- (id) init;
- (id) initWithPostToSlackChannel: (AromaReactions_ActionPostToSlackChannel *) postToSlackChannel postToSlackUser: (AromaReactions_ActionPostToSlackUser *) postToSlackUser sendEmail: (AromaReactions_ActionSendEmail *) sendEmail ignore: (AromaReactions_ActionIgnore *) ignore deleteMessage: (AromaReactions_ActionDeleteMessage *) deleteMessage respondToCode: (AromaReactions_ActionRespondToCode *) respondToCode forwardToUsers: (AromaReactions_ActionForwardToUsers *) forwardToUsers;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionPostToSlackChannel *) postToSlackChannel;
- (void) setPostToSlackChannel: (AromaReactions_ActionPostToSlackChannel *) postToSlackChannel;
#endif
- (BOOL) postToSlackChannelIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionPostToSlackUser *) postToSlackUser;
- (void) setPostToSlackUser: (AromaReactions_ActionPostToSlackUser *) postToSlackUser;
#endif
- (BOOL) postToSlackUserIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionSendEmail *) sendEmail;
- (void) setSendEmail: (AromaReactions_ActionSendEmail *) sendEmail;
#endif
- (BOOL) sendEmailIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionIgnore *) ignore;
- (void) setIgnore: (AromaReactions_ActionIgnore *) ignore;
#endif
- (BOOL) ignoreIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionDeleteMessage *) deleteMessage;
- (void) setDeleteMessage: (AromaReactions_ActionDeleteMessage *) deleteMessage;
#endif
- (BOOL) deleteMessageIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionRespondToCode *) respondToCode;
- (void) setRespondToCode: (AromaReactions_ActionRespondToCode *) respondToCode;
#endif
- (BOOL) respondToCodeIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_ActionForwardToUsers *) forwardToUsers;
- (void) setForwardToUsers: (AromaReactions_ActionForwardToUsers *) forwardToUsers;
#endif
- (BOOL) forwardToUsersIsSet;

@end

@interface AromaReactions_Reaction : NSObject <TBase, NSCoding> {
  AromaReactions_AromaMatcher * __matcher;
  AromaReactions_AromaAction * __action;

  BOOL __matcher_isset;
  BOOL __action_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=matcher, setter=setMatcher:) AromaReactions_AromaMatcher * matcher;
@property (nonatomic, retain, getter=action, setter=setAction:) AromaReactions_AromaAction * action;
#endif

- (id) init;
- (id) initWithMatcher: (AromaReactions_AromaMatcher *) matcher action: (AromaReactions_AromaAction *) action;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaReactions_AromaMatcher *) matcher;
- (void) setMatcher: (AromaReactions_AromaMatcher *) matcher;
#endif
- (BOOL) matcherIsSet;

#if !__has_feature(objc_arc)
- (AromaReactions_AromaAction *) action;
- (void) setAction: (AromaReactions_AromaAction *) action;
#endif
- (BOOL) actionIsSet;

@end

@interface AromaReactions_ReactionsConstants : NSObject {
}
@end
