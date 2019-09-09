
        
        print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=15,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test,
                            batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    from keras.datasets import boston_housing
from keras.datasets import imdb
from keras.datasets import reuters
    
        def get_config(self):
        config = {
            'filters': self.filters,
            'kernel_size': self.kernel_size,
            'strides': self.strides,
            'padding': self.padding,
            'activation': activations.serialize(self.activation),
            'use_bias': self.use_bias,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)
        }
        base_config = super(LocallyConnected1D, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
    Input may optionally be reversed, shown to increase performance in many tasks in:
'Learning to Execute'
http://arxiv.org/abs/1410.4615
and
'Sequence to Sequence Learning with Neural Networks'
http://papers.nips.cc/paper/5346-sequence-to-sequence-learning-with-neural-networks.pdf
Theoretically it introduces shorter term dependencies between source and target.
    
    
def gae_application(environ, start_response):
    cookie = environ.get('HTTP_COOKIE', '')
    options = environ.get('HTTP_X_GOA_OPTIONS', '')
    if environ['REQUEST_METHOD'] == 'GET' and not cookie:
        if '204' in environ['QUERY_STRING']:
            start_response('204 No Content', [])
            yield ''
        else:
            timestamp = long(os.environ['CURRENT_VERSION_ID'].split('.')[1])/2**28
            ctime = time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime(timestamp+8*3600))
            html = u'GoAgent Python Server %s \u5df2\u7ecf\u5728\u5de5\u4f5c\u4e86\uff0c\u90e8\u7f72\u65f6\u95f4 %s\n' % (__version__, ctime)
            start_response('200 OK', [('Content-Type', 'text/plain; charset=utf-8')])
            yield html.encode('utf8')
        raise StopIteration
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
            Python does not have any size restrictions, but the compilation of
        such large source files seems to be pretty memory hungry. The memory
        consumption of the python process grew to >1.5GB when importing a
        15MB lexer, eating all my swap space and I was to impacient to see,
        if it could finish at all. With packed initializers that are unpacked
        at import time of the lexer module, everything works like a charm.
        
        '''
        
        ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
            Using setter/getter methods is deprecated. Use o.charPositionInLine instead.'''
    
        def forwards(self, orm):
    
    from django.conf import settings
from social_auth.utils import custom_user_frozen_models
    
        complete_apps = ['social_auth']

    
    
def get_logger():
    'Attach a file handler to the logger if there isn't one already.'
    debug_on = getattr(settings, 'SOUTH_LOGGING_ON', False)
    logging_file = getattr(settings, 'SOUTH_LOGGING_FILE', False)
    
    
def test_iloc():
    s = Series(np.random.randn(10), index=list(range(0, 20, 2)))
    
        @pytest.mark.parametrize('str_dtype', [object])  # TODO
    def test_as_json_table_type_string_dtypes(self, str_dtype):
        assert as_json_table_type(str_dtype) == 'string'
    
    
    
            # check that target_as_index IntervalIndex is compatible
        if isinstance(target_as_index, IntervalIndex):
            common_subtype = find_common_type(
                [self.dtype.subtype, target_as_index.dtype.subtype]
            )
            if self.closed != target_as_index.closed or is_object_dtype(common_subtype):
                # different closed or incompatible subtype -> no matches
                return (
                    np.repeat(-1, len(target_as_index)),
                    np.arange(len(target_as_index)),
                )
    
        # Calling directly the omnifunc may move the cursor position. This is the
    # case with the default Vim omnifunc for C-family languages
    # (ccomplete#Complete) which calls searchdecl to find a declaration. This
    # function is supposed to move the cursor to the found declaration but it
    # doesn't when called through the omni completion mapping (CTRL-X CTRL-O).
    # So, we restore the cursor position after the omnifunc calls.
    line, column = vimsupport.CurrentLineAndColumn()
    
        # If not a dictionary or a list, the response is necessarily a
    # scalar: boolean, number, string, etc. In this case, we print
    # it to the user.
    if not isinstance( self._response, ( dict, list ) ):
      return self._HandleBasicResponse()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def KeywordsFromSyntaxListOutput_Basic_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        Returns:
        An iterator that yields the given Futures as they complete (finished or
        cancelled).
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
    def _process_worker(call_queue, result_queue):
    '''Evaluates calls from call_queue and places the results in result_queue.