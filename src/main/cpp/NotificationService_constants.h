/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef NotificationService_CONSTANTS_H
#define NotificationService_CONSTANTS_H

#include "NotificationService_types.h"

namespace aroma { namespace banana { namespace thrift { namespace notification { namespace service {

class NotificationServiceConstants {
 public:
  NotificationServiceConstants();

  double API_VERSION;
  int SERVICE_PORT;
   ::aroma::banana::thrift::endpoint::TcpEndpoint PRODUCTION_ENDPOINT;
   ::aroma::banana::thrift::endpoint::TcpEndpoint BETA_ENDPOINT;
};

extern const NotificationServiceConstants g_NotificationService_constants;

}}}}} // namespace

#endif
