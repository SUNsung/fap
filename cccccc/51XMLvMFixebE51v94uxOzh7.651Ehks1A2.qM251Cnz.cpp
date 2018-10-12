
        
        
    {        auto maskMatrix = GetMatrix();
        size_t rowOffset = offset[0];
        size_t colOffset = offset[1];
        size_t sliceRowLength = (shape[0] != NDShape::InferredDimension) ? shape[0] : (maskMatrix->GetNumRows() - rowOffset);
        size_t sliceColLength = (shape[1] != NDShape::InferredDimension) ? shape[1] : (maskMatrix->GetNumCols() - colOffset);
        if ((rowOffset == 0) && (sliceRowLength == maskMatrix->GetNumRows()))
            maskMatrix->ColumnSlice(colOffset, sliceColLength).SetValue((char)maskKind);
        else
        {
            // Since Matrix does not support strides in the row dimension, we will need to create separate slices for each column
            for (size_t i = colOffset; i < (colOffset + sliceColLength); ++i)
            {
                auto column = maskMatrix->ColumnSlice(i, 1);
                column.Reshape(1, maskMatrix->GetNumRows());
                column.ColumnSlice(rowOffset, sliceRowLength).SetValue((char)maskKind);
            }
        }
    }
    
    
    {        return dict[versionKey].Value<size_t>();
    }
    
                auto sequenceValueVarSubshape = currentSequenceDataShape.SubShape(0, fullyDefinedSampleShape.Rank());
            if (sequenceValueVarSubshape != fullyDefinedSampleShape)
            {
                for (size_t k = 0; k < fullyDefinedSampleShape.Rank(); ++k)
                {
                    if (fullyDefinedSampleShape[k] == NDShape::FreeDimension)
                        fullyDefinedSampleShape[k] = sequenceValueVarSubshape[k];
                    else if (fullyDefinedSampleShape[k] != sequenceValueVarSubshape[k])
                        InvalidArgument('Value::Create: The shape '%S' of sequence #%zu is not compatible with the sample shape '%S'.', currentSequenceData->Shape().AsString().c_str(), i, sampleShape.AsString().c_str());
                }
            }
    
    
    {        m_dataFields->SetValueInitialization(initializer, device);
    }
    
            if (::WaitForSingleObject(m_handle, wait ? INFINITE : 0) != WAIT_OBJECT_0)
        {
            // failed to acquire
            int rc = ::CloseHandle(m_handle);
            if ((rc == CLOSEHANDLE_ERROR) && !std::uncaught_exception())
            {
                RuntimeError('Acquire: Handler close failure with error code %d', ::GetLastError());
            }
            m_handle = NULL;
            return false;
        }
    
    // GetHmmData - Get the HMM definition for SE training
// hmm - HMM definition
// returns - true if succeed
bool DataReader::GetHmmData(msra::asr::simplesenonehmm* hmm)
{
    bool bRet = true;
    for (size_t i = 0; i < m_ioNames.size(); i++)
        bRet &= m_dataReaders[m_ioNames[i]]->GetHmmData(hmm);
    return bRet;
}
    
    /** Returns the Cardinal Spline position for a given set of control points, tension and time */
extern CC_DLL Vec2 ccCardinalSplineAt(const Vec2 &p0, const Vec2 &p1, const Vec2 &p2, const Vec2 &p3, float tension, float t);
    
    #include '2d/CCActionInstant.h'
#include '2d/CCNode.h'
#include '2d/CCSprite.h'
    
        //
    // Overrides
    //
    virtual ResizeTo* clone() const override;
    void startWithTarget(cocos2d::Node* target) override;
    void update(float time) override;
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
    protected:
    int _randrange;
    bool _once;
    bool _shatterZ;
    
    // implementation of Animation
    
        /** updates the Atlas (indexed vertex array).
    * Shall be overridden in subclasses.
    */
    virtual void updateAtlasValues();
    
    /** Set an buffer manager of the texture vertex. */
    void setTextureAtlas(TextureAtlas* textureAtlas);
    
    /** Return the buffer manager of the texture vertex. 
     *
     * @return Return A TextureAtlas.
     */
    TextureAtlas* getTextureAtlas() const;
    
    void setQuadsToDraw(ssize_t quadsToDraw);
    ssize_t getQuadsToDraw() const;