
        
            def __init__(self, first_user, second_user):
        super(PrivateChat, self).__init__()
        self.users.append(first_user)
        self.users.append(second_user)
    
        def __init__(self, level, row, spot_number, spot_size, vehicle_size):
        self.level = level
        self.row = row
        self.spot_number = spot_number
        self.spot_size = spot_size
        self.vehicle_size = vehicle_size
        self.vehicle = None
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
class HashTable(object):
    
    
class PagesDataStore(object):
    
    In general, when fitting a curve with a polynomial by Bayesian ridge
regression, the selection of initial values of
the regularization parameters (alpha, lambda) may be important.
This is because the regularization parameters are determined by an iterative
procedure that depends on initial values.
    
    '''
print(__doc__)
    
        X = Xs[X_label]
    Y = Ys[Y_label]
    intercept_params = intercepts[intercept_label]
    check_l1_min_c(X, Y, loss, **intercept_params)
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    import sys
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.pipeline import Pipeline
from sklearn.model_selection import GridSearchCV
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    import time
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.axes_grid1.parasite_axes import host_subplot
from mpl_toolkits.axisartist.axislines import Axes
from scipy.sparse.csr import csr_matrix
    
    plt.show()

    
    This example shows the effect of imposing a connectivity graph to capture
local structure in the data. The graph is simply the graph of 20 nearest
neighbors.
    
    X = np.array(X)
y = np.array(y)
    
            item = D(save='X', load='Y')
        self.assertEqual(item['save'], 'X')
        self.assertEqual(item['load'], 'Y')
        self.assertEqual(D.fields, {'load': {'default': 'A'},
            'save': {'default': 'A'}})
    
    from twisted.internet import defer
    
            class RaiseExceptionProcessSpiderOutputMiddleware:
            def process_spider_output(self, response, result, spider):
                raise Exception()
    
        def test_errors_argument(self):
        self.assertEqual(
            to_unicode(b'a\xedb', 'utf-8', errors='replace'),
            u'a\ufffdb'
        )
    
        def _link_allowed(self, link):
        if not _is_valid_url(link.url):
            return False
        if self.allow_res and not _matches(link.url, self.allow_res):
            return False
        if self.deny_res and _matches(link.url, self.deny_res):
            return False
        parsed_url = urlparse(link.url)
        if self.allow_domains and not url_is_from_any_domain(parsed_url, self.allow_domains):
            return False
        if self.deny_domains and url_is_from_any_domain(parsed_url, self.deny_domains):
            return False
        if self.deny_extensions and url_has_any_extension(parsed_url, self.deny_extensions):
            return False
        if self.restrict_text and not _matches(link.text, self.restrict_text):
            return False
        return True
    
        def reset(self):
        SGMLParser.reset(self)
        self.links = []
        self.base_url = None
        self.current_link = None
    
            for url in ('http://e.com', 'https://e.com', 'file:///tmp/a'):
            req = Request(url)
            assert mw.process_request(req, spider) is None
            self.assertEqual(req.url, url)
            self.assertEqual(req.meta, {})
    
        def filter(self, record):
        if any(record.name.startswith(l + '.') for l in self.loggers):
            record.name = record.name.split('.', 1)[0]
        return True
    
        def set_defaults(self):
        ''' Set the default values for config '''
        logger.debug('Setting defaults')
        current_dir = os.path.dirname(__file__)
        for dirpath, _, filenames in os.walk(current_dir):
            default_files = [fname for fname in filenames if fname.endswith('_defaults.py')]
            if not default_files:
                continue
            base_path = os.path.dirname(os.path.realpath(sys.argv[0]))
            import_path = '.'.join(full_path_split(dirpath.replace(base_path, ''))[1:])
            plugin_type = import_path.split('.')[-1]
            for filename in default_files:
                self.load_module(filename, import_path, plugin_type)
    
    
_DEFAULTS = {
    'clip': {
        'default': True,
        'info': 'Should components of L*a*b* image be scaled by np.clip before converting '
                'back to BGR color space?\nIf False then components will be min-max scaled '
                'appropriately.\nClipping will keep target image brightness truer to the '
                'input.\nScaling will adjust image brightness to avoid washed out portions in '
                'the resulting color transfer that can be caused by clipping.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'preserve_paper': {
        'default': True,
        'info': 'Should color transfer strictly follow methodology layed out in original '
                'paper?\nThe method does not always produce aesthetically pleasing results.\n'
                'If False then L*a*b* components will be scaled using the reciprocal of the '
                'scaling factor proposed in the paper. This method seems to produce more '
                'consistently aesthetically pleasing results.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
    
_HELPTEXT = 'Options for encoding converted frames to video.'
    
    
_DEFAULTS = {
    'fps': {
        'default': 25,
        'info': 'Frames per Second.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 60),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'loop': {
        'default': 0,
        'info': 'The number of iterations. Set to 0 to loop indefinitely.',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 100),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'palettesize': {
        'default': '256',
        'info': 'The number of colors to quantize the image to. Is rounded to the nearest '
                'power of two.',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['2', '4', '8', '16', '32', '64', '128', '256'],
        'gui_radio': False,
        'fixed': True,
    },
    'subrectangles': {
        'default': False,
        'info': 'If True, will try and optimize the GIF by storing only the rectangular parts '
                'of each frame that change with respect to the previous.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
      Example usage:
    
    from hamcrest import assert_that, contains, has_entries
from mock import patch
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
    
class DebugInfoRequest( BaseRequest ):
  def __init__( self, extra_data = None ):
    super( DebugInfoRequest, self ).__init__()
    self._extra_data = extra_data
    self._response = None
    
        return False
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
    def as_completed(fs, timeout=None):
    '''An iterator over the given futures that yields each as it completes.
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown_thread = True
        if self._queue_management_thread:
            # Wake up queue management thread
            self._result_queue.put(None)
            if wait:
                self._queue_management_thread.join()
        # To reduce the risk of openning too many files, remove references to
        # objects that use file descriptors.
        self._queue_management_thread = None
        self._call_queue = None
        self._result_queue = None
        self._processes = None
    shutdown.__doc__ = _base.Executor.shutdown.__doc__