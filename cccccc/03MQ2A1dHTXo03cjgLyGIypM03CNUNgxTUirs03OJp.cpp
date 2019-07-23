
        
        std::string CurrentFileName(const std::string& dbname) {
  return dbname + '/CURRENT';
}
    
    // Return the name of the lock file for the db named by
// 'dbname'.  The result will be prefixed with 'dbname'.
std::string LockFileName(const std::string& dbname);
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    
    {  edit.SetComparatorName('foo');
  edit.SetLogNumber(kBig + 100);
  edit.SetNextFile(kBig + 200);
  edit.SetLastSequence(kBig + 1000);
  TestEncodeDecode(edit);
}
    
      // Return the name of this policy.  Note that if the filter encoding
  // changes in an incompatible way, the name returned by this method
  // must be changed.  Otherwise, old incompatible filters may be
  // passed to methods of this type.
  virtual const char* Name() const = 0;
    
      const MetaInfo& Info() const override;
    
    
    {
    {void SparsePageWriter::Alloc(std::shared_ptr<SparsePage>* out_page) {
  CHECK(*out_page == nullptr);
  if (num_free_buffer_ != 0) {
    out_page->reset(new SparsePage());
    --num_free_buffer_;
  } else {
    CHECK(qrecycle_.Pop(out_page));
  }
}
}  // namespace data
}  // namespace xgboost
    
    TEST(SparsePageDMatrix, MetaInfo) {
  dmlc::TemporaryDirectory tempdir;
  const std::string tmp_file = tempdir.path + '/simple.libsvm';
  CreateSimpleTestData(tmp_file);
  xgboost::DMatrix * dmat = xgboost::DMatrix::Load(
    tmp_file + '#' + tmp_file + '.cache', false, false);
  std::cout << tmp_file << std::endl;
  EXPECT_TRUE(FileExists(tmp_file + '.cache'));
    }
    
    struct Monitor {
 private:
  struct Statistics {
    Timer timer;
    size_t count{0};
    uint64_t nvtx_id;
  };
  std::string label = '';
  std::map<std::string, Statistics> statistics_map;
  Timer self_timer;
    }
    
      GpuIdType const n_devices_visible = AllVisible().Size();
  CHECK_LE(n_gpus, n_devices_visible);
  if (n_devices_visible == 0 || n_gpus == 0 || n_rows == 0) {
    LOG(DEBUG) << 'Runing on CPU.';
    return Empty();
  }
    
    struct SquaredLogError {
  XGBOOST_DEVICE static bst_float PredTransform(bst_float x) { return x; }
  XGBOOST_DEVICE static bool CheckLabel(bst_float label) {
    return label > -1;
  }
  XGBOOST_DEVICE static bst_float FirstOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);  // ensure correct value for log1p
    return (std::log1p(predt) - std::log1p(label)) / (predt + 1);
  }
  XGBOOST_DEVICE static bst_float SecondOrderGradient(bst_float predt, bst_float label) {
    predt = fmaxf(predt, -1 + 1e-6);
    float res = (-std::log1p(predt) + std::log1p(label) + 1) /
                std::pow(predt + 1, 2);
    res = fmaxf(res, 1e-6f);
    return res;
  }
  static bst_float ProbToMargin(bst_float base_score) { return base_score; }
  static const char* LabelErrorMsg() {
    return 'label must be greater than -1 for rmsle so that log(label + 1) can be valid.';
  }
  static const char* DefaultEvalMetric() { return 'rmsle'; }
};
    
      // Test the metadata that was parsed
  EXPECT_EQ(dmat->Info().num_row_, 2);
  EXPECT_EQ(dmat->Info().num_col_, 5);
  EXPECT_EQ(dmat->Info().num_nonzero_, 6);
  EXPECT_EQ(dmat->Info().labels_.Size(), dmat->Info().num_row_);
    
    // Finally register the objective function.
