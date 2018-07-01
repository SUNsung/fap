
        
          llvm::SMDiagnostic GetMessage(SourceLoc Loc, llvm::SourceMgr::DiagKind Kind,
                                const Twine &Msg,
                                ArrayRef<llvm::SMRange> Ranges,
                                ArrayRef<llvm::SMFixIt> FixIts) const;
    
      /**
   * Controls what to include in a bounding box. Bounding boxes of all levels
   * between RIL_WORD and RIL_BLOCK can include or exclude potential diacritics.
   * Between layout analysis and recognition, it isn't known where all
   * diacritics belong, so this control is used to include or exclude some
   * diacritics that are above or below the main body of the word. In most cases
   * where the placement is obvious, and after recognition, it doesn't make as
   * much difference, as the diacritics will already be included in the word.
   */
  void SetBoundingBoxComponents(bool include_upper_dots,
                                bool include_lower_dots) {
    include_upper_dots_ = include_upper_dots;
    include_lower_dots_ = include_lower_dots;
  }
    
    // Helper prints the given set of blob choices.
static void PrintPath(int length, const BLOB_CHOICE** blob_choices,
                      const UNICHARSET& unicharset,
                      const char *label, FILE *output_file) {
  float rating = 0.0f;
  float certainty = 0.0f;
  for (int i = 0; i < length; ++i) {
    const BLOB_CHOICE* blob_choice = blob_choices[i];
    fprintf(output_file, '%s',
           unicharset.id_to_unichar(blob_choice->unichar_id()));
    rating += blob_choice->rating();
    if (certainty > blob_choice->certainty())
      certainty = blob_choice->certainty();
  }
  fprintf(output_file, '\t%s\t%.4f\t%.4f\n',
         label, rating, certainty);
}
    
     protected:
  /// Clone or other copy of the source Pix.
  /// The pix will always be PixDestroy()ed on destruction of the class.
  Pix*                 pix_;
    
    /**
 * The grapheme clusters within a line of text are laid out logically
 * in this direction, judged when looking at the text line rotated so that
 * its Orientation is 'page up'.
 *
 * For English text, the writing direction is left-to-right.  For the
 * Chinese text in the above example, the writing direction is top-to-bottom.
*/
enum WritingDirection {
  WRITING_DIRECTION_LEFT_TO_RIGHT = 0,
  WRITING_DIRECTION_RIGHT_TO_LEFT = 1,
  WRITING_DIRECTION_TOP_TO_BOTTOM = 2,
};
    
    
    { private:
  // Pointer to the other end of the link. It is always true that either
  // other_end_ == nullptr or other_end_->other_end_ == this.
  DoublePtr* other_end_;
};
    
     private:
   T* object_;
  MemberSignature member_;
  typename remove_reference<P1>::type p1_;
  typename remove_reference<P2>::type p2_;
  typename remove_reference<P3>::type p3_;
  typename remove_reference<P4>::type p4_;
  typename remove_reference<P5>::type p5_;
    
    // Helper to return an offset index feature. In this context an offset
// feature with a dir of +/-1 is a feature of a similar direction,
// but shifted perpendicular to the direction of the feature. An offset
// feature with a dir of +/-2 is feature at the same position, but rotated
// by +/- one [compact] quantum. Returns the index of the generated offset
// feature, or -1 if it doesn't exist. Dir should be in
// [-kNumOffsetMaps, kNumOffsetMaps] to indicate the relative direction.
// A dir of 0 is an identity transformation.
// Both input and output are from the index(sparse) feature space, not
// the mapped/compact feature space, but the offset feature is the minimum
// distance moved from the input to guarantee that it maps to the next
// available quantum in the mapped/compact space.
int IntFeatureMap::OffsetFeature(int index_feature, int dir) const {
  if (dir > 0 && dir <= kNumOffsetMaps)
    return offset_plus_[dir - 1][index_feature];
  else if (dir < 0 && -dir <= kNumOffsetMaps)
    return offset_minus_[-dir - 1][index_feature];
  else if (dir == 0)
    return index_feature;
  else
    return -1;
}
    
    
    {
    {
    {            for (size_t i = 0; i < m_netEvaluationNodes.size(); i++)
            {
                // m_netEvaluationNodes[i]->Value().SetValue((ElemType)0);
                Matrix<ElemType>::AddElementToElement(*m_netEvaluationAccumulator, 0, i,
                                                      m_netEvaluationNodes[i]->Value(), 0, 0);
            }
            m_netEvaluationAccumulator->SetValue(0);
        }
    };
};
    
    public:
    template <class ConfigRecordType>
    void InitFromConfig(const ConfigRecordType&);
    virtual void Init(const ConfigParameters& config) override
    {
        InitFromConfig(config);
    }
    virtual void Init(const ScriptableObjects::IConfigRecord& config) override
    {
        InitFromConfig(config);
    }
    // DataWriter Constructor
    // config - [in] configuration parameters for the datareader
    BinaryWriter(const ConfigParameters& config)
    {
        Init(config);
    }
    BinaryWriter()
    {
    }
    // Destroy - cleanup and remove this class
    // NOTE: this destroys the object, and it can't be used past this point
    virtual void Destroy();
    virtual ~BinaryWriter();
    
        Matrix<float> mA1sparseCSC(mAdense.DeepClone());
    mA1sparseCSC.SwitchToMatrixType(MatrixType::SPARSE, matrixFormatSparseCSC, true);
    
    
        // for every single bn node, the statistics is the average of mean and variance for several times in forward prop
        // the forward prop is from the feature to the current bn node
        for (int iter = 0; iter < iters; iter++)
        {
            // during the bn stat, dataRead must be ensured
            bool wasDataRead = DataReaderHelpers::GetMinibatchIntoNetwork<ElemType>(*dataReader, m_net,
                nullptr, useDistributedMBReading, useParallelTrain, inputMatrices, actualMBSize, m_mpi);
    }
    
    // Data Writer class
