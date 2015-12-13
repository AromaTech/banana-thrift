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


var ttypes = module.exports = {};
HealthCheckFailed = module.exports.HealthCheckFailed = function(args) {
};
HealthCheckFailed.prototype = {};
HealthCheckFailed.prototype.read = function(input) {
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

HealthCheckFailed.prototype.write = function(output) {
  output.writeStructBegin('HealthCheckFailed');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

HealthCheckBackToNormal = module.exports.HealthCheckBackToNormal = function(args) {
};
HealthCheckBackToNormal.prototype = {};
HealthCheckBackToNormal.prototype.read = function(input) {
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

HealthCheckBackToNormal.prototype.write = function(output) {
  output.writeStructBegin('HealthCheckBackToNormal');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ServiceTokenRenewed = module.exports.ServiceTokenRenewed = function(args) {
  this.developer = null;
  this.serviceToken = null;
  if (args) {
    if (args.developer !== undefined && args.developer !== null) {
      this.developer = new Banana_ttypes.Developer(args.developer);
    }
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
  }
};
ServiceTokenRenewed.prototype = {};
ServiceTokenRenewed.prototype.read = function(input) {
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
        this.developer = new Banana_ttypes.Developer();
        this.developer.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
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

ServiceTokenRenewed.prototype.write = function(output) {
  output.writeStructBegin('ServiceTokenRenewed');
  if (this.developer !== null && this.developer !== undefined) {
    output.writeFieldBegin('developer', Thrift.Type.STRUCT, 1);
    this.developer.write(output);
    output.writeFieldEnd();
  }
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 2);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ServiceTokenRegenerated = module.exports.ServiceTokenRegenerated = function(args) {
  this.developer = null;
  this.serviceToken = null;
  if (args) {
    if (args.developer !== undefined && args.developer !== null) {
      this.developer = new Banana_ttypes.Developer(args.developer);
    }
    if (args.serviceToken !== undefined && args.serviceToken !== null) {
      this.serviceToken = new Authentication_ttypes.ServiceToken(args.serviceToken);
    }
  }
};
ServiceTokenRegenerated.prototype = {};
ServiceTokenRegenerated.prototype.read = function(input) {
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
        this.developer = new Banana_ttypes.Developer();
        this.developer.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.serviceToken = new Authentication_ttypes.ServiceToken();
        this.serviceToken.read(input);
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

ServiceTokenRegenerated.prototype.write = function(output) {
  output.writeStructBegin('ServiceTokenRegenerated');
  if (this.developer !== null && this.developer !== undefined) {
    output.writeFieldBegin('developer', Thrift.Type.STRUCT, 1);
    this.developer.write(output);
    output.writeFieldEnd();
  }
  if (this.serviceToken !== null && this.serviceToken !== undefined) {
    output.writeFieldBegin('serviceToken', Thrift.Type.STRUCT, 2);
    this.serviceToken.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ServiceSentMessage = module.exports.ServiceSentMessage = function(args) {
  this.message = null;
  if (args) {
    if (args.message !== undefined && args.message !== null) {
      this.message = new Banana_ttypes.Message(args.message);
    }
  }
};
ServiceSentMessage.prototype = {};
ServiceSentMessage.prototype.read = function(input) {
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
        this.message = new Banana_ttypes.Message();
        this.message.read(input);
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

ServiceSentMessage.prototype.write = function(output) {
  output.writeStructBegin('ServiceSentMessage');
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 1);
    this.message.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Event = module.exports.Event = function(args) {
  this.healthCheckFailed = null;
  if (args) {
    if (args.healthCheckFailed !== undefined && args.healthCheckFailed !== null) {
      this.healthCheckFailed = new ttypes.HealthCheckFailed(args.healthCheckFailed);
    }
  }
};
Event.prototype = {};
Event.prototype.read = function(input) {
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
        this.healthCheckFailed = new ttypes.HealthCheckFailed();
        this.healthCheckFailed.read(input);
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

Event.prototype.write = function(output) {
  output.writeStructBegin('Event');
  if (this.healthCheckFailed !== null && this.healthCheckFailed !== undefined) {
    output.writeFieldBegin('healthCheckFailed', Thrift.Type.STRUCT, 1);
    this.healthCheckFailed.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Notification = module.exports.Notification = function(args) {
  this.event = null;
  this.timestamp = null;
  if (args) {
    if (args.event !== undefined && args.event !== null) {
      this.event = new ttypes.Event(args.event);
    }
    if (args.timestamp !== undefined && args.timestamp !== null) {
      this.timestamp = args.timestamp;
    }
  }
};
Notification.prototype = {};
Notification.prototype.read = function(input) {
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
        this.event = new ttypes.Event();
        this.event.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.timestamp = input.readI64();
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

Notification.prototype.write = function(output) {
  output.writeStructBegin('Notification');
  if (this.event !== null && this.event !== undefined) {
    output.writeFieldBegin('event', Thrift.Type.STRUCT, 1);
    this.event.write(output);
    output.writeFieldEnd();
  }
  if (this.timestamp !== null && this.timestamp !== undefined) {
    output.writeFieldBegin('timestamp', Thrift.Type.I64, 2);
    output.writeI64(this.timestamp);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

