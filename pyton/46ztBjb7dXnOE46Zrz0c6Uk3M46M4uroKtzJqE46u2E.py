
        
            lowPrimes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
                 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127,
                 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191,
                 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
                 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331,
                 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401,
                 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467,
                 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563,
                 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631,
                 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709,
                 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797,
                 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877,
                 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967,
                 971, 977, 983, 991, 997]
    
    	if len(sys.argv) == 1:
		try:
			n = int(raw_input('Enter a number: '))
			print(partition(n))
		except ValueError:
			print('Please enter a number.')
	else:
		try:
			n = int(sys.argv[1])
			print(partition(n))
		except ValueError:
			print('Please pass a number.')
    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
    
if __name__ == '__main__':
    whole_array = input('please input some numbers:')
    array = SubArray(whole_array)
    re = array.solve_sub_array()
    print(('the results is:', re))
    
    
def b_expo(a, b):
    res = 0
    while b > 0:
        if b&1:
            res += a
    
        freqOrder = []
    for freqPair in freqPairs:
        freqOrder.append(freqPair[1])
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            self._download_http = httpdownloadhandler(settings).download_request
    
    
class DefaultHeadersMiddleware(object):
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        if temperature_unit != ha_unit:
        temperature = convert_temperature(
            temperature, temperature_unit, ha_unit)
    
        meters = value
    
    
class GroupTagValueNotFound(Exception):
    pass

    
            # Deleting model 'GroupTagKey'
        db.delete_table(u'tagstore_grouptagkey')
    
    import logging
    
    logger = logging.getLogger('sentry.scheduler')
    
    
class BufferFull(UnpackException):
    pass
    
    
def fetch(version):
    base = 'http://wheels.scipy.org'
    tree = html.parse(base)
    root = tree.getroot()
    
    
@pytest.mark.parametrize('key_strs,groupers', [
    ('inner',  # Index name
     pd.Grouper(level='inner')
     ),
    (['inner'],  # List of index name
     [pd.Grouper(level='inner')]
     ),
    (['B', 'inner'],  # Column and index
     ['B', pd.Grouper(level='inner')]
     ),
    (['inner', 'B'],  # Index and column
     [pd.Grouper(level='inner'), 'B'])])
def test_grouper_index_level_as_string(frame, key_strs, groupers):
    result = frame.groupby(key_strs).mean()
    expected = frame.groupby(groupers).mean()
    assert_frame_equal(result, expected)
    
        if seed_nans:
        frame.loc[1::11, '1st'] = np.nan
        frame.loc[3::17, '2nd'] = np.nan
        frame.loc[7::19, '3rd'] = np.nan
        frame.loc[8::19, '3rd'] = np.nan
        frame.loc[9::19, '3rd'] = np.nan
    
        drop_right = [n for n in right_levels if n not in right_on]
    if drop_right:
        df_right = df_right.reset_index(drop_right, drop=True)
    
    
def ChineseAnalyzer(stoplist=STOP_WORDS, minsize=1, stemfn=stem, cachesize=50000):
    return (ChineseTokenizer() | LowercaseFilter() |
            StopFilter(stoplist=stoplist, minsize=minsize) |
            StemFilter(stemfn=stemfn, ignore=None, cachesize=cachesize))

    
    
class TextRank(KeywordExtractor):
    
    
def viterbi(obs, states, start_p, trans_p, emit_p):
    V = [{}]  # tabular
    mem_path = [{}]
    all_states = trans_p.keys()
    for y in states.get(obs[0], all_states):  # init
        V[0][y] = start_p[y] + emit_p[y].get(obs[0], MIN_FLOAT)
        mem_path[0][y] = ''
    for t in xrange(1, len(obs)):
        V.append({})
        mem_path.append({})
        #prev_states = get_top_states(V[t-1])
        prev_states = [
            x for x in mem_path[t - 1].keys() if len(trans_p[x]) > 0]
    
    print('='*40)
print('3. 关键词提取')
print('-'*40)
print(' TF-IDF')
print('-'*40)
    
    if withWeight is True:
    for tag in tags:
        print('tag: %s\t\t weight: %f' % (tag[0],tag[1]))
else:
    print(','.join(tags))

    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)