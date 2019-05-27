
        
        # TODO: ensure that history changes.

    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
            next_prime_gt = next_prime(value % self.size_table) \
            if not check_prime(value % self.size_table) else value % self.size_table  #gt = bigger than
        return next_prime_gt - (data % next_prime_gt)
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
    	for n in xrange(m+1):
		for k in xrange(1, m):
			memo[n][k] += memo[n][k-1]
			if n-k > 0:
				memo[n][k] += memo[n-k-1][k]
    
    This is a pure Python implementation of Dynamic Programming solution to the longest increasing subsequence of a given sequence.
    
        dp = [[False for x in range(s+1)]for y in range(n+1)]
    
            a += a
        b >>= 1
    
        it = 0
    
    input data sparsity: 0.050000
true coef sparsity: 0.000100
test data sparsity: 0.027400
model sparsity: 0.000024
r^2 on test data (dense model) : 0.233651
r^2 on test data (sparse model) : 0.233651
Wrote profile results to sparsity_benchmark.py.lprof
Timer unit: 1e-06 s
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    # Now predict the value of the digit on the second half:
expected = digits.target[n_samples // 2:]
predicted = classifier.predict(data[n_samples // 2:])
    
    # Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
    
def make_data(random_state, n_samples_per_center, grid_size, scale):
    random_state = check_random_state(random_state)
    centers = np.array([[i, j]
                        for i in range(grid_size)
                        for j in range(grid_size)])
    n_clusters_true, n_features = centers.shape
    
        for name, algorithm in clustering_algorithms:
        t0 = time.time()
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
        def test_default_decoder(self):
        from acme.fields import RFC3339Field
        self.assertEqual(
            self.decoded, RFC3339Field.default_decoder(self.encoded))
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
    
KEY = jose.JWKRSA.load(test_util.load_vector('rsa512_key.pem'))
    
            # Placeholder for augeas
        self.aug = None
    
        @mock.patch('certbot_apache.display_ops.display_util')
    @certbot_util.patch_get_utility()
    @mock.patch('certbot_apache.display_ops.logger')
    def test_small_display(self, mock_logger, mock_util, mock_display_util):
        mock_display_util.WIDTH = 20
        mock_util().menu.return_value = (display_util.OK, 0)
        self._call(self.vhosts)
    
            self.assertTrue(self.vhost1.same_server(self.vhost2))
        self.assertTrue(no_name1.same_server(no_name2))
    
    .. caution::
   You should protect these API credentials as you would the password to your
   CloudXNS account. Users who can read this file can use these credentials to
   issue arbitrary API calls on your behalf. Users who can cause Certbot to run
   using these credentials can complete a ``dns-01`` challenge to acquire new
   certificates or revoke existing certificates for associated domains, even if
   those domains aren't being managed by this server.
    
    
    
            if not self.in_field(col, row):
            return
        if isinstance(char, Point):
            self.field[row][col] = char
        elif char is None:
            if background:
                self.field[row][col].background = background
            if color:
                self.field[row][col].foreground = color
        else:
            self.field[row][col] = Point(char=char, foreground=color, background=background)
    
        def _split_paragraphs(text):
        answer = []
        paragraph = ''
        for line in text.splitlines():
            if line == '':
                answer.append(paragraph)
                paragraph = ''
            else:
                paragraph += line+'\n'
        answer.append(paragraph)
        return answer
    
            answer = ''.join('%s\n' % x for x in sorted(answer))
        return answer
    
        _adapter_name = 'tldr'
    _output_format = 'code'
    _cache_needed = True
    _repository_url = 'https://github.com/tldr-pages/tldr'
    _cheatsheet_files_prefix = 'pages/*/'
    _cheatsheet_files_extension = '.md'
    
        color_style = color_style or 'native'
    lexer_class = languages_data.LEXER['bash']
    if '/' in topic:
        section_name = topic.split('/', 1)[0].lower()
        section_name = languages_data.get_lexer_name(section_name)
        lexer_class = languages_data.LEXER.get(section_name, lexer_class)
        if section_name == 'php':
            answer = '<?\n%s?>\n' % answer