//
// Autogenerated by Thrift Compiler (0.9.3)
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//
var thrift = require('thrift');
var Thrift = thrift.Thrift;
var Q = thrift.Q;

var Authentication_ttypes = require('./Authentication_types')
var Aroma_ttypes = require('./Aroma_types')
var Channels_ttypes = require('./Channels_types')
var Endpoint_ttypes = require('./Endpoint_types')
var Events_ttypes = require('./Events_types')
var Exceptions_ttypes = require('./Exceptions_types')
var ApplicationService_ttypes = require('./ApplicationService_types')
var AromaService_ttypes = require('./AromaService_types')


var ttypes = require('./MessageService_types');
//HELPER FUNCTIONS AND STRUCTURES

MessageService_getApiVersion_args = function(args) {
};
MessageService_getApiVersion_args.prototype = {};
MessageService_getApiVersion_args.prototype.read = function(input) {
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

MessageService_getApiVersion_args.prototype.write = function(output) {
        output.writeStructBegin('MessageService_getApiVersion_args');
        output.writeFieldStop();
        output.writeStructEnd();
        return;
      };

MessageService_getApiVersion_result = function(args) {
        this.success = null;
        if (args) {
                if (args.success !== undefined && args.success !== null) {
                        this.success = args.success;
                }
        }
};
MessageService_getApiVersion_result.prototype = {};
MessageService_getApiVersion_result.prototype.read = function(input) {
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
              this.success = input.readDouble();
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

MessageService_getApiVersion_result.prototype.write = function(output) {
        output.writeStructBegin('MessageService_getApiVersion_result');
        if (this.success !== null && this.success !== undefined) {
          output.writeFieldBegin('success', Thrift.Type.DOUBLE, 0);
          output.writeDouble(this.success);
          output.writeFieldEnd();
        }
        output.writeFieldStop();
        output.writeStructEnd();
        return;
      };

MessageServiceClient = exports.Client = function(output, pClass) {
          this.output = output;
          this.pClass = pClass;
          this._seqid = 0;
          this._reqs = {};
      };
      MessageServiceClient.prototype = {};
      MessageServiceClient.prototype.seqid = function() { return this._seqid; }
MessageServiceClient.prototype.new_seqid = function() { return this._seqid += 1; }
MessageServiceClient.prototype.getApiVersion = function(callback) {
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
          this.send_getApiVersion();
          return _defer.promise;
        } else {
          this._reqs[this.seqid()] = callback;
          this.send_getApiVersion();
        }
};

MessageServiceClient.prototype.send_getApiVersion = function() {
        var output = new this.pClass(this.output);
        output.writeMessageBegin('getApiVersion', Thrift.MessageType.CALL, this.seqid());
        var args = new MessageService_getApiVersion_args();
        args.write(output);
        output.writeMessageEnd();
        return this.output.flush();
};

MessageServiceClient.prototype.recv_getApiVersion = function(input,mtype,rseqid) {
        var callback = this._reqs[rseqid] || function() {};
        delete this._reqs[rseqid];
        if (mtype == Thrift.MessageType.EXCEPTION) {
          var x = new Thrift.TApplicationException();
          x.read(input);
          input.readMessageEnd();
          return callback(x);
        }
        var result = new MessageService_getApiVersion_result();
        result.read(input);
        input.readMessageEnd();

        if (null !== result.success) {
          return callback(null, result.success);
        }
        return callback('getApiVersion failed: unknown result');
};
MessageServiceProcessor = exports.Processor = function(handler)       {
        this._handler = handler
      }
      MessageServiceProcessor.prototype.process = function(input, output)       {
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

      MessageServiceProcessor.prototype.process_getApiVersion = function(seqid, input, output)       {
        var args = new MessageService_getApiVersion_args();
        args.read(input);
        input.readMessageEnd();
        if (this._handler.getApiVersion.length === 0) {
          Q.fcall(this._handler.getApiVersion)
            .then(function(result) {
              var result = new MessageService_getApiVersion_result({success: result});
              output.writeMessageBegin("getApiVersion", Thrift.MessageType.REPLY, seqid);
              result.write(output);
              output.writeMessageEnd();
              output.flush();
            }, function (err) {
              var result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
              output.writeMessageBegin("getApiVersion", Thrift.MessageType.EXCEPTION, seqid);
              result.write(output);
              output.writeMessageEnd();
              output.flush();
            });
        } else {
          this._handler.getApiVersion(function (err, result) {
            if (err == null) {
              var result = new MessageService_getApiVersion_result((err != null ? err : {success: result}));
              output.writeMessageBegin("getApiVersion", Thrift.MessageType.REPLY, seqid);
            } else {
              var result = new Thrift.TApplicationException(Thrift.TApplicationExceptionType.UNKNOWN, err.message);
              output.writeMessageBegin("getApiVersion", Thrift.MessageType.EXCEPTION, seqid);
            }
            result.write(output);
            output.writeMessageEnd();
            output.flush();
          });
        }
      }

