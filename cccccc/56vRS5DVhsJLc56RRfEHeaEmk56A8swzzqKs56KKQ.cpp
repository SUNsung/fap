
        
        
    {    struct KeypointStore {
        virtual void push(f32 kpX, f32 kpY, f32 kpSize, f32 kpAngle=-1, f32 kpResponse=0, s32 kpOctave=0, s32 kpClass_id=-1) = 0;
        virtual ~KeypointStore() {};
    };
}
    
        for (size_t i = 0; i < size.height; ++i)
    {
        const u8* src = internal::getRowPtr(srcBase, srcStride, i);
        u8* dst = internal::getRowPtr(dstBase, dstStride, i);
        size_t j = 0;
    }
    
            const f32* ln0 = idx_rm1 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rm1) : tmp;
        const f32* ln1 = internal::getRowPtr(srcBase, srcStride, i);
        const f32* ln2 = internal::getRowPtr(srcBase, srcStride, i + 1);
        const f32* ln3 = idx_rp2 >= -(ptrdiff_t)borderMargin.top ? internal::getRowPtr(srcBase, srcStride, idx_rp2) : tmp;
    
            int16x8_t l02 = vaddq_s16(line0x, line2x);
        int16x8_t l1x2 = vshlq_n_s16(line1x, 1);
        int16x8_t dy = vsubq_s16(line2y, line0y);
        int16x8_t dx = vaddq_s16(l1x2, l02);
    
    void combineYUYV(const Size2D &size,
                 const u8 * srcyBase, ptrdiff_t srcyStride,
                 const u8 * srcuBase, ptrdiff_t srcuStride,
                 const u8 * srcvBase, ptrdiff_t srcvStride,
                 u8 * dstBase, ptrdiff_t dstStride)
{
    internal::assertSupportedConfiguration();
#ifdef CAROTENE_NEON
#ifndef __ANDROID__
    size_t roiw32 = size.width >= 31 ? size.width - 31 : 0;
#endif
    size_t roiw8 = size.width >= 7 ? size.width - 7 : 0;
    }
    
                uint64x2_t vm1 = vandq_u64(vln1, vmask1);
            uint64x2_t vm2 = vandq_u64(vln2, vmask1);
            uint64x2_t vm3 = vandq_u64(vln3, vmask1);
            uint64x2_t vm4 = vandq_u64(vln4, vmask1);
    
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
    
            double m_rho;
        double m_epsilon;
        // If a gradient is sparse, we will maintain a timestamp per column with the last time that column was updated
        std::unordered_map<Parameter, NDArrayViewPtr> m_lastUpdateTime;
        // If a gradient is sparse we will use the current time and the timestamp to determine how to apply a bunch of delayed updates for this column.
        // This allows us to skip updating many columns when the gradients are sparse.
        std::unordered_map<Parameter, int> m_currentTime;
    
                std::function<std::pair<Variable, bool>(const FunctionPtr& root)> FindTrainingSampleCountVar;
            FindTrainingSampleCountVar = [&FindTrainingSampleCountVar](const FunctionPtr& root) -> std::pair<Variable, bool> {
                const auto& outputs = root->Outputs();
                auto firstOutputWithDynamicAxes = std::find_if(outputs.begin(), outputs.end(), [](const Variable& var) { return !var.DynamicAxes().empty(); });
                if (firstOutputWithDynamicAxes != outputs.end())
                    return std::make_pair(*firstOutputWithDynamicAxes, true);
    }
    
                    // Sequence dynamic axes are 'Ordered' as opposed to the batch axis which is unordered.
                bool hasSequenceAxis = (std::find_if(sampleDynamicAxes.begin(), sampleDynamicAxes.end(), [](const Axis& axis) {return axis.IsOrdered(); }) != sampleDynamicAxes.end());
                if (hasSequenceAxis)
                    unpackedShape = unpackedShape.AppendShape({ packedDataLayout->GetNumTimeSteps() });
                else if ((packedDataLayout->GetNumTimeSteps() != 1) || packedDataLayout->HasSequenceBeyondBegin())
                    LogicError('A PackedValue object with no sequence dynamic axis, must have a layout with exactly one time step and no sequences beginning in the past.');
    
        // Releases the mutex
    void Release()
    {
        assert(m_handle != NULL);
        int rc = 0;
        rc = ::ReleaseMutex(m_handle);
        if ((rc == RELEASEMUTEX_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to release mutex %s: %d', m_name.c_str(), ::GetLastError());
        }
        rc = ::CloseHandle(m_handle);
        if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
        {
            RuntimeError('Mutex Release: Failed to close handler %s: %d', m_name.c_str(), ::GetLastError());
        }
        m_handle = NULL;
    }
    
        typedef unsigned int INDEXTYPE; // don't use size_t, as this saves HUGE amounts of RAM
    std::vector<INDEXTYPE> map;     // [t] -> t' indices in randomized order
    size_t currentseed;             // seed for current sequence
    size_t randomizationrange;      // t - randomizationrange/2 <= t' < t + randomizationrange/2 (we support this to enable swapping)
                                    // special values (randomizeDisable)
    void Invalidate()
    {
        currentseed = (size_t) -1;
    }
    
    
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
    
        virtual void /*ComputationNodeNonLooping::*/ ForwardPropNonLooping() override
    {
        ElemType val = ReadOutVariable();
        Value().VerifySize(1, 1);
        Value().SetValue(val);
    }