// After it succeeds you can try use xgboost with objective=mylogistic
XGBOOST_REGISTER_OBJECTIVE(MyLogistic, 'mylogistic')
.describe('User defined logistic regression plugin')
.set_body([]() { return new MyLogistic(); });
    
    /*
 * Checks whether the given type structure is a valid resolved type structure,
 * i.e. whether it contains all required fields and that it does not require
 * resolution
 */
bool isValidResolvedTypeStructure(const Array& arr);
bool isValidResolvedTypeStructureList(const Array& arr, bool isShape = false);
    
      auto const get_var = [varName] (const CmdVariable& cmd) {
    assertx(cmd.m_variables.size() == 1);
    assertx(cmd.m_variables.exists(varName, true /* isKey */));
    assertx(cmd.m_variables[varName].isString());
    return cmd.m_variables[varName].toString();
  };
    
        case KindOfPersistentVec:
    case KindOfVec:
      return VariableValue{format('vec[{}]', variable.toArray().size()).str()};
    case KindOfPersistentArray:
    case KindOfArray: {
      return VariableValue{format('array[{}]', variable.toArray().size()).str()};
    }
    
      /*
   * Set the numArgs component of m_numArgsAndFlags to `numArgs'.
   *
   * The init* flavor zeroes the flags component, whereas the set* flavor
   * preserves flags.
   */
  void initNumArgs(uint32_t numArgs);
  void setNumArgs(uint32_t numArgs);
    
    void SparseHeap::reset() {
  TRACE(1, 'heap-id %lu SparseHeap-reset: pooled_slabs %lu bigs %lu\n',
        tl_heap_id, m_pooled_slabs.size(), m_bigs.countBlocks());
#if !FOLLY_SANITIZE
  // trash fill is redundant with ASAN
  if (RuntimeOption::EvalTrashFillOnRequestExit) {
    m_bigs.iterate([&](HeapObject* h, size_t size) {
      memset(h, kSmallFreeFill, size);
    });
  }
#endif
  auto const do_free =
    [this] (void* ptr, size_t size) {
      if (RuntimeOption::EvalBigAllocUseLocalArena) {
        local_sized_free(ptr, size);
      } else {
#ifdef USE_JEMALLOC
#if JEMALLOC_VERSION_MAJOR >= 4
        sdallocx(ptr, size, 0);
#else
        dallocx(ptr, 0);
#endif
#else
        free(ptr);
#endif
      }
  };
  TaggedSlabList pooledSlabs;
  void* pooledSlabTail = nullptr;
  for (auto& slab : m_pooled_slabs) {
    if (!pooledSlabTail) pooledSlabTail = slab.ptr;
    pooledSlabs.push_front<true>(slab.ptr, slab.version);
    m_bigs.erase(slab.ptr);
  }
  if (pooledSlabTail) {
    m_slabManager->merge(pooledSlabs.head(), pooledSlabTail);
  }
  m_pooled_slabs.clear();
  m_hugeBytes = 0;
  m_bigs.iterate([&](HeapObject* h, size_t size) {
    do_free(h, size);
  });
  m_bigs.clear();
  m_slab_range = {nullptr, 0};
}
    
                u.d = value.toDouble();
            uint64_t bits;
            if (version >= VERSION_DOUBLE_BE) {
              bits = htonll(u.i);
            } else {
              bits = htolell(u.i);
            }
    
    inline void set_with_intish_key_cast(
  DArrayInit& arr,
  const Variant& key,
  const Variant& value
) {
  if (key.isString()) {
    int64_t intish_key;
    if (key.getStringData()->isStrictlyInteger(intish_key)) {
      arr.set(intish_key, value);
    } else {
      arr.set(key.toString(), value);
    }
  } else if (key.isInteger()) {
    arr.set(key.toInt64(), value);
  } else {
    thrift_error(
        'Unable to deserialize non int/string array keys',
        ERR_INVALID_DATA);
  }
}
    
    
    {  // Convert to an lea when popping to a reg without any uses.
  return simplify_impl(env, b, i, [&] (Vout& v) {
    v << lea{reg::rsp[8], reg::rsp};
    return 1;
  });
}
    
      /* see if we encountered an error */
  if (err && err != REG_NOMATCH) {
    php_reg_eprint(err, &re);
    regfree(&re);
    return false;
  }
    
    /* Sets addr by hostname or by ip in string form (AF_INET or AF_INET6,
 * depending on the socket) */
