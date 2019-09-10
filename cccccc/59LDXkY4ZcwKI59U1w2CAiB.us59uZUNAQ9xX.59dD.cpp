
        
          /// The number of SILVTables entries.
  unsigned NumEntries : 31;
    
    
    {#ifndef NDEBUG
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SourceManager &SM, llvm::raw_ostream &OS = llvm::errs(),
                            unsigned Indent = 0) const,
                  'only for use in the debugger');
  LLVM_ATTRIBUTE_DEPRECATED(void dump(SILModule &Mod) const, 'only for use in the debugger');
#endif
};
    
    #include <stdint.h>
    
      size_t numTrailingObjects(
      typename TrailingObjectsIdentifier::template OverloadToken<SourceLoc>)
      const {
    return asDerived().hasArgumentLabelLocs() ? asDerived().getNumArguments()
                                              : 0;
  }
    
    class PrimarySpecificPaths {
public:
  /// The name of the main output file,
  /// that is, the .o file for this input (or a file specified by -o).
  /// If there is no such file, contains an empty string. If the output
  /// is to be written to stdout, contains '-'.
  std::string OutputFilename;
    }
    
    
    {private Q_SLOTS:
    /* sign message */
    void on_addressBookButton_SM_clicked();
    void on_pasteButton_SM_clicked();
    void on_signMessageButton_SM_clicked();
    void on_copySignatureButton_SM_clicked();
    void on_clearButton_SM_clicked();
    /* verify message */
    void on_addressBookButton_VM_clicked();
    void on_verifyMessageButton_VM_clicked();
    void on_clearButton_VM_clicked();
};
    
    /**
 * An RAII-style reverse lock. Unlocks on construction and locks on destruction.
 */
template<typename Lock>
class reverse_lock
{
public:
    }
    
    
    {    /* d = (a0*2) * a3 */
    'leaq (%%r10,%%r10,1),%%rax\n'
    'mulq %%r13\n'
    'movq %%rax,%%rbx\n'
    'movq %%rdx,%%rcx\n'
    /* d += (a1*2) * a2 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c = a4 * a4 */
    'movq %%r14,%%rax\n'
    'mulq %%r14\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += (c & M) * R */
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* t3 (tmp1) = d & M */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    'movq %%rsi,%q1\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* a4 *= 2 */
    'addq %%r14,%%r14\n'
    /* d += a0 * a4 */
    'movq %%r10,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d+= (a1*2) * a3 */
    'leaq (%%r11,%%r11,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a2 * a2 */
    'movq %%r12,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += c * R */
    'movq %%r8,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* t4 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* tx = t4 >> 48 (tmp3) */
    'movq %%rsi,%%rax\n'
    'shrq $48,%%rax\n'
    'movq %%rax,%q3\n'
    /* t4 &= (M >> 4) (tmp2) */
    'movq $0xffffffffffff,%%rax\n'
    'andq %%rax,%%rsi\n'
    'movq %%rsi,%q2\n'
    /* c = a0 * a0 */
    'movq %%r10,%%rax\n'
    'mulq %%r10\n'
    'movq %%rax,%%r8\n'
    'movq %%rdx,%%r9\n'
    /* d += a1 * a4 */
    'movq %%r11,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += (a2*2) * a3 */
    'leaq (%%r12,%%r12,1),%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* u0 = d & M (%%rsi) */
    'movq %%rbx,%%rsi\n'
    'andq %%r15,%%rsi\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* u0 = (u0 << 4) | tx (%%rsi) */
    'shlq $4,%%rsi\n'
    'movq %q3,%%rax\n'
    'orq %%rax,%%rsi\n'
    /* c += u0 * (R >> 4) */
    'movq $0x1000003d1,%%rax\n'
    'mulq %%rsi\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[0] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,0(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* a0 *= 2 */
    'addq %%r10,%%r10\n'
    /* c += a0 * a1 */
    'movq %%r10,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a2 * a4 */
    'movq %%r12,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* d += a3 * a3 */
    'movq %%r13,%%rax\n'
    'mulq %%r13\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 */
    'shrdq $52,%%rcx,%%rbx\n'
    'xorq %%rcx,%%rcx\n'
    /* r[1] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,8(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += a0 * a2 (last use of %%r10) */
    'movq %%r10,%%rax\n'
    'mulq %%r12\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* fetch t3 (%%r10, overwrites a0),t4 (%%rsi) */
    'movq %q2,%%rsi\n'
    'movq %q1,%%r10\n'
    /* c += a1 * a1 */
    'movq %%r11,%%rax\n'
    'mulq %%r11\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d += a3 * a4 */
    'movq %%r13,%%rax\n'
    'mulq %%r14\n'
    'addq %%rax,%%rbx\n'
    'adcq %%rdx,%%rcx\n'
    /* c += (d & M) * R */
    'movq %%rbx,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* d >>= 52 (%%rbx only) */
    'shrdq $52,%%rcx,%%rbx\n'
    /* r[2] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,16(%%rdi)\n'
    /* c >>= 52 */
    'shrdq $52,%%r9,%%r8\n'
    'xorq %%r9,%%r9\n'
    /* c += t3 */
    'addq %%r10,%%r8\n'
    /* c += d * R */
    'movq %%rbx,%%rax\n'
    'movq $0x1000003d10,%%rdx\n'
    'mulq %%rdx\n'
    'addq %%rax,%%r8\n'
    'adcq %%rdx,%%r9\n'
    /* r[3] = c & M */
    'movq %%r8,%%rax\n'
    'andq %%r15,%%rax\n'
    'movq %%rax,24(%%rdi)\n'
    /* c >>= 52 (%%r8 only) */
    'shrdq $52,%%r9,%%r8\n'
    /* c += t4 (%%r8 only) */
    'addq %%rsi,%%r8\n'
    /* r[4] = c */
    'movq %%r8,32(%%rdi)\n'
: '+S'(a), '=m'(tmp1), '=m'(tmp2), '=m'(tmp3)
: 'D'(r)
: '%rax', '%rbx', '%rcx', '%rdx', '%r8', '%r9', '%r10', '%r11', '%r12', '%r13', '%r14', '%r15', 'cc', 'memory'
);
}
    
        sub	SRND, 1
    jne	loop1
    
    // This test uses a custom Env to keep track of the state of a filesystem as of
// the last 'sync'. It then checks for data loss errors by purposely dropping
// file data (or entire files) not protected by a 'sync'.
    
    std::string TempFileName(const std::string& dbname, uint64_t number) {
  assert(number > 0);
  return MakeFileName(dbname, number, 'dbtmp');
}
    
    namespace leveldb {
namespace log {
    }
    }
    
    
    {  switch (mode) {
  case psModePSOrigPageSizes:
    prevWidth = 0;
    prevHeight = 0;
  case psModePS:
    writePSFmt('%%DocumentMedia: plain {0:d} {1:d} 0 () ()\n',
	       paperWidth, paperHeight);
    writePSFmt('%%BoundingBox: 0 0 {0:d} {1:d}\n', paperWidth, paperHeight);
    writePSFmt('%%Pages: {0:d}\n', lastPage - firstPage + 1);
    writePS('%%EndComments\n');
    writePS('%%BeginDefaults\n');
    writePS('%%PageMedia: plain\n');
    writePS('%%EndDefaults\n');
    break;
  case psModeEPS:
    epsX1 = cropBox->x1;
    epsY1 = cropBox->y1;
    epsX2 = cropBox->x2;
    epsY2 = cropBox->y2;
    if (pageRotate == 0 || pageRotate == 180) {
      x1 = epsX1;
      y1 = epsY1;
      x2 = epsX2;
      y2 = epsY2;
    } else { // pageRotate == 90 || pageRotate == 270
      x1 = 0;
      y1 = 0;
      x2 = epsY2 - epsY1;
      y2 = epsX2 - epsX1;
    }
    writePSFmt('%%BoundingBox: {0:d} {1:d} {2:d} {3:d}\n',
	       (int)floor(x1), (int)floor(y1), (int)ceil(x2), (int)ceil(y2));
    if (floor(x1) != ceil(x1) || floor(y1) != ceil(y1) ||
	floor(x2) != ceil(x2) || floor(y2) != ceil(y2)) {
      writePSFmt('%%HiResBoundingBox: {0:.6g} {1:.6g} {2:.6g} {3:.6g}\n',
		 x1, y1, x2, y2);
    }
    writePS('%%DocumentSuppliedResources: (atend)\n');
    writePS('%%EndComments\n');
    break;
  case psModeForm:
    writePS('%%EndComments\n');
    writePS('32 dict dup begin\n');
    writePSFmt('/BBox [{0:d} {1:d} {2:d} {3:d}] def\n',
	       (int)floor(mediaBox->x1), (int)floor(mediaBox->y1),
	       (int)ceil(mediaBox->x2), (int)ceil(mediaBox->y2));
    writePS('/FormType 1 def\n');
    writePS('/Matrix [1 0 0 1 0 0] def\n');
    break;
  }
}
    
      Ref *fontIDs;			// list of object IDs of all used fonts
  int fontIDLen;		// number of entries in fontIDs array
  int fontIDSize;		// size of fontIDs array
  Ref *fontFileIDs;		// list of object IDs of all embedded fonts
  int fontFileIDLen;		// number of entries in fontFileIDs array
  int fontFileIDSize;		// size of fontFileIDs array
  GooString **fontFileNames;	// list of names of all embedded external fonts
  GooString **psFileNames;	// list of names of all embedded external fonts
  int fontFileNameLen;		// number of entries in fontFileNames array
  int fontFileNameSize;		// size of fontFileNames array
  int nextTrueTypeNum;		// next unique number to append to a TrueType
				//   font name
  PSFont8Info *font8Info;	// info for 8-bit fonts
  int font8InfoLen;		// number of entries in font8Info array
  int font8InfoSize;		// size of font8Info array
  PSFont16Enc *font16Enc;	// encodings for substitute 16-bit fonts
  int font16EncLen;		// number of entries in font16Enc array
  int font16EncSize;		// size of font16Enc array
  Ref *imgIDs;			// list of image IDs for in-memory images
  int imgIDLen;			// number of entries in imgIDs array
  int imgIDSize;		// size of imgIDs array
  Ref *formIDs;			// list of IDs for predefined forms
  int formIDLen;		// number of entries in formIDs array
  int formIDSize;		// size of formIDs array
  GooList *xobjStack;		// stack of XObject dicts currently being
				//   processed
  int numSaves;			// current number of gsaves
  int numTilingPatterns;	// current number of nested tiling patterns
  int nextFunc;			// next unique number to use for a function
    
      // Destructor.
  ~PageAttrs();
    
      // Get type
  PageTransitionType getType() { return type; }
    
      if (*keys[0] == key) {
    return items[0];
  }
  for (int i = 1; i <= lastValidCacheIndex; i++) {
    if (*keys[i] == key) {
      PopplerCacheKey *keyHit = keys[i];
      PopplerCacheItem *itemHit = items[i];
    }
    }
    
      if (obj->dictLookup('C', &tmp)->isBool()) {
    showControls = tmp.getBool();
  }
  tmp.free();
    
    #ifdef USE_GCC_PRAGMAS
