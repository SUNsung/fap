
        
        print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
    
if __name__ == '__main__':
    main()

    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_youtube_matching(self):
        self.assertTrue(YoutubeIE.suitable('PLtS2H6bU1M'))
        self.assertFalse(YoutubeIE.suitable('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012'))  # 668
        self.assertMatch('http://youtu.be/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.youtube.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('https://youtube.googleapis.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.cleanvideosearch.com/media/action/yt/watch?videoId=8v_4O44sfjM', ['youtube'])
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
        new_command = get_new_command(Command('apt update', match_output))
    assert new_command == 'apt list --upgradable'

    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    
class TestMultipartFormDataFileUpload:
    
        def save(self):
        self['__meta__'] = {
            'httpie': __version__
        }
        if self.helpurl:
            self['__meta__']['help'] = self.helpurl
    
                if not self.status.total_size:
                self._status_line = PROGRESS_NO_CONTENT_LENGTH.format(
                    downloaded=humanize_bytes(downloaded),
                    speed=humanize_bytes(speed),
                )
            else:
                try:
                    percentage = downloaded / self.status.total_size * 100
                except ZeroDivisionError:
                    percentage = 0
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    
def fixed_batch_size_comparison(data):
    all_features = [i.astype(int) for i in np.linspace(data.shape[1] // 10,
                                                       data.shape[1], num=5)]
    batch_size = 1000
    # Compare runtimes and error for fixed batch size
    all_times = defaultdict(list)
    all_errors = defaultdict(list)
    for n_components in all_features:
        pca = PCA(n_components=n_components)
        ipca = IncrementalPCA(n_components=n_components, batch_size=batch_size)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('ipca', ipca)]}
    
    
def sparsity_ratio(X):
    return np.count_nonzero(X) / float(n_samples * n_features)
    
        Example: ::
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    plt.figure(2)  # 'banana' shape
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X2[:, 0], X2[:, 1], color='black')
plt.xlim((xx2.min(), xx2.max()))
plt.ylim((yy2.min(), yy2.max()))
plt.legend((legend2_values_list[0].collections[0],
            legend2_values_list[1].collections[0],
            legend2_values_list[2].collections[0]),
           (legend2_keys_list[0], legend2_keys_list[1], legend2_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('% lower status of the population')
plt.xlabel('average number of rooms per dwelling')
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    plt.show()

    
    agglo = cluster.FeatureAgglomeration(connectivity=connectivity,
                                     n_clusters=32)
    
    def nudge_images(X, y):
    # Having a larger dataset shows more clearly the behavior of the
    # methods, but we multiply the size of the dataset only by 2, as the
    # cost of the hierarchical clustering methods are strongly
    # super-linear in n_samples
    shift = lambda x: ndimage.shift(x.reshape((8, 8)),
                                  .3 * np.random.normal(size=2),
                                  mode='constant',
                                  ).ravel()
    X = np.concatenate([X, np.apply_along_axis(shift, 1, X)])
    Y = np.concatenate([y, y], axis=0)
    return X, Y
    
    # Different variance
X_varied, y_varied = make_blobs(n_samples=n_samples,
                                cluster_std=[1.0, 2.5, 0.5],
                                random_state=random_state)
y_pred = KMeans(n_clusters=3, random_state=random_state).fit_predict(X_varied)
    
      Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    error: The function to call with any errors found.
  '''
  # Look for closing parenthesis nearby.  We need one to confirm where
  # the declarator ends and where the virt-specifier starts to avoid
  # false positives.
  line = clean_lines.elided[linenum]
  declarator_end = line.rfind(')')
  if declarator_end >= 0:
    fragment = line[declarator_end:]
  else:
    if linenum > 1 and clean_lines.elided[linenum - 1].rfind(')') >= 0:
      fragment = line
    else:
      return
    
    from pandas.io.msgpack import unpackb
    
    plt.figtext(
    0.05, 0.2, r'$y_{it} = \beta^{\prime} x_{it} + \mu_{i} + \epsilon_{it}$',
    size=16, color='#5a89a4')
    
            if _executable_exists('xclip'):
            return init_xclip_clipboard()
        if _executable_exists('xsel'):
            return init_xsel_clipboard()
        if _executable_exists('klipper') and _executable_exists('qdbus'):
            return init_klipper_clipboard()
    
            exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        pd.Timestamp('2011-01-01 10:00'),
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00')), exp)