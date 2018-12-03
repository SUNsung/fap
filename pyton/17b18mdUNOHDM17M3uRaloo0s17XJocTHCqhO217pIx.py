    with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    make_valid_template = '''
    @classmethod
    def _make_valid_url(cls):
        return {valid_url!r}
'''
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    import itertools
import json
import os
import re
import sys
    
        def test_urlopen_no_file_protocol(self):
        # see https://github.com/rg3/youtube-dl/issues/8227
        ydl = YDL()
        self.assertRaises(compat_urllib_error.URLError, ydl.urlopen, 'file:///etc/passwd')
    
            if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password))
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
        def login(self, username='test', password='test'):
        return self._client.post(
            '/auth/login',
            data={'username': username, 'password': password}
        )
    
        with client:
        auth.logout()
        assert 'user_id' not in session

    
        In both cases (loading from any Python file or loading from modules),
    only uppercase keys are added to the config.  This makes it possible to use
    lowercase values in the config file for temporary values that are not added
    to the config or to define the config keys in the same file that implements
    the application.
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
        return _set_text
    
        new_command = get_new_command(Command('apt update', match_output))
    assert new_command == 'apt list --upgradable'

    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
        plt.legend(['Ridge', 'OLS', 'LassoLars'], loc='upper left')
    plt.axis('tight')
    plt.show()

    
        alpha = 0.01  # regularization parameter
    
    plt.xlim([-0.05, 1.05])
plt.ylim([-0.05, 1.05])
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('Receiver operating characteristic')
plt.legend(loc='lower right')
plt.show()

    
        results = benchmark([METRICS[k] for k in args.metrics],
                        [FORMATS[k] for k in args.formats],
                        args.samples, args.classes, args.density,
                        args.n_times)
    
    
def compute_bench_2(chunks):
    results = defaultdict(lambda: [])
    n_features = 50000
    means = np.array([[1, 1], [-1, -1], [1, -1], [-1, 1],
                      [0.5, 0.5], [0.75, -0.5], [-1, 0.75], [1, 0]])
    X = np.empty((0, 2))
    for i in range(8):
        X = np.r_[X, means[i] + 0.8 * np.random.randn(n_features, 2)]
    max_it = len(chunks)
    it = 0
    for chunk in chunks:
        it += 1
        print('==============================')
        print('Iteration %03d of %03d' % (it, max_it))
        print('==============================')
        print()
    
        #------------------------------------------------------------
    # varying k
    k_results_build = dict([(alg, np.zeros(len(krange)))
                            for alg in algorithms])
    k_results_query = dict([(alg, np.zeros(len(krange)))
                            for alg in algorithms])
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
        clf = clone(transfomer)
    
    print('\n========== Run time performance (sec) ===========\n')
print('Computing the mean and the standard deviation '
      'of the run time over {} runs...\n'.format(n_repeat))
print(df['time'].unstack(level=-1))
    
        gc.collect()
    
                    _filename = newfilename
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    def _iter_command_classes(module_name):
    # TODO: add `name` attribute to commands and and merge this function with
    # scrapy.utils.spider.iter_spider_classes
    for module in walk_modules(module_name):
        for obj in vars(module).values():
            if inspect.isclass(obj) and \
                    issubclass(obj, ScrapyCommand) and \
                    obj.__module__ == module.__name__ and \
                    not obj == ScrapyCommand:
                yield obj
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
            try:
            self.min_bound = int(self.args[1])
        except IndexError:
            self.min_bound = 1
    
    from scrapy.http import Response
from scrapy.responsetypes import responsetypes
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.python import to_bytes
    
            # Check cert keyfile exists
        if hasattr(OpenSSL.crypto, 'load_publickey'):
            if os.path.exists(CertUtil.cert_keyfile):
                with open(CertUtil.cert_keyfile, 'rb') as fp:
                    CertUtil.cert_publickey = OpenSSL.crypto.load_publickey(OpenSSL.crypto.FILETYPE_PEM, fp.read())
            else:
                CertUtil.generate_cert_keyfile()
        else:
            CertUtil.cert_keyfile = None
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')
    
            self._state.errorRecovery = False
        self.input.consume()
    
            Using setter/getter methods is deprecated. Use o.channel instead.'''
    
        test = Catalog('param_value_2')
    test.main_method()
    
    
if __name__ == '__main__':
    reporter = Reporter()
    db = DB()
    tm = TestManager()
    tm.setReporter(reporter)
    tm.setDB(db)
    reporter.setTM(tm)
    db.setTM(tm)
    # For simplification we are looping on the same test.
    # Practically, it could be about various unique test classes and their
    # objects
    for i in range(3):
        tc = TC()
        tc.setTM(tm)
        tm.setTC(tc)
        tc.setup()
        tc.execute()
        tc.tearDown()
    
    *What does this example do?
Below the 'StrategyExample' is an example of the client while the two
functions; 'execute_replacement1' and 'execute_replacement2' are
examples of the implementation or strategy. In the example we can see
that the client can vary it's 'execute' method by changing the
strategy which is responsible for implementation.
    
    In general, in Python this won't be necessary, but a second example showing
this kind of arrangement is also included.
    
    
def main():
    Jhon = Person('Jhon', 'Coder')
    print(u'Name: {0}    Occupation: {1}'.format(Jhon.name, Jhon.occupation))
    print(u'Before we access `relatives`:')
    print(Jhon.__dict__)
    print(u'Jhon's relatives: {0}'.format(Jhon.relatives))
    print(u'After we've accessed `relatives`:')
    print(Jhon.__dict__)
    print(Jhon.parents)
    print(Jhon.__dict__)
    print(Jhon.parents)
    print(Jhon.call_count2)
    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))
    
        value = 'default'
    
        def __init__(self):
        self.time_provider = datetime.datetime