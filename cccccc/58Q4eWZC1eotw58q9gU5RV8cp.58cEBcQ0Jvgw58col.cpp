
        
        OPENEXR_IMF_INTERNAL_NAMESPACE_HEADER_ENTER
    
        int magic;
    
        if (usesLongNames (header))
        version |= LONG_NAMES_FLAG;
    
    
void
InputPart::rawTileData (int &dx, int &dy, int &lx, int &ly,
             const char *&pixelData, int &pixelDataSize)
{
    file->rawTileData(dx, dy, lx, ly, pixelData, pixelDataSize);
}
    
    #endif // CAFFE2_CORE_NET_ASYNC_SCHEDULING_H_

    
    
    {  std::vector<OperatorDef> GetGradientDefs() override {
    return SingleGradientDef(
        'SubGradient',
        '',
        std::vector<std::string>{GO(0), I(0), I(1)},
        std::vector<std::string>{GI(0), GI(1)});
  }
};
    
    template <>
template <typename T>
bool EnforceFiniteOp<CPUContext>::DoRunWithType() {
  EnforceOnCPU<T>(Input(0));
  return true;
}
    
    template <>
void GluOp<float, CPUContext>::ComputeGlu(
    const int M,
    const int split_dim,
    const int N,
    const float* Xdata,
    float* Ydata) {
  const int xStride = 2 * split_dim * N;
  const int yStride = split_dim * N;
  for (int i = 0; i < M; ++i) {
    const int idx = i * xStride;
    const int idy = i * yStride;
    for (int j = 0; j < split_dim; ++j) {
      const int jN = j * N;
      const int jdx1 = idx + jN;
      const int jdx2 = idx + (j + split_dim) * N;
      const int jdy = idy + jN;
      for (int k = 0; k < N; ++k) {
        const float x1 = Xdata[jdx1 + k];
        const float x2 = Xdata[jdx2 + k];
        Ydata[jdy + k] = x1 * sigmoid(x2);
      }
    }
  }
}
    
    
    {		texture->create((int)texture_size.width, (int)texture_size.height, Image::FORMAT_RGBA8, Texture::FLAG_FILTER | Texture::FLAG_VIDEO_SURFACE);
	}
    
    	void add_polygon(const Vector<int> &p_polygon);
	int get_polygon_count() const;
	Vector<int> get_polygon(int p_idx);
	void clear_polygons();
    
    template <typename T>
struct HashMapComparatorDefault {
	static bool compare(const T &p_lhs, const T &p_rhs) {
		return p_lhs == p_rhs;
	}
    }
    
    	GDCLASS(AudioStreamEditorPlugin, EditorPlugin);
    
    	void _regen_face_aabbs();
	//create a brush from faces
	void build_from_faces(const PoolVector<Vector3> &p_vertices, const PoolVector<Vector2> &p_uvs, const PoolVector<bool> &p_smooth, const PoolVector<Ref<Material> > &p_materials, const PoolVector<bool> &p_invert_faces);
	void copy_from(const CSGBrush &p_brush, const Transform &p_xform);
    
    VARIANT_ENUM_CAST(UPNP::UPNPResult)
    
    #include 'power_android.h'
    
    #include 'core/os/semaphore.h'
    
    typedef std::pair<std::wstring, std::wstring> optpair;
    
    static jmp_buf buf;
    
      // convert it to a CID type2 font
  if ((ffTT = FoFiTrueType::load(fileName->getCString(), faceIndex))) {
      int n = ((GfxCIDFont *)font)->getCIDToGIDLen();
      if (n) {
	codeToGID = (Gushort *)gmallocn(n, sizeof(Gushort));
	memcpy(codeToGID, ((GfxCIDFont *)font)->getCIDToGID(), n * sizeof(Gushort));
      } else {
	codeToGID = ((GfxCIDFont *)font)->getCodeToGIDMap(ffTT, &n);
      }
      if (globalParams->getPSLevel() >= psLevel3) {
	// Level 3: use a CID font
	ffTT->convertToCIDType2(psName->getCString(),
				codeToGID, n, gTrue,
				outputFunc, outputStream);
      } else {
	// otherwise: use a non-CID composite font
	ffTT->convertToType0(psName->getCString(),
			     codeToGID, n, gTrue,
			     outputFunc, outputStream);
      }
      gfree(codeToGID);
      delete ffTT;
  }
    
    void PSTokenizer::consumeChar() {
  charBuf = -1;
}
    
      dict = fetched_thumb.streamGetDict();
  str = fetched_thumb.getStream(); 
		
  if (!dict->lookupInt('Width', 'W', &width))
    goto fail1;
  if (!dict->lookupInt('Height', 'H', &height))
    goto fail1;
  if (!dict->lookupInt('BitsPerComponent', 'BPC', &bits))
    goto fail1;
		
  /* Check for invalid dimensions and integer overflow. */
  if (width <= 0 || height <= 0)
    goto fail1;
  if (width > INT_MAX / 3 / height)
    goto fail1;
  pixbufdatasize = width * height * 3;
    
      // skip over stream data
  if (Lexer::LOOK_VALUE_NOT_CACHED != lexer->lookCharLastValueCached) {
      // take into account the fact that we've cached one value
      pos = pos - 1;
      lexer->lookCharLastValueCached = Lexer::LOOK_VALUE_NOT_CACHED;
  }
  lexer->setPos(pos + length);
    
    class PopplerObjectCache
{
  public:
    PopplerObjectCache (int cacheSizeA, XRef *xrefA);
    ~PopplerObjectCache();
    }
    
    void
