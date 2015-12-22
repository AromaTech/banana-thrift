/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ApplicationService_H
#define ApplicationService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "ApplicationService_types.h"

namespace aroma { namespace banana { namespace thrift { namespace service {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ApplicationServiceIf {
 public:
  virtual ~ApplicationServiceIf() {}
  virtual double getApiVersion() = 0;

  /**
   * Send a Message from your Application to the Banana Service.
   * 
   * @param request
   */
  virtual void sendMessage(SendMessageResponse& _return, const SendMessageRequest& request) = 0;

  /**
   * Fire-And-Forget version of sendMessage() ;
   * With this operation, the client does not wait for the server
   * to finish processing. The only guarantees provided is that
   * the Message was successfully sent over the Transport.
   * 
   * @param request
   */
  virtual void sendMessageAsync(const SendMessageRequest& request) = 0;
};

class ApplicationServiceIfFactory {
 public:
  typedef ApplicationServiceIf Handler;

  virtual ~ApplicationServiceIfFactory() {}

  virtual ApplicationServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ApplicationServiceIf* /* handler */) = 0;
};

class ApplicationServiceIfSingletonFactory : virtual public ApplicationServiceIfFactory {
 public:
  ApplicationServiceIfSingletonFactory(const boost::shared_ptr<ApplicationServiceIf>& iface) : iface_(iface) {}
  virtual ~ApplicationServiceIfSingletonFactory() {}

  virtual ApplicationServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ApplicationServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<ApplicationServiceIf> iface_;
};

class ApplicationServiceNull : virtual public ApplicationServiceIf {
 public:
  virtual ~ApplicationServiceNull() {}
  double getApiVersion() {
    double _return = (double)0;
    return _return;
  }
  void sendMessage(SendMessageResponse& /* _return */, const SendMessageRequest& /* request */) {
    return;
  }
  void sendMessageAsync(const SendMessageRequest& /* request */) {
    return;
  }
};


class ApplicationService_getApiVersion_args {
 public:

  ApplicationService_getApiVersion_args(const ApplicationService_getApiVersion_args&);
  ApplicationService_getApiVersion_args& operator=(const ApplicationService_getApiVersion_args&);
  ApplicationService_getApiVersion_args() {
  }

  virtual ~ApplicationService_getApiVersion_args() throw();

