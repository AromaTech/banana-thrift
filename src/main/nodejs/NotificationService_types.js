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
var Channels_ttypes = require('./Channels_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Exceptions_ttypes = require('./Exceptions_types')
var Notification_ttypes = require('./Notification_types')


var ttypes = module.exports = {};
SendNotificationRequest = module.exports.SendNotificationRequest = function(args) {
  this.token = null;
  this.event = null;
  this.channels = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.AuthenticationToken(args.token);
    }
    if (args.event !== undefined && args.event !== null) {
      this.event = new Notification_ttypes.Event(args.event);
    }
    if (args.channels !== undefined && args.channels !== null) {
      this.channels = Thrift.copyList(args.channels, [null]);
    }
  }
};
SendNotificationRequest.prototype = {};
SendNotificationRequest.prototype.read = function(input) {
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
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.token = new Authentication_ttypes.AuthenticationToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.event = new Notification_ttypes.Event();
        this.event.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.LIST) {
        var _size0 = 0;
        var _rtmp34;
        this.channels = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = new Channels_ttypes.BananaChannel();
          elem6.read(input);
          this.channels.push(elem6);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SendNotificationRequest.prototype.write = function(output) {
  output.writeStructBegin('SendNotificationRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.event !== null && this.event !== undefined) {
    output.writeFieldBegin('event', Thrift.Type.STRUCT, 2);
    this.event.write(output);
    output.writeFieldEnd();
  }
  if (this.channels !== null && this.channels !== undefined) {
    output.writeFieldBegin('channels', Thrift.Type.LIST, 3);
    output.writeListBegin(Thrift.Type.STRUCT, this.channels.length);
    for (var iter7 in this.channels)
    {
      if (this.channels.hasOwnProperty(iter7))
      {
        iter7 = this.channels[iter7];
        iter7.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

SendNotificationResponse = module.exports.SendNotificationResponse = function(args) {
  this.notificationId = null;
  if (args) {
    if (args.notificationId !== undefined && args.notificationId !== null) {
      this.notificationId = args.notificationId;
    }
  }
};
SendNotificationResponse.prototype = {};
SendNotificationResponse.prototype.read = function(input) {
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
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.notificationId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

SendNotificationResponse.prototype.write = function(output) {
  output.writeStructBegin('SendNotificationResponse');
  if (this.notificationId !== null && this.notificationId !== undefined) {
    output.writeFieldBegin('notificationId', Thrift.Type.STRING, 1);
    output.writeString(this.notificationId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.SERVICE_PORT = 9009;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'notification-srv.banana.aroma.tech','port' : 9009});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'notification-srv.beta.banana.aroma.tech','port' : 9009});