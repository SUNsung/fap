
        
                    sgdUpdateNoise.TransferToDeviceIfNotThere(parameterMatrix->GetDeviceId(), true);
    
        size_t NDMask::MaskedCount() const
    {
        auto maskMatrix = GetMatrix();
        std::unique_ptr<char[]> maskData(maskMatrix->CopyToArray());
        return std::count_if(maskData.get(), maskData.get() + maskMatrix->GetNumElements(), [](const char& val) {
            return val == (char)MaskKind::Invalid;
        });
    }
    
            ValuePtr DeepClone(bool readOnly) const override
        {
            if (m_isPacked)
            {
                std::shared_ptr<Microsoft::MSR::CNTK::MBLayout> packedLayoutCopy;
                if (m_packedDataLayout)
                {
                    packedLayoutCopy = std::make_shared<Microsoft::MSR::CNTK::MBLayout>();
                    packedLayoutCopy->CopyFrom(m_packedDataLayout);
                }
                return MakeSharedObject<PackedValue>(m_sampleShape, m_sampleDynamicAxes, m_packedData->DeepClone(readOnly), packedLayoutCopy, readOnly);
            }
            else
                return Value::DeepClone(readOnly);
        }
    
    
    {        assert(m_fd == -1);
        for (;;)
        {
            // opening a lock file
            int fd = open(m_fileName.c_str(), O_WRONLY | O_CREAT, 0666);
            if (fd < 0)
                RuntimeError('Acquire: Failed to open lock file %s: %s.', m_fileName.c_str(), strerror(errno));
            // locking it with the fcntl API
            memset(&m_lock, 0, sizeof(m_lock));
            m_lock.l_type = F_WRLCK;
            // BUG: fcntl call with F_SETLKW doesn't always reliably detect when lock is released
            // As a workaround, using alarm() for interupting fcntl if it waits more than 1 second
            setupTimeout(1);
            int r = fcntl(fd, wait ? F_SETLKW : F_SETLK, &m_lock);
            if (errno == EINTR)
            {
                sleep(1);
                // retrying in the case of signal or timeout
                close(fd);
                continue;
            }
            if (r != 0)
            {
                // acquire failed
                close(fd);
                umask(mask);
                return false;
            }
            // we own the exclusive lock on file descriptor, but we need to double-check
            // that the lock file wasn't deleted and/or re-created;
            // checking this by comparing inode numbers
            struct stat before, after;
            fstat(fd, &before);
            if (stat(m_fileName.c_str(), &after) != 0 || before.st_ino != after.st_ino)
            {
                // we have a race with 'unlink' call in Release()
                // our lock is held to the previous instance of the file;
                // this is not a problem, we just need to retry locking the new file
                close(fd);
                continue;
            }
            else
            {
                // lock acquired successfully
                m_fd = fd;
                umask(mask);
                return true;
            }
        }
    }
    
        virtual void /*ComputationNodeBase::*/ Validate(bool isFinalValidationPass) override
    {
        ReadOutVariable(); // read out the value once, with the purpose of validating the variableName
        Base::Validate(isFinalValidationPass);
        // this node does not hold mini-batch data
        m_pMBLayout = nullptr;
        // for now, anything this node returns is a scalar
        SetDims(TensorShape(1), false);
    }
    
      /*! \brief return corresponding element set given the node_id */
  inline const Elem& operator[](unsigned node_id) const {
    const Elem& e = elem_of_each_node_[node_id];
    CHECK(e.begin != nullptr)
        << 'access element that is not in the set';
    return e;
  }
  // clear up things
  inline void Clear() {
    row_indices_.clear();
    elem_of_each_node_.clear();
  }
  // initialize node id 0->everything
  inline void Init() {
    CHECK_EQ(elem_of_each_node_.size(), 0U);
    }
    
    void SparsePageWriter::PushWrite(std::shared_ptr<SparsePage>&& page) {
  qworkers_[clock_ptr_].Push(std::move(page));
  clock_ptr_ = (clock_ptr_ + 1) % workers_.size();
}
    
    SEXP XGBoosterPredict_R(SEXP handle, SEXP dmat, SEXP option_mask, SEXP ntree_limit) {
  SEXP ret;
  R_API_BEGIN();
  bst_ulong olen;
  const float *res;
  CHECK_CALL(XGBoosterPredict(R_ExternalPtrAddr(handle),
                            R_ExternalPtrAddr(dmat),
                            asInteger(option_mask),
                            asInteger(ntree_limit),
                            &olen, &res));
  ret = PROTECT(allocVector(REALSXP, olen));
  for (size_t i = 0; i < olen; ++i) {
    REAL(ret)[i] = res[i];
  }
  R_API_END();
  UNPROTECT(1);
  return ret;
}
    
            for(int i = 0 ; i < nums.size() ; i ++)
            for(int j = i + 1 ; j < nums.size() ; j ++)
                if(nums[i] + nums[j] == target){
                    int res[] = {i, j};
                    return vector<int>(res, res + 2);
                }
    
    
    {    return;
}
    
    
void printBool(bool res){
    cout << (res ? 'True' : 'False') << endl;
}
    
    using namespace std;
    
    
    {    return 0;
}

    
    #include <iostream>
#include <vector>
#include <stack>
    
    
    
    
    {    if (follow && valid)
    {
        follow->autorelease();
        return follow;
    }
    
    delete follow;
    return nullptr;
    
}
Follow* Follow::clone() const
{
    // no copy constructor
    return Follow::createWithOffset(_followedNode, _offsetX,_offsetY,_worldRect);
    
}
    
    CardinalSplineTo* CardinalSplineTo::create(float duration, PointArray *points, float tension)
{
    CardinalSplineTo *ret = new (std::nothrow) CardinalSplineTo();
    if (ret)
    {
        if (ret->initWithDuration(duration, points, tension))
        {
            ret->autorelease();
        }
        else 
        {
            CC_SAFE_RELEASE_NULL(ret);
        }
    }
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
        /**
    @brief Get the amplitude of the effect.
    @return Return the amplitude of the effect.
    */
    float getAmplitude() const { return _amplitude; }
    /**
    @brief Set the amplitude to the effect.
    @param amplitude The value of amplitude will be set.
    */
    void setAmplitude(float amplitude) { _amplitude = amplitude; }
    
            if ( frames.empty() )
        {
            CCLOG('cocos2d: AnimationCache: None of the frames for animation '%s' were found in the SpriteFrameCache. Animation is not being added to the Animation Cache.', anim.first.c_str());
            continue;
        }
        else if ( frames.size() != frameNameSize )
        {
            CCLOG('cocos2d: AnimationCache: An animation in your dictionary refers to a frame which is not in the SpriteFrameCache. Some or all of the frames for the animation '%s' may be missing.', anim.first.c_str());
        }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions: