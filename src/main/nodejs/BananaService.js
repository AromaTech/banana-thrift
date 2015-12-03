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


var ttypes = require('./BananaService_types');
//HELPER FUNCTIONS AND STRUCTURES

BananaService_registerHealthCheck_args = function(args) {
  this.request = null;
  if (args) {
    if (args.request !== undefined && args.request !== null) {
      this.request = new ttypes.RegisterHealthCheckRequest(args.request);
    }
  }
};
BananaService_registerHealthCheck_args.prototype = {};
BananaService_registerHealthCheck_args.prototype.read = function(input) {
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
        this.request = new ttypes.RegisterHealthCheckRequest();
        this.request.read(input);
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

BananaService_registerHealthCheck_args.prototype.write = function(output) {
  output.writeStructBegin('BananaService_registerHealthCheck_args');
  if (this.request !== null && this.request !== undefined) {
    output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
    this.request.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

BananaService_registerHealthCheck_result = function(args) {
  this.success = null;
  this.ex1 = null;
  this.ex2 = null;
  this.ex3 = null;
  this.ex4 = null;
  if (args instanceof Exceptions_ttypes.OperationFailedException) {
    this.ex1 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidArgumentException) {
    this.ex2 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.InvalidCredentialsException) {
    this.ex3 = args;
    return;
  }
  if (args instanceof Exceptions_ttypes.ServiceDoesNotExistException) {
    this.ex4 = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new ttypes.RegisterHealthCheckResponse(args.success);
    }
    if (args.ex1 !== undefined && args.ex1 !== null) {
      this.ex1 = args.ex1;
    }
    if (args.ex2 !== undefined && args.ex2 !== null) {
      this.ex2 = args.ex2;
    }
    if (args.ex3 !== undefined && args.ex3 !== null) {
      this.ex3 = args.ex3;
    }
    if (args.ex4 !== undefined && args.ex4 !== null) {
      this.ex4 = args.ex4;
    }
  }
};
BananaService_registerHealthCheck_result.prototype = {};
BananaService_registerHealthCheck_result.prototype.read = function(input) {
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
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new ttypes.RegisterHealthCheckResponse();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex1 = new Exceptions_ttypes.OperationFailedException();
        this.ex1.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex2 = new Exceptions_ttypes.InvalidArgumentException();
        this.ex2.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex3 = new Exceptions_ttypes.InvalidCredentialsException();
        this.ex3.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRUCT) {
        this.ex4 = new Exceptions_ttypes.ServiceDoesNotExistException();
        this.ex4.read(input);
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

BananaService_registerHealthCheck_result.prototype.write = function(output) {
  output.writeStructBegin('BananaService_registerHealthCheck_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.ex1 !== null && this.ex1 !== undefined) {
    output.writeFieldBegin('ex1', Thrift.Type.STRUCT, 1);
    this.ex1.write(output);
    output.writeFieldEnd();
  }
  if (this.ex2 !== null && this.ex2 !== undefined) {
    output.writeFieldBegin('ex2', Thrift.Type.STRUCT, 2);
    this.ex2.write(output);
    output.writeFieldEnd();
  }
  if (this.ex3 !== null && this.ex3 !== undefined) {
    output.writeFieldBegin('ex3', Thrift.Type.STRUCT, 3);
    this.ex3.write(output);
    output.writeFieldEnd();
  }
  if (this.ex4 !== null && this.ex4 !== undefined) {
    output.writeFieldBegin('ex4', Thrift.Type.STRUCT, 4);
    this.ex4.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

BananaServiceClient = exports.Client = function(output, pClass) {
    this.output = output;
    this.pClass = pClass;
    this._seqid = 0;
    this._reqs = {};
};
BananaServiceClient.prototype = {};
BananaServiceClient.prototype.seqid = function() { return this._seqid; }
BananaServiceClient.prototype.new_seqid = function() { return this._seqid += 1; }
BananaServiceClient.prototype.registerHealthCheck = function(request, callback) {
  this._seqid = this.new_seqid();
  if (callback === undefined) {
    var _defer = Q.defer();
    this._reqs[this.seqid()] = function(error, result) {
      if (error) {
        _defer.reject(error);
      } else {
        _defer.resolve(result);
      }
    };
    this.send_registerHealthCheck(request);
    return _defer.promise;
  } else {
    this._reqs[this.seqid()] = callback;
    this.send_registerHealthCheck(request);
  }
};

BananaServiceClient.prototype.send_registerHealthCheck = function(request) {
  var output = new this.pClass(this.output);
  output.writeMessageBegin('registerHealthCheck', Thrift.MessageType.CALL, this.seqid());
  var args = new BananaService_registerHealthCheck_args();
  args.request = request;
  args.write(output);
  output.writeMessageEnd();
  return this.output.flush();
};

BananaServiceClient.prototype.recv_registerHealthCheck = function(input,mtype,rseqid) {
  var callback = this._reqs[rseqid] || function() {};
  delete this._reqs[rseqid];
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(input);
    input.readMessageEnd();
    return callback(x);
  }
  var result = new BananaService_registerHealthCheck_result();
  result.read(input);
  input.readMessageEnd();

  if (null !== result.ex1) {
    return callback(result.ex1);
  }
  if (null !== result.ex2) {
    return callback(result.ex2);
  }
  if (null !== result.ex3) {
    return callback(result.ex3);
  }
  if (null !== result.ex4) {
    return callback(result.ex4);
  }
  if (null !== result.success) {
    return callback(null, result.success);
  }
  return callback('registerHealthCheck failed: unknown result');
};
BananaServiceProcessor = exports.Processor = function(handler) {
  this._handler = handler
}
BananaServiceProcessor.prototype.process = function(input, output) {
  var r = input.readMessageBegin();
  if (this['process_' + r.fname]) {
    return this['process_' + r.fname].call(this, r.rseqid, input, output);
  } else {
    input.skip(Thrift.Type.STRUCT);
    input.readMessageEnd();
    var x = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN_METHOD, 'Unknown function ' + r.fname);
    output.writeMessageBegin(r.fname, Thrift.MessageType.EXCEPTION, r.rseqid);
    x.write(output);
    output.writeMessageEnd();
    output.flush();
  }
}

BananaServiceProcessor.prototype.process_registerHealthCheck = function(seqid, input, output) {
  var args = new BananaService_registerHealthCheck_args();
  args.read(input);
  input.readMessageEnd();
  if (this._handler.registerHealthCheck.length === 1) {
    Q.fcall(this._handler.registerHealthCheck, args.request)
      .then(function(result) {
        var result = new BananaService_registerHealthCheck_result({success: result});
        output.writeMessageBegin("registerHealthCheck", Thrift.MessageType.REPLY, seqid);
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      }, function (err) {
        if (err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidArgumentException || err instanceof Exceptions_ttypes.InvalidCredentialsException || err instanceof Exceptions_ttypes.ServiceDoesNotExistException) {
          var result = new BananaService_registerHealthCheck_result(err);
          output.writeMessageBegin("registerHealthCheck", Thrift.MessageType.REPLY, seqid);
        } else {
          var result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
          output.writeMessageBegin("registerHealthCheck", Thrift.MessageType.EXCEPTION, seqid);
        }
        result.write(output);
        output.writeMessageEnd();
        output.flush();
      });
  } else {
    this._handler.registerHealthCheck(args.request, function (err, result) {
      if (err == null || err instanceof Exceptions_ttypes.OperationFailedException || err instanceof Exceptions_ttypes.InvalidArgumentException || err instanceof Exceptions_ttypes.InvalidCredentialsException || err instanceof Exceptions_ttypes.ServiceDoesNotExistException) {
        var result = new BananaService_registerHealthCheck_result((err != null ? err : {success: result}));
        output.writeMessageBegin("registerHealthCheck", Thrift.MessageType.REPLY, seqid);
      } else {
        var result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
        output.writeMessageBegin("registerHealthCheck", Thrift.MessageType.EXCEPTION, seqid);
      }
      result.write(output);
      output.writeMessageEnd();
      output.flush();
    });
  }
}