  bool operator == (const ApplicationService_getApiVersion_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const ApplicationService_getApiVersion_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationService_getApiVersion_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ApplicationService_getApiVersion_pargs {
 public:


  virtual ~ApplicationService_getApiVersion_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ApplicationService_getApiVersion_result__isset {
  _ApplicationService_getApiVersion_result__isset() : success(false) {}
  bool success :1;
} _ApplicationService_getApiVersion_result__isset;

class ApplicationService_getApiVersion_result {
 public:

  ApplicationService_getApiVersion_result(const ApplicationService_getApiVersion_result&);
  ApplicationService_getApiVersion_result& operator=(const ApplicationService_getApiVersion_result&);
  ApplicationService_getApiVersion_result() : success(0) {
  }

  virtual ~ApplicationService_getApiVersion_result() throw();
  double success;

  _ApplicationService_getApiVersion_result__isset __isset;

  void __set_success(const double val);

  bool operator == (const ApplicationService_getApiVersion_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ApplicationService_getApiVersion_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationService_getApiVersion_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ApplicationService_getApiVersion_presult__isset {
  _ApplicationService_getApiVersion_presult__isset() : success(false) {}
  bool success :1;
} _ApplicationService_getApiVersion_presult__isset;

class ApplicationService_getApiVersion_presult {
 public:


  virtual ~ApplicationService_getApiVersion_presult() throw();
  double* success;

  _ApplicationService_getApiVersion_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ApplicationService_sendMessage_args__isset {
  _ApplicationService_sendMessage_args__isset() : request(false) {}
  bool request :1;
} _ApplicationService_sendMessage_args__isset;

class ApplicationService_sendMessage_args {
 public:

  ApplicationService_sendMessage_args(const ApplicationService_sendMessage_args&);
  ApplicationService_sendMessage_args& operator=(const ApplicationService_sendMessage_args&);
  ApplicationService_sendMessage_args() {
  }

  virtual ~ApplicationService_sendMessage_args() throw();
  SendMessageRequest request;

  _ApplicationService_sendMessage_args__isset __isset;

  void __set_request(const SendMessageRequest& val);

  bool operator == (const ApplicationService_sendMessage_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const ApplicationService_sendMessage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationService_sendMessage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ApplicationService_sendMessage_pargs {
 public:


  virtual ~ApplicationService_sendMessage_pargs() throw();
  const SendMessageRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ApplicationService_sendMessage_result__isset {
  _ApplicationService_sendMessage_result__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _ApplicationService_sendMessage_result__isset;

class ApplicationService_sendMessage_result {
 public:

  ApplicationService_sendMessage_result(const ApplicationService_sendMessage_result&);
  ApplicationService_sendMessage_result& operator=(const ApplicationService_sendMessage_result&);
  ApplicationService_sendMessage_result() {
  }

  virtual ~ApplicationService_sendMessage_result() throw();
  SendMessageResponse success;
  OperationFailedException ex1;
  InvalidArgumentException ex2;
  InvalidCredentialsException ex3;

  _ApplicationService_sendMessage_result__isset __isset;

  void __set_success(const SendMessageResponse& val);

  void __set_ex1(const OperationFailedException& val);

  void __set_ex2(const InvalidArgumentException& val);

  void __set_ex3(const InvalidCredentialsException& val);

  bool operator == (const ApplicationService_sendMessage_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex1 == rhs.ex1))
      return false;
    if (!(ex2 == rhs.ex2))
      return false;
    if (!(ex3 == rhs.ex3))
      return false;
    return true;
  }
  bool operator != (const ApplicationService_sendMessage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationService_sendMessage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ApplicationService_sendMessage_presult__isset {
  _ApplicationService_sendMessage_presult__isset() : success(false), ex1(false), ex2(false), ex3(false) {}
  bool success :1;
  bool ex1 :1;
  bool ex2 :1;
  bool ex3 :1;
} _ApplicationService_sendMessage_presult__isset;

class ApplicationService_sendMessage_presult {
 public:


  virtual ~ApplicationService_sendMessage_presult() throw();
  SendMessageResponse* success;
  OperationFailedException* ex1;
  InvalidArgumentException* ex2;
  InvalidCredentialsException* ex3;

  _ApplicationService_sendMessage_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ApplicationService_sendMessageAsync_args__isset {
  _ApplicationService_sendMessageAsync_args__isset() : request(false) {}
  bool request :1;
} _ApplicationService_sendMessageAsync_args__isset;

class ApplicationService_sendMessageAsync_args {
 public:

  ApplicationService_sendMessageAsync_args(const ApplicationService_sendMessageAsync_args&);
  ApplicationService_sendMessageAsync_args& operator=(const ApplicationService_sendMessageAsync_args&);
  ApplicationService_sendMessageAsync_args() {
  }

  virtual ~ApplicationService_sendMessageAsync_args() throw();
  SendMessageRequest request;

  _ApplicationService_sendMessageAsync_args__isset __isset;

  void __set_request(const SendMessageRequest& val);

  bool operator == (const ApplicationService_sendMessageAsync_args & rhs) const
  {
    if (!(request == rhs.request))
      return false;
    return true;
  }
  bool operator != (const ApplicationService_sendMessageAsync_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ApplicationService_sendMessageAsync_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ApplicationService_sendMessageAsync_pargs {
 public:


  virtual ~ApplicationService_sendMessageAsync_pargs() throw();
  const SendMessageRequest* request;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class ApplicationServiceClient : virtual public ApplicationServiceIf {
 public:
  ApplicationServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ApplicationServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  double getApiVersion();
  void send_getApiVersion();
  double recv_getApiVersion();
  void sendMessage(SendMessageResponse& _return, const SendMessageRequest& request);
  void send_sendMessage(const SendMessageRequest& request);
  void recv_sendMessage(SendMessageResponse& _return);
  void sendMessageAsync(const SendMessageRequest& request);
  void send_sendMessageAsync(const SendMessageRequest& request);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ApplicationServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ApplicationServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ApplicationServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getApiVersion(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_sendMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_sendMessageAsync(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ApplicationServiceProcessor(boost::shared_ptr<ApplicationServiceIf> iface) :
    iface_(iface) {
    processMap_["getApiVersion"] = &ApplicationServiceProcessor::process_getApiVersion;
    processMap_["sendMessage"] = &ApplicationServiceProcessor::process_sendMessage;
    processMap_["sendMessageAsync"] = &ApplicationServiceProcessor::process_sendMessageAsync;
  }

  virtual ~ApplicationServiceProcessor() {}
};

class ApplicationServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ApplicationServiceProcessorFactory(const ::boost::shared_ptr< ApplicationServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ApplicationServiceIfFactory > handlerFactory_;
};

class ApplicationServiceMultiface : virtual public ApplicationServiceIf {
 public:
  ApplicationServiceMultiface(std::vector<boost::shared_ptr<ApplicationServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ApplicationServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ApplicationServiceIf> > ifaces_;
  ApplicationServiceMultiface() {}
  void add(boost::shared_ptr<ApplicationServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  double getApiVersion() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getApiVersion();
    }
    return ifaces_[i]->getApiVersion();
  }

  void sendMessage(SendMessageResponse& _return, const SendMessageRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sendMessage(_return, request);
    }
    ifaces_[i]->sendMessage(_return, request);
    return;
  }

  void sendMessageAsync(const SendMessageRequest& request) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sendMessageAsync(request);
    }
    ifaces_[i]->sendMessageAsync(request);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ApplicationServiceConcurrentClient : virtual public ApplicationServiceIf {
 public:
  ApplicationServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ApplicationServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  double getApiVersion();
  int32_t send_getApiVersion();
  double recv_getApiVersion(const int32_t seqid);
  void sendMessage(SendMessageResponse& _return, const SendMessageRequest& request);
  int32_t send_sendMessage(const SendMessageRequest& request);
  void recv_sendMessage(SendMessageResponse& _return, const int32_t seqid);
  void sendMessageAsync(const SendMessageRequest& request);
  void send_sendMessageAsync(const SendMessageRequest& request);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

}}}} // namespace

#endif