#pragma interface
#endif
    
    template class CosDistanceNode<float>;
template class CosDistanceNode<double>;
template class CosDistanceNode<half>;
    
                fstream.GetMarker(FileMarker::fileMarkerBeginSection, L'BOptions');
            fstream >> m_resetSGDMomentumAfterAggregation;
            fstream.GetMarker(FileMarker::fileMarkerEndSection, L'EOptions');
    
    public:
    // constructors that take a config name
    NDLScript(const std::string& configname)
        : ConfigParser(';', configname)
    {
        m_macroNode = NULL;
        m_noDefinitions = false;
        m_definingMacro = false;
    }
    NDLScript(const std::wstring& configname)
        : ConfigParser(';', configname)
    {
        m_macroNode = NULL;
        m_noDefinitions = false;
        m_definingMacro = false;
    }
    ~NDLScript()
    {
        // need to free all the child nodes attached to this script node
        for (NDLNode<ElemType>* node : m_children)
            delete node;
        m_children.clear();
    }
    
        // full parameter Init routine
    void Init(const intargvector& layerSizes, const TrainingCriterion trainCriterion, const EvalCriterion evalCriterion,
              DEVICEID_TYPE deviceId,
              int outputLayerSize = -1,
              const stringargvector nonLinearFunctions = L'Sigmoid',
              const bool addDropoutNodes = false,
              const bool uniformInit = true, const ElemType initValueScale = 1.0f,
              const bool applyMeanVarNorm = false, bool needPrior = false)
    {
        m_deviceId = deviceId;
        m_net = make_shared<ComputationNetwork>(m_deviceId);
    }
    
    private:
    // pool for matrices that can be shared across nodes
    // TODO: does this apply to anything else besides temporary node-internal intermediate results? What, for example?
    MatrixPool m_matrixPool;
    
            '   Wcidc = DiagTimes(Wci, dc);\n'
        '   it = Sigmoid(Plus(G1, Wcidc));\n'
    
      Location m_loc;
  std::vector<Location::Range> m_funcLocs;
  std::vector<bool> m_classes; // used to determine if we are currently
                               // inside a regular class or an XHP class
    
      // Note: non-const iteration is not allowed, since we don't want to allocate
  // a map on accident.
  const_iterator begin() const  { return map().begin(); }
  const_iterator end() const    { return map().end(); }
  const_iterator cbegin() const { return map().cbegin(); }
  const_iterator cend() const   { return map().cend(); }
    
    #include 'hphp/util/mutex.h'
#include <pthread.h>
    
    void APCGCManager::insert(Allocation r, APCHandle* root) {
  WriteLock l2(rootMapLock);
  FTRACE(4, 'Insert {} {} with root {}\n',
                            (void*)r.first, (void*)r.second, (void*)root);
  rootMap.emplace(r, root);
}
    
      /*
   * Replace the instruction in-place with a Nop.
   *
   * This is less general than become(), but it is fairly common, and doesn't
   * require access to an IRUnit.
   */
  void convertToNop();