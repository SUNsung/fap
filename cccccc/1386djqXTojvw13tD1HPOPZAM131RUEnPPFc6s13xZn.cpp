
        
        namespace internal {
    }
    
     private:
  std::vector<TestPartResult> array_;
    
    #define ASSERT_STREQ(expected, actual) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTREQ, expected, actual)
#define ASSERT_STRNE(s1, s2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTRNE, s1, s2)
#define ASSERT_STRCASEEQ(expected, actual) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASEEQ, expected, actual)
#define ASSERT_STRCASENE(s1, s2)\
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASENE, s1, s2)
    
    #if GTEST_HAS_EXCEPTIONS
# include <stdexcept>
#endif
    
    template <GTEST_TEMPLATE_ T1, GTEST_TEMPLATE_ T2, GTEST_TEMPLATE_ T3,
    GTEST_TEMPLATE_ T4, GTEST_TEMPLATE_ T5, GTEST_TEMPLATE_ T6,
    GTEST_TEMPLATE_ T7, GTEST_TEMPLATE_ T8, GTEST_TEMPLATE_ T9,
    GTEST_TEMPLATE_ T10, GTEST_TEMPLATE_ T11, GTEST_TEMPLATE_ T12,
    GTEST_TEMPLATE_ T13, GTEST_TEMPLATE_ T14, GTEST_TEMPLATE_ T15>
