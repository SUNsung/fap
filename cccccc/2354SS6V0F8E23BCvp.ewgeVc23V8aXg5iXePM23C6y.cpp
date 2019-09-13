
        
        
    {    secp256k1_scalar_get_b32(brx, sigr);
    r = secp256k1_fe_set_b32(&fx, brx);
    (void)r;
    VERIFY_CHECK(r); /* brx comes from a scalar, so is less than the order; certainly less than p */
    if (recid & 2) {
        if (secp256k1_fe_cmp_var(&fx, &secp256k1_ecdsa_const_p_minus_order) >= 0) {
            return 0;
        }
        secp256k1_fe_add(&fx, &secp256k1_ecdsa_const_order_as_fe);
    }
    if (!secp256k1_ge_set_xo_var(&x, &fx, recid & 1)) {
        return 0;
    }
    secp256k1_gej_set_ge(&xj, &x);
    secp256k1_scalar_inverse_var(&rn, sigr);
    secp256k1_scalar_mul(&u1, &rn, message);
    secp256k1_scalar_negate(&u1, &u1);
    secp256k1_scalar_mul(&u2, &rn, sigs);
    secp256k1_ecmult(ctx, &qj, &xj, &u2, &u1);
    secp256k1_ge_set_gej_var(pubkey, &qj);
    return !secp256k1_gej_is_infinity(&qj);
}
    
      bool DeleteAnSSTFile() {
    std::vector<std::string> filenames;
    ASSERT_OK(env_->GetChildren(dbname_, &filenames));
    uint64_t number;
    FileType type;
    for (size_t i = 0; i < filenames.size(); i++) {
      if (ParseFileName(filenames[i], &number, &type) && type == kTableFile) {
        ASSERT_OK(env_->DeleteFile(TableFileName(dbname_, number)));
        return true;
      }
    }
    return false;
  }
    
    // Return the name of the sstable with the specified number
// in the db named by 'dbname'.  The result will be prefixed with
// 'dbname'.
extern std::string TableFileName(const std::string& dbname, uint64_t number);
    
    #include <string>
    
    template <typename Dtype>
string Solver<Dtype>::SnapshotToHDF5() {
  string model_filename = SnapshotFilename('.caffemodel.h5');
  LOG(INFO) << 'Snapshotting to HDF5 file ' << model_filename;
  net_->ToHDF5(model_filename, param_.snapshot_diff());
  return model_filename;
}
    
    private:
    // Helper function to clear out a secondary index that has been
    // marked as deleted and drop it at the end. To be run in a coroutine.
    void delayed_clear_and_drop_sindex(
            secondary_index_t sindex,
            auto_drainer_t::lock_t store_keepalive)
            THROWS_NOTHING;
    // Drops a secondary index. Assumes that the index has previously been cleared
    // through `clear_sindex_data()`.
    void drop_sindex(uuid_u sindex_id) THROWS_NOTHING;
    
                    bool sindex_exists = store.acquire_sindex_superblock_for_write(
                    name,
                    '',
                    super_block.get(),
                    &sindex_super_block,
                    &sindex_uuid);
                ASSERT_TRUE(sindex_exists);
    
    void _check_keys_are_present(store_t *store,
        sindex_name_t sindex_name) {
    ql::configured_limits_t limits;
    for (int i = 0; i < TOTAL_KEYS_TO_INSERT; ++i) {
        ql::grouped_t<ql::stream_t> groups =
            read_row_via_sindex(store, sindex_name, i * i);
        ASSERT_EQ(1, groups.size());
        // The order of `groups` doesn't matter because this is a small unit test.
        ql::stream_t *stream = &groups.begin()->second;
        ASSERT_TRUE(stream != nullptr);
        ASSERT_EQ(1ul, stream->substreams.size());
        ql::raw_stream_t *raw_stream = &stream->substreams.begin()->second.stream;
        ASSERT_EQ(1ul, raw_stream->size());
    }
    }
    
      // Instead of 1/0, we want to see true/false for bool values.
  Message& operator <<(bool b) {
    return *this << (b ? 'true' : 'false');
  }
    
    // To distinguish different instances of the pattern, (yes, you