// interface for clients of the Data Writer
// mirrors the IDataWriter interface, except the Init method is private (use the constructor)
class DataWriter : public IDataWriter, protected Plugin
{
    IDataWriter* m_dataWriter; // writer
    }
    
    template<class TString>
inline bool AreEqualIgnoreCase(
    const typename TString::value_type* s1pointer,
    const TString& s2)
{
    return AreEqualIgnoreCase(TString(s1pointer), s2);
}
    
        // transpose a 4x4 matrix
    // Passing input as const ref to ensure aligned-ness
    static void transpose(const float4& col0, const float4& col1, const float4& col2, const float4& col3,
                          float4& row0, float4& row1, float4& row2, float4& row3)
    { // note: the temp variable here gets completely eliminated by optimization
        float4 m0 = col0;
        float4 m1 = col1;
        float4 m2 = col2;
        float4 m3 = col3;
        _MM_TRANSPOSE4_PS(m0, m1, m2, m3); // 8 instructions for 16 elements
        row0 = m0;
        row1 = m1;
        row2 = m2;
        row3 = m3;
    }
    
    namespace leveldb {
    }
    
    class Issue200 { };
    
    Status Footer::DecodeFrom(Slice* input) {
  const char* magic_ptr = input->data() + kEncodedLength - 8;
  const uint32_t magic_lo = DecodeFixed32(magic_ptr);
  const uint32_t magic_hi = DecodeFixed32(magic_ptr + 4);
  const uint64_t magic = ((static_cast<uint64_t>(magic_hi) << 32) |
                          (static_cast<uint64_t>(magic_lo)));
  if (magic != kTableMagicNumber) {
    return Status::Corruption('not an sstable (bad magic number)');
  }
    }
    
    TEST(BloomTest, EmptyFilter) {
  ASSERT_TRUE(! Matches('hello'));
  ASSERT_TRUE(! Matches('world'));
}
    
    
    {  unsigned char data[48] = {
    0x01, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x00, 0x00, 0x18,
    0x28, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
  };
  ASSERT_EQ(0xd9963a56, Value(reinterpret_cast<char*>(data), sizeof(data)));
}
    
    // The FALLTHROUGH_INTENDED macro can be used to annotate implicit fall-through
// between switch labels. The real definition should be provided externally.
// This one is a fallback version for unsupported compilers.
#ifndef FALLTHROUGH_INTENDED
#define FALLTHROUGH_INTENDED do { } while (0)
#endif
    
    
    {  ASSERT_EQ(Hash(0, 0, 0xbc9f1d34), 0xbc9f1d34);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data1), sizeof(data1), 0xbc9f1d34),
      0xef1345c4);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data2), sizeof(data2), 0xbc9f1d34),
      0x5b663814);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data3), sizeof(data3), 0xbc9f1d34),
      0x323c078f);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data4), sizeof(data4), 0xbc9f1d34),
      0xed21633a);
  ASSERT_EQ(
      Hash(reinterpret_cast<const char*>(data5), sizeof(data5), 0x12345678),
      0xf333dabb);
}
    
    #include <string>
    
    #include <stdint.h>
    
    class Writer {
 public:
  // Create a writer that will append data to '*dest'.
  // '*dest' must be initially empty.
  // '*dest' must remain live while this Writer is in use.
  explicit Writer(WritableFile* dest);
    }