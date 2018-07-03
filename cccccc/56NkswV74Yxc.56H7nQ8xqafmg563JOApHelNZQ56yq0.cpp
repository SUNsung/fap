
        
        Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
    Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an 'AS IS' BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
    
        http://www.apache.org/licenses/LICENSE-2.0
    
    void MPIUtils::InitMPI() {
  // Initialize the MPI environment if that hasn't been done
  int flag = 0;
  MPI_CHECK(MPI_Initialized(&flag));
  if (!flag) {
    int proc_id = 0, number_of_procs = 1, len = -1;
    char my_host_name[max_worker_name_length];
    // MPI_CHECK(MPI_Init_thread(0, 0, MPI_THREAD_MULTIPLE, &flag));
    MPI_CHECK(MPI_Init(0, 0));
    MPI_CHECK(MPI_Comm_rank(MPI_COMM_WORLD, &proc_id));
    MPI_CHECK(MPI_Comm_size(MPI_COMM_WORLD, &number_of_procs));
    MPI_CHECK(MPI_Get_processor_name(my_host_name, &len));
    fprintf(stderr,
            'MPI Environment initialized. Process id: %d Total processes: %d '
            '|| Hostname: %s \n',
            proc_id, number_of_procs, my_host_name);
  }
}
    
    TEST(AccuracyUtilsTest, CalculateAccuracyStats) {
  StreamingAccuracyStats stats;
  CalculateAccuracyStats({{'a', 1000}, {'b', 9000}},
                         {{'a', 1200}, {'b', 5000}, {'a', 8700}}, 10000, 500,
                         &stats);
  EXPECT_EQ(2, stats.how_many_ground_truth_words);
  EXPECT_EQ(2, stats.how_many_ground_truth_matched);
  EXPECT_EQ(1, stats.how_many_false_positives);
  EXPECT_EQ(1, stats.how_many_correct_words);
  EXPECT_EQ(1, stats.how_many_wrong_words);
}
    
      for (auto alphabet_size : test_cases) {
    for (int i = 0; i < repetitions; i++) {
      std::vector<int> input(num_elements);
      std::generate(input.begin(), input.end(),
        [=]() { return rand() % alphabet_size; });
      CompressedBufferWriter cbw(alphabet_size);
    }
    }
    
    namespace xgboost {
    }
    
    namespace xgboost {
/*!
 * \brief interface of tree update module, that performs update of a tree.
 */
class TreeUpdater {
 public:
  /*! \brief virtual destructor */
  virtual ~TreeUpdater() = default;
  /*!
   * \brief Initialize the updater with given arguments.
   * \param args arguments to the objective function.
   */
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& args) = 0;
  /*!
   * \brief perform update to the tree models
   * \param gpair the gradient pair statistics of the data
   * \param data The data matrix passed to the updater.
   * \param trees references the trees to be updated, updater will change the content of trees
   *   note: all the trees in the vector are updated, with the same statistics,
   *         but maybe different random seeds, usually one tree is passed in at a time,
   *         there can be multiple trees when we train random forest style model
   */
  virtual void Update(HostDeviceVector<GradientPair>* gpair,
                      DMatrix* data,
                      const std::vector<RegTree*>& trees) = 0;
    }
    }
    
        c.type = type_[fid];
    const size_t block_offset = boundary_[fid].index_begin / packing_factor_;
    const size_t elem_offset = boundary_[fid].index_begin % packing_factor_;
    c.index = reinterpret_cast<const T*>(&index_[block_offset]) + elem_offset;
    c.index_base = index_base_[fid];
    c.row_ind = &row_ind_[boundary_[fid].row_ind_begin];
    c.len = boundary_[fid].index_end - boundary_[fid].index_begin;
    
    #include <exception>
#include 'comm/xlogger/xlogger.h'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    
#define DEFINE_HAS_MEMBER_WITH_TYPE(member_name, member_type) \
    template <typename T>\
    class has_##member_name {\
      private:\
        struct yes_type { char x[1]; };\
        struct no_type { char x[2]; };\
        template <member_type (T::*)> struct tester;\
        template <typename U> static yes_type test(tester<&U::member_name>*);\
        template <typename U> static no_type test(...);\
      public:\
        static const bool value = (sizeof(test<T>(0)) == sizeof(yes_type));\
    };
    
    
#endif /* SCOP_JENV_H_ */

    
    
    {  private:
    JNIEnv* env_;
    jstring jstr_;
    const char* char_;
    bool jstr2char_;
};
    
    #endif //INC_ASTRefCount_hpp__

    
    
    {protected:
	unsigned char* buffer;	///< the buffer with data
	unsigned char* ptr;		///< position ptr into the buffer
	unsigned char* end;		///< end sentry for buffer
	bool delete_buffer;		///< flag signifying if we have to delete the buffer
};
    
    	virtual RefToken getTokenObject() const
	{
		return _returnToken;
	}
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    
    {	IOException( ANTLR_USE_NAMESPACE(std)exception& e )
		: ANTLRException(e.what())
	{
	}
	IOException( const ANTLR_USE_NAMESPACE(std)string& mesg )
		: ANTLRException(mesg)
	{
	}
	virtual ~IOException() throw()
	{
	}
};
    
    #ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif
    }
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/NoViableAltForCharException.hpp#2 $
 */