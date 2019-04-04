
        
            const auto* shapes_and_types = c.output_handle_shapes_and_types(i);
    if (shapes_and_types != nullptr) {
      auto* out_handle_data = out.mutable_handle_data();
      out_handle_data->set_is_set(true);
      for (const auto& p : *shapes_and_types) {
        auto* out_shape_and_type = out_handle_data->add_shape_and_type();
        ProtoFromShapeHandle(p.shape, &c, out_shape_and_type->mutable_shape());
        out_shape_and_type->set_dtype(p.dtype);
      }
    }
    
    #endif  // TENSORFLOW_PYTHON_FRAMEWORK_PYTHON_OP_GEN_H_

    
    
    {}  // namespace tensorflow

    
    
    {}  // namespace tensorflow

    
      // Return the current record contents.  Only valid after the preceding call
  // to GetNext() returned true
  string record() const { return record_; }
  // Return the current offset in the file.
  uint64 offset() const { return offset_; }
    
      Entry* entry = nullptr;
  {
    mutex_lock lock{mutex_};
    entry = &cache_[config.ordinal];
    // Release the map lock; the address of 'entry' is stable because
    // std::map guarantees reference stability.
  }
    
        void split2(const Size2D &size,
                const s64 * srcBase, ptrdiff_t srcStride,
                s64 * dst0Base, ptrdiff_t dst0Stride,
                s64 * dst1Base, ptrdiff_t dst1Stride);
    
    
    {
    {        for (; j < size.width; j++)
            dst[j] = (u16)src0[j] + (u16)src1[j];
    }
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
    void bitwiseOr(const Size2D &size,
               const u8 *src0Base, ptrdiff_t src0Stride,
               const u8 *src1Base, ptrdiff_t src1Stride,
               u8 *dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
    internal::vtransform(size,
                         src0Base, src0Stride,
                         src1Base, src1Stride,
                         dstBase, dstStride, BitwiseOr());
#else
    (void)size;
    (void)src0Base;
    (void)src0Stride;
    (void)src1Base;
    (void)src1Stride;
    (void)dstBase;
    (void)dstStride;
#endif
}
    
                    int16x8_t t0_16s = vreinterpretq_s16_u16(vmovl_u8(t0));
                int16x8_t t1_16s = vreinterpretq_s16_u16(vmovl_u8(t1));
                int16x8_t t2_16s = vreinterpretq_s16_u16(vmovl_u8(t2));
    
            result += (double)vget_lane_s64(vadd_s64(vget_low_s64(ws), vget_high_s64(ws)), 0);
    
                    uint8x16_t c0 = vmovq_n_u8(0);
                uint8x16_t c1 = vmovq_n_u8(0);
                uint8x16_t max0 = vmovq_n_u8(0);
                uint8x16_t max1 = vmovq_n_u8(0);
                for( k = 0; k < N; k++ )
                {
                    int8x16_t x = vreinterpretq_s8_u8(veorq_u8(vld1q_u8(ptr + pixel[k]), delta));
                    m0 = vcgtq_s8(x, v2);
                    m1 = vcgtq_s8(v1, x);
    }
    
    template <typename T, int elsize> struct vtail
{
    static inline void inRange(const T *, const T *, const T *,
                               u8 *, size_t &, size_t)
    {
        //do nothing since there couldn't be enough data
    }
};
template <typename T> struct vtail<T, 2>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        //There no more than 15 elements in the tail, so we could handle 8 element vector only once
        if( x + 8 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1(dst + x, internal::vmovn(vd));
            x+=8;
        }
    }
};
template <typename T> struct vtail<T, 1>
{
    static inline void inRange(const T * src, const T * rng1, const T * rng2,
                               u8 * dst, size_t &x, size_t width)
    {
        typedef typename internal::VecTraits<T>::vec128 vec128;
        typedef typename internal::VecTraits<T>::unsign::vec128 uvec128;
        typedef typename internal::VecTraits<T>::vec64 vec64;
        typedef typename internal::VecTraits<T>::unsign::vec64 uvec64;
        //There no more than 31 elements in the tail, so we could handle once 16+8 or 16 or 8 elements
        if( x + 16 < width)
        {
             vec128  vs = internal::vld1q( src + x);
             vec128 vr1 = internal::vld1q(rng1 + x);
             vec128 vr2 = internal::vld1q(rng2 + x);
            uvec128  vd = internal::vandq(internal::vcgeq(vs, vr1), internal::vcgeq(vr2, vs));
            internal::vst1q(dst + x, vd);
            x+=16;
        }
        if( x + 8 < width)
        {
             vec64  vs = internal::vld1( src + x);
             vec64 vr1 = internal::vld1(rng1 + x);
             vec64 vr2 = internal::vld1(rng2 + x);
            uvec64  vd = internal::vand(internal::vcge(vs, vr1), internal::vcge(vr2, vs));
            internal::vst1(dst + x, vd);
            x+=8;
        }
    }
};
    
    /////////////// Custom NEON intrinsics ///////////////////
    
    	if (cmderOptions.registerApp == true)
	{
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND, cmderOptions.cmderCfgRoot, cmderOptions.cmderSingle);
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM, cmderOptions.cmderCfgRoot, cmderOptions.cmderSingle);
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_DRIVE_PATH_BACKGROUND, cmderOptions.cmderCfgRoot, cmderOptions.cmderSingle);
		RegisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_DRIVE_PATH_LISTITEM, cmderOptions.cmderCfgRoot, cmderOptions.cmderSingle);
	}
	else if (cmderOptions.unRegisterApp == true)
	{
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_BACKGROUND);
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_PATH_LISTITEM);
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_DRIVE_PATH_BACKGROUND);
		UnregisterShellMenu(cmderOptions.cmderRegScope, SHELL_MENU_REGISTRY_DRIVE_PATH_LISTITEM);
	}
	else if (cmderOptions.error == true)
	{
		return 1;
	}
	else
	{
		StartCmder(cmderOptions.cmderStart, cmderOptions.cmderSingle, cmderOptions.cmderTask, cmderOptions.cmderCfgRoot, cmderOptions.cmderUserCfg);
	}
    
    
    {
    {        // For now reusing the shim to allow prefetch.
        // Please only use a subset of the shim interface that includes
        // Init()/StartEpoch()/GetMinibatch()/IsEndOfEpoch()
        // Shim will be deleted in the future versions.
        std::shared_ptr<ReaderShim<float>> m_shim;
        Microsoft::MSR::CNTK::StreamMinibatchInputs m_matrices;
    };
}

    
            ValidateType<T>(dict, typeValue, currentVersion);
    
    using namespace std;
    
    
    {    ~ScopeTimer()
    {
        if (m_verbosity > 2)
        {
            m_aggregateTimer.Stop();
            double time = m_aggregateTimer.ElapsedSeconds();
            fprintf(stderr, m_message.c_str(), time);
        }
    }
};
    
    
    {            for (size_t i = 0; i < 2; i++)
                Input(i)->Gradient().TransferToDeviceIfNotThere(m_deviceId, true);
        }
        catch (...)
        {
            fprintf(stderr, 'LookupTableNode unit test is not passed!');
            return false;
        }
    
        template <class ElemType>
    void RequestAliasedRelease(AliasNodePtr node)
    {
        const auto iter = m_aliasLookup.find(node);
        if (iter == m_aliasLookup.end())
            LogicError('node not aliased');
    }