//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


//HELPER FUNCTIONS AND STRUCTURES

BananaMessageService_getApiVersion_args = function(args) {
};
BananaMessageService_getApiVersion_args.prototype = {};
BananaMessageService_getApiVersion_args.prototype.read = function(input) {
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

BananaMessageService_getApiVersion_args.prototype.write = function(output) {
      output.writeStructBegin('BananaMessageService_getApiVersion_args');
      output.writeFieldStop();
      output.writeStructEnd();
      return;
    };

BananaMessageService_getApiVersion_result = function(args) {
      this.success = null;
      if (args) {
            if (args.success !== undefined && args.success !== null) {
                  this.success = args.success;
            }
      }
};
BananaMessageService_getApiVersion_result.prototype = {};
BananaMessageService_getApiVersion_result.prototype.read = function(input) {
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
          if (ftype == Thrift.Type.DOUBLE) {
            this.success = input.readDouble().value;
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

BananaMessageService_getApiVersion_result.prototype.write = function(output) {
      output.writeStructBegin('BananaMessageService_getApiVersion_result');
      if (this.success !== null && this.success !== undefined) {
        output.writeFieldBegin('success', Thrift.Type.DOUBLE, 0);
        output.writeDouble(this.success);
        output.writeFieldEnd();
      }
      output.writeFieldStop();
      output.writeStructEnd();
      return;
    };

BananaMessageService_sendMessage_args = function(args) {
      this.request = null;
      if (args) {
            if (args.request !== undefined && args.request !== null) {
                  this.request = new SendMessageRequest(args.request);
            }
      }
};
BananaMessageService_sendMessage_args.prototype = {};
BananaMessageService_sendMessage_args.prototype.read = function(input) {
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
            this.request = new SendMessageRequest();
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

BananaMessageService_sendMessage_args.prototype.write = function(output) {
      output.writeStructBegin('BananaMessageService_sendMessage_args');
      if (this.request !== null && this.request !== undefined) {
        output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
        this.request.write(output);
        output.writeFieldEnd();
      }
      output.writeFieldStop();
      output.writeStructEnd();
      return;
    };

BananaMessageService_sendMessage_result = function(args) {
      this.success = null;
      this.ex1 = null;
      this.ex2 = null;
      this.ex3 = null;
      if (args instanceof OperationFailedException) {
            this.ex1 = args;
            return;
      }
      if (args instanceof InvalidArgumentException) {
            this.ex2 = args;
            return;
      }
      if (args instanceof InvalidCredentialsException) {
            this.ex3 = args;
            return;
      }
      if (args) {
            if (args.success !== undefined && args.success !== null) {
                  this.success = new SendMessageResponse(args.success);
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
      }
};
BananaMessageService_sendMessage_result.prototype = {};
BananaMessageService_sendMessage_result.prototype.read = function(input) {
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
            this.success = new SendMessageResponse();
            this.success.read(input);
          } else {
            input.skip(ftype);
          }
          break;
          case 1:
          if (ftype == Thrift.Type.STRUCT) {
            this.ex1 = new OperationFailedException();
            this.ex1.read(input);
          } else {
            input.skip(ftype);
          }
          break;
          case 2:
          if (ftype == Thrift.Type.STRUCT) {
            this.ex2 = new InvalidArgumentException();
            this.ex2.read(input);
          } else {
            input.skip(ftype);
          }
          break;
          case 3:
          if (ftype == Thrift.Type.STRUCT) {
            this.ex3 = new InvalidCredentialsException();
            this.ex3.read(input);
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

BananaMessageService_sendMessage_result.prototype.write = function(output) {
      output.writeStructBegin('BananaMessageService_sendMessage_result');
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
      output.writeFieldStop();
      output.writeStructEnd();
      return;
    };

BananaMessageService_sendMessageAsync_args = function(args) {
      this.request = null;
      if (args) {
            if (args.request !== undefined && args.request !== null) {
                  this.request = new SendMessageRequest(args.request);
            }
      }
};
BananaMessageService_sendMessageAsync_args.prototype = {};
BananaMessageService_sendMessageAsync_args.prototype.read = function(input) {
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
            this.request = new SendMessageRequest();
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

BananaMessageService_sendMessageAsync_args.prototype.write = function(output) {
      output.writeStructBegin('BananaMessageService_sendMessageAsync_args');
      if (this.request !== null && this.request !== undefined) {
        output.writeFieldBegin('request', Thrift.Type.STRUCT, 1);
        this.request.write(output);
        output.writeFieldEnd();
      }
      output.writeFieldStop();
      output.writeStructEnd();
      return;
    };

BananaMessageService_sendMessageAsync_result = function(args) {
};
BananaMessageService_sendMessageAsync_result.prototype = {};
BananaMessageService_sendMessageAsync_result.prototype.read = function(input) {
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

BananaMessageService_sendMessageAsync_result.prototype.write = function(output) {
      output.writeStructBegin('BananaMessageService_sendMessageAsync_result');
      output.writeFieldStop();
      output.writeStructEnd();
      return;
    };

BananaMessageServiceClient = function(input, output) {
        this.input = input;
        this.output = (!output) ? input : output;
        this.seqid = 0;
    };
    BananaMessageServiceClient.prototype = {};
BananaMessageServiceClient.prototype.getApiVersion = function(callback) {
      this.send_getApiVersion(callback); 
      if (!callback) {
        return this.recv_getApiVersion();
      }
};

BananaMessageServiceClient.prototype.send_getApiVersion = function(callback) {
      this.output.writeMessageBegin('getApiVersion', Thrift.MessageType.CALL, this.seqid);
      var args = new BananaMessageService_getApiVersion_args();
      args.write(this.output);
      this.output.writeMessageEnd();
      if (callback) {
        var self = this;
        this.output.getTransport().flush(true, function() {
          var result = null;
          try {
            result = self.recv_getApiVersion();
          } catch (e) {
            result = e;
          }
          callback(result);
        });
      } else {
        return this.output.getTransport().flush();
      }
};

BananaMessageServiceClient.prototype.recv_getApiVersion = function() {
      var ret = this.input.readMessageBegin();
      var fname = ret.fname;
      var mtype = ret.mtype;
      var rseqid = ret.rseqid;
      if (mtype == Thrift.MessageType.EXCEPTION) {
        var x = new Thrift.TApplicationException();
        x.read(this.input);
        this.input.readMessageEnd();
        throw x;
      }
      var result = new BananaMessageService_getApiVersion_result();
      result.read(this.input);
      this.input.readMessageEnd();

      if (null !== result.success) {
        return result.success;
      }
      throw 'getApiVersion failed: unknown result';
};
BananaMessageServiceClient.prototype.sendMessage = function(request, callback) {
      this.send_sendMessage(request, callback); 
      if (!callback) {
        return this.recv_sendMessage();
      }
};

BananaMessageServiceClient.prototype.send_sendMessage = function(request, callback) {
      this.output.writeMessageBegin('sendMessage', Thrift.MessageType.CALL, this.seqid);
      var args = new BananaMessageService_sendMessage_args();
      args.request = request;
      args.write(this.output);
      this.output.writeMessageEnd();
      if (callback) {
        var self = this;
        this.output.getTransport().flush(true, function() {
          var result = null;
          try {
            result = self.recv_sendMessage();
          } catch (e) {
            result = e;
          }
          callback(result);
        });
      } else {
        return this.output.getTransport().flush();
      }
};

BananaMessageServiceClient.prototype.recv_sendMessage = function() {
      var ret = this.input.readMessageBegin();
      var fname = ret.fname;
      var mtype = ret.mtype;
      var rseqid = ret.rseqid;
      if (mtype == Thrift.MessageType.EXCEPTION) {
        var x = new Thrift.TApplicationException();
        x.read(this.input);
        this.input.readMessageEnd();
        throw x;
      }
      var result = new BananaMessageService_sendMessage_result();
      result.read(this.input);
      this.input.readMessageEnd();

      if (null !== result.ex1) {
        throw result.ex1;
      }
      if (null !== result.ex2) {
        throw result.ex2;
      }
      if (null !== result.ex3) {
        throw result.ex3;
      }
      if (null !== result.success) {
        return result.success;
      }
      throw 'sendMessage failed: unknown result';
};
BananaMessageServiceClient.prototype.sendMessageAsync = function(request, callback) {
      this.send_sendMessageAsync(request, callback); 
};

BananaMessageServiceClient.prototype.send_sendMessageAsync = function(request, callback) {
      this.output.writeMessageBegin('sendMessageAsync', Thrift.MessageType.ONEWAY, this.seqid);
      var args = new BananaMessageService_sendMessageAsync_args();
      args.request = request;
      args.write(this.output);
      this.output.writeMessageEnd();
      if (callback) {
        var self = this;
        this.output.getTransport().flush(true, function() {
          var result = null;
          try {
            result = self.recv_sendMessageAsync();
          } catch (e) {
            result = e;
          }
          callback(result);
        });
      } else {
        return this.output.getTransport().flush();
      }
};
