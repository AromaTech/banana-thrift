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

  SERVICE_PORT = 7000;

  PRODUCTION_ENDPOINT.hostname = "banana-srv.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp187;
  tmp187 = 7000;

  PRODUCTION_ENDPOINT.port = tmp187;

  BETA_ENDPOINT.hostname = "banana-srv.beta.banana.aroma.tech";
   ::aroma::banana::thrift::endpoint::int tmp188;
  tmp188 = 7000;

  BETA_ENDPOINT.port = tmp188;

   ::aroma::banana::thrift::int tmp189;
  tmp189 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.width = tmp189;
   ::aroma::banana::thrift::int tmp190;
  tmp190 = 1024;

  MAX_APPLICATION_ICON_DIMENSION.height = tmp190;

   ::aroma::banana::thrift::int tmp191;
  tmp191 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.width = tmp191;
   ::aroma::banana::thrift::int tmp192;
  tmp192 = 1024;

  MAX_PROFILE_IMAGE_DIMENSION.height = tmp192;

  MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES = 100;

  MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES = 100;

  MAX_MESSAGE_LENGTH = 5000;

}

}}}} // namespace

