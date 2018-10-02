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

#import "Aroma_Aroma.h"

typedef NS_ENUM(SInt32, AromaAuthentication_TokenStatus) {
  AromaAuthentication_TokenStatusACTIVE = 1,
  AromaAuthentication_TokenStatusEXPIRED = 2
};

typedef NS_ENUM(SInt32, AromaAuthentication_TokenType) {
  AromaAuthentication_TokenTypeAPPLICATION = 1,
  AromaAuthentication_TokenTypeUSER = 2
};

typedef Aroma_int AromaAuthentication_int;

typedef Aroma_long AromaAuthentication_long;

typedef Aroma_timestamp AromaAuthentication_timestamp;

typedef Aroma_uuid AromaAuthentication_uuid;

@interface AromaAuthentication_ApplicationToken : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * tokenId;
@property (assign, nonatomic) BOOL tokenIdIsSet;
- (void) unsetTokenId;

@property (strong, nonatomic) NSString * organization;
@property (assign, nonatomic) BOOL organizationIsSet;
- (void) unsetOrganization;

@property (assign, nonatomic) AromaAuthentication_timestamp timeOfExpiration;
@property (assign, nonatomic) BOOL timeOfExpirationIsSet;
- (void) unsetTimeOfExpiration;

@property (strong, nonatomic) AromaAuthentication_uuid applicationId;
@property (assign, nonatomic) BOOL applicationIdIsSet;
- (void) unsetApplicationId;

@property (strong, nonatomic) NSString * applicationName;
@property (assign, nonatomic) BOOL applicationNameIsSet;
- (void) unsetApplicationName;

@property (assign, nonatomic) AromaAuthentication_TokenStatus status;
@property (assign, nonatomic) BOOL statusIsSet;
- (void) unsetStatus;


- (instancetype) initWithTokenId: (NSString *) tokenId organization: (NSString *) organization timeOfExpiration: (AromaAuthentication_timestamp) timeOfExpiration applicationId: (AromaAuthentication_uuid) applicationId applicationName: (NSString *) applicationName status: (AromaAuthentication_TokenStatus) status;

@end

@interface AromaAuthentication_UserToken : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * tokenId;
@property (assign, nonatomic) BOOL tokenIdIsSet;
- (void) unsetTokenId;

@property (assign, nonatomic) AromaAuthentication_timestamp timeOfExpiration;
@property (assign, nonatomic) BOOL timeOfExpirationIsSet;
- (void) unsetTimeOfExpiration;

@property (strong, nonatomic) NSString * organization;
@property (assign, nonatomic) BOOL organizationIsSet;
- (void) unsetOrganization;

@property (assign, nonatomic) BOOL isOauthToken;
@property (assign, nonatomic) BOOL isOauthTokenIsSet;
- (void) unsetIsOauthToken;

@property (strong, nonatomic) NSString * oauthProvider;
@property (assign, nonatomic) BOOL oauthProviderIsSet;
- (void) unsetOauthProvider;

@property (strong, nonatomic) AromaAuthentication_uuid userId;
@property (assign, nonatomic) BOOL userIdIsSet;
- (void) unsetUserId;

@property (assign, nonatomic) AromaAuthentication_TokenStatus status;
@property (assign, nonatomic) BOOL statusIsSet;
- (void) unsetStatus;


- (instancetype) initWithTokenId: (NSString *) tokenId timeOfExpiration: (AromaAuthentication_timestamp) timeOfExpiration organization: (NSString *) organization isOauthToken: (BOOL) isOauthToken oauthProvider: (NSString *) oauthProvider userId: (AromaAuthentication_uuid) userId status: (AromaAuthentication_TokenStatus) status;

@end

@interface AromaAuthentication_GithubToken : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * username;
@property (assign, nonatomic) BOOL usernameIsSet;
- (void) unsetUsername;

@property (strong, nonatomic) NSString * email;
@property (assign, nonatomic) BOOL emailIsSet;
- (void) unsetEmail;

@property (strong, nonatomic) NSString * oauthToken;
@property (assign, nonatomic) BOOL oauthTokenIsSet;
- (void) unsetOauthToken;


- (instancetype) initWithUsername: (NSString *) username email: (NSString *) email oauthToken: (NSString *) oauthToken;

@end

