
        
        
def register_type_handlers(connection, **kwargs):
    if connection.vendor != 'postgresql' or connection.alias == NO_DB_ALIAS:
        return
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
        def get_expire_at_browser_close(self):
        '''
        Return ``True`` if the session is set to expire when the browser
        closes, and ``False`` if there's an expiry date. Use
        ``get_expiry_date()`` or ``get_expiry_age()`` to find the actual expiry
        date/age, if there is one.
        '''
        if self.get('_session_expiry') is None:
            return settings.SESSION_EXPIRE_AT_BROWSER_CLOSE
        return self.get('_session_expiry') == 0
    
        def exists(self, session_key=None):
        '''
        This method makes sense when you're talking to a shared resource, but
        it doesn't matter when you're storing the information in the client's
        cookie.
        '''
        return False
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
        if dataset_name == 'SF':
        lb = LabelBinarizer()
        x1 = lb.fit_transform(X[:, 1].astype(str))
        X = np.c_[X[:, :1], x1, X[:, 2:]]
        y = (y != b'normal.').astype(int)
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    
def scatter_time_vs_s(time, norm, point_labels, title):
    plt.figure()
    size = 100
    for i, l in enumerate(sorted(norm.keys())):
        if l != 'fbpca':
            plt.scatter(time[l], norm[l], label=l, marker='o', c='b', s=size)
            for label, x, y in zip(point_labels, list(time[l]), list(norm[l])):
                plt.annotate(label, xy=(x, y), xytext=(0, -80),
                             textcoords='offset points', ha='right',
                             arrowprops=dict(arrowstyle='->',
                                             connectionstyle='arc3'),
                             va='bottom', size=11, rotation=90)
        else:
            plt.scatter(time[l], norm[l], label=l, marker='^', c='red', s=size)
            for label, x, y in zip(point_labels, list(time[l]), list(norm[l])):
                plt.annotate(label, xy=(x, y), xytext=(0, 30),
                             textcoords='offset points', ha='right',
                             arrowprops=dict(arrowstyle='->',
                                             connectionstyle='arc3'),
                             va='bottom', size=11, rotation=90)
    
    # add noise
y += 0.01 * np.random.normal((n_samples,))
    
    html_folder = u'html'
text_folder = u'paragraphs'
short_text_folder = u'short_paragraphs'
n_words_per_short_text = 5
    
    from __future__ import print_function
from __future__ import division
from __future__ import unicode_literals
from __future__ import absolute_import
    
      # Start by looking for a single character match
  # and increase length until no match is found.
  best = 0
  length = 1
  while True:
    pattern = left_string[ -length: ]
    found = right_string.find( pattern )
    if found < 0:
      return best
    length += found
    if left_string[ -length: ] == right_string[ :length ]:
      best = length
      length += 1

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      return FilterLevel
    
        for sign in signs_to_unplace:
      vimsupport.UnplaceSign( sign )
    
      # Ignore 'nextgroup=' argument in first position and the arguments
  # 'skipwhite', 'skipnl', and 'skipempty' that immediately come after.
  nextgroup_at_start = False
  if words[ 0 ].startswith( 'nextgroup=' ):
    nextgroup_at_start = True
    words = words[ 1: ]
    
    
def StopServer( ycm ):
  try:
    ycm.OnVimLeave()
    WaitUntilProcessIsTerminated( ycm._server_popen )
    CloseStandardStreams( ycm._server_popen )
  except Exception:
    pass
    
    
from __future__ import with_statement
import threading
import weakref
import sys
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))
    
        def setTC(self, tc):
        self._tc = tc
    
        def __get__(self, obj, T):
        def transaction(*args, **kwargs):
            state = memento(obj)
            try:
                return self.method(obj, *args, **kwargs)
            except Exception as e:
                state()
                raise e
    
    
# Makes templates
def make_template(skeleton, getter, action):
    '''Instantiate a template method with getter and action'''
    def template():
        skeleton(getter, action)
    return template
    
    The idea is to abstract the creation of objects depending on business
logic, platform choice, etc.
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour,
                                                current_time.minute)
        return current_time_formatted
    
    
class BusinessLogic(object):
    ''' Business logic holding data store instances '''