int php_set_inet46_addr(php_sockaddr_storage *ss, socklen_t *ss_len, char *string, Socket *php_sock) /* {{{ */
{
	if (php_sock->sock_type == AF_INET) {
		struct sockaddr_in t = {0};
		if (php_set_inet_addr(&t, string, php_sock)) {
			memcpy(ss, &t, sizeof t);
			ss->ss_family = AF_INET;
			*ss_len = sizeof(t);
			return 1;
		}
	}
	else if (php_sock->sock_type == AF_INET6) {
		struct sockaddr_in6 t = {0};
		if (php_set_inet6_addr(&t, string, php_sock)) {
			memcpy(ss, &t, sizeof t);
			ss->ss_family = AF_INET6;
			*ss_len = sizeof(t);
			return 1;
		}
	}
	else {
		php_error_docref(NULL, E_WARNING,
			'IP address used in the context of an unexpected type of socket');
	}
	return 0;
}

    }
    }
    }
    
        zend_string *opened_path;
    if (!file_handle.opened_path)
    {
        file_handle.opened_path = zend_string_init(file.c_str(), file.length(), 0);
    }
    opened_path = zend_string_copy(file_handle.opened_path);
    zval dummy;
    
        g_receive_count++;
    
    
    {    SwooleG.main_reactor->once = false;
}
    
    TEST(coroutine_socket, connect_timeout)
{
    coro_test([](void *arg)
    {
        Socket sock(SW_SOCK_TCP);
        sock.set_timeout(0.5);
        bool retval = sock.connect('192.0.0.1', 9801);
        ASSERT_EQ(retval, false);
        ASSERT_EQ(sock.errCode, ETIMEDOUT);
    });
}
    
    Context::Context(size_t stack_size, coroutine_func_t fn, void* private_data) :
        fn_(fn), stack_size_(stack_size), private_data_(private_data)
{
    if (-1 == getcontext(&ctx_))
    {
        swoole_throw_error(SW_ERROR_CO_GETCONTEXT_FAILED);
        return;
    }
    }
    
    long swoole_timer_after(long ms, swTimerCallback callback, void *private_data)
{
    return swoole_timer_add(ms, SW_FALSE, callback, private_data);
}
    
        while (offset < stack_size_)
    {
        if (memcmp((char*) sp - offset + (sizeof(MAGIC_STRING) - 1), SW_STRL(MAGIC_STRING)) != 0)
        {
            retval = offset * 2;
        }
        offset *= 2;
    }
    
    
    {
    {        ret = chan.push(&i);
        ASSERT_TRUE(ret);
        ASSERT_EQ(*(int *) chan.pop(), i);
    });
}
    
        virtual void onStart() = 0;
    virtual void onShutdown() = 0;
    virtual void onWorkerStart(int worker_id) = 0;
    virtual void onWorkerStop(int worker_id) = 0;
    virtual void onReceive(int fd, const DataBuffer &data) = 0;
    virtual void onConnect(int fd) = 0;
    virtual void onClose(int fd) = 0;
    virtual void onPacket(const DataBuffer &, ClientInfo &) = 0;
    virtual void onPipeMessage(int src_worker_id, const DataBuffer &) = 0;
    virtual void onTask(int, int, const DataBuffer &) = 0;
    virtual void onFinish(int, const DataBuffer &) = 0;
    
        int ret1 = (int) (long) swHashMap_find(hm, (char *) SW_STRL('hello'));
    ASSERT_GT(ret1, 0);
    
        for (i = 0; i < READ_THREAD_N; i++)
    {
        int ret = swPipeUnsock_create(&threads[i].pipe, 1, SOCK_DGRAM);
        ASSERT_EQ(ret, 0);
        threads[i].thread = new std::thread(thread_read, i);
    }