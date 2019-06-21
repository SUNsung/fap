
        
          // intialize iterator loads data in
  virtual void Init(const std::vector<std::pair<std::string, std::string> >& kwargs) {
    std::map<std::string, std::string> kmap(kwargs.begin(), kwargs.end());
    param_.InitAllowUnknown(kmap);
    }
    
    
    {    size_t const_loc_ptr = 0;
    for (int i = 0; i < args.size(); ++i) {
      if (args.type_codes[i] == kTVMNDArrayTypeCode) {
        const NDArray& nd =
            static_cast<NDArray*>(args.values[i].v_handle)[0];
        // We cannot set the value until
        type_codes_[i] = kArrayHandle;
        array_data_.push_back(nd);
        array_loc_.push_back(i);
        // check if there is read or mutate
        // by default assume we mutate the array.
        if (const_loc_ptr < const_loc.size() &&
            i == const_loc[const_loc_ptr]) {
          const_vars->push_back(nd.var());
          ++const_loc_ptr;
        } else {
          mutate_vars->push_back(nd.var());
        }
      } else {
        CHECK_LT(args.type_codes[i], kTVMType)
            << 'Only allow POD type in mxnet async call';
      }
    }
  }
    
    // relu
MXNET_OPERATOR_REGISTER_UNARY(_contrib_div_sqrt_dim)
.describe(R'code(Rescale the input by the square root of the channel dimension.
    
    #include './crop-inl.h'