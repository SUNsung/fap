
        
        namespace tesseract {
    }
    
      // The first paragraph on a page often lacks a first line indent, but should
  // still be modeled by the same model as other body text paragraphs on the
  // page.
  bool is_very_first_or_continuation;
    
      // Cleans up the samples after initial load from the tr files, and prior to
  // saving the MasterTrainer:
  // Remaps fragmented chars if running shape anaylsis.
  // Sets up the samples appropriately for class/fontwise access.
  // Deletes outlier samples.
  void PostLoadCleanup();
    
     private:
  // Computes and returns the noise_density IntGrid, at the same gridsize as
  // this by summing the number of small elements in a 3x3 neighbourhood of
  // each grid cell. good_grid is filled with blobs that are considered most
  // likely good text, and this is filled with small and medium blobs that are
  // more likely non-text.
  // The photo_map is used to bias the decision towards non-text, rather than
  // supplying definite decision.
  IntGrid* ComputeNoiseDensity(bool debug, Pix* photo_map, BlobGrid* good_grid);
    
    void complete_edge(CRACKEDGE *start,  //start of loop
                   C_OUTLINE_IT* outline_it) {
  ScrollView::Color colour;                 //colour to draw in
  int16_t looplength;              //steps in loop
  ICOORD botleft;                //bounding box
  ICOORD topright;
  C_OUTLINE *outline;            //new outline
    }
    
    // allows to write cudaFunction() || 'error'   (CUDA runtime)
static
#ifdef WIN32
    __declspec(noinline)
#endif
        void
        operator||(cudaError_t rc, const char* msg)
{
    if (rc != cudaSuccess)
    {
        char buf[1000];
        sprintf_s(buf, 1000, '%s: %s (cuda error %d)', msg, cudaGetErrorString(rc), rc);
        cudafail(buf);
    }
}
    
        bool useParallelTrain = (m_mpi != nullptr);
    bool useDistributedMBReading = useParallelTrain && m_enableDistributedMBReading && dataReader->SupportsDistributedMBRead();
    size_t totalEpochSize = bnNodes.size() * mbSize * iters;
    
    
    {        // We don't use CreateFromFile() here since the user might specify OutputNodeNames in the config.
        // By not compiling the network before patching, we avoid double log output for validation.
        net = make_shared<ComputationNetwork>(deviceId);
        net->SetTraceLevel(config(L'traceLevel', 0));
        net->Read<ElemType>(modelPath);
        if (outputNodeNames.size() > 0)
            PatchOutputNodes(net, outputNodeNames, outputNodeNamesVector);
        net->CompileNetwork();
    }
    
    public:
    static bool GetTracingFlag()
    {
        return GetStaticInstance().m_tracingFlag;
    }
    
        virtual void ForwardPass(const Values<ElemType>& inputs, Values<ElemType>& output) override;