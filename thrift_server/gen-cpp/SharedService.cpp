/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "SharedService.h"
#include "thrift/async/TAsyncChannel.h"

namespace shared {


SharedService_getStruct_args::~SharedService_getStruct_args() throw() {
}


uint32_t SharedService_getStruct_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->key);
          this->__isset.key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SharedService_getStruct_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("SharedService_getStruct_args");

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->key);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}


SharedService_getStruct_pargs::~SharedService_getStruct_pargs() throw() {
}


uint32_t SharedService_getStruct_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("SharedService_getStruct_pargs");

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((*(this->key)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}


SharedService_getStruct_result::~SharedService_getStruct_result() throw() {
}


uint32_t SharedService_getStruct_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SharedService_getStruct_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("SharedService_getStruct_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


SharedService_getStruct_presult::~SharedService_getStruct_presult() throw() {
}


uint32_t SharedService_getStruct_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SharedService_getStruct_presult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("SharedService_getStruct_presult");

  xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
  xfer += (*(this->success)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void SharedServiceClient::getStruct(SharedStruct& _return, const int32_t key)
{
  send_getStruct(key);
  recv_getStruct(_return);
}

void SharedServiceClient::send_getStruct(const int32_t key)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getStruct", ::apache::thrift::protocol::T_CALL, cseqid);

  SharedService_getStruct_pargs args;
  args.key = &key;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void SharedServiceClient::recv_getStruct(SharedStruct& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("getStruct") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  SharedService_getStruct_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getStruct failed: unknown result");
}

bool SharedServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void SharedServiceProcessor::process_getStruct(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("SharedService.getStruct", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "SharedService.getStruct");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "SharedService.getStruct");
  }

  SharedService_getStruct_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "SharedService.getStruct", bytes);
  }

  SharedService_getStruct_result result;
  try {
    iface_->getStruct(result.success, args.key);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "SharedService.getStruct");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("getStruct", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "SharedService.getStruct");
  }

  oprot->writeMessageBegin("getStruct", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "SharedService.getStruct", bytes);
  }
}

::boost::shared_ptr< ::apache::thrift::TProcessor > SharedServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< SharedServiceIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< SharedServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new SharedServiceProcessor(handler));
  return processor;
}
void SharedServiceCobClient::getStruct(tcxx::function<void(SharedServiceCobClient* client)> cob, const int32_t key)
{
  send_getStruct(key);
  channel_->sendAndRecvMessage(tcxx::bind(cob, this), otrans_.get(), itrans_.get());
}

void SharedServiceCobClient::send_getStruct(const int32_t key)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("getStruct", ::apache::thrift::protocol::T_CALL, cseqid);

  SharedService_getStruct_pargs args;
  args.key = &key;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void SharedServiceCobClient::recv_getStruct(SharedStruct& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;
  bool completed = false;

  try {
    iprot_->readMessageBegin(fname, mtype, rseqid);
    if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
      ::apache::thrift::TApplicationException x;
      x.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(true);
      throw x;
    }
    if (mtype != ::apache::thrift::protocol::T_REPLY) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    if (fname.compare("getStruct") != 0) {
      iprot_->skip(::apache::thrift::protocol::T_STRUCT);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();
      completed = true;
      completed__(false);
    }
    SharedService_getStruct_presult result;
    result.success = &_return;
    result.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();

    if (result.__isset.success) {
      // _return pointer has now been filled
      completed = true;
      completed__(true);
      return;
    }
    completed = true;
    completed__(true);
    throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "getStruct failed: unknown result");
  } catch (...) {
    if (!completed) {
      completed__(false);
    }
    throw;
  }
}

void SharedServiceAsyncProcessor::dispatchCall(tcxx::function<void(bool ok)> cob, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return cob(true);
  }
  (this->*(pfn->second))(cob, seqid, iprot, oprot);
  return;
}

void SharedServiceAsyncProcessor::process_getStruct(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot)
{
  SharedService_getStruct_args args;
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("SharedService.getStruct", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "SharedService.getStruct");

  try {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->preRead(ctx, "SharedService.getStruct");
    }
    args.read(iprot);
    iprot->readMessageEnd();
    uint32_t bytes = iprot->getTransport()->readEnd();
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->postRead(ctx, "SharedService.getStruct", bytes);
    }
  }
  catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "SharedService.getStruct");
    }
    return cob(false);
  }
  freer.unregister();
  void (SharedServiceAsyncProcessor::*return_fn)(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const SharedStruct& _return) =
    &SharedServiceAsyncProcessor::return_getStruct;
  iface_->getStruct(
      tcxx::bind(return_fn, this, cob, seqid, oprot, ctx, tcxx::placeholders::_1),
      args.key);
}

void SharedServiceAsyncProcessor::return_getStruct(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const SharedStruct& _return)
{
  SharedService_getStruct_presult result;
  result.success = const_cast<SharedStruct*>(&_return);
  result.__isset.success = true;

  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("SharedService.getStruct", NULL);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "SharedService.getStruct");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "SharedService.getStruct");
  }

  oprot->writeMessageBegin("getStruct", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  uint32_t bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();
  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "SharedService.getStruct", bytes);
  }
  return cob(true);
}

::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > SharedServiceAsyncProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< SharedServiceCobSvIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< SharedServiceCobSvIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > processor(new SharedServiceAsyncProcessor(handler));
  return processor;
}
} // namespace
