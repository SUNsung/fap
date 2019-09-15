
        
        
    {}  // namespace caffe
    
    template <typename Dtype>
void Solver<Dtype>::InitTrainNet() {
  const int num_train_nets = param_.has_net() + param_.has_net_param() +
      param_.has_train_net() + param_.has_train_net_param();
  const string field_names = 'net, net_param, train_net, train_net_param';
  CHECK_GE(num_train_nets, 1) << 'SolverParameter must specify a train net '
      << 'using one of these fields: ' << field_names;
  CHECK_LE(num_train_nets, 1) << 'SolverParameter must not contain more than '
      << 'one of these fields specifying a train_net: ' << field_names;
  NetParameter net_param;
  if (param_.has_train_net_param()) {
    LOG_IF(INFO, Caffe::root_solver())
        << 'Creating training net specified in train_net_param.';
    net_param.CopyFrom(param_.train_net_param());
  } else if (param_.has_train_net()) {
    LOG_IF(INFO, Caffe::root_solver())
        << 'Creating training net from train_net file: ' << param_.train_net();
    ReadNetParamsFromTextFileOrDie(param_.train_net(), &net_param);
  }
  if (param_.has_net_param()) {
    LOG_IF(INFO, Caffe::root_solver())
        << 'Creating training net specified in net_param.';
    net_param.CopyFrom(param_.net_param());
  }
  if (param_.has_net()) {
    LOG_IF(INFO, Caffe::root_solver())
        << 'Creating training net from net file: ' << param_.net();
    ReadNetParamsFromTextFileOrDie(param_.net(), &net_param);
  }
  // Set the correct NetState.  We start with the solver defaults (lowest
  // precedence); then, merge in any NetState specified by the net_param itself;
  // finally, merge in any NetState specified by the train_state (highest
  // precedence).
  NetState net_state;
  net_state.set_phase(TRAIN);
  net_state.MergeFrom(net_param.state());
  net_state.MergeFrom(param_.train_state());
  net_param.mutable_state()->CopyFrom(net_state);
  net_.reset(new Net<Dtype>(net_param));
  for (int w_idx = 0; w_idx < param_.weights_size(); ++w_idx) {
    LoadNetWeights(net_, param_.weights(w_idx));
  }
}
    
    int main(int argc, char** argv) {
#ifndef GFLAGS_GFLAGS_H_
  namespace gflags = google;
#endif
    }
    
    int VPXDecoder::Image::getWidth(int plane) const
{
	if (!plane)
		return w;
	return ceilRshift(w, chromaShiftW);
}
int VPXDecoder::Image::getHeight(int plane) const
{
	if (!plane)
		return h;
	return ceilRshift(h, chromaShiftH);
}
    
    #define todB_nn(x) todB(x)
    
    
