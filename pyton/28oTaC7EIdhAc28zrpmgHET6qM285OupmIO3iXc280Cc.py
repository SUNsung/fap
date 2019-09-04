
        
        
class Rank(Enum):
    
        def __init__(self, cards):
        super(BlackJackHand, self).__init__(cards)
    
    
class HitCounts(MRJob):
    
        changed = True  # 标记样本类别是否改变
    n_iter = 0  # 记录迭代次数
    while changed and n_iter < max_iter:
        changed = False
        n_iter += 1
    
        inverse_index, word_freq = create_inverse_index(files)
    # print(inverse_index)
    
                with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    
        Args:
        x(tf.Tensor):
        n_unit(int): 
        act_fn:
        name(str):
        reuse(bool):
    '''
    # n_input = tf.shape(x)[-1]  # err: need int but tensor
    n_input = int(x.get_shape()[-1])
    with tf.variable_scope(name or 'dense', reuse=reuse):
        W, b = get_wb([n_input, n_unit])
        o = act_fn(tf.matmul(x, W) + b)
    return o
    
    
def get_w(shape,
          w_initializer=truncated_normal,
          w_regularizer=l2_regularizer,
          name=None):
    name = name or 'W'
    W = tf.get_variable(name, shape, dtype=tf_float, initializer=w_initializer,
                        regularizer=w_regularizer)
    return W
    
        from pprint import pprint
    
    
class Handler(object):
    __metaclass__ = abc.ABCMeta
    
    
class FallbackHandler(Handler):
    @staticmethod
    def check_range(request):
        print('end of chain, no handler for {}'.format(request))
        return False
    
        # Detach HexViewer from data1 and data2
    >>> data1.detach(view2)
    >>> data2.detach(view2)
    
        def not_specification(self):
        return NotSpecification(self)
    
    '''
*What is this pattern about?
Define a family of algorithms, encapsulate each one, and make them interchangeable.
Strategy lets the algorithm vary independently from clients that use it.
    
    
def template_function(getter, converter=False, to_save=False):
    data = getter()
    print('Got `{}`'.format(data))
    
    *What does this example do?
To understand the implementation of this pattern in Python, it is
important to know that, in Python, instance attributes are stored in a
attribute dictionary called __dict__. Usually, each instance will have
its own dictionary, but the Borg pattern modifies this so that all
instances have the same dictionary.
In this example, the __shared_state attribute will be the dictionary
shared between all instances, and this is ensured by assigining
__shared_state to the __dict__ variable when initializing a new
instance (i.e., in the __init__ method). Other attributes are usually
added to the instance's attribute dictionary, but, since the attribute
dictionary itself is shared (which is __shared_state), all other
attributes will also be shared.
For this reason, when the attribute self.state is modified using
instance rm2, the value of self.state in instance rm1 also changes. The
same happens if self.state is modified using rm3, which is an
instance from a subclass.
Notice that even though they share attributes, the instances are not
the same, as seen by their ids.
    
    ### OUTPUT ###
# [{'objectb': 'b-value'}, {'default': 'default'}, {'objecta': 'a-value'}]

    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
    
@contextlib.contextmanager
def UserOptions( options ):
  old_vim_options = test_utils.VIM_OPTIONS.copy()
  test_utils.VIM_OPTIONS.update( DEFAULT_CLIENT_OPTIONS )
  test_utils.VIM_OPTIONS.update( options )
  try:
    yield
  finally:
    test_utils.VIM_OPTIONS = old_vim_options
    
            for pattern in _ConvertDiagnosticToMatchPatterns( diag ):
          # The id doesn't matter for matches that we may add.
          match = vimsupport.DiagnosticMatch( 0, group, pattern )
          try:
            matches_to_remove.remove( match )
          except ValueError:
            vimsupport.AddDiagnosticMatch( match )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _FormatCompleterDebugInfo( completer ):
  message = '{0} completer debug information:\n'.format( completer[ 'name' ] )
  for server in completer[ 'servers' ]:
    name = server[ 'name' ]
    if server[ 'is_running' ]:
      address = server[ 'address' ]
      port = server[ 'port' ]
      if address and port:
        message += '  {0} running at: http://{1}:{2}\n'.format( name,
                                                                address,
                                                                port )
      else:
        message += '  {0} running\n'.format( name )
      message += '  {0} process ID: {1}\n'.format( name, server[ 'pid' ] )
    else:
      message += '  {0} not running\n'.format( name )
    message += '  {0} executable: {1}\n'.format( name, server[ 'executable' ] )
    logfiles = server[ 'logfiles' ]
    if logfiles:
      message += '  {0} logfiles:\n'.format( name )
      for logfile in logfiles:
        message += '    {0}\n'.format( logfile )
    else:
      message += '  No logfiles available\n'
    if 'extras' in server:
      for extra in server[ 'extras' ]:
        message += '  {0} {1}: {2}\n'.format( name,
                                              extra[ 'key' ],
                                              extra[ 'value' ] )
  for item in completer[ 'items' ]:
    message += '  {0}: {1}\n'.format( item[ 'key' ].capitalize(),
                                      item[ 'value' ] )
  return message
    
        def test_unsubscribe_without_arn_should_error(self):
        sns = sns_listener.ProxyListenerSNS()
        error = sns.forward_request('POST', '/', 'Action=Unsubscribe', '')
        self.assertTrue(error is not None)
        self.assertEqual(error.status_code, 400)
    
    
def record(api, method, path, data, headers):
    ''' Record a given API call to a persistent file on disk '''
    file_path = get_file_path(api, create=True)
    if CURRENTLY_REPLAYING or not file_path or not should_record(api, method, path, data, headers):
        return
    entry = None
    try:
        if isinstance(data, dict):
            data = json.dumps(data)
        if data or data in [u'', b'']:
            try:
                data = to_bytes(data)
            except Exception as e:
                LOGGER.warning('Unable to call to_bytes: %s' % e)
            data = to_str(base64.b64encode(data))
        entry = {
            'a': api,
            'm': method,
            'p': path,
            'd': data,
            'h': dict(headers)
        }
        with open(file_path, 'a') as dumpfile:
            dumpfile.write('%s\n' % json.dumps(entry))
    except Exception as e:
        print('Error recording API call to persistent file: %s %s' % (e, traceback.format_exc()))
    
        def forward_request(self, method, path, data, headers):
        if method == 'POST' and path == '/':
            data = self._reset_account_id(data)
            return Request(data=data, headers=headers, method=method)