ProfileData::addElement (double elapsed) {
	if (count == 0) {
		min = elapsed;
		max = elapsed;
	} else {
		if (elapsed < min)
			min = elapsed;
		if (elapsed > max)
			max = elapsed;
	}
	total += elapsed;
	count ++;
}
    
      // Constructor.
  ProfileData ();
    
    
    {  // if it's not embedded
  GooString* fileName;
};
    
    Sound *Sound::copy()
{
  Sound *newsound = new Sound(streamObj, false);
    }
    
    
    {#ifdef SPLASH_CMYK
  if (cm == splashModeCMYK8) {
    SplashColor rgbSrc;
    SplashColor rgbDest;
    SplashColor rgbBlend;
    cmykToRGB(src, rgbSrc);
    cmykToRGB(dest, rgbDest);
    for (i = 0; i < 3; ++i) {
      rgbBlend[i] = rgbDest[i] > rgbSrc[i] ? rgbDest[i] : rgbSrc[i];
    }
    rgbToCMYK(rgbBlend, blend);
  } else
#endif
  {
    for (i = 0; i < splashColorModeNComps[cm]; ++i) {
      blend[i] = dest[i] > src[i] ? dest[i] : src[i];
    }
  }
}
    
      //----- Type 3 font operators
  virtual void type3D0(GfxState *state, double wx, double wy);
  virtual void type3D1(GfxState *state, double wx, double wy,
		       double llx, double lly, double urx, double ury);
    
        files_to_carve_dir_ = working_dir_ / 'files_to_carve';
    fs::create_directories(files_to_carve_dir_);
    
      // Apply the shard, platform, and version checking.
  // It is important to set each value such that the packs meta-table can report
  // each of the restrictions.
  if ((shard_ > 0 && shard_ < getMachineShard()) || !checkPlatform() ||
      !checkVersion()) {
    return;
  }
    
    // several restrictions (version, platform, shard)
JSON getRestrictedPack() {
  auto doc = getExamplePacksConfig();
  return JSON::newFromValue(doc.doc()['packs']['restricted_pack']);
}
    
    // Get an example generate config with one static source name to JSON content.
std::map<std::string, std::string> getTestConfigMap(const std::string& file);
    
    ExpectedSuccess<DatabaseError> Database::putInt32(const std::string& domain,
                                                  const std::string& key,
                                                  const int32_t value) {
  std::string buffer = std::to_string(value);
  return putString(domain, key, buffer);
}
    
    bool Flag::isDefault(const std::string& name) {
  flags::CommandLineFlagInfo info;
  if (!flags::GetCommandLineFlagInfo(name.c_str(), &info)) {
    return false;
  }
    }
    
    
    {  name_ = name;
}
    
    
    {} // namespace osquery

    
    TEST_F(RocksdbDatabaseTest, test_destroy) {
  auto db = std::make_unique<RocksdbDatabase>('test', path_);
  ASSERT_TRUE(db->open());
  EXPECT_TRUE(db->putInt32(kPersistentSettings, 'key', 10));
  db->close();
  auto result = db->destroyDB();
  EXPECT_TRUE(result);
  EXPECT_TRUE(db->open());
  auto get_result = db->getInt32(kPersistentSettings, 'key');
  EXPECT_FALSE(get_result);
  EXPECT_EQ(get_result.getError(), DatabaseError::KeyNotFound);
}