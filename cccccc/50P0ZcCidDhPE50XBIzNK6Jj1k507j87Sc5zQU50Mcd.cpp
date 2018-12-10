
        
        
    {
    {
    {
    {                vst1_s16(dst + x, ls);
            }
            break;
        }
        for (s32 h = 0; h < cn; ++h)
        {
            s32* ln = lane + h;
            s16* dt = dst + h;
            for (size_t k = x; k < colsn; k += cn)
            {
                dt[k] = (s16)((ln[k-2*cn] + ln[k+2*cn] + 4*(ln[k-cn] + ln[k+cn]) + 6*ln[k] + (1<<7))>>8);
            }
        }
    }
#else
    (void)srcBase;
    (void)srcStride;
    (void)dstBase;
    (void)dstStride;
    (void)borderValue;
    (void)borderMargin;
#endif
}
    
    inline float32x2_t vrsqrt_f32(float32x2_t val)
{
    float32x2_t e = vrsqrte_f32(val);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    e = vmul_f32(vrsqrts_f32(vmul_f32(e, e), val), e);
    return e;
}
    
    namespace HPHP { namespace HHBBC {
    }
    }
    
    void Config::ParseIniFile(const std::string &filename, IniSettingMap &ini,
                          const bool constants_only /* = false */,
                          const bool is_system /* = true */ ) {
    std::ifstream ifs(filename);
    std::string str((std::istreambuf_iterator<char>(ifs)),
                    std::istreambuf_iterator<char>());
    std::string with_includes;
    Config::ReplaceIncludesWithIni(filename, str, with_includes);
    Config::SetParsedIni(ini, with_includes, filename, constants_only,
                         is_system);
}
    
    static int get_tempfile_if_not_exists(int ini_fd, char ini_path[]) {
  if (ini_fd == -1) {
#ifdef _MSC_VER
    // MSVC doesn't require the characters to be the last
    // 6 in the string.
    ini_fd = open(mktemp(ini_path), O_RDWR | O_EXCL);
#else
    ini_fd = mkstemps(ini_path, 4); // keep the .ini suffix
#endif
    if (ini_fd == -1) {
      fprintf(stderr, 'Error: unable to open temporary file');
      exit(EXIT_FAILURE);
    }
  }
  return ini_fd;
}
    
    namespace HPHP {
///////////////////////////////////////////////////////////////////////////////
    }
    
    #endif // incl_HPHP_OUTPUT_FILE_H_

    
    
    {  logAHMSubMapWarning(mapName);
}