
        
        
    {}  // namespace leveldb
    
    #include <stdint.h>
#include 'leveldb/db.h'
#include 'db/dbformat.h'
    
    #include <stdio.h>
#include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/log_reader.h'
#include 'db/version_edit.h'
#include 'db/write_batch_internal.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
#include 'leveldb/options.h'
#include 'leveldb/status.h'
#include 'leveldb/table.h'
#include 'leveldb/write_batch.h'
#include 'util/logging.h'
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
      // Three-way comparison.  Returns value:
  //   < 0 iff 'a' < 'b',
  //   == 0 iff 'a' == 'b',
  //   > 0 iff 'a' > 'b'
  virtual int Compare(const Slice& a, const Slice& b) const = 0;
    
    #endif  // STORAGE_LEVELDB_INCLUDE_DUMPFILE_H_

    
    Value Value::get(ArrayIndex index, const Value& defaultValue) const {
  const Value* value = &((*this)[index]);
  return value == &nullRef ? defaultValue : *value;
}
    
    namespace enum_descriptor {
PyObject* NewEnumValuesByName(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesByNumber(const EnumDescriptor* descriptor);
PyObject* NewEnumValuesSeq(const EnumDescriptor* descriptor);
}  // namespace enum_descriptor
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CppGenerator);
};
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    void RepeatedEnumFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.ForEnum($tag$, x => (int) x, x => ($type_name$) x);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    void RepeatedPrimitiveFieldGenerator::GenerateMembers(io::Printer* printer) {
  printer->Print(
    variables_,
    'private static readonly pb::FieldCodec<$type_name$> _repeated_$name$_codec\n'
    '    = pb::FieldCodec.For$capitalized_type_name$($tag$);\n');
  printer->Print(variables_,
    'private readonly pbc::RepeatedField<$type_name$> $name$_ = new pbc::RepeatedField<$type_name$>();\n');
  WritePropertyDocComment(printer, descriptor_);
  AddPublicMemberAttributes(printer);
  printer->Print(
    variables_,
    '$access_level$ pbc::RepeatedField<$type_name$> $property_name$ {\n'
    '  get { return $name$_; }\n'
    '}\n');
}
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
    namespace google {
namespace protobuf {
namespace compiler {
namespace csharp {
    }
    }
    }
    }
    
    ExtensionGenerator* ImmutableGeneratorFactory::NewExtensionGenerator(
    const FieldDescriptor* descriptor) const {
  if (HasDescriptorMethods(descriptor->file(), context_->EnforceLite())) {
    return new ImmutableExtensionGenerator(descriptor, context_);
  } else {
    return new ImmutableExtensionLiteGenerator(descriptor, context_);
  }
}
    
      /// Perform an IO control command on the acceptor.
  /**
   * This function is used to execute an IO control command on the acceptor.
   *
   * @param command The IO control command to be performed on the acceptor.
   *
   * @throws boost::system::system_error Thrown on failure.
   *
   * @sa IoControlCommand @n
   * boost::asio::socket_base::non_blocking_io
   *
   * @par Example
   * Getting the number of bytes ready to read:
   * @code
   * boost::asio::ip::tcp::acceptor acceptor(io_service);
   * ...
   * boost::asio::ip::tcp::acceptor::non_blocking_io command(true);
   * socket.io_control(command);
   * @endcode
   */
  template <typename IoControlCommand>
  void io_control(IoControlCommand& command)
  {
    boost::system::error_code ec;
    this->get_service().io_control(this->get_implementation(), command, ec);
    boost::asio::detail::throw_error(ec, 'io_control');
  }
    
      /// Peek at the incoming data on the stream. Returns the number of bytes read.
  /// Throws an exception on failure.
  template <typename MutableBufferSequence>
  std::size_t peek(const MutableBufferSequence& buffers);
    
    #ifndef BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
#define BOOST_ASIO_BUFFERED_STREAM_FWD_HPP
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
// Nothing to include.
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <atomic>
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
# include <boost/detail/atomic_count.hpp>
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    #include <boost/asio/detail/push_options.hpp>
    
    #include <boost/asio/detail/config.hpp>
