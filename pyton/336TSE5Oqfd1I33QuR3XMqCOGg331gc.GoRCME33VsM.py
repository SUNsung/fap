
        
            samples_range = np.linspace(10, 2000, 5).astype(np.int)
    features_range = np.linspace(10, 2000, 5).astype(np.int)
    results = compute_bench(samples_range, features_range)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
            for step in xrange(opts.n_steps):
            for it in xrange(opts.n_times):
                time[name][step, it] = bench_sample(sampling_algorithm[name],
                                                      opts.n_population,
                                                      n_samples[step])
    
    ROOT_URL = 'https://api.github.com/repos/scikit-learn/scikit-learn.github.io/contents/'  # noqa
RAW_FMT = 'https://raw.githubusercontent.com/scikit-learn/scikit-learn.github.io/master/%s/documentation.html'  # noqa
VERSION_RE = re.compile(r'\bVERSION:\s*'([^']+)'')
NAMED_DIRS = ['dev', 'stable']
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
    	hexrep = format(i,'08x')
	thing = ''
	for i in [3,2,1,0]:
		thing += hexrep[2*i:2*i+2]
	return thing
    
    def anagram(myword):
    return word_bysig[signature(myword)]