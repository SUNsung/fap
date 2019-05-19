
        
            # Then we cluster the lines together as blocks
    # Each block represents a collection of lines that should be sorted
    # This was done by assuming only links ([...](...)) are meant to be sorted
    # Clustering is done by indentation
    blocks = []
    last_indent = None
    for line in read_me:
        s_line = line.lstrip()
        indent = len(line) - len(s_line)
    
    from twisted import version as _txv
twisted_version = (_txv.major, _txv.minor, _txv.micro)
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
        def syntax(self):
        return '[-v]'
    
        try:
        # XXX: this try-except is not needed in Twisted 17.0.0+ because
        # it requires pyOpenSSL 0.16+.
        from OpenSSL.SSL import SSL_CB_HANDSHAKE_DONE, SSL_CB_HANDSHAKE_START
    except ImportError:
        SSL_CB_HANDSHAKE_START = 0x10
        SSL_CB_HANDSHAKE_DONE = 0x20
    
        def __call__(self, text, **kargs):
        words = jieba.tokenize(text, mode='search')
        token = Token()
        for (w, start_pos, stop_pos) in words:
            if not accepted_chars.match(w) and len(w) <= 1:
                continue
            token.original = token.text = w
            token.pos = start_pos
            token.startchar = start_pos
            token.endchar = stop_pos
            yield token
    
    Force_Split_Words = set([])
def load_model():
    start_p = pickle.load(get_module_res('finalseg', PROB_START_P))
    trans_p = pickle.load(get_module_res('finalseg', PROB_TRANS_P))
    emit_p = pickle.load(get_module_res('finalseg', PROB_EMIT_P))
    return start_p, trans_p, emit_p
    
    tags = jieba.analyse.extract_tags(content, topK=topK)
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
parser.add_option('-w', dest='withWeight')
opt, args = parser.parse_args()
    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)
    
    USAGE ='usage:    python extract_tags.py [file name] -k [top k]'
    
    url = sys.argv[1]
content = open(url,'rb').read()
t1 = time.time()
words = list(pseg.cut(content))