// can instantiate it more then once) the first argument to the
// INSTANTIATE_TEST_CASE_P macro is a prefix that will be added to the
// actual test case name. Remember to pick unique prefixes for different
// instantiations. The tests from the instantiation above will have
// these names:
//
//    * InstantiationName/FooTest.DoesBlah/0 for 'meeny'
//    * InstantiationName/FooTest.DoesBlah/1 for 'miny'
//    * InstantiationName/FooTest.DoesBlah/2 for 'moe'
//    * InstantiationName/FooTest.HasBlahBlah/0 for 'meeny'
//    * InstantiationName/FooTest.HasBlahBlah/1 for 'miny'
//    * InstantiationName/FooTest.HasBlahBlah/2 for 'moe'
//
// You can use these names in --gtest_filter.
//
// This statement will instantiate all tests from FooTest again, each
// with parameter values 'cat' and 'dog':
    
    TYPED_TEST_P(FooTest, HasPropertyA) { ... }
    
      // Returns true if the death test passed; that is, the test process
  // exited during the test, its exit status matches a user-supplied
  // predicate, and its stderr output matches a user-supplied regular
  // expression.
  // The user-supplied predicate may be a macro expression rather
  // than a function pointer or functor, or else Wait and Passed could
  // be combined.
  virtual bool Passed(bool exit_status_ok) = 0;
    
      // Create the directory so that path exists. Returns true if successful or
  // if the directory already exists; returns false if unable to create the
  // directory for any reason, including if the parent directory does not
  // exist. Not named 'CreateDirectory' because that's a macro on Windows.
  bool CreateFolder() const;
    
        void ComputeCurrentValue() {
      if (!AtEnd())
        current_value_ = ParamType(*current1_, *current2_, *current3_,
            *current4_, *current5_, *current6_);
    }
    bool AtEnd() const {
      // We must report iterator past the end of the range when either of the
      // component iterators has reached the end of its range.
      return
          current1_ == end1_ ||
          current2_ == end2_ ||
          current3_ == end3_ ||
          current4_ == end4_ ||
          current5_ == end5_ ||
          current6_ == end6_;
    }
    
    #include 'cyber/timer/timer_task.h'
    
    Status PlanningBase::Init(const PlanningConfig& config) {
  PlanningContext::Instance()->Instance()->Init();
  TaskFactory::Init(config);
  return Status::OK();
}
    
    Status ControllerAgent::ComputeControlCommand(
    const localization::LocalizationEstimate *localization,
    const canbus::Chassis *chassis, const planning::ADCTrajectory *trajectory,
    control::ControlCommand *cmd) {
  for (auto &controller : controller_list_) {
    ADEBUG << 'controller:' << controller->Name() << ' processing ...';
    double start_timestamp = Clock::NowInSeconds();
    controller->ComputeControlCommand(localization, chassis, trajectory, cmd);
    double end_timestamp = Clock::NowInSeconds();
    const double time_diff_ms = (end_timestamp - start_timestamp) * 1000;
    }
    }
    
      DataProvider::InitOptions dp_init_options;
  dp_init_options.sensor_name = 'front_6mm';
    
    
    {
    {
    {void WriteFusionTracking(std::ofstream &fout, int frame_num,
                         const std::string &camera_name,
                         const std::vector<base::ObjectPtr> &tracked_object) {
  if (!fout.is_open()) {
    AERROR << 'Failed to write tracking!';
    return;
  }
  AINFO << 'Write track results: ' << frame_num;
  if (camera_name == 'front_12mm') {
    for (size_t i = 0; i < tracked_object.size(); ++i) {
      base::ObjectPtr ptr = tracked_object[i];
      char output[300];
      snprintf(output, sizeof(output),
               '%d %d %s -1 -1 %2.3f %4.3f %4.3f %4.3f %4.3f '
               '%2.6f %2.6f %2.6f %2.3f %2.3f %2.3f %2.3f %.3f '
               '%2.6f %2.6f %2.6f',
               frame_num, ptr->track_id,
               sub_type_string[static_cast<int>(ptr->sub_type)].c_str(),
               ptr->camera_supplement.alpha, ptr->camera_supplement.box.xmin,
               ptr->camera_supplement.box.ymin, ptr->camera_supplement.box.xmax,
               ptr->camera_supplement.box.ymax, ptr->size[2], ptr->size[1],
               ptr->size[0], ptr->center[0], ptr->center[1], ptr->center[2],
               ptr->theta, ptr->type_probs[static_cast<int>(ptr->type)],
               ptr->velocity[0], ptr->velocity[1], ptr->velocity[2]);
      fout << output << std::endl;
    }
  } else if (camera_name == 'front_6mm') {
    for (size_t i = 0; i < tracked_object.size(); ++i) {
      base::ObjectPtr ptr = tracked_object[i];
      char output[300];
      snprintf(output, sizeof(output),
               '%d %d %s -1 -1 %2.3f %4.3f %4.3f %4.3f %4.3f '
               '%2.6f %2.6f %2.6f %2.3f %2.3f %2.3f %2.3f %.3f '
               '%2.6f %2.6f %2.6f',
               frame_num, ptr->track_id,
               sub_type_string[static_cast<int>(ptr->sub_type)].c_str(),
               ptr->camera_supplement.alpha,
               ptr->camera_supplement.projected_box.xmin,
               ptr->camera_supplement.projected_box.ymin,
               ptr->camera_supplement.projected_box.xmax,
               ptr->camera_supplement.projected_box.ymax, ptr->size[2],
               ptr->size[1], ptr->size[0], ptr->center[0], ptr->center[1],
               ptr->center[2], ptr->theta,
               ptr->type_probs[static_cast<int>(ptr->type)], ptr->velocity[0],
               ptr->velocity[1], ptr->velocity[2]);
      fout << output << std::endl;
    }
  } else {
    AERROR << 'Unknown camera name: ' << camera_name;
  }
}
}  // namespace camera
}  // namespace perception
}  // namespace apollo

    
        for (const auto& op : merge_in.operand_list) {
      if (max.compare(op) < 0) {
        max = op;
      }
    }
    
      // Will be called while on the write thread before the write executes.  If
  // this function returns a non-OK status, the write will be aborted and this
  // status will be returned to the caller of DB::Write().
  virtual Status Callback(DB* db) = 0;
    
      // Need to refill more than one interval. Need to sleep longer. Check
  // whether expiration will hit
    
    class Env;
