/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "NotificationService_constants.h"

namespace aroma { namespace thrift { namespace notification { namespace service {

const NotificationServiceConstants g_NotificationService_constants;

NotificationServiceConstants::NotificationServiceConstants() {
  SERVICE_PORT = 7009;

  PRODUCTION_ENDPOINT.hostname = "notification-srv.aroma.tech";
   ::aroma::thrift::endpoint::int tmp12;
  tmp12 = 7009;

  PRODUCTION_ENDPOINT.port = tmp12;

  BETA_ENDPOINT.hostname = "notification-srv.beta.aroma.tech";
   ::aroma::thrift::endpoint::int tmp13;
  tmp13 = 7009;

  BETA_ENDPOINT.port = tmp13;

}

}}}} // namespace