#else
/* No-op version that performs no synchronization. *_rtcd() is idempotent,
 * so as long as your platform provides atomic loads/stores of pointers
 * no synchronization is strictly necessary.
 */
    
    
    {    // out_of_range.404
    try
    {
        // try to use a JSON pointer that cannot be resolved
        json::const_reference ref = j.at('/number/foo'_json_pointer);
    }
    catch (json::out_of_range& e)
    {
        std::cout << e.what() << '\n';
    }
}

    
    int main()
{
    // create JSON values
    json object = {{'one', 1}, {'two', 2}};
    json null;
    }
    
    TEST_F(CarverTests, test_compression_decompression) {
  auto const test_data_file = getWorkingDir() / 'test.data';
  writeTextFile(test_data_file, R'raw_text(
2TItVMSvAY8OFlbYnx1O1NSsuehfNhNiV4Qw4IPP6exA47HVzAlEXZI3blanlAd2
JSxCUr+3boxWMwsgW2jJPzypSKvfXB9EDbFKiDjVueniBfiAepwta57pZ9tQDnJA
uRioApcqYSWL14OJrnPQFHel5FpXylmVdIkiz()cT82JsOPZmh56vDn62Kk/mU7V
RltGAYEpKmi8e71fuB8d/S6Lau{}AmL1153X7E+4d1G1UfiQa7Q02uVjxLLE5FEj
JTDjVqIQNhi50Pt4J4RVopYzy1AZGwPHLhwFVIPH0s/LmzVW+xbT8/V2UMSzK4XB
oqADd9Ckcdtplx3k7bcLU[U04j8WWUtUccmB+4e2KS]i3x7WDKviPY/sWy9xFapv
)raw_text');
  {
    auto s = osquery::compress(test_data_file,
                               getWorkingDir() / fs::path('test.zst'));
    ASSERT_TRUE(s.ok()) << s.what();
  }
  {
    auto s =
        osquery::decompress(getWorkingDir() / fs::path('test.zst'),
                            getWorkingDir() / fs::path('test.data.extract'));
    ASSERT_TRUE(s.ok()) << s.what();
  }
    }
    
    TEST_F(PacksTests, test_schedule) {
  Pack fpack('discovery_pack', getPackWithDiscovery().doc());
  // Expect a single query in the schedule since one query has an explicit
  // invalid/fake platform requirement.
  EXPECT_EQ(fpack.getSchedule().size(), 1U);
}
    
    void Plugin::setName(const std::string& name) {
  if (!name_.empty() && name != name_) {
    std::string error = 'Cannot rename plugin ' + name_ + ' to ' + name;
    throw std::runtime_error(error);
  }
    }
    
      /// Use the SQL implementation to parse a query string and return details
  /// (name, type) about the columns.
  virtual Status getQueryColumns(const std::string& query,
                                 TableColumns& columns) const = 0;
    
        ret = swSocket_unix_sendto(fd1,sock2_path,test_data,strlen(test_data));
    ASSERT_GT(ret, 0);
    
    
    {    redisAsyncCommand(m_ctx, NULL, NULL, 'SET key %s', m_value);
    redisAsyncCommand(m_ctx, getCallback, this, 'GET key');
}
    
    bool swoole_mime_type_delete(const char *suffix, const char *mime_type)
{
    if (mime_map.find(suffix) == mime_map.end())
    {
        return false;
    }
    else
    {
        mime_map.erase(string(suffix));
        return true;
    }
}
    
    
    {    if (p < data + header.length)
    {
        // 1              character set
        charset = *p;
        p += 1;
        // 2              status flags
        memcpy(&status_flags, p, 2);
        p += 2;
        // 2              capability flags (upper 2 bytes)
        memcpy(((char *) (&capability_flags) + 2), p, 2);
        p += 2;
        // 1              auth plugin data length
        auth_plugin_data_length = (uint8_t) *p;
        p += 1;
        // x              reserved
        memcpy(&reserved, p, sizeof(reserved));
        p += sizeof(reserved);
        if (capability_flags & SW_MYSQL_CLIENT_SECURE_CONNECTION)
        {
            uint8_t len = SW_MAX(13, auth_plugin_data_length - 8);
            memcpy(auth_plugin_data + 8, p, len);
            p += len;
        }
        if (capability_flags & SW_MYSQL_CLIENT_PLUGIN_AUTH)
        {
            auth_plugin_name = std::string(p, strlen(p));
            swTraceLog(SW_TRACE_MYSQL_CLIENT, 'use %s auth plugin', auth_plugin_name.c_str());
        }
    }
    swTraceLog(
        SW_TRACE_MYSQL_CLIENT, 'Server protocol=%d, version=%s, connection_id=%d, capabilites=0x%08x, status=%u, auth_plugin_name=%s, auth_plugin_data=L%u[%s]',
        protocol_version, server_version.c_str(), connection_id, capability_flags, status_flags, auth_plugin_name.c_str(), auth_plugin_data_length, auth_plugin_data
    );
};
    
    	err->has_error = 1;
	err->level = E_WARNING;
	spprintf(&err->msg, 0, 'error converting %s data (path: %s): %.*s',
			what_conv,
			path.s && *ZSTR_VAL(path.s) != '\0' ? ZSTR_VAL(path.s) : 'unavailable',
			user_msg_size, user_msg);
	err->should_free = 1;
    
                type = (zend_uchar *)&l;
            if (0 > trace_get_long(traced_pid, function + offsetof(zend_function, type), &l))
            {
                return -1;
            }
    
            goto exit_fail;