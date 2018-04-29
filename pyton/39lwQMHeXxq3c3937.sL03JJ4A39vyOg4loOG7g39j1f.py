
        
        import pytest
    
        seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            for blueprint in self.app.iter_blueprints():
            loader = blueprint.jinja_loader
            if loader is not None:
                for template in loader.list_templates():
                    result.add(template)
    
    
def test_config_from_mapping():
    app = flask.Flask(__name__)
    app.config.from_mapping({
        'SECRET_KEY': 'config',
        'TEST_KEY': 'foo'
    })
    common_object_test(app)
    
    
def test_explicit_instance_paths(modules_tmpdir):
    with pytest.raises(ValueError) as excinfo:
        flask.Flask(__name__, instance_path='instance')
    assert 'must be absolute' in str(excinfo.value)
    
        def entry_ok(self):
        'Return apparently valid (name, path) or None'
        self.entry_error['text'] = ''
        self.path_error['text'] = ''
        name = self.item_ok()
        path = self.path_ok()
        return None if name is None or path is None else (name, path)
    
        print('int:')
    print('calculation time: %fs' % (end_calc-start_calc))
    print('conversion time: %fs\n\n' % (end_conv-start_conv))
    
        def seek(self, pos, whence=0):
        '''Seek to specified position into the chunk.
        Default position is 0 (start of chunk).
        If the file is not seekable, this will result in an error.
        '''
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
        def _grouplist(self, lines):
        # Parse lines into 'group last first flag'
        return [GroupInfo(*line.split()) for line in lines]
    
        The DOMBuilder class uses an instance of this class to pass settings to
    the ExpatBuilder class.
    '''
    
        def find_byname(self, name):
        '''Return (red, green, blue) for name'''
        name = name.lower()
        try:
            return self.__byname[name]
        except KeyError:
            raise BadColor(name) from None
    
                    # kwargs={}
                result = _testcapi.pyobject_fastcalldict(func, args, {})
                self.check_result(result, expected)
    
            class complex2(complex):
            '''Make sure that __complex__() calls fail if anything other than a
            complex is returned'''
            def __complex__(self):
                return None
    
        def test_infile_outfile(self):
        infile = self._create_infile()
        outfile = support.TESTFN + '.out'
        rc, out, err = assert_python_ok('-m', 'json.tool', infile, outfile)
        self.addCleanup(os.remove, outfile)
        with open(outfile, 'r') as fp:
            self.assertEqual(fp.read(), self.expect)
        self.assertEqual(rc, 0)
        self.assertEqual(out, b'')
        self.assertEqual(err, b'')
    
        def test_math(self):
        self.assertEqual(+False, 0)
        self.assertIsNot(+False, False)
        self.assertEqual(-False, 0)
        self.assertIsNot(-False, False)
        self.assertEqual(abs(False), 0)
        self.assertIsNot(abs(False), False)
        self.assertEqual(+True, 1)
        self.assertIsNot(+True, True)
        self.assertEqual(-True, -1)
        self.assertEqual(abs(True), 1)
        self.assertIsNot(abs(True), True)
        self.assertEqual(~False, -1)
        self.assertEqual(~True, -2)
    
                # exhausted iterator
            self.assertRaises(StopIteration, next, itorig)
            d = pickle.dumps((itorig, orig), proto)
            it, a = pickle.loads(d)
            a[:] = data
            self.assertEqual(list(it), [])
    
    class _AcquireFutures(object):
    '''A context manager that does an ordered acquire of Future conditions.'''
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa