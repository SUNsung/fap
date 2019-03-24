
        
        
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
        if check_author and post['author_id'] != g.user['id']:
        abort(403)
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name,
                                                srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
        1. Single argument: Passed straight through to :func:`dumps`.
    2. Multiple arguments: Converted to an array before being passed to
       :func:`dumps`.
    3. Multiple keyword arguments: Converted to a dict before being passed to
       :func:`dumps`.
    4. Both args and kwargs: Behavior undefined and will throw an exception.
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('app, help_text, operations', [
    ('apt', apt_help, apt_operations),
    ('apt-get', apt_get_help, apt_get_operations)
])
def test_get_operations(set_help, app, help_text, operations):
    set_help(help_text)
    assert _get_operations(app) == operations
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    \tDid you mean `build`?
'''
    
    # (filename as typed by the user, unquoted filename, quoted filename as per shells.quote)
parametrize_filename = pytest.mark.parametrize('filename, unquoted, quoted', [
    ('foo{}', 'foo{}', 'foo{}'),
    (''foo bar{}'', 'foo bar{}', ''foo bar{}'')])
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
    from sklearn.cluster import AgglomerativeClustering
    
    ###############################################################################
clf = SGDRegressor(penalty='l1', alpha=.2, fit_intercept=True, max_iter=2000,
                   tol=None)
clf.fit(X_train, y_train)
print('model sparsity: %f' % sparsity_ratio(clf.coef_))
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
    For each class of models we make the model complexity vary through the choice
of relevant model parameters and measure the influence on both computational
performance (latency) and predictive power (MSE or Hamming Loss).
'''
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    # original face
plt.figure(1, figsize=(3, 2.2))
plt.imshow(face, cmap=plt.cm.gray, vmin=vmin, vmax=256)
    
    # #############################################################################
# Generate sample data
centers = [[1, 1], [-1, -1], [1, -1]]
X, _ = make_blobs(n_samples=10000, centers=centers, cluster_std=0.6)
    
            for i in range(n):  # 对每个数据
            i_score = np.inf
            i_label = -1
            for j in range(k):  # 与每个质心比较
                s_ij = score(data[i], centers[j])
                if s_ij < i_score:
                    i_score = s_ij
                    i_label = j
    
        Args:
        x(tf.Tensor):
        n_unit(int): 
        act_fn:
        name(str):
        reuse(bool):
    '''
    # n_input = tf.shape(x)[-1]  # err: need int but tensor
    n_input = int(x.get_shape()[-1])
    with tf.variable_scope(name or 'dense', reuse=reuse):
        W, b = get_wb([n_input, n_unit])
        o = act_fn(tf.matmul(x, W) + b)
    return o
    
        Args:
        x:
        c_embed_size:
        share_cnn_weights:
        name:
        reuse:
    
        with tf.variable_scope(name or 'highway_conv2d'):
        W, b = get_wb(kernel_shape, b_initializer=tf.initializers.constant(carry_bias))
    
    *TL;DR80
Enables selecting an algorithm at runtime.
'''
    
    
# Refined Abstraction
class CircleShape(object):
    def __init__(self, x, y, radius, drawing_api):
        self._x = x
        self._y = y
        self._radius = radius
        self._drawing_api = drawing_api
    
    '''
@author: Gordeev Andrey <gordeev.and.and@gmail.com>
    
        @classmethod
    def setUpClass(self):
        self.radio = Radio()
    
        def test_parrot_greek_localization(self):
        self.assertEqual(self.g.get('parrot'), 'parrot')
    
        def test_parents(self):
        for _ in range(2):
            self.assertEqual(self.John.parents, 'Father and mother')
        self.assertEqual(self.John.call_count2, 1)

    
        def __setitem__(self, key, value):
        data = self.tostring()
        if len(data) < key:
            data = data.ljust(key+1, '0')
        data = data[:key] + str(int(value)) + data[key + 1:]
        self.fromstring(data)
    
        def testIncludeAdd(self, site, filter_storage):
        self.createInclude(site)
        query_num_json = 'SELECT COUNT(*) AS num FROM json WHERE directory = 'users/1J6UrZMkarjVg5ax9W4qThir3BFUikbW6C''
        assert not filter_storage.isSiteblocked(site.address)
        assert not filter_storage.isMuted('1J6UrZMkarjVg5ax9W4qThir3BFUikbW6C')
        assert site.storage.query(query_num_json).fetchone()['num'] == 2
    
        def read(self, size=60 * 1024):
        for file_path, relative_path in self.file_list:
            self.zf.write(file_path, relative_path)
            if self.buff.tell() >= size:
                break
        self.buff.seek(0)
        back = self.buff.read()
        self.buff.truncate(0)
        return back
    
        def int_from_bytes(b):
        if b:
            return int(b.encode('hex'), 16)
        return 0