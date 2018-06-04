
        
        // Read through the first n keys repeatedly and check that they get
// compacted (verified by checking the size of the key space).
void AutoCompactTest::DoReads(int n) {
  std::string value(kValueSize, 'x');
  DBImpl* dbi = reinterpret_cast<DBImpl*>(db_);
    }
    
      fname = CurrentFileName('foo');
  ASSERT_EQ('foo/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(0, number);
  ASSERT_EQ(kCurrentFile, type);
    
    #include 'db/version_edit.h'
    
    void WriteBatchInternal::SetCount(WriteBatch* b, int n) {
  EncodeFixed32(&b->rep_[8], n);
}
    
      // Advanced functions: these are used to reduce the space requirements
  // for internal data structures like index blocks.
    
      // Return the name of this policy.  Note that if the filter encoding
  // changes in an incompatible way, the name returned by this method
  // must be changed.  Otherwise, old incompatible filters may be
  // passed to methods of this type.
  virtual const char* Name() const = 0;
    
    // Computes a reshaped copy of the weight matrix w. If there are no
// partial_funcs_, it does nothing.
void IntSimdMatrix::Init(const GENERIC_2D_ARRAY<int8_t>& w) {
  if (partial_funcs_.empty()) return;
  int num_out = w.dim1();
  int num_in = w.dim2() - 1;
  // The rounded-up sizes of the reshaped weight matrix, excluding biases.
  int rounded_num_in = Roundup(num_in, num_inputs_per_group_);
  int rounded_num_out = RoundOutputs(num_out);
  // Add the bias and compute the required size.
  shaped_w_.resize((rounded_num_in + 1) * rounded_num_out, 0);
  int shaped_index = 0;
  int output = 0;
  // Each number of registers needs a different format! Iterates over the
  // different numbers of registers (each a power of 2).
  for (int num_registers = max_output_registers_; num_registers >= 1;
       num_registers /= 2) {
    // The number of outputs that we will generate with this many registers.
    int num_outputs_per_register_set =
        num_registers * num_outputs_per_register_;
    // Use the max number of registers until we have to go fewer.
    while (output + num_outputs_per_register_set <= rounded_num_out) {
      // Accumulating outputs in registers saves iterating over the inputs, so
      // we only have to do it once per output register set.
      for (int input = 0; input < num_in; input += num_inputs_per_group_) {
        // Iterate over the number of outputs in a register set.
        for (int j = 0; j < num_outputs_per_register_set; ++j) {
          // Inner-most loop corresponds to the number of inputs in an input
          // group.
          for (int i = 0; i < num_inputs_per_group_; ++i) {
            int8_t weight = 0;
            if (output + j < num_out && input + i < num_in)
              weight = w(output + j, input + i);
            shaped_w_[shaped_index++] = weight;
          }
        }
      }
      // Append the bias weights for the register set.
      for (int j = 0; j < num_outputs_per_register_set; ++j) {
        int8_t weight = 0;
        if (output + j < num_out) weight = w(output + j, num_in);
        shaped_w_[shaped_index++] = weight;
      }
      output += num_outputs_per_register_set;
    }
  }
}
    
    
    {  // Dump all paths through the ratings matrix (which is normally small).
  int dim = werd_res->ratings->dimension();
  const BLOB_CHOICE** blob_choices = new const BLOB_CHOICE*[dim];
  PrintMatrixPaths(0, dim, *werd_res->ratings, 0, blob_choices,
                   unicharset, label, output_file);
  delete [] blob_choices;
}
    
    bool read_unlv_file(                    //print list of sides
                     STRING name,        //basename of file
                     int32_t xsize,        //image size
                     int32_t ysize,        //image size
                     BLOCK_LIST *blocks  //output list
                    ) {
  FILE *pdfp;                    //file pointer
  BLOCK *block;                  //current block
  int x;                         //current top-down coords
  int y;
  int width;                     //of current block
  int height;
  BLOCK_IT block_it = blocks;    //block iterator
    }
    
      // Accessors.
  int total_cost() const {
    return total_cost_;
  }
  int Pathlength() const {
    return total_steps_;
  }
  const DPPoint* best_prev() const {
    return best_prev_;
  }
  void AddLocalCost(int new_cost) {
    local_cost_ += new_cost;
  }
    
      // Helper counts the number of adjacent cached neighbour documents_ of index
  // looking in direction dir, ie index+dir, index+2*dir etc.
  int CountNeighbourDocs(int index, int dir);
    
    /**********************************************************************
 * ROW::recalc_bounding_box
 *
 * Set the bounding box correctly
 **********************************************************************/
    
    #include 'otsuthr.h'
    
    /**
 * enum of the elements of the page hierarchy, used in ResultIterator
 * to provide functions that operate on each level without having to
 * have 5x as many functions.
*/
enum PageIteratorLevel {
  RIL_BLOCK,     // Block of text/image/separator line.
  RIL_PARA,      // Paragraph within a block.
  RIL_TEXTLINE,  // Line within a paragraph.
  RIL_WORD,      // Word within a textline.
  RIL_SYMBOL     // Symbol/character within a word.
};
    
            void DoneWithCurrentMinibatch()
        {
            for (auto& x : m_cachedGradient)
            {
                const wstring& name  = x.first;
                auto& accumulategrad = m_cachedGradient.GetInputMatrix<ElemType>(name);
    }
    }
    
    template<> inline
dnnError_t dnnPoolingCreateBackward<double>(
    dnnPrimitive_t* pPooling,
    dnnPrimitiveAttributes_t attributes,
    dnnAlgorithm_t op,
    const dnnLayout_t srcLayout,
    const size_t kernelSize[],
    const size_t kernelStride[],
    const int inputOffset[],
    const dnnBorder_t border_type)
{
    return dnnPoolingCreateBackward_F64(
        pPooling,
        attributes,
        op,
        srcLayout,
        kernelSize,
        kernelStride,
        inputOffset,
        border_type);
}
    
        InvalidateCompiledNetwork();
    
                SimpleDistGradAggregator<ElemType> distGradAgg(m_mpi, false /*useAsyncAggregation*/, m_net->GetDeviceId(), 0 /*syncStatsTrace*/);
    
    // ===========================================================================
// DoExportToDbn() - implements CNTK 'exportdbn' command
// ===========================================================================
    
    // understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental CNTK integration
    
        void SetExistingModelAsDefault(string modelName)
    {
        auto found = m_mapNameToNetNdl.find(modelName);
        if (found == m_mapNameToNetNdl.end())
            RuntimeError('Model %s does not exist. Cannot set it to default.', modelName.c_str());
        else
            m_netNdlDefault = &found->second;
    }
    
    // If the Tracing flag is set, print out a timestamp with no new line at the end
#define PREPENDTS(stream) \
    do \
    { \
        if (ProgressTracing::GetTimestampingFlag()) \
        { \
            char mbstr[30]; \
            fprintf(stream, '%s: ', ProgressTracing::Timestamp(mbstr));  \
        } \
    } while(0)
    
    
    
    
    
    
    
    
    {				if (i == (e_count >> 1))
				{
					m_middle = body;
				}
				prevBody = body;
			}
    
    
    {		if (m_stepCount % 60 == 0)
		{
			Launch();
		}
	}