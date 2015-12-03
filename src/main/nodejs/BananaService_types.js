//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Authentication_ttypes = require('./Authentication_types')
var Banana_ttypes = require('./Banana_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
RegisterHealthCheckRequest = module.exports.RegisterHealthCheckRequest = function(args) {
};
RegisterHealthCheckRequest.prototype = {};
RegisterHealthCheckRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegisterHealthCheckRequest.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckRequest');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RegisterHealthCheckResponse = module.exports.RegisterHealthCheckResponse = function(args) {
};
RegisterHealthCheckResponse.prototype = {};
RegisterHealthCheckResponse.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RegisterHealthCheckResponse.prototype.write = function(output) {
  output.writeStructBegin('RegisterHealthCheckResponse');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

