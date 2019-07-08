
        
        fp.close()

    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    import jieba
import time
import glob
import sys
import os
import random