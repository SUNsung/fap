
        
            UNREAD = 0
    READ = 1
    ACCEPTED = 2
    REJECTED = 3

    
            (2016-01, shopping), 125
        (2016-01, gas), 50
        '''
        total = sum(values)
        self.handle_budget_notifications(key, total)
        yield key, sum(values)
    
    
class DefaultCategories(Enum):
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
    SC_MANAGER_ALL_ACCESS = 0xf003f
SC_MANAGER_CREATE_SERVICE = 0x02
SERVICE_WIN32_OWN_PROCESS = 0x10
SERVICE_AUTO_START = 0x2
SERVICE_ERROR_NORMAL = 0x1
DELETE = 0x00010000
SERVICE_STATUS_START_PENDING = 0x00000002
SERVICE_STATUS_RUNNING = 0x00000004
SERVICE_ACCEPT_STOP = 0x1
    
        if RESULT and ('info_dict' not in test or 'age_limit' not in test['info_dict'] or
                   test['info_dict']['age_limit'] != 18):
        print('\nPotential missing age_limit check: {0}'.format(test['name']))
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
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
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
    module_src = '\n'.join(module_contents) + '\n'
    
    import io
import optparse
import os
import sys
    
    import itertools
import json
import os
import re
import sys
    
    from test.helper import FakeYDL, expect_dict, expect_value
from youtube_dl.compat import compat_etree_fromstring
from youtube_dl.extractor.common import InfoExtractor
from youtube_dl.extractor import YoutubeIE, get_info_extractor
from youtube_dl.utils import encode_data_uri, strip_jsonp, ExtractorError, RegexNotFoundError
    
        def test_cbc_encrypt(self):
        data = bytes_to_intlist(self.secret_msg)
        encrypted = intlist_to_bytes(aes_cbc_encrypt(data, self.key, self.iv))
        self.assertEqual(
            encrypted,
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd')
    
    
@bp.route('/')
def index():
    '''Show all the posts, most recent first.'''
    db = get_db()
    posts = db.execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' ORDER BY created DESC'
    ).fetchall()
    return render_template('blog/index.html', posts=posts)
    
    
@pytest.mark.parametrize(('username', 'password', 'message'), (
    ('a', 'test', b'Incorrect username.'),
    ('test', 'a', b'Incorrect password.'),
))
def test_login_validate_input(auth, username, password, message):
    response = auth.login(username, password)
    assert message in response.data
    
    
    .. versionchanged:: 0.11
       Added support for serializing top-level arrays. This introduces a
       security risk in ancient browsers. See :ref:`json-security` for details.
    
        def to_python(self, value):
        return UUID(value)
    
        # Copy is required
    def copy(self):
        return CaseInsensitiveDict(self._store.values())
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
        The original request object is read-only. The client is responsible for collecting
    the new headers via `get_new_headers()` and interpreting them appropriately. You
    probably want `get_cookie_header`, defined below.
    '''
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
            # Shuffle things around if there's history.
        if history:
            # Insert the first (original) request at the start
            history.insert(0, r)
            # Get the last request made
            r = history.pop()
            r.history = history
    
        :rtype: str
    '''
    safe_with_percent = '!#$%&'()*+,/:;=?@[]~'
    safe_without_percent = '!#$&'()*+,/:;=?@[]~'
    try:
        # Unquote only the unreserved characters
        # Then quote only illegal characters (do not quote reserved,
        # unreserved, or '%')
        return quote(unquote_unreserved(uri), safe=safe_with_percent)
    except InvalidURL:
        # We couldn't unquote the given URI, so let's try quoting it, but
        # there may be unquoted '%'s in the URI. We need to make sure they're
        # properly quoted so they do not cause issues elsewhere.
        return quote(uri, safe=safe_without_percent)
    
    Note that the same result can also be achieved via a Lambda layer.
    
    
def serialize(regularizer):
    return serialize_keras_object(regularizer)
    
    
def test_regularization_shared_layer():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
                    if batch_index == len(batches) - 1:  # Last batch.
                    if do_validation:
                        val_outs = test_loop(model, val_function, val_inputs,
                                             batch_size=batch_size,
                                             verbose=0)
                        val_outs = to_list(val_outs)
                        # Same labels assumed.
                        for l, o in zip(out_labels, val_outs):
                            epoch_logs['val_' + l] = o
        callbacks.on_epoch_end(epoch, epoch_logs)
        if callback_model.stop_training:
            break
    callbacks.on_train_end()
    return model.history
    
            if horizontal_flip:
            coin = tf.less(tf.random_uniform([batch_size], 0, 1.0), 0.5)
            shape = [-1., 0., width, 0., 1., 0., 0., 0.]
            flip_transform = tf.convert_to_tensor(shape, dtype=tf.float32)
            flip = tf.tile(tf.expand_dims(flip_transform, 0), [batch_size, 1])
            noflip = tf.tile(tf.expand_dims(identity, 0), [batch_size, 1])
            transforms.append(tf.where(coin, flip, noflip))
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        for i in range(1, n + 1):
        print('==================')
        print('Iteration %02d of %02d' % (i, n))
        print('==================')
        n_features = i * step
        n_informative = n_features / 10
    
        n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
        for name in sorted(selected_transformers):
        print_row(name,
                  np.mean(time_fit[name]),
                  np.mean(time_transform[name]))
    
        op.add_option('--algorithm',
                  dest='selected_algorithm',
                  default=default_algorithms,
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. \nAvailable: %default')
    
                gc.collect()
            print('max_iter', max_iter)
            print('- benchmarking A-SGD')
            clf = SGDRegressor(alpha=alpha / n_train, fit_intercept=False,
                               max_iter=max_iter, learning_rate='invscaling',
                               eta0=.002, power_t=0.05, tol=1e-3,
                               average=(max_iter * n_train // 2))
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
            self.concurrent -= 1
        return ''
    
    def _run_print_help(parser, func, *a, **kw):
    try:
        func(*a, **kw)
    except UsageError as e:
        if str(e):
            parser.error(str(e))
        if e.print_help:
            parser.print_help()
        sys.exit(2)
    
        def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
    
class Command(ScrapyCommand):
    
        def short_desc(self):
        return 'Print Scrapy version'
    
        def __init__(self, param):
        self.x1 = 'x1'
        self.x2 = 'x2'
        # simple test to validate param value
        if param in self._instance_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def __init__(self, successor=None):
        self._successor = successor
    
        fftv = Publisher(message_center)
    
    
# Show pets with various factories
if __name__ == '__main__':
    
        sample_queue = queue.Queue()
    
    production code which is untestable:
    
        blackboard.add_expert(Student(blackboard))
    blackboard.add_expert(Scientist(blackboard))
    blackboard.add_expert(Professor(blackboard))
    
        def on_operator_inservice(self):
        raise UnsupportedTransition