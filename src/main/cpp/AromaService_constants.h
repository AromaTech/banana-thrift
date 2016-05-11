/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef AromaService_CONSTANTS_H
#define AromaService_CONSTANTS_H

#include "AromaService_types.h"

namespace aroma { namespace thrift { namespace service {

class AromaServiceConstants {
 public:
  AromaServiceConstants();

  int SERVICE_PORT;
   ::aroma::thrift::endpoint::TcpEndpoint PRODUCTION_ENDPOINT;
   ::aroma::thrift::endpoint::TcpEndpoint BETA_ENDPOINT;
   ::tech::aroma::thrift::Dimension MAX_APPLICATION_ICON_DIMENSION;
   ::tech::aroma::thrift::Dimension MAX_PROFILE_IMAGE_DIMENSION;
  int MAX_APPLICATION_ICON_SIZE_IN_KILOBYTES;
  int MAX_PROFILE_PICTURE_SIZE_IN_KILOBYTES;
  int MAX_MESSAGE_LENGTH;
   ::tech::aroma::thrift::LengthOfTime DEFAULT_INBOX_LIFETIME;
   ::tech::aroma::thrift::LengthOfTime DEFAULT_ACTIVITY_LIFETIME;
  int APPLICATION_NAME_MAX_LENGTH;
  int APPLICATION_MAX_OWNERS;
};

extern const AromaServiceConstants g_AromaService_constants;

}}} // namespace

#endif
