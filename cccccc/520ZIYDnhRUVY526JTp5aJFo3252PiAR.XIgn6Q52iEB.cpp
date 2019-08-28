
        
        	size_t len = f->get_len();
    
    
    {		ERR_FAIL_COND_V(!cc, NULL);
		v.code_version = cc->version;
	}
    
    	if (p_what == NOTIFICATION_EXIT_TREE) {
		EditorFileSystem::get_singleton()->disconnect('filesystem_changed', this, 'reload');
	}
    
    	int tex_flags = 0;
	if (repeat > 0)
		tex_flags |= Texture::FLAG_REPEAT;
	if (repeat == 2)
		tex_flags |= Texture::FLAG_MIRRORED_REPEAT;
	if (filter)
		tex_flags |= Texture::FLAG_FILTER;
	if (mipmaps || compress_mode == COMPRESS_VIDEO_RAM)
		tex_flags |= Texture::FLAG_MIPMAPS;
	if (anisotropic)
		tex_flags |= Texture::FLAG_ANISOTROPIC_FILTER;
	if (srgb == 1)
		tex_flags |= Texture::FLAG_CONVERT_TO_LINEAR;
    
    	int x[3];
	int y[3];
    
    	set_custom_minimum_size(Size2(0, 300 * EDSCALE));
    
        try
    {
        tananglerat(&prat, angletype, RATIONAL_BASE, RATIONAL_PRECISION);
    }
    catch (uint32_t error)
    {
        destroyrat(prat);
        throw(error);
    }
    
    IAsyncOperationWithProgress<String ^, HttpProgress> ^ CurrencyHttpClient::GetCurrencyRatios()
{
    wstring uri = wstring{ sc_RatiosUriRelativeTo } + m_sourceCurrencyCode->Data();
    auto ratiosUri = ref new Uri(StringReference(uri.c_str()));
    }
    
            // Now update our result value based on the state we are in
        switch (state)
        {
        case MANTS:
            pnumret->sign = (curChar == L'-') ? -1 : 1;
            break;
        case EXPSZ:
        case EXPS:
            expSign = (curChar == L'-') ? -1 : 1;
            break;
        case EXPDZ:
        case EXPD:
        {
            curChar = NormalizeCharDigit(curChar, radix);
    }
    }
    
    StatusWith<BSONObj> countCommandAsAggregationCommand(const CountCommand& cmd,
                                                     const NamespaceString& nss) {
    BSONObjBuilder aggregationBuilder;
    aggregationBuilder.append('aggregate', nss.coll());
    }
    
            WorkingSet ws;
        CountScan count(&_opCtx, params, &ws);
    
    
