
        
        #endif  // TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_INTERNAL_H_

    
      Safe_PyObjectPtr numpy_str = make_safe(MakePyString('numpy'));
  if (!numpy_str) {
    return false;
  }
  Safe_PyObjectPtr numpy = make_safe(PyImport_Import(numpy_str.get()));
  if (!numpy) {
    return false;
  }
    
    #include <functional>
    
    namespace tensorflow {
    }
    
    namespace stream_executor {
namespace host {
    }
    }
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2006 Scott Turner <scotty1024@mac.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
      void makeBox(double hDPI, double vDPI, int rotate,
	       GBool useMediaBox, GBool upsideDown,
	       double sliceX, double sliceY, double sliceW, double sliceH,
	       PDFRectangle *box, GBool *crop);
    
      // get alignment
  if (dict->lookup('Dm', &obj)->isName()) {
    const char *dm = obj.getName();
    
    if (strcmp('H', dm) == 0)
      alignment = transitionHorizontal;
    else if (strcmp('V', dm) == 0)
      alignment = transitionVertical;
  }
  obj.free();
    
      // Get direction
  PageTransitionDirection getDirection() { return direction; }
    
    Object *Parser::getObj(Object *obj, Guchar *fileKey,
		       CryptAlgorithm encAlgorithm, int keyLength,
		       int objNum, int objGen, std::set<int> *fetchOriginatorNums) {
  char *key;
  Stream *str;
  Object obj2;
  int num;
  DecryptStream *decrypt;
  GooString *s, *s2;
  int c;
    }
    
    //------------------------------------------------------------------------
// Parser
//------------------------------------------------------------------------
    
    #endif

    
    size_t StdinCacheLoader::init(GooString *dummy, CachedFile *cachedFile)
{
  size_t read, size = 0;
  char buf[CachedFileChunkSize];
    }
    
    #include 'StdinPDFDocBuilder.h'
#include 'CachedFile.h'
#include 'StdinCachedFile.h'
    
    Status WriteBatchBase::Merge(const SliceParts& key, const SliceParts& value) {
  std::string key_buf, value_buf;
  Slice key_slice(key, &key_buf);
  Slice value_slice(value, &value_buf);
    }
    
    class MyMerge : public rocksdb::MergeOperator {
 public:
  virtual bool FullMergeV2(const MergeOperationInput& merge_in,
                           MergeOperationOutput* merge_out) const override {
    merge_out->new_value.clear();
    if (merge_in.existing_value != nullptr) {
      merge_out->new_value.assign(merge_in.existing_value->data(),
                                  merge_in.existing_value->size());
    }
    for (const rocksdb::Slice& m : merge_in.operand_list) {
      fprintf(stderr, 'Merge(%s)\n', m.ToString().c_str());
      // the compaction filter filters out bad values
      assert(m.ToString() != 'bad');
      merge_out->new_value.assign(m.data(), m.size());
    }
    return true;
  }
    }
    
      // Control over blocks (user data is stored in a set of blocks, and
  // a block is the unit of reading from disk).
    
    /*
 * Class:     org_rocksdb_BackupableDBOptions
 * Method:    restoreRateLimit
 * Signature: (J)J
 */
jlong Java_org_rocksdb_BackupableDBOptions_restoreRateLimit(JNIEnv* /*env*/,
                                                            jobject /*jobj*/,
                                                            jlong jhandle) {
  auto* bopt = reinterpret_cast<rocksdb::BackupableDBOptions*>(jhandle);
  return bopt->restore_rate_limit;
}