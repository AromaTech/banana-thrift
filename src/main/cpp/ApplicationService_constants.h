/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ApplicationService_CONSTANTS_H
#define ApplicationService_CONSTANTS_H

#include "ApplicationService_types.h"

namespace aroma { namespace thrift { namespace application { namespace service {

class ApplicationServiceConstants {
 public:
  ApplicationServiceConstants();

  int SERVICE_PORT;
   ::aroma::thrift::endpoint::TcpEndpoint PRODUCTION_ENDPOINT;
   ::aroma::thrift::endpoint::TcpEndpoint BETA_ENDPOINT;
  int MAX_TITLE_LENGTH;
  int MAX_CHARACTERS_IN_BODY;
};

extern const ApplicationServiceConstants g_ApplicationService_constants;

}}}} // namespace

#endif
