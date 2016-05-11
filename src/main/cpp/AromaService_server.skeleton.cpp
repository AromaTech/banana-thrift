// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "AromaService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::aroma::thrift::service;

class AromaServiceHandler : virtual public AromaServiceIf {
 public:
  AromaServiceHandler() {
    // Your initialization goes here
  }

  double getApiVersion() {
    // Your implementation goes here
    printf("getApiVersion\n");
  }

  void deleteApplication(DeleteApplicationResponse& _return, const DeleteApplicationRequest& request) {
    // Your implementation goes here
    printf("deleteApplication\n");
  }

  void deleteMessage(DeleteMessageResponse& _return, const DeleteMessageRequest& request) {
    // Your implementation goes here
    printf("deleteMessage\n");
  }

  void dismissMessage(DismissMessageResponse& _return, const DismissMessageRequest& request) {
    // Your implementation goes here
    printf("dismissMessage\n");
  }

  /**
   * Provision a New Application to keep tabs on.
   * 
   * #user
   * 
   * @param request
   */
  void provisionApplication(ProvisionApplicationResponse& _return, const ProvisionApplicationRequest& request) {
    // Your implementation goes here
    printf("provisionApplication\n");
  }

  /**
   * Regenerate an Application Token in case the existing one is lost, forgotten, or compromised.
   * Keep in mind that this will invalidate any prior existing Application Tokens.
   * Only an "owner" can perform this operation.
   * 
   * #owner
   * 
   * @param request
   */
  void regenerateToken(RegenerateApplicationTokenResponse& _return, const RegenerateApplicationTokenRequest& request) {
    // Your implementation goes here
    printf("regenerateToken\n");
  }

  /**
   * Register an existing Application for Health Pokes. The Aroma Service
   * will then periodically poke the Application for health status.
   * 
   * #owner
   * 
   * @param request
   */
  void registerHealthCheck(RegisterHealthCheckResponse& _return, const RegisterHealthCheckRequest& request) {
    // Your implementation goes here
    printf("registerHealthCheck\n");
  }

  /**
   * Removes a previously saved channel.
   * 
   * @param request
   */
  void removeSavedChannel(RemoveSavedChannelResponse& _return, const RemoveSavedChannelRequest& request) {
    // Your implementation goes here
    printf("removeSavedChannel\n");
  }

  /**
   * Renew an Application Token that is close to being expired.
   * Only an "owner" can perform this operation.
   * 
   * #owner
   * 
   * @param request
   */
  void renewApplicationToken(RenewApplicationTokenResponse& _return, const RenewApplicationTokenRequest& request) {
    // Your implementation goes here
    printf("renewApplicationToken\n");
  }

  /**
   * Saves a user's channel for future reference.
   * 
   * @param request
   */
  void saveChannel(SaveChannelResponse& _return, const SaveChannelRequest& request) {
    // Your implementation goes here
    printf("saveChannel\n");
  }

  /**
   * Sign in to the App and get a User Token in return.
   * 
   * #user
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
   * Snoozes a Channel momentarily, so that it won't be notified of new alerts and messages.
   * 
   * @param request
   */
  void snoozeChannel(SnoozeChannelResponse& _return, const SnoozeChannelRequest& request) {
    // Your implementation goes here
    printf("snoozeChannel\n");
  }

  /**
   * Subscribe to an existing application to get notifications.
   * 
   * #user
   * 
   * @param request
   */
  void followApplication(FollowApplicationResponse& _return, const FollowApplicationRequest& request) {
    // Your implementation goes here
    printf("followApplication\n");
  }

  void unfollowApplication(UnfollowApplicationResponse& _return, const UnfollowApplicationRequest& request) {
    // Your implementation goes here
    printf("unfollowApplication\n");
  }

  /**
   * #owner
   * 
   * @param request
   */
  void updateApplication(UpdateApplicationResponse& _return, const UpdateApplicationRequest& request) {
    // Your implementation goes here
    printf("updateApplication\n");
  }

  void updateReactions(UpdateReactionsResponse& _return, const UpdateReactionsRequest& request) {
    // Your implementation goes here
    printf("updateReactions\n");
  }

  /**
   * Get all of the User-Related activities that have happened recently.
   * 
   * #user
   * 
   * @param request
   */
  void getActivity(GetActivityResponse& _return, const GetActivityRequest& request) {
    // Your implementation goes here
    printf("getActivity\n");
  }

  /**
   * Get details about an Application from it's unique ID
   * 
   * #user
   * 
   * @param request
   */
  void getApplicationInfo(GetApplicationInfoResponse& _return, const GetApplicationInfoRequest& request) {
    // Your implementation goes here
    printf("getApplicationInfo\n");
  }

  void getBuzz(GetBuzzResponse& _return, const GetBuzzRequest& request) {
    // Your implementation goes here
    printf("getBuzz\n");
  }

  void getDashboard(GetDashboardResponse& _return, const GetDashboardRequest& request) {
    // Your implementation goes here
    printf("getDashboard\n");
  }

  /**
   * Get an Application's Messages.
   * 
   * @param request
   */
  void getApplicationMessages(GetApplicationMessagesResponse& _return, const GetApplicationMessagesRequest& request) {
    // Your implementation goes here
    printf("getApplicationMessages\n");
  }

  /**
   * Get Messages in a User's Inbox
   * 
   * @param request
   */
  void getInbox(GetInboxResponse& _return, const GetInboxRequest& request) {
    // Your implementation goes here
    printf("getInbox\n");
  }

  /**
   * In case the Message body has been truncated, use this operation
   * to load the full message.
   * 
   * @param request
   */
  void getFullMessage(GetFullMessageResponse& _return, const GetFullMessageRequest& request) {
    // Your implementation goes here
    printf("getFullMessage\n");
  }

  /**
   * Request to get Media stored by the Aroma Service.
   * 
   * @param request
   */
  void getMedia(GetMediaResponse& _return, const GetMediaRequest& request) {
    // Your implementation goes here
    printf("getMedia\n");
  }

  void getApplicationsOwnedBy(GetApplicationsOwnedByResponse& _return, const GetApplicationsOwnedByRequest& request) {
    // Your implementation goes here
    printf("getApplicationsOwnedBy\n");
  }

  void getApplicationsFollowedBy(GetApplicationsFollowedByResponse& _return, const GetApplicationsFollowedByRequest& request) {
    // Your implementation goes here
    printf("getApplicationsFollowedBy\n");
  }

  void getMySavedChannels(GetMySavedChannelsResponse& _return, const GetMySavedChannelsRequest& request) {
    // Your implementation goes here
    printf("getMySavedChannels\n");
  }

  void getReactions(GetReactionsResponse& _return, const GetReactionsRequest& request) {
    // Your implementation goes here
    printf("getReactions\n");
  }

  void getUserInfo(GetUserInfoResponse& _return, const GetUserInfoRequest& request) {
    // Your implementation goes here
    printf("getUserInfo\n");
  }

  /**
   * Perform a Search on all the applications registered to Aroma by searching for its title.
   * 
   * #user
   * 
   * @param request
   */
  void searchForApplications(SearchForApplicationsResponse& _return, const SearchForApplicationsRequest& request) {
    // Your implementation goes here
    printf("searchForApplications\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<AromaServiceHandler> handler(new AromaServiceHandler());
  shared_ptr<TProcessor> processor(new AromaServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

