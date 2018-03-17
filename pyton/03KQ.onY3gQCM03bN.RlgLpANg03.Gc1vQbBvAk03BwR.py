
        
        '''
import hashlib
import requests
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
        if env.config.default_options:
        args = env.config.default_options + args
    
        See <https://github.com/httpie/httpie-ntlm> for an example auth plugin.
    
    
CLIENT_CERT = os.path.join(TESTS_ROOT, 'client_certs', 'client.crt')
CLIENT_KEY = os.path.join(TESTS_ROOT, 'client_certs', 'client.key')
CLIENT_PEM = os.path.join(TESTS_ROOT, 'client_certs', 'client.pem')
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
    '''
import os
import ssl
import sys
import re
import errno
import mimetypes
import getpass
from io import BytesIO
from collections import namedtuple, Iterable, OrderedDict
# noinspection PyCompatibility
from argparse import ArgumentParser, ArgumentTypeError, ArgumentError
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
                gc.collect()
            print('- benchmarking Lasso')
            clf = Lasso(alpha=alpha, fit_intercept=False,
                        precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lasso_results.append(time() - tstart)
    
    from sklearn import neighbors, datasets
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
    from sklearn.cluster import AgglomerativeClustering
    
        (opts, args) = op.parse_args()
    if len(args) > 0:
        op.error('this script takes no arguments.')
        sys.exit(1)
    opts.n_components = type_auto_or_int(opts.n_components)
    opts.density = type_auto_or_float(opts.density)
    selected_transformers = opts.selected_transformers.split(',')
    
    for lang, page in pages.items():
    
    plt.plot(features_samples_ratio, acc_clf1, linewidth=2,
         label='Linear Discriminant Analysis with shrinkage', color='navy')
plt.plot(features_samples_ratio, acc_clf2, linewidth=2,
         label='Linear Discriminant Analysis', color='gold')
    
        def create_widgets(self):
        super().create_widgets()
        frame = self.frame
        pathlabel = Label(frame, anchor='w', justify='left',
                          text='Help File Path: Enter URL or browse for file')
        self.pathvar = StringVar(self, self.filepath)
        self.path = Entry(frame, textvariable=self.pathvar, width=40)
        browse = Button(frame, text='Browse', width=8,
                        command=self.browse_file)
        self.path_error = Label(frame, text=' ', foreground='red',
                                font=self.error_font)
    
        If ``c`` is None, the mean is calculated in one pass, and the deviations
    from the mean are calculated in a second pass. Otherwise, deviations are
    calculated from ``c`` as given. Use the second case with care, as it can
    lead to garbage results.
    '''
    if c is None:
        c = mean(data)
    T, total, count = _sum((x-c)**2 for x in data)
    # The following sum should mathematically equal zero, but due to rounding
    # error may not.
    U, total2, count2 = _sum((x-c) for x in data)
    assert T == U and count == count2
    total -=  total2**2/len(data)
    assert not total < 0, 'negative sum of square deviations: %f' % total
    return (T, total)
    
            # morsel/dict
        morsel = cookies.Morsel()
        morsel.set(*base_case)
        morsel.update(attribs)
        self.assertTrue(morsel == dict(morsel))
        self.assertFalse(morsel != dict(morsel))
    
        def test_keys_reuse(self):
        s = '[{'a_key': 1, 'b_\xe9': 2}, {'a_key': 3, 'b_\xe9': 4}]'
        self.check_keys_reuse(s, self.loads)
        self.check_keys_reuse(s, self.json.decoder.JSONDecoder().decode)
    
        @classmethod
    def fromfile(cls, fileobj):
        if fileobj.read(4).decode() != 'TZif':
            raise ValueError('not a zoneinfo file')
        fileobj.seek(20)
        header = fileobj.read(24)
        tzh = (tzh_ttisgmtcnt, tzh_ttisstdcnt, tzh_leapcnt,
               tzh_timecnt, tzh_typecnt, tzh_charcnt) = struct.unpack('>6l', header)
        transitions = array('i')
        transitions.fromfile(fileobj, tzh_timecnt)
        if sys.byteorder != 'big':
            transitions.byteswap()
    
        def scan_once(string, idx):
        try:
            return _scan_once(string, idx)
        finally:
            memo.clear()
    
    To post an article from a file:
>>> f = open(filename, 'rb') # file containing article, including header
>>> resp = s.post(f)
>>>
    
        return ( ( typeobj.field('tp_basicsize') +
               nitems * typeobj.field('tp_itemsize') +
               (_sizeof_void_p() - 1)
             ) & ~(_sizeof_void_p() - 1)
           ).cast(_PyObject_VAR_SIZE._type_size_t)
_PyObject_VAR_SIZE._type_size_t = None
    
        def test_large_exhausted_iterator_pickling(self):
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            r = range(20)
            i = iter(r)
            while True:
                r = next(i)
                if r == 19:
                    break
            d = pickle.dumps(i, proto)
            i2 = pickle.loads(d)
            self.assertEqual(list(i), [])
            self.assertEqual(list(i2), [])