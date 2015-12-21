// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "BananaService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::aroma::banana::thrift::service;

class BananaServiceHandler : virtual public BananaServiceIf {
 public:
  BananaServiceHandler() {
    // Your initialization goes here
  }

  double getApiVersion() {
    // Your implementation goes here
    printf("getApiVersion\n");
  }

  /**
   * 
   * #app
   * 
   * @param request
   */
  void sendMessage(SendMessageResponse& _return, const SendMessageRequest& request) {
    // Your implementation goes here
    printf("sendMessage\n");
  }

  /**
   * 
   * #app
   * 
   * @param request
   */
  void sendMessageAsync(const SendMessageRequest& request) {
    // Your implementation goes here
    printf("sendMessageAsync\n");
  }

  /**
   * Sign in to the App and using a valid OAUTH Token.
   * 
   * #human
   * 
   * @param request
   */
  void signIn(SignInResponse& _return, const SignInRequest& request) {
    // Your implementation goes here
    printf("signIn\n");
  }

  /**
   * Sign Up for an Aroma Account.
   * 
   * @param request
   */
  void signUp(SignUpResponse& _return, const SignUpRequest& request) {
    // Your implementation goes here
    printf("signUp\n");
  }

  /**
   * Provision a New Application to keep tabs on.
   * 
   * #human
   * 
   * @param request
   */
  void provisionApplication(ProvisionApplicationResponse& _return, const ProvisionApplicationRequest& request) {
    // Your implementation goes here
    printf("provisionApplication\n");
  }

  /**
   * Subscribe to an existing application to get notifications.
   * 
   * #human
   * 
   * @param request
   */
  void subscribeToApplication(SubscribeToApplicationResponse& _return, const SubscribeToApplicationRequest& request) {
    // Your implementation goes here
    printf("subscribeToApplication\n");
  }

  /**
   * Register an existing Application for Health Pokes. The Banana Service
   * will then periodically poke the Application for health status.
   * 
   * #human
   * #owner
   * 
   * @param request
   */
  void registerHealthCheck(RegisterHealthCheckResponse& _return, const RegisterHealthCheckRequest& request) {
    // Your implementation goes here
    printf("registerHealthCheck\n");
  }

  /**
   * Renew an Application Token that is close to being expired.
   * Only an "owner" can perform this operation.
   * 
   * #human
   * #owner
   * 
   * @param request
   */
  void renewApplicationToken(RenewApplicationTokenResponse& _return, const RenewApplicationTokenRequest& request) {
    // Your implementation goes here
    printf("renewApplicationToken\n");
  }

  /**
   * Regenerate an Application Token in case the existing one is lost, forgotten, or compromised.
   * Keep in mind that this will invalidate any prior existing Application Tokens.
   * Only an "owner" can perform this operation.
   * 
   * #human
   * #owner
   * 
   * @param request
   */
  void regenerateToken(RegenerateApplicationTokenResponse& _return, const RegenerateApplicationTokenRequest& request) {
    // Your implementation goes here
    printf("regenerateToken\n");
  }

  /**
   * Perform a Search on all the applications registered to the Banana Service by searching for its title.
   * 
   * #human
   * 
   * @param request
   */
  void searchForApplications(SearchForApplicationsResponse& _return, const SearchForApplicationsRequest& request) {
    // Your implementation goes here
    printf("searchForApplications\n");
  }

  void saveChannel(SaveChannelResponse& _return, const SaveChannelRequest& request) {
    // Your implementation goes here
    printf("saveChannel\n");
  }

  void removeSavedChannel(RemoveSavedChannelResponse& _return, const RemoveSavedChannelRequest& request) {
    // Your implementation goes here
    printf("removeSavedChannel\n");
  }

  void snoozeChannel(SnoozeChannelResponse& _return, const SnoozeChannelRequest& request) {
    // Your implementation goes here
    printf("snoozeChannel\n");
  }

  /**
   * Get a list of all Humans subscribed to an Application.
   * 
   * #human
   * 
   * @param request
   */
  void getApplicationSubscribers(GetApplicationSubscribersResponse& _return, const GetApplicationSubscribersRequest& request) {
    // Your implementation goes here
    printf("getApplicationSubscribers\n");
  }

  void getMySavedChannels(GetMySavedChannelsResponse& _return, const GetMySavedChannelsRequest& request) {
    // Your implementation goes here
    printf("getMySavedChannels\n");
  }

  void getMyApplications(GetMyApplicationsResponse& _return, const GetMyApplicationsRequest& request) {
    // Your implementation goes here
    printf("getMyApplications\n");
  }

  /**
   * Get details about an Application from it's unique ID
   * 
   * #human
   * 
   * @param request
   */
  void getApplicationInfo(GetApplicationInfoResponse& _return, const GetApplicationInfoRequest& request) {
    // Your implementation goes here
    printf("getApplicationInfo\n");
  }

  void getDashboard(GetDashboardResponse& _return, const GetDashboardRequest& request) {
    // Your implementation goes here
    printf("getDashboard\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<BananaServiceHandler> handler(new BananaServiceHandler());
  shared_ptr<TProcessor> processor(new BananaServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

