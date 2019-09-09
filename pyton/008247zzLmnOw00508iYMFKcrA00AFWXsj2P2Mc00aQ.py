
        
        delim = text_type(args.delimiter)
cutall = args.cutall
hmm = args.hmm
fp = open(args.filename, 'r') if args.filename else sys.stdin
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
    Force_Split_Words = set([])
def load_model():
    start_p = pickle.load(get_module_res('finalseg', PROB_START_P))
    trans_p = pickle.load(get_module_res('finalseg', PROB_TRANS_P))
    emit_p = pickle.load(get_module_res('finalseg', PROB_EMIT_P))
    return start_p, trans_p, emit_p
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    tags = jieba.analyse.extract_tags(content, topK=topK)
    
    random.shuffle(docs)
    
    
content = open(file_name,'rb').read()
    
    jieba.enable_parallel()