// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "ApplicationService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::aroma::thrift::application::service;

class ApplicationServiceHandler : virtual public ApplicationServiceIf {
 public:
  ApplicationServiceHandler() {
    // Your initialization goes here
  }

  double getApiVersion() {
    // Your implementation goes here
    printf("getApiVersion\n");
  }

  /**
   * Send a Message from your Application to Aroma.
   * 
   * @param request
   */
  void sendMessage(SendMessageResponse& _return, const SendMessageRequest& request) {
    // Your implementation goes here
    printf("sendMessage\n");
  }

  /**
   * Fire-And-Forget version of sendMessage() ;
   * With this operation, the client does not wait for the server
   * to finish processing. The only guarantees provided is that
   * the Message was successfully sent over the Transport.
   * 
   * @param request
   */
  void sendMessageAsync(const SendMessageRequest& request) {
    // Your implementation goes here
    printf("sendMessageAsync\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<ApplicationServiceHandler> handler(new ApplicationServiceHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new ApplicationServiceProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

