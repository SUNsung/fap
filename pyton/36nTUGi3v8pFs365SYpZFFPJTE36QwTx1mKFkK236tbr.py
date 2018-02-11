
        
                headers.insert(0, request_line)
        headers = '\r\n'.join(headers).strip()
    
    
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    output_processing.add_argument(
    '--pretty',
    dest='prettify',
    default=PRETTY_STDOUT_TTY_ONLY,
    choices=sorted(PRETTY_MAP.keys()),
    help='''
    Controls output processing. The value can be 'none' to not prettify
    the output (default for redirected output), 'all' to apply both colors
    and formatting (default for terminal output), 'colors', or 'format'.
    
    from httpie import ExitStatus
from httpie.input import SSL_VERSION_ARG_MAPPING
from utils import http, HTTP_OK, TESTS_ROOT
    
    
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
                    out[k, j].flat[i] = t
    return out
    
        results = defaultdict(lambda: [])
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
    Second example
--------------
The second example shows the ability of the Minimum Covariance Determinant
robust estimator of covariance to concentrate on the main mode of the data
distribution: the location seems to be well estimated, although the covariance
is hard to estimate due to the banana-shaped distribution. Anyway, we can
get rid of some outlying observations.
The One-Class SVM is able to capture the real data structure, but the
difficulty is to adjust its kernel bandwidth parameter so as to obtain
a good compromise between the shape of the data scatter matrix and the
risk of over-fitting the data.
    
    The outer product of the row and column label vectors shows a
representation of the checkerboard structure.
    
    import numpy as np
from matplotlib import pyplot as plt
    
    # Generate data
X, y = make_blobs(n_samples=1000, n_features=2, random_state=42,
                  cluster_std=5.0)
X_train, y_train = X[:600], y[:600]
X_valid, y_valid = X[600:800], y[600:800]
X_train_valid, y_train_valid = X[:800], y[:800]
X_test, y_test = X[800:], y[800:]
    
    The logistic regression is not a multiclass classifier out of the box. As
a result it can identify only the first class.
'''
print(__doc__)
    
        def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
    from mrjob.job import MRJob
    
    Revision ID: 18e88e1cc004
Revises: 430039611635
Create Date: 2016-03-13 21:30:24.833107
    
    
def upgrade():
    op.add_column('logs', sa.Column('dt', sa.Date(), nullable=True))
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '289ce07647b'
down_revision = '2929af7925ed'
    
    # revision identifiers, used by Alembic.
revision = '315b3f4da9b0'
down_revision = '1a48a5411020'
    
    from alembic import op
from superset import db
from superset.utils import generic_find_constraint_name, table_has_constraint
import logging
import sqlalchemy as sa
from sqlalchemy.dialects import mysql
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '4e6a06bad7a8'
down_revision = None
    
    
def upgrade():
    op.add_column('query', sa.Column('results_key', sa.String(length=64), nullable=True))
    
        def test_make_button(self):
        self.dialog.top = self.root
        self.dialog.buttonframe = Frame(self.dialog.top)
        btn = self.dialog.make_button('Test', self.dialog.close)
        self.assertEqual(btn['text'], 'Test')
    
        def test_big_stack_left(self):
        d = deque()
        append, pop = d.appendleft, d.popleft
        for i in range(BIG):
            append(i)
        for i in reversed(range(BIG)):
            x = pop()
            if x != i:
                self.assertEqual(x, i)
        self.assertEqual(len(d), 0)
    
        def test_object_pairs_hook(self):
        s = '{'xkd':1, 'kcw':2, 'art':3, 'hxm':4, 'qrt':5, 'pad':6, 'hoy':7}'
        p = [('xkd', 1), ('kcw', 2), ('art', 3), ('hxm', 4),
             ('qrt', 5), ('pad', 6), ('hoy', 7)]
        self.assertEqual(self.loads(s), eval(s))
        self.assertEqual(self.loads(s, object_pairs_hook=lambda x: x), p)
        self.assertEqual(self.json.load(StringIO(s),
                                        object_pairs_hook=lambda x: x), p)
        od = self.loads(s, object_pairs_hook=OrderedDict)
        self.assertEqual(od, OrderedDict(p))
        self.assertEqual(type(od), OrderedDict)
        # the object_pairs_hook takes priority over the object_hook
        self.assertEqual(self.loads(s, object_pairs_hook=OrderedDict,
                                    object_hook=lambda x: None),
                         OrderedDict(p))
        # check that empty object literals work (see #17368)
        self.assertEqual(self.loads('{}', object_pairs_hook=OrderedDict),
                         OrderedDict())
        self.assertEqual(self.loads('{'empty': {}}',
                                    object_pairs_hook=OrderedDict),
                         OrderedDict([('empty', OrderedDict())]))
    
        '''
    
        def scan_once(string, idx):
        try:
            return _scan_once(string, idx)
        finally:
            memo.clear()
    
        def body(self, message_spec=None, *, file=None):
        '''Process a BODY command.  Argument:
        - message_spec: article number or message id
        - file: filename string or file object to store the body in
        Returns:
        - resp: server response if successful
        - ArticleInfo: (article number, message id, list of body lines)
        '''
        if message_spec is not None:
            cmd = 'BODY {0}'.format(message_spec)
        else:
            cmd = 'BODY'
        return self._artcmd(cmd, file)
    
            Ideally, we would look up the symbols for the global types, but that
        isn't working yet:
          (gdb) python print gdb.lookup_symbol('PyList_Type')[0].value
          Traceback (most recent call last):
            File '<string>', line 1, in <module>
          NotImplementedError: Symbol type not yet supported in Python scripts.
          Error while executing Python code.
    
        def test_hash(self):
        for x in range(-30, 30):
            self.assertEqual(hash(x), hash(complex(x, 0)))
            x /= 3.0    # now check against floating point
            self.assertEqual(hash(x), hash(complex(x, 0.)))