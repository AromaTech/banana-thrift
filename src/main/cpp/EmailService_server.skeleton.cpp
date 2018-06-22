// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "EmailService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::aroma::thrift::email::service;

class EmailServiceHandler : virtual public EmailServiceIf {
 public:
  EmailServiceHandler() {
    // Your initialization goes here
  }

  double getApiVersion() {
    // Your implementation goes here
    printf("getApiVersion\n");
  }

  void sendEmail(SendEmailResponse& _return, const SendEmailRequest& request) {
    // Your implementation goes here
    printf("sendEmail\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::apache::thrift::stdcxx::shared_ptr<EmailServiceHandler> handler(new EmailServiceHandler());
  ::apache::thrift::stdcxx::shared_ptr<TProcessor> processor(new EmailServiceProcessor(handler));
  ::apache::thrift::stdcxx::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::apache::thrift::stdcxx::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::apache::thrift::stdcxx::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

