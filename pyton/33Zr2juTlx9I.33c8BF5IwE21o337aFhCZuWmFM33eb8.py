
        
        
class ConnectTimeout(ConnectionError, Timeout):
    '''The request timed out while trying to connect to the remote server.
    
    codes = LookupDict(name='status_codes')
    
    Does two benchmarks
    
    
def _tabulate(results, metrics, formats):
    '''Prints results by metric and format
    
    def plot(func):
    random_state = check_random_state(0)
    one_core = []
    multi_core = []
    sample_sizes = range(1000, 6000, 1000)
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
        in_exercise_region = False
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    print(__doc__)
    
        acc_clf1.append(score_clf1 / n_averages)
    acc_clf2.append(score_clf2 / n_averages)
    
    #Display the first digit
plt.figure(1, figsize=(3, 3))
plt.imshow(digits.images[-1], cmap=plt.cm.gray_r, interpolation='nearest')
plt.show()

    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
        def deploy_cert(self, domain, cert_path, key_path, chain_path=None,
                    fullchain_path=None):
        '''Installs cert'''
        cert_path, key_path, chain_path = self.copy_certs_and_keys(
            cert_path, key_path, chain_path)
        self._configurator.deploy_cert(
            domain, cert_path, key_path, chain_path, fullchain_path)

    
    from certbot import interfaces
from certbot.plugins import common
    
    |======================= In-process =====================|== Out-of-process ==|
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Empty_Insertion_Text_test( self ):
    self._Check( 0, {
      'insertion_text':  '',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
  def Response( self ):
    return self._response
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
        def reverse(self, *args):
        if self._path is None:
            raise ValueError('Cannot reverse url regex ' + self.regex.pattern)
        assert len(args) == self._group_count, 'required number of arguments ' \
                                               'not found'
        if not len(args):
            return self._path
        converted_args = []
        for a in args:
            if not isinstance(a, (unicode_type, bytes)):
                a = str(a)
            converted_args.append(url_escape(utf8(a), plus=False))
        return self._path % tuple(converted_args)
    
        def test_remove_timeout_after_fire(self):
        # It is not an error to call remove_timeout after it has run.
        handle = self.io_loop.add_timeout(self.io_loop.time(), self.stop)
        self.wait()
        self.io_loop.remove_timeout(handle)
    
        If `.release` would increment the semaphore's value past the initial
    value, it raises `ValueError`. Semaphores are mostly used to guard
    resources with limited capacity, so a semaphore released too many times
    is a sign of a bug.
    '''
    def __init__(self, value=1):
        super(BoundedSemaphore, self).__init__(value=value)
        self._initial_value = value
    
            If the connection was closed cleanly and a status code or reason
        phrase was supplied, these values will be available as the attributes
        ``self.close_code`` and ``self.close_reason``.
    
    # These errnos indicate that a non-blocking operation must be retried
# at a later time.  On most platforms they're the same value, but on
# some they differ.
_ERRNO_WOULDBLOCK = (errno.EWOULDBLOCK, errno.EAGAIN)
    
                def data_received(self, data):
                body.append(data)