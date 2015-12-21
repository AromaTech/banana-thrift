namespace java  tech.aroma.banana.thrift.service
namespace cocoa BananaService_
namespace cpp   aroma.banana.thrift.service

/*
 * Defined in this File is the Application Service API.
 * This Service is responsible for accepting, processing, and storing
 * incoming messages sent by Applications.
 */

include "Authentication.thrift"
include "Banana.thrift"
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
typedef Authentication.ApplicationToken ApplicationToken
typedef Banana.Application Application
typedef Banana.Urgency Urgency

//Exception Typedefs
typedef Exceptions.AccountAlreadyExistsException AccountAlreadyExistsException
typedef Exceptions.InvalidArgumentException InvalidArgumentException
typedef Exceptions.InvalidCredentialsException InvalidCredentialsException
typedef Exceptions.OperationFailedException OperationFailedException
typedef Exceptions.ApplicationAlreadyRegisteredException ApplicationAlreadyRegisteredException
typedef Exceptions.ApplicationDoesNotExistException ApplicationDoesNotExistException
typedef Exceptions.CustomChannelUnreachableException CustomChannelUnreachableException
typedef Exceptions.ChannelDoesNotExistException ChannelDoesNotExistException
typedef Exceptions.UnauthorizedException UnauthorizedException

/** Defines the Version of the Banana Service API of this specification. */
const double API_VERSION = 1.4;

const Endpoint.TcpEndpoint PRODUCTION_ENDPOINT = { "hostname" : "application-srv.banana.aroma.tech", "port" : 7005 };

const Endpoint.TcpEndpoint BETA_ENDPOINT = { "hostname" : "application-srv.beta.banana.aroma.tech", "port" : 7005 };


//==========================================================
// Operations performed by Applications

/**
 * Send a Message to the Banana Service.
 */
struct SendMessageRequest
{
    1: ApplicationToken applicationToken;
    2: string message;
    3: Urgency urgency = Banana.Urgency.INFORMATIONAL;
}

struct SendMessageResponse
{
    1: string message;
}

/**
 * The Application  Service is designed to be called by Applications, to send messages
 * and report alerts to people. It is designed to be used by machines, not humans.
 * This is where Incoming Messages are accepted, processed, and stored.
 */
service ApplicationService
{
    
    double getApiVersion()
    
    //===============================================
    // Operations for Applications
    //===============================================


    /**
     * Send a Message from your Application to the Banana Service.
     */
    SendMessageResponse sendMessage(1 : SendMessageRequest request) throws(1 : OperationFailedException ex1,
                                                                           2 : InvalidArgumentException ex2,
                                                                           3 : InvalidCredentialsException ex3)

    /**
     *
     */
    oneway void sendMessageAsync(1 : SendMessageRequest request)

}