struct Templates15 {
  typedef TemplateSel<T1> Head;
  typedef Templates14<T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14,
      T15> Tail;
};
    
    TEST(ListenersTest, DoesNotLeak) {
  Water* water = new Water;
  delete water;
}
    
    
    {			PathCombine(userConEmuCfgPath, userConfigDirPath, L'ConEmu-%COMPUTERNAME%.xml');
			ExpandEnvironmentStrings(userConEmuCfgPath, userConEmuCfgPath, sizeof(userConEmuCfgPath) / sizeof(userConEmuCfgPath[0]));
		}
	}
	else if (PathFileExists(userCfgPath)) // config/user_conemu.xml exists, use it. 
	{
		if (cfgRoot.length() == 0) // '/c [path]' was NOT specified
		{
			if (PathFileExists(cfgPath)) // vendor/conemu-maximus5/ConEmu.xml exists, copy vendor/conemu-maximus5/ConEmu.xml to config/user_conemu.xml.
			{
				if (!CopyFile(cfgPath, userCfgPath, FALSE))
				{
					MessageBox(NULL,
						(GetLastError() == ERROR_ACCESS_DENIED)
						? L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml! Access Denied.'
						: L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml!', MB_TITLE, MB_ICONSTOP);
					exit(1);
				}
			}
			else // vendor/conemu-maximus5/ConEmu.xml does not exist, copy config/user-conemu.xml to vendor/conemu-maximus5/ConEmu.xml
			{
				if (!CopyFile(userCfgPath, cfgPath, FALSE))
				{
					MessageBox(NULL,
						(GetLastError() == ERROR_ACCESS_DENIED)
						? L'Failed to copy config/user-conemu.xml file to vendor/conemu-maximus5/ConEmu.xml! Access Denied.'
						: L'Failed to copy config/user-conemu.xml file to vendor/conemu-maximus5/ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
					exit(1);
				}
			}
		}
		else // '/c [path]' was specified, don't copy anything and use existing user_conemu.xml to start comemu.
		{
			PathCombine(userConEmuCfgPath, userConfigDirPath, L'user-ConEmu.xml');
		}
	}
	else if (cfgRoot.length() == 0) // '/c [path]' was NOT specified 
	{
		if (PathFileExists(cfgPath)) // vendor/conemu-maximus5/ConEmu.xml exists, copy vendor/conemu-maximus5/ConEmu.xml to config/user_conemu.xml
		{
			if (!CopyFile(cfgPath, userCfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml! Access Denied.'
					: L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
			else // vendor/ConEmu.xml.default config exists, copy Cmder vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml.
			{
				if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
				{
					MessageBox(NULL,
						(GetLastError() == ERROR_ACCESS_DENIED)
						? L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml! Access Denied.'
						: L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
					exit(1);
				}
			}
		}
		else {
			if (!CopyFile(defaultCfgPath, cfgPath, FALSE))
			{
				MessageBox(NULL,
					(GetLastError() == ERROR_ACCESS_DENIED)
					? L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml! Access Denied.'
					: L'Failed to copy vendor/ConEmu.xml.default file to vendor/conemu-maximus5/ConEmu.xml!', MB_TITLE, MB_ICONSTOP);
				exit(1);
			}
		}
	}
	else if (PathFileExists(cfgPath)) // vendor/conemu-maximus5/ConEmu.xml exists, copy vendor/conemu-maximus5/ConEmu.xml to config/user_conemu.xml
	{
		if (!CopyFile(cfgPath, userCfgPath, FALSE))
		{
			MessageBox(NULL,
				(GetLastError() == ERROR_ACCESS_DENIED)
				? L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml! Access Denied.'
				: L'Failed to copy vendor/conemu-maximus5/ConEmu.xml file to config/user-conemu.xml!', MB_TITLE, MB_ICONSTOP);
			exit(1);
		}
    
    
    {  state->transform(x0, y0, x1, y1);
  *x1 += tx;
  *y1 += ty;
  if (rotate == 90) {
    t = *x1;
    *x1 = -*y1;
    *y1 = t;
  } else if (rotate == 180) {
    *x1 = -*x1;
    *y1 = -*y1;
  } else if (rotate == 270) {
    t = *x1;
    *x1 = *y1;
    *y1 = -t;
  }
  *x1 *= xScale;
  *y1 *= yScale;
}
    
    private:
    
      pageObj.initDict(pageDict);
  pageRef = pageRefA;
    
    #include 'goo/gtypes.h'
#include 'goo/GooList.h'
#include 'goo/GooString.h'
#include 'Object.h'
    
    #ifdef USE_GCC_PRAGMAS
#pragma implementation
#endif
    
    Stream *Parser::makeStream(Object *dict, Guchar *fileKey,
			   CryptAlgorithm encAlgorithm, int keyLength,
			   int objNum, int objGen, std::set<int> *fetchOriginatorNums) {
  Object obj;
  BaseStream *baseStr;
  Stream *str;
  Guint pos, endPos, length;
    }
    
      // Get stream.
  Stream *getStream() { return lexer->getStream(); }
    
    
    {  PDFDoc *doc;
};
    
    Sound *Sound::parseSound(Object *obj)
{
  // let's try to see if this Object is a Sound, according to the PDF specs
  // (section 9.2)
  Stream *str = NULL;
  // the Object must be a Stream
  if (obj->isStream()) {
    str = obj->getStream();
  } else {
    return NULL;
  }
  // the Stream must have a Dict
  Dict *dict = str->getDict();
  if (dict == NULL)
    return NULL;
  Object tmp;
  // the Dict must have the 'R' key of type num
  dict->lookup('R', &tmp);
  if (tmp.isNum()) {
    return new Sound(obj);
  } else {
    return NULL;
  }
}
    
    
    
    namespace rocksdb {
    }
    
     private:
  void Init(
      const std::string& lua_script,
      const std::vector<std::shared_ptr<RocksLuaCustomLibrary>>& libraries) {
    if (lua_state_) {
      luaL_openlibs(lua_state_);
      for (const auto& library : libraries) {
        luaL_openlib(lua_state_, library->Name(), library->Lib(), 0);
        library->CustomSetup(lua_state_);
      }
      luaL_dostring(lua_state_, lua_script.c_str());
    }
  }
    
    #ifndef ROCKSDB_LITE
    
      virtual ~OptimisticTransactionDB() {}
    
      // Attempt to acquire lock.  If timeout is non-negative, operation may be
  // failed after this many microseconds.
  // Returns OK on success,
  //         TimedOut if timed out,
  //         or other Status on failure.
  // If returned status is OK, TransactionDB will eventually call UnLock().
  virtual Status TryLockFor(int64_t timeout_time) = 0;