/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "BananaService_constants.h"

namespace aroma { namespace banana { namespace thrift { namespace service {

const BananaServiceConstants g_BananaService_constants;

BananaServiceConstants::BananaServiceConstants() {
  API_VERSION = 1.6;

  SERVICE_PORT = 7010;

  PRODUCTION_ENDPOINT.hostname = "banana-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp191;
  tmp191 = 7010;

  PRODUCTION_ENDPOINT.port = tmp191;

  BETA_ENDPOINT.hostname = "banana-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp192;
  tmp192 = 7010;

  BETA_ENDPOINT.port = tmp192;

   ::aroma::banana::thrift::int tmp193;
  tmp193 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.width = tmp193;
   ::aroma::banana::thrift::int tmp194;
  tmp194 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.height = tmp194;

   ::aroma::banana::thrift::int tmp195;
  tmp195 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.width = tmp195;
   ::aroma::banana::thrift::int tmp196;
  tmp196 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.height = tmp196;

  MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;

  MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

  MAX_MESSAGE_LENGTH = 5000;

   ::aroma::banana::thrift::long tmp197;
  tmp197 = 3LL;

  DEFAULT_INBOX_LIFETIME.value = tmp197;
  DEFAULT_INBOX_LIFETIME.unit = ( ::aroma::banana::thrift::TimeUnit::type)4;

}

}}}} // namespace

