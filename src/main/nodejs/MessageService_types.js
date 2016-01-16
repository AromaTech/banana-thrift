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
var Events_ttypes = require('./Events_types')
var Exceptions_ttypes = require('./Exceptions_types')


var ttypes = module.exports = {};
DeleteMessageRequest = module.exports.DeleteMessageRequest = function(args) {
  this.token = null;
  this.messageId = null;
  this.applicationId = null;
  this.messageIds = [];
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
    if (args.messageId !== undefined && args.messageId !== null) {
      this.messageId = args.messageId;
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.messageIds !== undefined && args.messageIds !== null) {
      this.messageIds = Thrift.copyList(args.messageIds, [null]);
    }
  }
};
DeleteMessageRequest.prototype = {};
DeleteMessageRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.messageId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.applicationId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.LIST) {
        var _size0 = 0;
        var _rtmp34;
        this.messageIds = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = input.readString();
          this.messageIds.push(elem6);
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

DeleteMessageRequest.prototype.write = function(output) {
  output.writeStructBegin('DeleteMessageRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.messageId !== null && this.messageId !== undefined) {
    output.writeFieldBegin('messageId', Thrift.Type.STRING, 2);
    output.writeString(this.messageId);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 3);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.messageIds !== null && this.messageIds !== undefined) {
    output.writeFieldBegin('messageIds', Thrift.Type.LIST, 4);
    output.writeListBegin(Thrift.Type.STRING, this.messageIds.length);
    for (var iter7 in this.messageIds)
    {
      if (this.messageIds.hasOwnProperty(iter7))
      {
        iter7 = this.messageIds[iter7];
        output.writeString(iter7);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

DeleteMessageResponse = module.exports.DeleteMessageResponse = function(args) {
  this.messagesDeleted = 0;
  if (args) {
    if (args.messagesDeleted !== undefined && args.messagesDeleted !== null) {
      this.messagesDeleted = args.messagesDeleted;
    }
  }
};
DeleteMessageResponse.prototype = {};
DeleteMessageResponse.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.I32) {
        this.messagesDeleted = input.readI32();
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

DeleteMessageResponse.prototype.write = function(output) {
  output.writeStructBegin('DeleteMessageResponse');
  if (this.messagesDeleted !== null && this.messagesDeleted !== undefined) {
    output.writeFieldBegin('messagesDeleted', Thrift.Type.I32, 1);
    output.writeI32(this.messagesDeleted);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

DismissMessageRequest = module.exports.DismissMessageRequest = function(args) {
  this.token = null;
  this.messageId = null;
  this.applicationId = null;
  this.messageIds = [];
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
    if (args.messageId !== undefined && args.messageId !== null) {
      this.messageId = args.messageId;
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.messageIds !== undefined && args.messageIds !== null) {
      this.messageIds = Thrift.copyList(args.messageIds, [null]);
    }
  }
};
DismissMessageRequest.prototype = {};
DismissMessageRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.messageId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.applicationId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.LIST) {
        var _size8 = 0;
        var _rtmp312;
        this.messageIds = [];
        var _etype11 = 0;
        _rtmp312 = input.readListBegin();
        _etype11 = _rtmp312.etype;
        _size8 = _rtmp312.size;
        for (var _i13 = 0; _i13 < _size8; ++_i13)
        {
          var elem14 = null;
          elem14 = input.readString();
          this.messageIds.push(elem14);
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

DismissMessageRequest.prototype.write = function(output) {
  output.writeStructBegin('DismissMessageRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.messageId !== null && this.messageId !== undefined) {
    output.writeFieldBegin('messageId', Thrift.Type.STRING, 2);
    output.writeString(this.messageId);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 3);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.messageIds !== null && this.messageIds !== undefined) {
    output.writeFieldBegin('messageIds', Thrift.Type.LIST, 4);
    output.writeListBegin(Thrift.Type.STRING, this.messageIds.length);
    for (var iter15 in this.messageIds)
    {
      if (this.messageIds.hasOwnProperty(iter15))
      {
        iter15 = this.messageIds[iter15];
        output.writeString(iter15);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

DismissMessageResponse = module.exports.DismissMessageResponse = function(args) {
  this.messagesDismissed = 0;
  if (args) {
    if (args.messagesDismissed !== undefined && args.messagesDismissed !== null) {
      this.messagesDismissed = args.messagesDismissed;
    }
  }
};
DismissMessageResponse.prototype = {};
DismissMessageResponse.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.I32) {
        this.messagesDismissed = input.readI32();
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

DismissMessageResponse.prototype.write = function(output) {
  output.writeStructBegin('DismissMessageResponse');
  if (this.messagesDismissed !== null && this.messagesDismissed !== undefined) {
    output.writeFieldBegin('messagesDismissed', Thrift.Type.I32, 1);
    output.writeI32(this.messagesDismissed);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetMessagesRequest = module.exports.GetMessagesRequest = function(args) {
  this.token = null;
  this.applicationId = null;
  this.limit = 0;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
    if (args.applicationId !== undefined && args.applicationId !== null) {
      this.applicationId = args.applicationId;
    }
    if (args.limit !== undefined && args.limit !== null) {
      this.limit = args.limit;
    }
  }
};
GetMessagesRequest.prototype = {};
GetMessagesRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.applicationId = input.readString();
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.limit = input.readI32();
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

GetMessagesRequest.prototype.write = function(output) {
  output.writeStructBegin('GetMessagesRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.applicationId !== null && this.applicationId !== undefined) {
    output.writeFieldBegin('applicationId', Thrift.Type.STRING, 2);
    output.writeString(this.applicationId);
    output.writeFieldEnd();
  }
  if (this.limit !== null && this.limit !== undefined) {
    output.writeFieldBegin('limit', Thrift.Type.I32, 3);
    output.writeI32(this.limit);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetMessagesResponse = module.exports.GetMessagesResponse = function(args) {
  this.messages = [];
  this.totalMessagesMatching = 0;
  if (args) {
    if (args.messages !== undefined && args.messages !== null) {
      this.messages = Thrift.copyList(args.messages, [Banana_ttypes.Message]);
    }
    if (args.totalMessagesMatching !== undefined && args.totalMessagesMatching !== null) {
      this.totalMessagesMatching = args.totalMessagesMatching;
    }
  }
};
GetMessagesResponse.prototype = {};
GetMessagesResponse.prototype.read = function(input) {
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
      if (ftype == Thrift.Type.LIST) {
        var _size16 = 0;
        var _rtmp320;
        this.messages = [];
        var _etype19 = 0;
        _rtmp320 = input.readListBegin();
        _etype19 = _rtmp320.etype;
        _size16 = _rtmp320.size;
        for (var _i21 = 0; _i21 < _size16; ++_i21)
        {
          var elem22 = null;
          elem22 = new Banana_ttypes.Message();
          elem22.read(input);
          this.messages.push(elem22);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.totalMessagesMatching = input.readI32();
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

GetMessagesResponse.prototype.write = function(output) {
  output.writeStructBegin('GetMessagesResponse');
  if (this.messages !== null && this.messages !== undefined) {
    output.writeFieldBegin('messages', Thrift.Type.LIST, 1);
    output.writeListBegin(Thrift.Type.STRUCT, this.messages.length);
    for (var iter23 in this.messages)
    {
      if (this.messages.hasOwnProperty(iter23))
      {
        iter23 = this.messages[iter23];
        iter23.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.totalMessagesMatching !== null && this.totalMessagesMatching !== undefined) {
    output.writeFieldBegin('totalMessagesMatching', Thrift.Type.I32, 2);
    output.writeI32(this.totalMessagesMatching);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetFullMessageRequest = module.exports.GetFullMessageRequest = function(args) {
  this.token = null;
  this.messageId = null;
  if (args) {
    if (args.token !== undefined && args.token !== null) {
      this.token = new Authentication_ttypes.UserToken(args.token);
    }
    if (args.messageId !== undefined && args.messageId !== null) {
      this.messageId = args.messageId;
    }
  }
};
GetFullMessageRequest.prototype = {};
GetFullMessageRequest.prototype.read = function(input) {
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
        this.token = new Authentication_ttypes.UserToken();
        this.token.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.messageId = input.readString();
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

GetFullMessageRequest.prototype.write = function(output) {
  output.writeStructBegin('GetFullMessageRequest');
  if (this.token !== null && this.token !== undefined) {
    output.writeFieldBegin('token', Thrift.Type.STRUCT, 1);
    this.token.write(output);
    output.writeFieldEnd();
  }
  if (this.messageId !== null && this.messageId !== undefined) {
    output.writeFieldBegin('messageId', Thrift.Type.STRING, 2);
    output.writeString(this.messageId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GetFullMessageResponse = module.exports.GetFullMessageResponse = function(args) {
  this.fullBody = null;
  if (args) {
    if (args.fullBody !== undefined && args.fullBody !== null) {
      this.fullBody = args.fullBody;
    }
  }
};
GetFullMessageResponse.prototype = {};
GetFullMessageResponse.prototype.read = function(input) {
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
        this.fullBody = input.readString();
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

GetFullMessageResponse.prototype.write = function(output) {
  output.writeStructBegin('GetFullMessageResponse');
  if (this.fullBody !== null && this.fullBody !== undefined) {
    output.writeFieldBegin('fullBody', Thrift.Type.STRING, 1);
    output.writeString(this.fullBody);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

ttypes.SERVICE_PORT = 7011;
ttypes.PRODUCTION_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'message-srv.banana.aroma.tech','port' : 7011});
ttypes.BETA_ENDPOINT = new Endpoint_ttypes.TcpEndpoint({
'hostname' : 'message-srv.beta.banana.aroma.tech','port' : 7011});
