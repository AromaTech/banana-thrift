namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   tech.aroma.banana.thrift.service

/*
 * Defined in this File is the Banana Service API and all of the operations
 * that can be performed by both Developers and their services.
 */

include "Authentication.thrift"
include "Banana.thrift"
include "Channels.thrift"
include "Endpoint.thrift"
include "Exceptions.thrift"

/*
 * These Typedefs are like import statements
 * so  we don't have to type as much.
 */

typedef Banana.int int;
typedef Banana.long long;
typedef Banana.timestamp timestamp;

//Struct Typedefs
typedef Authentication.DeveloperToken DeveloperToken
typedef Authentication.ServiceToken ServiceToken
typedef Banana.Dimension Dimension
typedef Banana.Image Image

//Exception Typedefs
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ServiceAlreadyRegisteredException ServiceAlreadyRegisteredException
typedef Exceptions.ServiceDoesNotExistException ServiceDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException



struct SignInRequest
{
    1: Authentication.OauthToken oathToken;
    2: string username;
}

struct SignInResponse
{
    1: DeveloperToken developerToken;
}


/** The Maximum Dimensions for an Icon submitted with a Service. */
const Dimension MAX_ICON_DIMENSION = { "width" : 500, "height" : 500 }

/** The Maximum Filesize for an Icon submitted with a Service. */
const int MAX_ICON_SIZE_IN_KILOBYTES = 40;

struct ProvisionServiceRequest
{
    1: string token;
    2: string serviceName;
    3: optional string programmingLanguage;
    4: string organization;
    5: optional Image icon;
    6: DeveloperToken developerToken;
}

struct ProvisionServiceResponse
{
    1: string bananaToken;
    2: string serviceName;
    3: ServiceToken serviceToken; 
}

struct SubscribeToServiceRequest
{
    1: string token;
    2: string serviceName;
    3: optional string organization;
    4: optional bool shared = false;
    5: DeveloperToken developerToken;
    
}

struct SubscribeToServiceResponse
{
    1: string message;
    2: Channels.BananaChannel channel;
}


struct RegisterHealthCheckRequest
{
   1: Endpoint.Endpoint endpoint;
   2: DeveloperToken developerToken;
}

struct RegisterHealthCheckResponse
{
    1: optional string message;
}

struct RenewServiceTokenRequest
{
    1: ServiceToken serviceToken;
    2: Banana.TimePeriod timePeriod;
    3: DeveloperToken developerToken;
}

struct RenewServiceTokenResponse
{
    1: ServiceToken serviceToken;
}

struct RegenerateTokenRequest
{
    1: string serviceName;
    2: DeveloperToken developerToken;
}

struct RegenerateTokenResponse
{
    1: ServiceToken serviceToken;
}

service BananaService
{

    SignInResponse signIn(1: SignInRequest request) throws(1: OperationFailedException ex1,
                                                           2: InvalidArgumentException ex2,
                                                           3: InvalidCredentialsException ex3)
    
    ProvisionServiceResponse provisionService(1: ProvisionServiceRequest request) throws(1: OperationFailedException ex1,
                                                                                         2: InvalidArgumentException ex2,
                                                                                         3: InvalidCredentialsException ex3,
                                                                                         4: ServiceDoesNotExistException ex4)

    SubscribeToServiceResponse subscribeToService(1: SubscribeToServiceRequest request) throws(1: OperationFailedException ex1,
                                                                                               2: InvalidArgumentException ex2,
                                                                                               3: InvalidCredentialsException ex3,
                                                                                               4: ServiceDoesNotExistException ex4,
                                                                                               5: ServiceAlreadyRegisteredException ex5)


    RegisterHealthCheckResponse registerHealthCheck(1: RegisterHealthCheckRequest request) throws(1: OperationFailedException ex1,
                                                                                                  2: InvalidArgumentException ex2,
                                                                                                  3: InvalidCredentialsException ex3,
                                                                                                  4: ServiceDoesNotExistException ex4,
                                                                                                  5: UnauthorizedException ex5)
    
    RenewServiceTokenResponse renewServiceToken(1: RenewServiceTokenRequest request) throws(1: OperationFailedException ex1,
                                                                                            2: InvalidArgumentException ex2,
                                                                                            3: InvalidCredentialsException ex3,
                                                                                            4: ServiceDoesNotExistException ex4,
                                                                                            5: UnauthorizedException ex5)
    
    RegenerateTokenResponse regenerateToken(1: RegenerateTokenRequest request) throws(1: OperationFailedException ex1,
                                                                                      2: InvalidArgumentException ex2,
                                                                                      3: InvalidCredentialsException ex3,
                                                                                      4: ServiceDoesNotExistException ex4,
                                                                                      5: UnauthorizedException ex5)
    
}
