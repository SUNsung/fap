
        
          # Print rows
  for i, label1 in enumerate(short_labels):
    row = '%{0}s '.format(columnwidth) % label1[:10]
    for j in range(len(short_labels)):
      value = int(cm[i, j]) if not np.isnan(cm[i, j]) else 0
      cell = ' %{0}d '.format(10) % value
      row += cell + ' '
    print(row)
    
    
# OPTIMIZATION
flags.DEFINE_integer('batch_size', BATCH_SIZE,
                     'Batch size to use during training.')
flags.DEFINE_float('learning_rate_init', LEARNING_RATE_INIT,
                   'Learning rate initial value')
flags.DEFINE_float('learning_rate_decay_factor', LEARNING_RATE_DECAY_FACTOR,
                   'Learning rate decay, decay by this fraction every so \
                   often.')
flags.DEFINE_float('learning_rate_stop', LEARNING_RATE_STOP,
                   'The lr is adaptively reduced, stop training at this value.')
# Rather put the learning rate on an exponentially decreasiong schedule,
# the current algorithm pays attention to the learning rate, and if it
# isn't regularly decreasing, it will decrease the learning rate.  So far,
# it works fine, though it is not perfect.
flags.DEFINE_integer('learning_rate_n_to_compare', LEARNING_RATE_N_TO_COMPARE,
                     'Number of previous costs current cost has to be worse \
                     than, to lower learning rate.')
    
    from synthetic_data_utils import generate_data, generate_rnn
from synthetic_data_utils import get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, split_list_by_inds
import tensorflow as tf
from utils import write_datasets
    
        if np.isnan(log_perp):
      sys.stderr.error('log_perplexity is Nan.\n')
    else:
      sum_num += log_perp * weights.mean()
      sum_den += weights.mean()
    if sum_den > 0:
      perplexity = np.exp(sum_num / sum_den)
    
    FLAGS = tf.flags.FLAGS
    
      Yields:
    Pairs of the batched data, each a matrix of shape [batch_size, num_steps].
    The second element of the tuple is the same data time-shifted to the
    right by one.
    
    FLAGS = tf.app.flags.FLAGS
    
        # This be set automatically once the plugin has been loaded.
    package_name = None
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
            get_filename_max_length.return_value = 10
    
    
def test_headers_unset(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert 'Accept' in r.json['headers']  # default Accept present
    
        def test_format_option(self, httpbin):
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=format',
                 'GET', httpbin.url + '/get', 'a=b',
                 env=env)
        # Tests that the JSON data is formatted.
        assert r.strip().count('\n') == 2
        assert COLOR not in r
    
    import sys
    
        Catching this error will catch both
    :exc:`~requests.exceptions.ConnectTimeout` and
    :exc:`~requests.exceptions.ReadTimeout` errors.
    '''
    
    
def _implementation():
    '''Return a dict with the Python implementation and version.
    
    Available hooks:
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
        By default, the pair of `name` and `value` will be set for the domain ''
    and sent on every request (this is sometimes called a 'supercookie').
    '''
    result = dict(
        version=0,
        name=name,
        value=value,
        port=None,
        domain='',
        path='/',
        secure=False,
        expires=None,
        discard=True,
        comment=None,
        comment_url=None,
        rest={'HttpOnly': None},
        rfc2109=False,)
    
            # simple test to validate param value
        if param in self._static_method_choices.keys():
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    *TL;DR80
Allow a request to pass down a chain of objects until an object handles
the request.
'''
    
    
class Transaction(object):
    '''A transaction guard.
    
    ### OUTPUT ###
# Strategy Example 0
# Strategy Example 1 from execute 1
# Strategy Example 2 from execute 2

    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
    production code which is untestable:
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    
class GraphSearch:
    
        def on_fault_trigger(self):
        super(Active, self).perform_switchover()
        super(Active, self).on_fault_trigger()