@interface AromaAuthentication_Password : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * encryptedPassword;
@property (assign, nonatomic) BOOL encryptedPasswordIsSet;
- (void) unsetEncryptedPassword;


- (instancetype) initWithEncryptedPassword: (NSString *) encryptedPassword;

@end

@interface AromaAuthentication_AromaAccount : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * email;
@property (assign, nonatomic) BOOL emailIsSet;
- (void) unsetEmail;

@property (strong, nonatomic) AromaAuthentication_Password * password;
@property (assign, nonatomic) BOOL passwordIsSet;
- (void) unsetPassword;

@property (strong, nonatomic) NSString * name;
@property (assign, nonatomic) BOOL nameIsSet;
- (void) unsetName;

@property (strong, nonatomic) Aroma_Image * profileImage;
@property (assign, nonatomic) BOOL profileImageIsSet;
- (void) unsetProfileImage;

@property (assign, nonatomic) AromaAuthentication_Role role;
@property (assign, nonatomic) BOOL roleIsSet;
- (void) unsetRole;


- (instancetype) initWithEmail: (NSString *) email password: (AromaAuthentication_Password *) password name: (NSString *) name profileImage: (Aroma_Image *) profileImage role: (AromaAuthentication_Role) role;

@end

@interface AromaAuthentication_Credentials : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) AromaAuthentication_GithubToken * githubToken;
@property (assign, nonatomic) BOOL githubTokenIsSet;
- (void) unsetGithubToken;

@property (strong, nonatomic) AromaAuthentication_Password * aromaPassword;
@property (assign, nonatomic) BOOL aromaPasswordIsSet;
- (void) unsetAromaPassword;


- (instancetype) initWithGithubToken: (AromaAuthentication_GithubToken *) githubToken aromaPassword: (AromaAuthentication_Password *) aromaPassword;

@end

@interface AromaAuthentication_AuthenticationToken : NSObject <TBase, NSCoding, NSCopying> 

@property (strong, nonatomic) NSString * tokenId;
@property (assign, nonatomic) BOOL tokenIdIsSet;
- (void) unsetTokenId;

@property (strong, nonatomic) AromaAuthentication_uuid ownerId;
@property (assign, nonatomic) BOOL ownerIdIsSet;
- (void) unsetOwnerId;

@property (assign, nonatomic) AromaAuthentication_timestamp timeOfCreation;
@property (assign, nonatomic) BOOL timeOfCreationIsSet;
- (void) unsetTimeOfCreation;

@property (assign, nonatomic) AromaAuthentication_timestamp timeOfExpiration;
@property (assign, nonatomic) BOOL timeOfExpirationIsSet;
- (void) unsetTimeOfExpiration;

@property (assign, nonatomic) AromaAuthentication_TokenType tokenType;
@property (assign, nonatomic) BOOL tokenTypeIsSet;
- (void) unsetTokenType;

@property (strong, nonatomic) AromaAuthentication_uuid organizationId;
@property (assign, nonatomic) BOOL organizationIdIsSet;
- (void) unsetOrganizationId;

@property (strong, nonatomic) NSString * ownerName;
@property (assign, nonatomic) BOOL ownerNameIsSet;
- (void) unsetOwnerName;

@property (strong, nonatomic) NSString * organizationName;
@property (assign, nonatomic) BOOL organizationNameIsSet;
- (void) unsetOrganizationName;

@property (assign, nonatomic) AromaAuthentication_TokenStatus status;
@property (assign, nonatomic) BOOL statusIsSet;
- (void) unsetStatus;


- (instancetype) initWithTokenId: (NSString *) tokenId ownerId: (AromaAuthentication_uuid) ownerId timeOfCreation: (AromaAuthentication_timestamp) timeOfCreation timeOfExpiration: (AromaAuthentication_timestamp) timeOfExpiration tokenType: (AromaAuthentication_TokenType) tokenType organizationId: (AromaAuthentication_uuid) organizationId ownerName: (NSString *) ownerName organizationName: (NSString *) organizationName status: (AromaAuthentication_TokenStatus) status;

@end

FOUNDATION_EXPORT NSString *AromaAuthentication_AuthenticationErrorDomain;

FOUNDATION_EXPORT NSString * AromaAuthentication_OVER_THE_WIRE_PASSWORD_ENCRYPTION_KEY;
