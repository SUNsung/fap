
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def extract_url(self, line):
        '''Extract the generated url from the log line.'''
        pass
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        else:
        try:
            return importlib.import_module(name)
        except ImportError as e:
            if 'No module named' in str(e) and name in str(e):
                pytest.skip('skipping as {} not available'.format(name))
            raise
    
    
def test_frame_mixed_depth_get():
    arrays = [
        ['a', 'top', 'top', 'routine1', 'routine1', 'routine2'],
        ['', 'OD', 'OD', 'result1', 'result2', 'result1'],
        ['', 'wx', 'wy', '', '', ''],
    ]
    
    
def test_hash_keys():
    # Using different hash keys, should have
    # different hashes for the same data.
    #
    # This only matters for object dtypes.
    obj = Series(list('abc'))
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
        def testPosseg_NOHMM(self):
        import jieba.posseg as pseg
        for content in test_contents:
            result = pseg.cut(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Posseg Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Posseg error on content: %s' % content
            print(' , '.join([w.word + ' / ' + w.flag for w in result]), file=sys.stderr)
        print('testPosseg_NOHMM', file=sys.stderr)
    
    USAGE ='usage:    python extract_tags.py [file name] -k [top k]'