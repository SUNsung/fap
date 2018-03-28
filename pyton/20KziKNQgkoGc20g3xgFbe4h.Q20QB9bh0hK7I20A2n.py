
        
        if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        def _report_warning(w):
        if not any(re.search(w_re, w) for w_re in warnings_re):
            real_warning(w)
    
            swf_class = swfi.extract_class(test_id)
        func = swfi.extract_function(swf_class, 'main')
        res = func(input_args)
        self.assertEqual(res, output)
    
    from .onet import OnetBaseIE
    
        return inner
    
    import collections
    
    from requests.structures import CaseInsensitiveDict, LookupDict
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.
    
    from requests.help import info
    
        def doc(code):
        names = ', '.join('``%s``' % n for n in _codes[code])
        return '* %d: %s' % (code, names)
    
        def test_request_with_bytestring_host(self, httpbin):
        s = requests.Session()
        resp = s.request(
            'GET',
            httpbin('cookies/set?cookie=value'),
            allow_redirects=False,
            headers={'Host': b'httpbin.org'}
        )
        assert resp.cookies.get('cookie') == 'value'
    
        density : array-like of ints (1d or 0d)
        The density of positive labels in the input.
    
    fixed_batch_size_comparison(X)
variable_batch_size_comparison(X)
plt.show()

    
                c_bar = plt.bar(xvals, build_time[alg] - bottom,
                            width, bottom, color='r')
            q_bar = plt.bar(xvals, query_time[alg],
                            width, build_time[alg], color='b')
    
    
def _get_git_revision():
    try:
        revision = subprocess.check_output(REVISION_CMD.split()).strip()
    except (subprocess.CalledProcessError, OSError):
        print('Failed to execute git to get revision')
        return None
    return revision.decode('utf-8')
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    Adjusted for chance measure such as ARI display some random variations
centered around a mean score of 0.0 for any number of samples and
clusters.
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      _assert_rejects( f, { 'text' : 'This is an unimportant taco',
                        'kind' : 'WARNING' } )
  _assert_rejects( f, { 'text' : 'This taco will NOT be shown',
                        'kind' : 'ERROR' } )
  _assert_accepts( f, { 'text' : 'This burrito WILL be shown',
                        'kind' : 'ERROR' } )
    
    from ycm.client.base_request import BaseRequest
from ycm.youcompleteme import YouCompleteMe
from ycmd import user_options_store
from ycmd.utils import CloseStandardStreams, WaitUntilProcessIsTerminated