RegexMatcher &RegexMatcher::reset(const UnicodeString &input) {
    fInputText = utext_openConstUnicodeString(fInputText, &input, &fDeferredStatus);
    if (fPattern->fNeedsAltInput) {
        fAltInputText = utext_clone(fAltInputText, fInputText, FALSE, TRUE, &fDeferredStatus);
    }
    if (U_FAILURE(fDeferredStatus)) {
        return *this;
    }
    fInputLength = utext_nativeLength(fInputText);
    }
    
    ScientificNumberFormatter::ScientificNumberFormatter(
        DecimalFormat *fmtToAdopt, Style *styleToAdopt, UErrorCode &status)
        : fPreExponent(),
          fDecimalFormat(fmtToAdopt),
          fStyle(styleToAdopt),
          fStaticSets(NULL) {
    if (U_FAILURE(status)) {
        return;
    }
    if (fDecimalFormat == NULL || fStyle == NULL) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    const DecimalFormatSymbols *sym = fDecimalFormat->getDecimalFormatSymbols();
    if (sym == NULL) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return;
    }
    getPreExponent(*sym, fPreExponent);
    fStaticSets = DecimalFormatStaticSets::getStaticSets(status);
}
    
    U_NAMESPACE_BEGIN
    
    void CmdInfo::PrintInfo(DebuggerClient* client, StringBuffer &sb,
                        const Array& info, const std::string &subsymbol) {
  if (info.exists(s_params)) {
    PrintHeader(client, sb, info);
    sb.printf('function %s%s(%s);\n',
              info[s_ref].toBoolean() ? '&' : '',
              info[s_name].toString().data(),
              GetParams(info[s_params].toArray(),
                        info[s_varg].toBoolean()).data());
    if (info[s_type_profiling].toArray().size() != 0) {
      sb.printf('Type profile:\n%s',
                GetTypeProfilingInfo(info[s_type_profiling].toArray(),
                                     info[s_params].toArray()).data());
    }
    return;
  }
    }
    
    #define VS_COMMAND_COMMON_IMPL(ClassName, Target, RequiresBreak)  \
  VS_COMMAND_COMMON_TARGET(ClassName, Target, RequiresBreak)
    
      forEachInstanceProp(
    var,
    [&](
      const std::string& objectClassName,
      const std::string& propName,
      const std::string& propClassName,
      const char* visibilityDescription,
      folly::dynamic& presentationHint,
      const Variant& propertyVariant
    ) {
    }
    
      if (data.isObject() &&
      data.toObject().instanceof(SystemLib::s_IteratorClass)) {
    array_copy = Array::Create();
    for (ArrayIter iter(data.toObject().get()); iter; ++iter) {
      if (!iter.first().isNull() && iter.first().isString()) {
        array_copy.toArrRef().set(iter.first(), iter.second());
      } else {
        array_copy.toArrRef().append(iter.second());
      }
    }
    data = array_copy;
  }
    
    template<class T, class V, bool case_sensitive, class E>
inline
const T& FixedStringMapBuilder<T,V,case_sensitive,E>::operator[](V idx) const {
  return (*const_cast<FixedStringMapBuilder*>(this))[idx];
}
    
    
    {
    {}}
    
    
    {}
    
    TEST(CyberNodeTest, create_reader) {
  EXPECT_TRUE(apollo::cyber::OK());
  apollo::cyber::proto::Chatter chat;
  apollo::cyber::PyNode node('listener');
  pr = node.create_reader('channel/chatter', chat.GetTypeName());
  EXPECT_EQ('apollo.cyber.proto.Chatter', chat.GetTypeName());
  EXPECT_NE(pr, nullptr);
  pr->register_func(cbfun);
  delete pr;
  pr = nullptr;
}
    
        // 2. vertical control check
    if ((mode == Chassis::COMPLETE_AUTO_DRIVE ||
         mode == Chassis::AUTO_SPEED_ONLY) &&
        !CheckResponse(CHECK_RESPONSE_SPEED_UNIT_FLAG, false)) {
      ++vertical_ctrl_fail;
      if (vertical_ctrl_fail >= kMaxFailAttempt) {
        emergency_mode = true;
        set_chassis_error_code(Chassis::MANUAL_INTERVENTION);
      }
    } else {
      vertical_ctrl_fail = 0;
    }
    if (CheckChassisError()) {
      set_chassis_error_code(Chassis::CHASSIS_ERROR);
      emergency_mode = true;
    }
    
      // set scenario_type in PlanningContext
  auto* scenario = PlanningContext::Instance()
                       ->mutable_planning_status()
                       ->mutable_scenario();
  scenario->Clear();
  scenario->set_scenario_type(scenario_type());
    
    void ControllerAgent::RegisterControllers(const ControlConf *control_conf) {
  AINFO << 'Only support MPC controller or Lat + Lon controllers as of now';
  for (auto active_controller : control_conf->active_controllers()) {
    switch (active_controller) {
      case ControlConf::MPC_CONTROLLER:
        controller_factory_.Register(
            ControlConf::MPC_CONTROLLER,
            []() -> Controller * { return new MPCController(); });
        break;
      case ControlConf::LAT_CONTROLLER:
        controller_factory_.Register(
            ControlConf::LAT_CONTROLLER,
            []() -> Controller * { return new LatController(); });
        break;
      case ControlConf::LON_CONTROLLER:
        controller_factory_.Register(
            ControlConf::LON_CONTROLLER,
            []() -> Controller * { return new LonController(); });
        break;
      default:
        AERROR << 'Unknown active controller type:' << active_controller;
    }
  }
}
    
      dp_init_options.image_height = FLAGS_height;
  dp_init_options.image_width = FLAGS_width;
  dp_init_options.device_id = 0;
    
    #endif  // CYBER_SCHEDULER_POLICY_SCHEDULER_CHOREOGRAPHY_H_

    
    #define RETURN_IF_NULL(ptr)          \
  if (ptr == nullptr) {              \
    AWARN << #ptr << ' is nullptr.'; \
    return;                          \
  }