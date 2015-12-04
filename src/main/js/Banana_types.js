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
ImageType = {
  'JPEG' : 1,
  'PNG' : 2
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

Dimension = function(args) {
  this.width = null;
  this.height = null;
  if (args) {
    if (args.width !== undefined && args.width !== null) {
      this.width = args.width;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field width is unset!');
    }
    if (args.height !== undefined && args.height !== null) {
      this.height = args.height;
    } else {
      throw new Thrift.TProtocolException(Thrift.TProtocolExceptionType.UNKNOWN, 'Required field height is unset!');
    }
  }
};
Dimension.prototype = {};
Dimension.prototype.read = function(input) {
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
        this.width = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.height = input.readI32().value;
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

Dimension.prototype.write = function(output) {
  output.writeStructBegin('Dimension');
  if (this.width !== null && this.width !== undefined) {
    output.writeFieldBegin('width', Thrift.Type.I32, 1);
    output.writeI32(this.width);
    output.writeFieldEnd();
  }
  if (this.height !== null && this.height !== undefined) {
    output.writeFieldBegin('height', Thrift.Type.I32, 2);
    output.writeI32(this.height);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Image = function(args) {
  this.imageType = null;
  this.data = null;
  this.dimension = null;
  if (args) {
    if (args.imageType !== undefined && args.imageType !== null) {
      this.imageType = args.imageType;
    }
    if (args.data !== undefined && args.data !== null) {
      this.data = args.data;
    }
    if (args.dimension !== undefined && args.dimension !== null) {
      this.dimension = new Dimension(args.dimension);
    }
  }
};
Image.prototype = {};
Image.prototype.read = function(input) {
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
        this.imageType = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.data = input.readBinary().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.dimension = new Dimension();
        this.dimension.read(input);
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

Image.prototype.write = function(output) {
  output.writeStructBegin('Image');
  if (this.imageType !== null && this.imageType !== undefined) {
    output.writeFieldBegin('imageType', Thrift.Type.I32, 1);
    output.writeI32(this.imageType);
    output.writeFieldEnd();
  }
  if (this.data !== null && this.data !== undefined) {
    output.writeFieldBegin('data', Thrift.Type.STRING, 2);
    output.writeBinary(this.data);
    output.writeFieldEnd();
  }
  if (this.dimension !== null && this.dimension !== undefined) {
    output.writeFieldBegin('dimension', Thrift.Type.STRUCT, 3);
    this.dimension.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

