/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "BananaMessageService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace service {

const BananaMessageServiceConstants g_BananaMessageService_constants;

BananaMessageServiceConstants::BananaMessageServiceConstants() {
  API_VERSION = 1.4;

  PRODUCTION_ENDPOINT.hostname = "banana-application-srv.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp5;
  tmp5 = 7005;

  PRODUCTION_ENDPOINT.port = tmp5;

  BETA_ENDPOINT.hostname = "banana-application-srv-beta.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp6;
  tmp6 = 7005;

  BETA_ENDPOINT.port = tmp6;

}

}}}} // namespace

