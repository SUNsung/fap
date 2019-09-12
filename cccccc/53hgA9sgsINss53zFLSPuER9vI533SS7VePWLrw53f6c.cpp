
        
          /* Parse XML packet */
  xmlDocPtr response = soap_xmlParseMemory(buffer, buffer_size);
  if (!response) {
    add_soap_fault(obj, 'Client', 'looks like we got no XML document');
    return false;
  }
  if (xmlGetIntSubset(response) != nullptr) {
    add_soap_fault(obj, 'Client', 'DTD are not supported by SOAP');
    xmlFreeDoc(response);
    return false;
  }
    
      /*
   * Add an object that occupies an index but can't be located by name.
   */
  void addUnnamed(const T& t);
    
    #include 'hphp/util/assertions.h'
#include <atomic>
#include <folly/portability/SysMman.h>
    
    // Specify the mount point of hugetlbfs with 1G page size.  Returns whether the
// operation succeeded, i.e., the specified path is accessible, and is on a
// hugetlbfs with 1G page size.
bool set_hugetlbfs_path(const char* path);
    
    //////////////////////////////////////////////////////////////////////
    
    
    {      for (int i = 0; i < indent; ++i) {
        os << '  ';
      }
      os << folly::sformat('   **** {} ({}) ==> {} [{}:{}]\n',
                           attr_name, type, attr_value,
                           attr_form, form);
      return true;
    }
  );
    
    #include 'hphp/util/embedded-data.h'
    
    /*
 * Unique identifier for this hhvm binary, determined at build-time. Unlike
 * compilerId(), this is computed based on the contents of the executable and
 * thus varies depending on the type of build. It cannot be overridden and
 * serves as an id for anything relying on an exact binary.
 */
folly::StringPiece buildId();