/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "NotificationService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace notification { namespace service {

const NotificationServiceConstants g_NotificationService_constants;

NotificationServiceConstants::NotificationServiceConstants() {
  SERVICE_PORT = 7009;

  PRODUCTION_ENDPOINT.hostname = "notification-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp10;
  tmp10 = 7009;

  PRODUCTION_ENDPOINT.port = tmp10;

  BETA_ENDPOINT.hostname = "notification-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp11;
  tmp11 = 7009;

  BETA_ENDPOINT.port = tmp11;

}

}}}}} // namespace