#include <boost/asio/detail/addressof.hpp>
#include <boost/asio/handler_invoke_hook.hpp>
    
    
    {inline bool RowSet::Load(dmlc::Stream* fi) {
  if (!fi->Read(&rows_)) return false;
  if (rows_.size() != 0) return true;
  return fi->Read(&size_, sizeof(size_)) == sizeof(size_);
}
}  // namespace xgboost
    
    template<typename DType>
inline void CompressArray<DType>::InitCompressChunks(size_t chunk_size, size_t max_nchunk) {
  raw_chunks_.clear();
  raw_chunks_.push_back(0);
  size_t min_chunk_size = data.size() / max_nchunk;
  chunk_size = std::max(min_chunk_size, chunk_size);
  size_t nstep = data.size() / chunk_size;
  for (size_t i = 0; i < nstep; ++i) {
    raw_chunks_.push_back(raw_chunks_.back() + chunk_size);
    CHECK_LE(raw_chunks_.back(), data.size());
  }
  if (nstep == 0) raw_chunks_.push_back(0);
  raw_chunks_.back() = data.size();
  CHECK_GE(raw_chunks_.size(), 2);
  out_buffer_.resize(raw_chunks_.size() - 1);
  for (size_t i = 0; i < out_buffer_.size(); ++i) {
    out_buffer_[i].resize(raw_chunks_[i + 1] - raw_chunks_[i]);
  }
}
    
      if (npart != 1) {
    LOG(CONSOLE) << 'Load part of data ' << partid
                 << ' of ' << npart << ' parts';
  }
  // legacy handling of binary data loading
  if (file_format == 'auto' && npart == 1) {
    int magic;
    std::unique_ptr<dmlc::Stream> fi(dmlc::Stream::Create(fname.c_str(), 'r', true));
    if (fi != nullptr) {
      common::PeekableInStream is(fi.get());
      if (is.PeekRead(&magic, sizeof(magic)) == sizeof(magic) &&
          magic == data::SimpleCSRSource::kMagic) {
        std::unique_ptr<data::SimpleCSRSource> source(new data::SimpleCSRSource());
        source->LoadBinary(&is);
        DMatrix* dmat = DMatrix::Create(std::move(source), cache_file);
        if (!silent) {
          LOG(CONSOLE) << dmat->Info().num_row_ << 'x' << dmat->Info().num_col_ << ' matrix with '
                       << dmat->Info().num_nonzero_ << ' entries loaded from ' << uri;
        }
        return dmat;
      }
    }
  }
    
    void SimpleCSRSource::Clear() {
  page_.Clear();
  this->info.Clear();
}
    
    
    {
    {bool SimpleDMatrix::SingleColBlock() const {
  return true;
}
}  // namespace data
}  // namespace xgboost

    
      const RowSet& BufferedRowset() const override {
    return buffered_rowset_;
  }
    
    bool SparsePageSource::CacheExist(const std::string& cache_info) {
  std::vector<std::string> cache_shards = common::Split(cache_info, ':');
  CHECK_NE(cache_shards.size(), 0U);
  {
    std::string name_info = cache_shards[0];
    std::unique_ptr<dmlc::Stream> finfo(dmlc::Stream::Create(name_info.c_str(), 'r', true));
    if (finfo == nullptr) return false;
  }
  for (const std::string& prefix : cache_shards) {
    std::string name_row = prefix + '.row.page';
    std::unique_ptr<dmlc::Stream> frow(dmlc::Stream::Create(name_row.c_str(), 'r', true));
    if (frow == nullptr) return false;
  }
  return true;
}
    
    
    {  // Use goodMallocSize() to bump up the capacity to a decent size to request
  // from malloc, so we can use all of the space that malloc will probably give
  // us anyway.
  return goodMallocSize(minSize);
}
    
    template <typename T>
constexpr T constexpr_ceil(T t, T round) {
  return round == T(0)
      ? t
      : ((t + (t < T(0) ? T(0) : round - T(1))) / round) * round;
}
    
    
    {static InitChecker initChecker;
} // namespace