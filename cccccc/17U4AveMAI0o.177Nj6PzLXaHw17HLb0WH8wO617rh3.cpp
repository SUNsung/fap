
        
        
    {        // Note: We can close the handles to the PTY-end of the pipes here
        // because the handles are dup'ed into the ConHost and will be released
        // when the ConPTY is destroyed.
        if (INVALID_HANDLE_VALUE != hPipePTYOut) CloseHandle(hPipePTYOut);
        if (INVALID_HANDLE_VALUE != hPipePTYIn) CloseHandle(hPipePTYIn);
    }
    
        base::win::ShortcutProperties props;
    base::string16 appID;
    if (content::Shell::GetPackage()->root()->GetString('app-id', &appID) == false)
      content::Shell::GetPackage()->root()->GetString(switches::kmName, &appID);
    const std::wstring appName = base::UTF8ToWide(content::Shell::GetPackage()->GetName());
    props.set_app_id(appID);
    
    #include <string.h>
    
    void NwAppQuitFunction::DoJob(ExtensionService* service, std::string extension_id) {
  if (base::FeatureList::IsEnabled(::features::kNWNewWin)) {
    chrome::CloseAllBrowsersAndQuit(true);
    return;
  }
  base::ThreadTaskRunnerHandle::Get().get()->PostTask(
                                                      FROM_HERE,
                                                      base::Bind(&ExtensionService::TerminateExtension,
                                                                   service->AsWeakPtr(),
                                                                   extension_id));
}
    
    #include <vector>
    
    class NwMenuGetNSStringFWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringFWithFixupFunction() {}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringFWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringFWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringFWithFixupFunction);
};
    
    bool NwObjCallObjectMethodSyncFunction::RunNWSync(base::ListValue* response, std::string* error) {
  base::ListValue* arguments = nullptr;
  int id = 0;
  std::string type, method;
  EXTENSION_FUNCTION_VALIDATE(args_->GetInteger(0, &id));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(1, &type));
  EXTENSION_FUNCTION_VALIDATE(args_->GetString(2, &method));
  EXTENSION_FUNCTION_VALIDATE(args_->GetList(3, &arguments));
    }
    
    void NwDesktopCaptureMonitor::OnSourceRemoved(DesktopMediaList* list, int index) {
    std::unique_ptr<base::ListValue> args = nwapi::nw__screen::OnSourceRemoved::Create(index);
    DispatchEvent(
      events::HistogramValue::UNKNOWN, 
      nwapi::nw__screen::OnSourceRemoved::kEventName,
      std::move(args));
  }
    
      // implement nw.Screen.startMonitor()
  class NwScreenStartMonitorFunction : public NWSyncExtensionFunction {
  public:
    NwScreenStartMonitorFunction();
    bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    	THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/
    
    	if (videoFrame)
		videoFrame->bufferSize = 0;
	if (audioFrame)
		audioFrame->bufferSize = 0;
    
    /***** residue backends *********************************************/
    
    /**
 * Fill in a mbed TLS certificate, based on the given PKCS11 helper certificate.
 *
 * \param cert          X.509 certificate to fill
 * \param pkcs11h_cert  PKCS #11 helper certificate
 *
 * \return              0 on success.
 */
int mbedtls_pkcs11_x509_cert_bind( mbedtls_x509_crt *cert, pkcs11h_certificate_t pkcs11h_cert );
    
    /**
 * \brief          Compute RSA private exponent from
 *                 prime moduli and public key.
 *
 * \note           This is a 'static' helper function not operating on
 *                 an RSA context. Alternative implementations need not
 *                 overwrite it.
 *
 * \param P        First prime factor of RSA modulus
 * \param Q        Second prime factor of RSA modulus
 * \param E        RSA public exponent
 * \param D        Pointer to MPI holding the private exponent on success.
 *
 * \return
 *                 - 0 if successful. In this case, D is set to a simultaneous
 *                   modular inverse of E modulo both P-1 and Q-1.
 *                 - A non-zero error code otherwise.
 *
 * \note           This function does not check whether P and Q are primes.
 *
 */
int mbedtls_rsa_deduce_private_exponent( mbedtls_mpi const *P,
                                         mbedtls_mpi const *Q,
                                         mbedtls_mpi const *E,
                                         mbedtls_mpi *D );
    
    
    {  TestServiceImpl echo_test_service_;
  HealthCheckServiceImpl health_check_service_impl_;
  std::unique_ptr<Health::Stub> hc_stub_;
  std::unique_ptr<ServerCompletionQueue> cq_;
  std::unique_ptr<Server> server_;
  std::ostringstream server_address_;
  std::thread cq_thread_;
};
    
      void ResetStub() {
    string target = 'dns:localhost:' + to_string(port_);
    channel_ = grpc::CreateChannel(target, InsecureChannelCredentials());
    stub_ = grpc::testing::EchoTestService::NewStub(channel_);
  }
    
    
    {
    {        ::set_secondary_index(sindex_block, name, sindex);
        return make_optional(sindex.id);
    }
}
    
    class datum_replacer_t : public btree_batched_replacer_t {
public:
    explicit datum_replacer_t(ql::env_t *_env,
                              const batched_insert_t &bi)
        : env(_env),
          datums(&bi.inserts),
          conflict_behavior(bi.conflict_behavior),
          pkey(bi.pkey),
          return_changes(bi.return_changes) {
        if (bi.conflict_func.has_value()) {
            conflict_func.set(bi.conflict_func->compile_wire_func());
        }
        if (bi.write_hook.has_value()) {
            write_hook = bi.write_hook->compile_wire_func();
        }
    }
    ql::datum_t replace(const ql::datum_t &d,
                        size_t index) const {
        guarantee(index < datums->size());
        ql::datum_t newd = (*datums)[index];
        ql::datum_t res = resolve_insert_conflict(env,
                                             pkey,
                                             d,
                                             newd,
                                             conflict_behavior,
                                             conflict_func);
        const ql::datum_t &write_timestamp = env->get_deterministic_time();
        r_sanity_check(write_timestamp.has());
        res = apply_write_hook(datum_string_t(pkey), d, res, write_timestamp,
                               write_hook);
        return res;
    }
    return_changes_t should_return_changes() const { return return_changes; }
private:
    ql::env_t *env;
    }
    
    
    {
    {
    {
    {                ASSERT_TRUE(it->first == jt->first);
                ASSERT_TRUE(it->second.superblock == jt->second.superblock &&
                    it->second.opaque_definition == jt->second.opaque_definition);
                ++it;
                ++jt;
            }
        }
        txn->commit();
    }
}
    
    # if !GTEST_OS_WINDOWS
// Tests that an exit code describes an exit due to termination by a
// given signal.
class GTEST_API_ KilledBySignal {
 public:
  explicit KilledBySignal(int signum);
  bool operator()(int exit_status) const;
 private:
  const int signum_;
};
# endif  // !GTEST_OS_WINDOWS
    
    template <typename T1, typename T2, typename T3, typename T4, typename T5,
    typename T6, typename T7, typename T8, typename T9, typename T10,
    typename T11, typename T12, typename T13, typename T14, typename T15,
    typename T16, typename T17, typename T18, typename T19, typename T20,
    typename T21, typename T22, typename T23, typename T24, typename T25,
    typename T26, typename T27, typename T28, typename T29>
internal::ValueArray29<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13,
    T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25, T26, T27, T28,
    T29> Values(T1 v1, T2 v2, T3 v3, T4 v4, T5 v5, T6 v6, T7 v7, T8 v8, T9 v9,
    T10 v10, T11 v11, T12 v12, T13 v13, T14 v14, T15 v15, T16 v16, T17 v17,
    T18 v18, T19 v19, T20 v20, T21 v21, T22 v22, T23 v23, T24 v24, T25 v25,
    T26 v26, T27 v27, T28 v28, T29 v29) {
  return internal::ValueArray29<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11,
      T12, T13, T14, T15, T16, T17, T18, T19, T20, T21, T22, T23, T24, T25,
      T26, T27, T28, T29>(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12,
      v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26,
      v27, v28, v29);
}
    
    // First, define a fixture class template.  It should be parameterized
// by a type.  Remember to derive it from testing::Test.
template <typename T>
class FooTest : public testing::Test {
 public:
  ...
  typedef std::list<T> List;
  static T shared_;
  T value_;
};
    
      // Compares two wide C strings.  Returns true iff they have the same
  // content.
  //
  // Unlike wcscmp(), this function can handle NULL argument(s).  A
  // NULL C string is considered different to any non-NULL C string,
  // including the empty string.
  static bool WideCStringEquals(const wchar_t* lhs, const wchar_t* rhs);
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10>
struct Templates10 {
  typedef TemplateSel<T1> Head;
  typedef Templates9<T2, T3, T4, T5, T6, T7, T8, T9, T10> Tail;
};
    
      for (QAbstractAxis *axis : axes) {
    if (axis->type() == QAbstractAxis::AxisTypeDateTime) {
      ax = qobject_cast<QDateTimeAxis *>(axis);
      return ax;
    }
  }
    
      if (m_operation->isRunning()) {
    return false;
  }
    
    
    {
    { private:
  QSharedPointer<AbstractOperation> m_operation;
  QSharedPointer<ConnectionsModel> m_model;
  QSharedPointer<QPython> m_python;
};
}  // namespace BulkOperations

    
          switch (ret) {
        case Z_NEED_DICT:
          ret = Z_DATA_ERROR;
        case Z_DATA_ERROR:
        case Z_MEM_ERROR:
        case Z_STREAM_ERROR:
          inflateEnd(&strm);
          return QByteArray();
      }
    
    void ValueEditor::EmbeddedFormattersManager::decode(
    const QString &formatterName, const QByteArray &data, QJSValue jsCallback) {
  m_python->call('formatters.decode', QVariantList{formatterName, data},
                 jsCallback);
}
    
      QJsonObject readJsonFromExternalProcess(const QStringList& cmd,
                                          const QByteArray& processInput,
                                          const QString& wd);
    
    void ConnectionsTree::TreeItem::handleEvent(QString event) {
  if (!eventHandlers().contains(event)) return;
    }
    
     private:
  // There are two store buffers. If one store buffer fills up, the main thread
  // publishes the top pointer of the store buffer that needs processing in its
  // global lazy_top_ field. After that it start the concurrent processing
  // thread. The concurrent processing thread uses the pointer in lazy_top_.
  // It will grab the given mutex and transfer its entries to the remembered
  // set. If the concurrent thread does not make progress, the main thread will
  // perform the work.
  // Important: there is an ordering constrained. The store buffer with the
  // older entries has to be processed first.
  class Task : public CancelableTask {
   public:
    Task(Isolate* isolate, StoreBuffer* store_buffer)
        : CancelableTask(isolate),
          store_buffer_(store_buffer),
          tracer_(isolate->heap()->tracer()) {}
    ~Task() override = default;
    }
    
    
    {  return min + heap_.isolate()->fuzzer_rng()->NextInt(max - min + 1);
}
    
    #endif  // V8_HEAP_STRESS_SCAVENGE_OBSERVER_H_

    
      if (FLAG_concurrent_sweeping && iterability_task_started_) {
    if (heap_->isolate()->cancelable_task_manager()->TryAbort(
            iterability_task_id_) != TryAbortResult::kTaskAborted) {
      iterability_task_semaphore_.Wait();
    }
    iterability_task_started_ = false;
  }
    
      // Temporary filters old space sweeping lists. Requires the concurrent
  // sweeper to be paused. Allows for pages to be added to the sweeper while
  // in this scope. Note that the original list of sweeping pages is restored
  // after exiting this scope.
  class FilterSweepingPagesScope final {
   public:
    explicit FilterSweepingPagesScope(
        Sweeper* sweeper, const PauseOrCompleteScope& pause_or_complete_scope);
    ~FilterSweepingPagesScope();
    }
    
     protected:
  void emit_sse_operand(XMMRegister reg, Operand adr);
  void emit_sse_operand(XMMRegister dst, XMMRegister src);
  void emit_sse_operand(Register dst, XMMRegister src);
  void emit_sse_operand(XMMRegister dst, Register src);
    
      // EntryFrame is used by JSEntry, JSConstructEntry and JSRunMicrotasksEntry.
  // All of them take |root_register_value| as the first parameter.
  static constexpr int kRootRegisterValueOffset = +2 * kSystemPointerSize;
    
    // -----------------------------------------------------------------------------
// Static helper functions.
    
    #define GENERAL_REGISTERS(V) \
  V(eax)                     \
  V(ecx)                     \
  V(edx)                     \
  V(ebx)                     \
  V(esp)                     \
  V(ebp)                     \
  V(esi)                     \
  V(edi)
    
    #define SSSE3_INSTRUCTION_LIST(V) \
  V(phaddd, 66, 0F, 38, 02)       \
  V(phaddw, 66, 0F, 38, 01)       \
  V(pshufb, 66, 0F, 38, 00)       \
  V(psignb, 66, 0F, 38, 08)       \
  V(psignw, 66, 0F, 38, 09)       \
  V(psignd, 66, 0F, 38, 0A)
    
          BIND(&lhs_is_bigint);
      {
        GotoIf(TaggedIsSmi(rhs), &call_with_any_feedback);
        Branch(IsBigInt(rhs), &bigint, &call_with_any_feedback);
      }