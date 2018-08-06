
        
          def __init__(self):
    self.spec = spec_pb2.MasterSpec()
    self.hyperparams = spec_pb2.GridPoint()
    self.lookup_component = {
        'previous': MockComponent(self, spec_pb2.ComponentSpec())
    }
    
      # All arguments must share the same type.
  check.Same([
      weights_arc.dtype.base_dtype, weights_source.dtype.base_dtype,
      root.dtype.base_dtype, tokens.dtype.base_dtype
  ], 'dtype mismatch')
    
    
class DiffTest(tf.test.TestCase):
    
        # Running with batch size equal to 1 should be fine.
    self.RunFullTrainingAndInference(
        'tagger-parser',
        master_spec=spec,
        batch_size_limit=1,
        component_weights=[0., 1., 1.],
        unroll_using_oracle=[False, True, True],
        expected_num_actions=9,
        expected=_TAGGER_PARSER_EXPECTED_SENTENCES)
    
    from flask._compat import iteritems, text_type
from flask.json import dumps, loads
    
    
@pytest.mark.parametrize('data', (
    {' t': (1, 2, 3)},
    {' t__': b'a'},
    {' di': ' di'},
    {'x': (1, 2, 3), 'y': 4},
    (1, 2, 3),
    [(1, 2, 3)],
    b'\xff',
    Markup('<html>'),
    uuid4(),
    datetime.utcnow().replace(microsecond=0),
))
def test_dump_load_unchanged(data):
    s = TaggedJSONSerializer()
    assert s.loads(s.dumps(data)) == data
    
        exec('def reraise(tp, value, tb=None):\n raise tp, value, tb')
    
        #: The canonical way to decorate class-based views is to decorate the
    #: return value of as_view().  However since this moves parts of the
    #: logic from the class declaration to the place where it's hooked
    #: into the routing system.
    #:
    #: You can place one or more decorators in this list and whenever the
    #: view function is created the result is automatically decorated.
    #:
    #: .. versionadded:: 0.8
    decorators = ()
    
    
def test_memory_consumption():
    app = flask.Flask(__name__)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
            Referer:http://httpie.org  Cookie:foo=bar  User-Agent:bacon/1.0
    
    
def test_POST_form_multiple_values(httpbin_both):
    r = http('--form', 'POST', httpbin_both + '/post', 'foo=bar', 'foo=baz')
    assert HTTP_OK in r
    assert r.json['form'] == {'foo': ['bar', 'baz']}
    
        return out
    
    This module handles import compatibility issues between Python 2 and
Python 3.
'''
    
        def json(self, **kwargs):
        r'''Returns the json-encoded content of a response, if any.
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    - BaseRecognizer: Base class with common recognizer functionality.
- Lexer: Base class for lexers.
- Parser: Base class for parsers.
- tree.TreeParser: Base class for %tree parser.
    
    A tree.RewriteCardinalityException is raised, when the parsers hits a
cardinality mismatch during AST construction. Although this is basically a
bug in your grammar, it can only be detected at runtime.