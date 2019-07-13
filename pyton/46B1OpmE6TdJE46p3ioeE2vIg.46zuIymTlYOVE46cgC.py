
        
        from mrjob.job import MRJob
    
        def extract_url(self, line):
        '''Extract the generated url from the log line.'''
        pass
    
    
class SalesRanker(MRJob):
    
        return (x_train, y_train), (x_test, y_test)

    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    
    # Build the Autoencoder Model
# First build the Encoder Model
inputs = Input(shape=input_shape, name='encoder_input')
x = inputs
# Stack of Conv2D blocks
# Notes:
# 1) Use Batch Normalization before ReLU on deep networks
# 2) Use MaxPooling2D as alternative to strides>1
# - faster but not as good as strides>1
for filters in layer_filters:
    x = Conv2D(filters=filters,
               kernel_size=kernel_size,
               strides=2,
               activation='relu',
               padding='same')(x)
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
        # TASK: print the cross-validated scores for the each parameters set
    # explored by the grid search
    
    exercise_dir = os.path.dirname(__file__)
if exercise_dir == '':
    exercise_dir = '.'
    
    # Author: Virgile Fritsch <virgile.fritsch@inria.fr>
# License: BSD 3 clause
    
    plt.subplot(3, 4, 10)
plt.imshow(np.reshape(agglo.labels_, images[0].shape),
           interpolation='nearest', cmap=plt.cm.nipy_spectral)
plt.xticks(())
plt.yticks(())
plt.title('Labels')
plt.show()

    
    plt.figure()
plots = []
legends = []
    
        for name, algorithm in clustering_algorithms:
        t0 = time.time()
    
    plt.figure(1)
plt.clf()
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
        def syntax(self):
        return '[-v]'
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
        def process_response(self, request, response, spider):
    
            return cookie_str
    
            # Examine the headers and look for a Connection directive.
        try:
            self.headers = http.client.parse_headers(self.rfile,
                                                     _class=self.MessageClass)
        except http.client.LineTooLong as err:
            self.send_error(
                HTTPStatus.REQUEST_HEADER_FIELDS_TOO_LARGE,
                'Line too long',
                str(err))
            return False
        except http.client.HTTPException as err:
            self.send_error(
                HTTPStatus.REQUEST_HEADER_FIELDS_TOO_LARGE,
                'Too many headers',
                str(err)
            )
            return False
    
        # 'The method optionally resolves name relative to the given module'
    #
    # Does loadTestsFromName raise TypeError when the `module` argument
    # isn't a module object?
    #
    # XXX Accepts the not-a-module object, ignoring the object's type
    # This should raise an exception or the method name should be changed
    #
    # XXX Some people are relying on this, so keep it for now
    def test_loadTestsFromName__relative_not_a_module(self):
        class MyTestCase(unittest.TestCase):
            def test(self):
                pass
    
            self.check_tokenize('a = (async = 1)', '''\
    NAME       'a'           (1, 0) (1, 1)
    OP         '='           (1, 2) (1, 3)
    OP         '('           (1, 4) (1, 5)
    NAME       'async'       (1, 5) (1, 10)
    OP         '='           (1, 11) (1, 12)
    NUMBER     '1'           (1, 13) (1, 14)
    OP         ')'           (1, 14) (1, 15)
    ''')
    
        @classmethod
    def tearDownClass(cls):
        del cls.dialog
        cls.root.update_idletasks()
        cls.root.destroy()
        del cls.root
    
        def _generate_symbols(self, grammar_file, target_symbol_py_file):
        proc = subprocess.Popen([sys.executable,
                                 GEN_SYMBOL_FILE,
                                 grammar_file,
                                 target_symbol_py_file], stderr=subprocess.PIPE)
        stderr = proc.communicate()[1]
        return proc.returncode, stderr
    
        def testReadChunk10(self):
        self.createTempFile()
        with BZ2File(self.filename) as bz2f:
            text = b''
            while True:
                str = bz2f.read(10)
                if not str:
                    break
                text += str
            self.assertEqual(text, self.TEXT)
    
    <slide><title>Another demo slide</title>
<point>It is important</point>
<point>To have more than</point>
<point>one slide</point>
</slide>
</slideshow>
'''
    
                if buffer.lstrip().upper().startswith('SELECT'):
                print(cur.fetchall())
        except sqlite3.Error as e:
            print('An error occurred:', e.args[0])
        buffer = ''
    
    #########################
# 1) Using declared types
con = sqlite3.connect(':memory:', detect_types=sqlite3.PARSE_DECLTYPES)
cur = con.cursor()
cur.execute('create table test(p point)')
    
    
def word_clean(word):
    '''单词清洗'''
    word = word.lower()  # 小写化
    word = stemmer.stem(word)  # 提取词干
    return word
    
                with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    
        '''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * 2
    if isinstance(strides, int):
        strides = [strides] * 4
    
    
def get_w(shape,
          w_initializer=truncated_normal,
          w_regularizer=l2_regularizer,
          name=None):
    name = name or 'W'
    W = tf.get_variable(name, shape, dtype=tf_float, initializer=w_initializer,
                        regularizer=w_regularizer)
    return W
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'), ('environment_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', 'environment_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key''}),
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'null': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', 'environment_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value''}),
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'null': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'null': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'null': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
        # Flag to indicate if this migration is too risky
    # to run online and needs to be coordinated for offline
    is_dangerous = True
    
    
@instrumented_task(
    name='sentry.tagstore.tasks.delete_tag_key',
    queue='cleanup',
    default_retry_delay=60 * 5,
    max_retries=MAX_RETRIES
)
@retry(exclude=(DeleteAborted, ))
def delete_tag_key(object_id, model, transaction_id=None, **kwargs):
    from sentry import deletions
    
    from sentry.models import (Activity, GroupResolution, Release)
from sentry.tasks.base import instrumented_task
    
        This **does not** guarantee that the correct value is written into the cache
    though it will correct itself in the next update window.
    '''
    cutoff_dt = timezone.now() - timedelta(seconds=cutoff)
    # TODO(dcramer): this doesnt handle deleted options (which shouldn't be allowed)
    for option in Option.objects.filter(last_updated__gte=cutoff_dt).iterator():
        try:
            opt = default_manager.lookup_key(option.key)
            default_manager.store.set_cache(opt, option.value)
        except UnknownOption as e:
            logger.exception(six.text_type(e))