class WriteControllerToken;
    
      const Snapshot* snapshot = txn->GetSnapshot();
    
    #pragma once
    
      // Starts a new Transaction.
  //
  // Caller is responsible for deleting the returned transaction when no
  // longer needed.
  //
  // If old_txn is not null, BeginTransaction will reuse this Transaction
  // handle instead of allocating a new one.  This is an optimization to avoid
  // extra allocations when repeatedly creating transactions.
  virtual Transaction* BeginTransaction(
      const WriteOptions& write_options,
      const OptimisticTransactionOptions& txn_options =
          OptimisticTransactionOptions(),
      Transaction* old_txn = nullptr) = 0;
    
            /**
         * Not equal comparison operator.
         * @param point Point<T> to be compared.
         * @result Whether the instance satisfies the condition with respect to point.
         */
        inline bool operator!=(const Point<T>& point) const
        {
            return area() != point.area();
        }
    
    /*! \class Image1DBuffer
 * \brief Image interface for 1D buffer images.
 */
class Image1DBuffer : public Image
{
public:
    Image1DBuffer(
        const Context& context,
        cl_mem_flags flags,
        ImageFormat format,
        size_type width,
        const Buffer &buffer,
        cl_int* err = NULL)
    {
        cl_int error;
        cl_image_desc desc =
        {
            CL_MEM_OBJECT_IMAGE1D_BUFFER,
            width,
            0, 0, 0, 0, 0, 0, 0,
            buffer()
        };
        object_ = ::clCreateImage(
            context(), 
            flags, 
            &format, 
            &desc, 
            NULL, 
            &error);
    }
    }
    
        // Static methods
    template<typename T>
    Rectangle<T> recenter(const Rectangle<T>& rectangle, const T newWidth, const T newHeight)
    {
        try
        {
            Rectangle<T> result;
            const auto centerPoint = rectangle.center();
            result.x = centerPoint.x - T(newWidth / 2.f);
            result.y = centerPoint.y - T(newHeight / 2.f);
            result.width = newWidth;
            result.height = newHeight;
            return result;
        }
        catch (const std::exception& e)
        {
            error(e.what(), __LINE__, __FUNCTION__, __FILE__);
            return Rectangle<T>{};
        }
    }