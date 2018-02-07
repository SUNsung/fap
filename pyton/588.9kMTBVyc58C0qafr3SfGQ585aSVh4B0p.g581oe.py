
        
            return inner
    
    
packages = {
    package_name: get_info(package_name) for package_name in PACKAGES
}
    
    
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
        return lexer
    
    from httpie import __version__
from httpie.compat import is_windows
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
            # Force Python to track this dictionary at all times.
        # This is necessary since Python only starts tracking
        # dicts if they contain mutable objects.  It's a horrible,
        # horrible hack but makes this kinda testable.
        loc.__storage__['FOOO'] = [1, 2, 3]
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
    faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
        op.add_option('--n-samples',
                  dest='n_samples', default=500, type=int,
                  help='Number of samples in the benchmarks')
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    from sklearn import datasets
from sklearn.naive_bayes import GaussianNB
from sklearn.svm import LinearSVC
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import (brier_score_loss, precision_score, recall_score,
                             f1_score)
from sklearn.calibration import CalibratedClassifierCV, calibration_curve
from sklearn.model_selection import train_test_split
    
    for index, (name, classifier) in enumerate(classifiers.items()):
    classifier.fit(X, y)
    
            self.addr_defined = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
        @mock.patch('certbot.display.enhancements.util')
    def test_cancel(self, mock_util):
        mock_util().menu.return_value = (display_util.CANCEL, 1)
        self.assertFalse(self._call())
    
    
def median_low(data):
    '''Return the low median of numeric data.
    
    from test.support.script_helper import assert_python_ok
from test.test_tools import skip_if_missing, toolsdir
from test.support import temp_cwd
    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
        def write_repr(self, out, visited):
        # Guard against infinite loops:
        if self.as_address() in visited:
            out.write('<...>')
            return
        visited.add(self.as_address())
    
            self.assertEqual(format(1.5+3j, '<20g'),  '1.5+3j              ')
        self.assertEqual(format(1.5+3j, '*<20g'), '1.5+3j**************')
        self.assertEqual(format(1.5+3j, '>20g'),  '              1.5+3j')
        self.assertEqual(format(1.5+3j, '^20g'),  '       1.5+3j       ')
        self.assertEqual(format(1.5+3j, '<20'),   '(1.5+3j)            ')
        self.assertEqual(format(1.5+3j, '>20'),   '            (1.5+3j)')
        self.assertEqual(format(1.5+3j, '^20'),   '      (1.5+3j)      ')
        self.assertEqual(format(1.123-3.123j, '^20.2'), '     (1.1-3.1j)     ')
    
            [['blorpie'],[ 'whoops' ] , [
                                 ],\t'd-shtaeou',\r'd-nthiouh',
        'i-vhbjkhnth', {'nifty':87}, {'morefield' :\tfalse,'field'
            :'yes'}  ]
           '''
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 10)
        self.blackboard.common_state['suggestions'] += random.randint(1, 10)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(1, 2)
    
        def test_cat_greek_localization(self):
        self.assertEqual(self.g.get('cat'), 'γάτα')
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    
def update_data():
    return np.array(Image.open('autojump.png'))