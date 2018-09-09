
        
        private:
    PlatformStyle(const QString &name, bool imagesOnButtons, bool colorizeIcons, bool useExtraSpacing);
    
    static void initJsonEscape()
{
    // Escape all lower control characters (some get overridden with smaller sequences below)
    for (int ch=0x00; ch<0x20; ++ch) {
        char tmpbuf[20];
        snprintf(tmpbuf, sizeof(tmpbuf), '\\u%04x', ch);
        escapes[ch] = std::string(tmpbuf);
    }
    }