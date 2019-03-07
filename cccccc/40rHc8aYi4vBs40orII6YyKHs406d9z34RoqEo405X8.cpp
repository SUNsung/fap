
        
        void ExtensionStatus::__set_uuid(const ExtensionRouteUUID val) {
  this->uuid = val;
}
std::ostream& operator<<(std::ostream& out, const ExtensionStatus& obj)
{
  obj.printTo(out);
  return out;
}
    
      auto wrapped = WrappedMessage{};
  wrapped.msg.a_ = 1;
  wrapped.msg.b_ = 2;
  wrapped.msg.c_ = 't';
  wrapped.msg.d_ = 'i';
  wrapped.size = sizeof(TestMessage);
  wrapped.header.type = PERF_RECORD_SAMPLE;
  wrapped.header.size = sizeof(WrappedMessage);
  auto const wrapped_ptr =
      reinterpret_cast<ebpf::impl::ByteType const*>(&wrapped);
  std::copy(wrapped_ptr, wrapped_ptr + sizeof(WrappedMessage), &buf[0] + tail);
    
    Expected<LinuxProbesControl, LinuxProbesControl::Error>
LinuxProbesControl::spawn() {
  auto exp = setMemoryLockSystemLimit();
  if (exp.isError()) {
    return createError(Error::SystemUnknown,
                       'failed to set appropriate memory lock limits',
                       exp.takeError());
  }
    }