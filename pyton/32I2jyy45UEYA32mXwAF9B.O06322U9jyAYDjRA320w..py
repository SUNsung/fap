
        
              >>> import requests
      >>> req = requests.request('GET', 'http://httpbin.org/get')
      <Response [200]>
    '''
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    # Import encoding now, to avoid implicit import later.
# Implicit import within threads may cause LookupError when standard library is in a ZIP,
# such as in Embedded Python. See https://github.com/requests/requests/issues/3578.
import encodings.idna
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
    
class UnrewindableBodyError(RequestException):
    '''Requests encountered an error when trying to rewind a body'''
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = requests.__version__
# The full version, including alpha/beta/rc tags.
release = requests.__version__
    
    setup(
    name=about['__title__'],
    version=about['__version__'],
    description=about['__description__'],
    long_description=readme + '\n\n' + history,
    author=about['__author__'],
    author_email=about['__author_email__'],
    url=about['__url__'],
    packages=packages,
    package_data={'': ['LICENSE', 'NOTICE'], 'requests': ['*.pem']},
    package_dir={'requests': 'requests'},
    include_package_data=True,
    python_requires='>=2.6, !=3.0.*, !=3.1.*, !=3.2.*, !=3.3.*',
    install_requires=requires,
    license=about['__license__'],
    zip_safe=False,
    classifiers=(
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'Natural Language :: English',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy'
    ),
    cmdclass={'test': PyTest},
    tests_require=test_requirements,
    extras_require={
        'security': ['pyOpenSSL>=0.14', 'cryptography>=1.3.4', 'idna>=2.0.0'],
        'socks': ['PySocks>=1.5.6, !=1.5.7'],
        'socks:sys_platform == 'win32' and (python_version == '2.7' or python_version == '2.6')': ['win_inet_pton'],
    },
)

    
        assert 'Expected exception' in str(exception.value)

    
    from sklearn.datasets import make_multilabel_classification
from sklearn.metrics import (f1_score, accuracy_score, hamming_loss,
                             jaccard_similarity_score)
from sklearn.utils.testing import ignore_warnings
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    The goal of this exercise is to train a linear classifier on text features
that represent sequences of up to 3 consecutive characters so as to be
recognize natural languages by using the frequencies of short character
sequences as 'fingerprints'.
    
            if event == 'example_added':
            self.update_example(model, -1)
    
        # View probabilities=
    probas = classifier.predict_proba(Xfull)
    n_classes = np.unique(y_pred).size
    for k in range(n_classes):
        plt.subplot(n_classifiers, n_classes, index * n_classes + k + 1)
        plt.title('Class %d' % k)
        if k == 0:
            plt.ylabel(name)
        imshow_handle = plt.imshow(probas[:, k].reshape((100, 100)),
                                   extent=(3, 9, 1, 5), origin='lower')
        plt.xticks(())
        plt.yticks(())
        idx = (y_pred == k)
        if idx.any():
            plt.scatter(X[idx, 0], X[idx, 1], marker='o', c='k')
    
            X, y = generate_data(n_test, n_features)
        score_clf1 += clf1.score(X, y)
        score_clf2 += clf2.score(X, y)
    
        for i, k in enumerate(n_clusters_range):
        for j in range(n_runs):
            if fixed_n_classes is None:
                labels_a = random_labels(low=0, high=k, size=n_samples)
            labels_b = random_labels(low=0, high=k, size=n_samples)
            scores[i, j] = score_func(labels_a, labels_b)
    return scores
    
            # skip check for small a and b: in this case, the current
        # implementation converts the arguments to float directly and
        # then applies a float division.  This can give doubly-rounded
        # results on x87-using machines (particularly 32-bit Linux).
        if skip_small and max(abs(a), abs(b)) < 2**DBL_MANT_DIG:
            return
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
            ``parse_int``, if specified, will be called with the string
        of every JSON int to be decoded. By default this is equivalent to
        int(num_str). This can be used to use another datatype or parser
        for JSON integers (e.g. float).
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def _lookup(self, key=None):
        '''Return (start, stop) or raise KeyError.'''
        if self._toc is None:
            self._generate_toc()
        if key is not None:
            try:
                return self._toc[key]
            except KeyError:
                raise KeyError('No message with key: %s' % key) from None
    
        def aliases_of(self, red, green, blue):
        try:
            name, aliases = self.__byrgb[(red, green, blue)]
        except KeyError:
            raise BadColor((red, green, blue)) from None
        return [name] + aliases
    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test
    
    import errno
import socket
import time
    
            @gen.coroutine
        def connect(c):
            try:
                yield c.connect(server_addr)
            except EnvironmentError:
                pass
            else:
                connected_clients.append(c)