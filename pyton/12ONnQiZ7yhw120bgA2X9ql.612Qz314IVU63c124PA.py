
        
        
def fetch(version):
    base = 'http://wheels.scipy.org'
    tree = html.parse(base)
    root = tree.getroot()
    
        result = s[lambda x: ['A', 'B']]
    tm.assert_series_equal(result, s.loc[['A', 'B']])
    
        ('8px', '6pt'),
    ('1.25pc', '15pt'),
    ('.25in', '18pt'),
    ('02.54cm', '72pt'),
    ('25.4mm', '72pt'),
    ('101.6q', '72pt'),
    ('101.6q', '72pt'),
])
@pytest.mark.parametrize('relative_to',  # invariant to inherited size
                         [None, '16pt'])
def test_css_absolute_font_size(size, relative_to, resolved):
    if relative_to is None:
        inherited = None
    else:
        inherited = {'font-size': relative_to}
    assert_resolves('font-size: {size}'.format(size=size),
                    {'font-size': resolved}, inherited=inherited)
    
    import time
from threading import Thread
from ycm.client.base_request import BaseRequest
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).
    
            This method should be called by Executor implementations before
        executing the work associated with this future. If this method returns
        False then the work should not be executed.
    
    
# -- Options for HTML output ---------------------------------------------------
    
        sqrt_n = int(math.floor(math.sqrt(n)))
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return False
    return True