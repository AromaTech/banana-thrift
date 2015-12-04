//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


Urgency = {
  'INFORMATIONAL' : 1,
  'PRESSING' : 2,
  'CRITICAL' : 3
};
TimeUnit = {
  'MILLIS' : 0,
  'SECONDS' : 1,
  'MINUTES' : 2,
  'HOURS' : 3,
  'DAYS' : 4
};
Message = function(args) {
  this.body = null;
  this.urgency = 2;
  if (args) {
    if (args.body !== undefined && args.body !== null) {
      this.body = args.body;
    }
    if (args.urgency !== undefined && args.urgency !== null) {
      this.urgency = args.urgency;
    }
  }
};
Message.prototype = {};
Message.prototype.read = function(input) {
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
        this.body = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.urgency = input.readI32().value;
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

Message.prototype.write = function(output) {
  output.writeStructBegin('Message');
  if (this.body !== null && this.body !== undefined) {
    output.writeFieldBegin('body', Thrift.Type.STRING, 1);
    output.writeString(this.body);
    output.writeFieldEnd();
  }
  if (this.urgency !== null && this.urgency !== undefined) {
    output.writeFieldBegin('urgency', Thrift.Type.I32, 2);
    output.writeI32(this.urgency);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Call = function(args) {
};
Call.prototype = {};
Call.prototype.read = function(input) {
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

Call.prototype.write = function(output) {
  output.writeStructBegin('Call');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Text = function(args) {
};
Text.prototype = {};
Text.prototype.read = function(input) {
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

Text.prototype.write = function(output) {
  output.writeStructBegin('Text');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Service = function(args) {
  this.owner = null;
  this.timeOfRegistration = null;
  this.name = null;
  if (args) {
    if (args.owner !== undefined && args.owner !== null) {
      this.owner = args.owner;
    }
    if (args.timeOfRegistration !== undefined && args.timeOfRegistration !== null) {
      this.timeOfRegistration = args.timeOfRegistration;
    }
    if (args.name !== undefined && args.name !== null) {
      this.name = args.name;
    }
  }
};
Service.prototype = {};
Service.prototype.read = function(input) {
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
        this.owner = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.timeOfRegistration = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.name = input.readString().value;
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

Service.prototype.write = function(output) {
  output.writeStructBegin('Service');
  if (this.owner !== null && this.owner !== undefined) {
    output.writeFieldBegin('owner', Thrift.Type.STRING, 1);
    output.writeString(this.owner);
    output.writeFieldEnd();
  }
  if (this.timeOfRegistration !== null && this.timeOfRegistration !== undefined) {
    output.writeFieldBegin('timeOfRegistration', Thrift.Type.I64, 2);
    output.writeI64(this.timeOfRegistration);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 3);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TimePeriod = function(args) {
  this.unit = null;
  this.value = null;
  if (args) {
    if (args.unit !== undefined && args.unit !== null) {
      this.unit = args.unit;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field unit is unset!');
    }
    if (args.value !== undefined && args.value !== null) {
      this.value = args.value;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field value is unset!');
    }
  }
};
TimePeriod.prototype = {};
TimePeriod.prototype.read = function(input) {
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
        this.unit = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.value = input.readI32().value;
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

TimePeriod.prototype.write = function(output) {
  output.writeStructBegin('TimePeriod');
  if (this.unit !== null && this.unit !== undefined) {
    output.writeFieldBegin('unit', Thrift.Type.I32, 1);
    output.writeI32(this.unit);
    output.writeFieldEnd();
  }
  if (this.value !== null && this.value !== undefined) {
    output.writeFieldBegin('value', Thrift.Type.I32, 2);
    output.writeI32(this.value);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

