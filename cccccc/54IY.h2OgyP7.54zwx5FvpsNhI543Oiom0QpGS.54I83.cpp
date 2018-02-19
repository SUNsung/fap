
        
        namespace python {
    }
    
    
    {
    {
    {
    {
    {}  // namespace
}  // namespace csharp
}  // namespace compiler
}  // namespace protobuf
}  // namespace google

    
      virtual void WriteHash(io::Printer* printer);
  virtual void WriteEquals(io::Printer* printer);
  virtual void WriteToString(io::Printer* printer);
    
    void RepeatedMessageFieldGenerator::GenerateSerializationCode(io::Printer* printer) {
  printer->Print(
    variables_,
    '$name$_.WriteTo(output, _repeated_$name$_codec);\n');
}
    
    
    { private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(RepeatedMessageFieldGenerator);
};
    
    #include <google/protobuf/descriptor.h>
    
    
    {  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ImmutableExtensionLiteGenerator);
};
    
    /**
 * @brief An osquery backing storage (database) type that persists executions.
 *
 * The osquery tools need a high-performance storage and indexing mechanism for
 * storing intermediate results from EventPublisher%s, persisting one-time
 * generated values, and performing non-memory backed differentials.
 *
 * Practically, osquery is built around RocksDB's performance guarantees and
 * all of the internal APIs expect RocksDB's indexing and read performance.
 * However, access to this representation of a backing-store is still abstracted
 * to removing RocksDB as a dependency for the osquery SDK.
 */
class DatabasePlugin : public Plugin {
 public:
  /**
   * @brief Perform a domain and key lookup from the backing store.
   *
   * Database value access indexing is abstracted into domains and keys.
   * Both are string values but exist separately for simple indexing without
   * API-enforcing tokenization. In some cases we do add a component-specific
   * tokeninzation to keys.
   *
   * @param domain A string value representing abstract storage indexing.
   * @param key A string value representing the lookup/retrieval key.
   * @param value The output parameter, left empty if the key does not exist.
   * @return Failure if the data could not be accessed. It is up to the plugin
   * to determine if a missing key means a non-success status.
   */
  virtual Status get(const std::string& domain,
                     const std::string& key,
                     std::string& value) const = 0;
    }
    
    #include <sstream>
#include <string>
#include <utility>
    
      /**
   * @brief Initialize any platform dependent libraries or objects
   *
   * On windows, we require the COM libraries be initialized just once
   */
  static void platformSetup();
    
      /*
   * @brief A helper function to perform a start to finish carve
   *
   * This function walks through the carve, compress, and exfil functions
   * in one fell swoop. Use of this class should largely happen through
   * this function.
   */
  void start();
    
    /// Config retrieval TLS endpoint (path) using TLS hostname.
CLI_FLAG(string,
         config_tls_endpoint,
         '',
         'TLS/HTTPS endpoint for config retrieval');
    
     protected:
  /// Calculate the URL once and cache the result.
  std::string uri_;