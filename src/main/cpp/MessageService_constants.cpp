/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MessageService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace message { namespace service {

const MessageServiceConstants g_MessageService_constants;

MessageServiceConstants::MessageServiceConstants() {
  SERVICE_PORT = 7011;

  PRODUCTION_ENDPOINT.hostname = "message-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp34;
  tmp34 = 7011;

  PRODUCTION_ENDPOINT.port = tmp34;

  BETA_ENDPOINT.hostname = "message-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp35;
  tmp35 = 7011;

  BETA_ENDPOINT.port = tmp35;

}

}}}}} // namespace

