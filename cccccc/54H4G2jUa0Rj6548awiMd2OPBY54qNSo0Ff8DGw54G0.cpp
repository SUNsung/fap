// Destructor passed to TF_NewTensor when it reuses a numpy buffer. Stores a
// pointer to the pyobj in a buffer to be dereferenced later when we're actually
// holding the GIL. Data and len are ignored.
void DelayedNumpyDecref(void* data, size_t len, void* obj);
    
    namespace stream_executor {
namespace cuda {
    }
    }
    
      // Creates a 1d FFT plan with scratch allocator.
  virtual std::unique_ptr<Plan> Create1dPlanWithScratchAllocator(
      Stream *stream, uint64 num_x, Type type, bool in_place_fft,
      ScratchAllocator *scratch_allocator) = 0;
    
    Licensed under the Apache License, Version 2.0 (the 'License');
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    
    #endif  // TENSORFLOW_STREAM_EXECUTOR_HOST_HOST_PLATFORM_ID_H_

    
    namespace stream_executor {
namespace host {
    }
    }
    
        template CNTK_API std::tuple<const void*, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<float>() const;
    template CNTK_API std::tuple<const void*, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<double>() const;
    template CNTK_API std::tuple<const void*, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<float16>() const;
    template CNTK_API std::tuple<const void*, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<int8_t>() const;
    template CNTK_API std::tuple<const void*, const SparseIndexType*, const SparseIndexType*, size_t, size_t, size_t> NDArrayView::SparseBlockColumnDataBuffers<int16_t>() const;
    
            // determine which nodes must be cloned
        //  - intersection of:
        //     - all indirect inputs of the specified outputs
        //     - all dependents of leaves
        //  - where leaves are:
        //     - specified inputs
        //     - unless parameters='shared': all parameters the specified outputs depend on
    
        template <class ElemType>
    void RequestRelease(shared_ptr<Matrix<ElemType>> *pMatrixPtr)
    {
        auto memInfo = GetMemInfo(pMatrixPtr);
        if (memInfo != nullptr)
        {
            memInfo->SetReleaseStep(m_stepCounter);
        }
        m_stepCounter++; 
    }
    
    
    {    // this->gather(beta,idx,a,alpha) operation is defined as
    // *this[:,j] = a[:,idx[j]] * alpha + *this[:,j] * beta
    dst.DoGatherColumnsOf(0.0, *(this->m_packingIndex), src, 1.0);
}
template<class ElemType>
void OptimizedRNNStackNode<ElemType>::UnpackSequencesFromCuDNN(const Matrix<ElemType>& src, Matrix<ElemType>& dst)
{
    // this->scatter(beta,ndx,a,alpha) operation is defined as
    // *this[:,idx[j]] = a[:,j] * alpha + *this[:,idx[j]] * beta
    dst.DoScatterColumnsOf(0.0, *(this->m_packingIndex), src, 1.0, /*idxHaveDups*/ false);
}
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
    void Channel::timer_callback(swTimer *timer, swTimer_node *tnode)
{
    timer_msg_t *msg = (timer_msg_t *) tnode->data;
    msg->error = true;
    msg->timer = nullptr;
    if (msg->type == CONSUMER)
    {
        msg->chan->consumer_remove(msg->co);
    }
    else
    {
        msg->chan->producer_remove(msg->co);
    }
    msg->co->resume();
}
    
        swListenPort *port = swServer_add_port(&serv, SW_SOCK_TCP, '127.0.0.1', 9501);
    port->open_eof_check = 0;
    //config
    port->backlog = 128;
    memcpy(port->protocol.package_eof, SW_STRL('\r\n\r\n'));  //开启eof检测，启用buffer区
    
        time_t start = time(nullptr);
    while (i != 1000)
    {
        usleep(100);
        
        if ((time(nullptr) - start) > 3)
        {
            ASSERT_TRUE(false);
        }
    }
    
    
    {    void *alloc(size_t _size)
    {
        if (_size >= _callback_buffer->size)
        {
            size_t new_size = _callback_buffer->size * 2;
            while (new_size < _size + 1)
            {
                new_size *= 2;
            }
            if (swString_extend(_callback_buffer, new_size) < 0)
            {
                abort();
            }
        }
        length = _size;
        buffer = _callback_buffer->str;
        ((char *) buffer)[_size] = '\0';
        return buffer;
    }
};