/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MessageService_CONSTANTS_H
#define MessageService_CONSTANTS_H

#include "MessageService_types.h"

namespace aroma { namespace banana { namespace thrift { namespace message { namespace service {

class MessageServiceConstants {
 public:
  MessageServiceConstants();

  int SERVICE_PORT;
   ::aroma::banana::thrift::endpoint::TcpEndpoint PRODUCTION_ENDPOINT;
   ::aroma::banana::thrift::endpoint::TcpEndpoint BETA_ENDPOINT;
};

extern const MessageServiceConstants g_MessageService_constants;

}}}}} // namespace

#endif