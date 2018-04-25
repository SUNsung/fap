
        
        
    { private:
  Cluster* cluster_;  // Not owned.
  int measurement_steps_;
  int measurement_threads_;
  std::vector<std::pair<string, Tensor>> feed_;
  std::vector<string> fetch_;
  std::unique_ptr<thread::ThreadPool> thread_pool_;
};
    
      string name() const override { return 'model_pruner'; };
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    
    {  void CopyDeviceTensorToCPU(const Tensor *device_tensor, StringPiece edge_name,
                             Device *device, Tensor *cpu_tensor,
                             StatusCallback done) override;
};
    
    MPIUtils::MPIUtils(const std::string& worker_name) {
  InitMPI();
  // Connect the MPI process IDs to the worker names that are used by TF.
  // Gather the names of all the active processes (name can't be longer than
  // 128 bytes)
  int proc_id = 0, number_of_procs = 1;
  char my_name[max_worker_name_length];
  MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
  MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    }
    
    #if defined(_MSC_VER) && _MSC_VER >= 1600 // MSVC >= 2010
#define JSON_HAS_RVALUE_REFERENCES 1
#endif // MSVC >= 2010
    
    #ifndef GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
#define GOOGLE_PROTOBUF_PYTHON_CPP_DESCRIPTOR_CONTAINERS_H__
    
    #include <google/protobuf/pyext/descriptor_database.h>
    
      // Find the file that declares the given fully-qualified symbol name.
  bool FindFileContainingSymbol(const string& symbol_name,
                                FileDescriptorProto* output);
    
    
    {
    {
    {
    {}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google
    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    namespace google {
namespace protobuf {
  namespace io {
    class Printer;             // printer.h
  }
}
    }
    
    // TODO(kenton):  It's hard to write a robust test of the doc comments -- we
//   can only really compare the output against a golden value, which is a
//   fairly tedious and fragile testing strategy.  If we want to go that route,
//   it probably makes sense to bite the bullet and write a test that compares
//   the whole generated output for unittest.proto against a golden value, with
//   a very simple script that can be run to regenerate it with the latest code.
//   This would mean that updates to the golden file would have to be included
//   in any change to the code generator, which would actually be fairly useful
//   as it allows the reviewer to see clearly how the generated code is
//   changing.
    
    
    {  return 0;
}

    
    #ifndef GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
#define GRPC_COMMON_CPP_ROUTE_GUIDE_HELPER_H_
    
    // Get leading or trailing comments in a string. Comment lines start with '// '.
// Leading detached comments are put in in front of leading comments.
template <typename DescriptorType>
inline grpc::string GetNodeComments(const DescriptorType* desc, bool leading) {
  return grpc_generator::GetPrefixedComments(desc, leading, '//');
}
    
    
    { private:
  GeneratorConfiguration config_;
};
    
    grpc::string DescribeServiceList(std::vector<grpc::string> service_list,
                                 grpc::protobuf::DescriptorPool& desc_pool) {
  std::stringstream result;
  for (auto it = service_list.begin(); it != service_list.end(); it++) {
    auto const& service = *it;
    const grpc::protobuf::ServiceDescriptor* service_desc =
        desc_pool.FindServiceByName(service);
    if (service_desc != nullptr) {
      result << DescribeService(service_desc);
    }
  }
  return result.str();
}
    
      /// (Deprecated: Use native_handle().) Get the native acceptor representation.
  /**
   * This function may be used to obtain the underlying representation of the
   * acceptor. This is intended to allow access to native acceptor functionality
   * that is not otherwise provided.
   */
  native_type native()
  {
    return this->get_service().native_handle(this->get_implementation());
  }
    
    template <typename Stream>
class buffered_write_stream;
    
    #if !defined(BOOST_ASIO_HAS_THREADS)
typedef long atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#elif defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef std::atomic<long> atomic_count;
inline void increment(atomic_count& a, long b) { a += b; }
#else // defined(BOOST_ASIO_HAS_STD_ATOMIC)
typedef boost::detail::atomic_count atomic_count;
inline void increment(atomic_count& a, long b) { while (b > 0) ++a, --b; }
#endif // defined(BOOST_ASIO_HAS_STD_ATOMIC)
    
    
    {
    {
    {} // namespace detail
} // namespace asio
} // namespace boost
    
    template <typename Buffer>
class buffer_sequence_adapter<Buffer, boost::asio::mutable_buffers_1>
  : buffer_sequence_adapter_base
{
public:
  explicit buffer_sequence_adapter(
      const boost::asio::mutable_buffers_1& buffer_sequence)
  {
    init_native_buffer(buffer_, Buffer(buffer_sequence));
    total_buffer_size_ = boost::asio::buffer_size(buffer_sequence);
  }
    }