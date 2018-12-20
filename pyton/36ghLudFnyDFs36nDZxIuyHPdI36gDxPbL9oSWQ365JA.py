
        
        rates_train = nparray_and_transpose(rates_train)
rates_valid = nparray_and_transpose(rates_valid)
spikes_train = nparray_and_transpose(spikes_train)
spikes_valid = nparray_and_transpose(spikes_valid)
    
        sys.stderr.write('Recovering checkpoint %s\n' % ckpt_file)
    sess = tf.Session(config=tf.ConfigProto(allow_soft_placement=True))
    sess.run('save/restore_all', {'save/Const:0': ckpt_file})
    sess.run(t['states_init'])
    
      def _convert_word_to_char_ids(self, word):
    code = np.zeros([self.max_word_length], dtype=np.int32)
    code[:] = ord(self.pad_char)
    
      return word_to_id
    
    '''Losses for Generator and Discriminator.'''
    
    
# TODO(adai): IMDB labels placeholder to model.
def create_generator(hparams,
                     inputs,
                     targets,
                     present,
                     is_training,
                     is_validating,
                     reuse=None):
  '''Create the Generator model specified by the FLAGS and hparams.
    
        ## Calculate the Advantages, A(s,a) = Q(s,a) - \hat{V}(s).
    advantages = []
    for t in xrange(FLAGS.sequence_length):
      log_probability = log_probs_list[t]
      cum_advantage = tf.zeros(shape=[FLAGS.batch_size / 2])
    
        proc.sendline(u'ehco test')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
      * dynamodb
'''
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
    from scrapy.utils.spider import iter_spider_classes
from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
from scrapy.utils.conf import arglist_to_dict
from scrapy.utils.python import without_none_values
    
        def post_process(self, output):
        for x in output:
            if isinstance(x, (BaseItem, dict)):
                for arg in self.args:
                    if not arg in x:
                        raise ContractFail(''%s' field is missing' % arg)

    
            fn = os.path.join(current_path, 'appids.txt')
        self.public_appid = RandomGetSlice(fn, 60)
    
            # remove old cert first
        xlog.info('Removing old cert in database $HOME/.pki/nssdb')
        cmd_line = 'certutil -L -d sql:$HOME/.pki/nssdb |grep 'GoAgent' && certutil -d sql:$HOME/.pki/nssdb -D -n '%s' ' % ( common_name)
        os.system(cmd_line)
    
        if prober.nat_type in ('cone', 'restricted'):
        usable = 'usable'
    elif prober.nat_type == 'offline':
        usable = 'unusable'
    else:
        usable = 'unknown'
    
            ## What character index in the stream did the current token start at?
        # Needed, for example, to get the text for current token.  Set at
        # the start of nextToken.
        self.tokenStartCharIndex = -1
    
            self.download(output_dir = output_dir, 
                    merge = merge, 
                    info_only = info_only, **kwargs)
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        mime, ext, size = url_info(real_url)
    
        vids = matchall(content, iqiyi_embed_patterns)
    for vid in vids:
        found = True
        iqiyi_download_by_vid((vid[1], vid[0]), title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge = merge, headers = headers)
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
        print('Generating e that is relatively prime to (p - 1) * (q - 1)...')
    while True:
        e = random.randrange(2 ** (keySize - 1), 2 ** (keySize))
        if cryptoMath.gcd(e, (p - 1) * (q - 1)) == 1:
            break
    
            return new_key

    
    def get_initial_centroids(data, k, seed=None):
    '''Randomly choose k data points as initial centroids'''
    if seed is not None: # useful for obtaining consistent results
        np.random.seed(seed)
    n = data.shape[0] # number of data points
        
    # Pick K indices from range [0, N).
    rand_indices = np.random.randint(0, n, k)
    
    # Keep centroids as dense format, as many entries will be nonzero due to averaging.
    # As long as at least one document in a cluster contains a word,
    # it will carry a nonzero weight in the TF-IDF vector of the centroid.
    centroids = data[rand_indices,:]
    
    return centroids
    
    def loadDictionary():
    path = os.path.split(os.path.realpath(__file__))
    dictionaryFile = open(path[0] + '/Dictionary.txt')
    englishWords = {}
    for word in dictionaryFile.read().split('\n'):
        englishWords[word] = None
    dictionaryFile.close()
    return englishWords