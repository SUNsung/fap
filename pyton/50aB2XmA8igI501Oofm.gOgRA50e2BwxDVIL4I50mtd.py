
        
                return value
    
            :param variable_name: name of the environment variable
        :param silent: set to ``True`` if you want silent failure for missing
                       files.
        :return: bool. ``True`` if able to load config, ``False`` otherwise.
        '''
        rv = os.environ.get(variable_name)
        if not rv:
            if silent:
                return False
            raise RuntimeError('The environment variable %r is not set '
                               'and as such configuration could not be '
                               'loaded.  Set this variable and make it '
                               'point to a configuration file' %
                               variable_name)
        return self.from_pyfile(rv, silent=silent)
    
            buf.append('  Make sure to directly send your %s-request to this URL '
                   'since we can\'t make browsers or HTTP clients redirect '
                   'with form data reliably or without user interaction.' %
                   request.method)
        buf.append('\n\nNote: this exception is only raised in debug mode')
        AssertionError.__init__(self, ''.join(buf).encode('utf-8'))
    
        @classmethod
    def as_view(cls, name, *class_args, **class_kwargs):
        '''Converts the class into an actual view function that can be used
        with the routing system.  Internally this generates a function on the
        fly which will instantiate the :class:`View` on each request and call
        the :meth:`dispatch_request` method on it.
    
    
def test_has_level_handler():
    logger = logging.getLogger('flask.app')
    assert not has_level_handler(logger)
    
    
def test_session_error_pops_context():
    class SessionError(Exception):
        pass
    
    
class Hand(object):
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
class Cache(object):
    
        def can_fit_in_spot(self, spot):
        return spot.size == VehicleSize.LARGE
    
            pdf = match1(content, r'name='filename'\s*value='([^']+\.pdf)'')
        if pdf: pdf = 'http://res.infoq.com/downloads/pdfdownloads/%s' % pdf
    
    
site_info = 'kugou.com'
download = kugou_download
# download_playlist = playlist_not_supported('kugou')
download_playlist=kugou_download_playlist

    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
    
def pstdev(data, mu=None):
    '''Return the square root of the population variance.
    
    def pi_decimal():
    '''decimal'''
    D = P.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
    The size field (a 32-bit value, encoded using big-endian byte order)
gives the size of the whole chunk, including the 8-byte header.
    
    SERVICETEMPLATE = '''
extern int PythonService_main(int, char **);
    
        def assertAnnotationEqual(
        self, annotation, expected=None, drop_parens=False, is_tuple=False,
    ):
        actual = self.getActual(annotation)
        if expected is None:
            expected = annotation if not is_tuple else annotation[1:-1]
        if drop_parens:
            self.assertNotEqual(actual, expected)
            actual = actual.replace('(', '').replace(')', '')
    
                ('IronPython 2.0 (2.0.0.0) on .NET 2.0.50727.3053', None, 'cli')
            :
                ('IronPython', '2.0.0', '', '', ('', ''),
                 '.NET 2.0.50727.3053'),
    
        # This dictionary maps from (feature,value) to a list of
    # (option,value) pairs that should be set on the Options object.
    # If a (feature,value) setting is not in this dictionary, it is
    # not supported by the DOMBuilder.
    #
    _settings = {
        ('namespace_declarations', 0): [
            ('namespace_declarations', 0)],
        ('namespace_declarations', 1): [
            ('namespace_declarations', 1)],
        ('validation', 0): [
            ('validation', 0)],
        ('external_general_entities', 0): [
            ('external_general_entities', 0)],
        ('external_general_entities', 1): [
            ('external_general_entities', 1)],
        ('external_parameter_entities', 0): [
            ('external_parameter_entities', 0)],
        ('external_parameter_entities', 1): [
            ('external_parameter_entities', 1)],
        ('validate_if_schema', 0): [
            ('validate_if_schema', 0)],
        ('create_entity_ref_nodes', 0): [
            ('create_entity_ref_nodes', 0)],
        ('create_entity_ref_nodes', 1): [
            ('create_entity_ref_nodes', 1)],
        ('entities', 0): [
            ('create_entity_ref_nodes', 0),
            ('entities', 0)],
        ('entities', 1): [
            ('entities', 1)],
        ('whitespace_in_element_content', 0): [
            ('whitespace_in_element_content', 0)],
        ('whitespace_in_element_content', 1): [
            ('whitespace_in_element_content', 1)],
        ('cdata_sections', 0): [
            ('cdata_sections', 0)],
        ('cdata_sections', 1): [
            ('cdata_sections', 1)],
        ('comments', 0): [
            ('comments', 0)],
        ('comments', 1): [
            ('comments', 1)],
        ('charset_overrides_xml_encoding', 0): [
            ('charset_overrides_xml_encoding', 0)],
        ('charset_overrides_xml_encoding', 1): [
            ('charset_overrides_xml_encoding', 1)],
        ('infoset', 0): [],
        ('infoset', 1): [
            ('namespace_declarations', 0),
            ('validate_if_schema', 0),
            ('create_entity_ref_nodes', 0),
            ('entities', 0),
            ('cdata_sections', 0),
            ('datatype_normalization', 1),
            ('whitespace_in_element_content', 1),
            ('comments', 1),
            ('charset_overrides_xml_encoding', 1)],
        ('supported_mediatypes_only', 0): [
            ('supported_mediatypes_only', 0)],
        ('namespaces', 0): [
            ('namespaces', 0)],
        ('namespaces', 1): [
            ('namespaces', 1)],
    }
    
    T_IV2 = dataclasses.InitVar[int]
T_IV3 = dataclasses.InitVar
    
    T_CV2 = typing.ClassVar[int]
T_CV3 = typing.ClassVar
    
        Inspects the function signature to find an argument by name
    whether it is passed by position or keyword.  For use in decorators
    and similar wrappers.
    '''
    def __init__(self, func, name):
        # type: (Callable, str) -> None
        self.name = name
        try:
            self.arg_pos = self._getargnames(func).index(name)
        except ValueError:
            # Not a positional parameter
            self.arg_pos = None
    
        def test_exception_logging(self):
        '''Uncaught exceptions get logged by the IOLoop.'''
        # Use a NullContext to keep the exception from being caught by
        # AsyncTestCase.
        with NullContext():
            self.io_loop.add_callback(lambda: 1 / 0)
            self.io_loop.add_callback(self.stop)
            with ExpectLog(app_log, 'Exception in callback'):
                self.wait()
    
            async def waiter():
            print('Waiting for event')
            await event.wait()
            print('Not waiting this time')
            await event.wait()
            print('Done')
    
            If a ``callback`` is given, it will be called with no
        arguments once the handshake is complete; otherwise this
        method returns a `.Future` which will resolve to the
        stream itself after the handshake is complete.
    
        def test_known_values(self):
        signed_v1 = create_signed_value(SignedValueTest.SECRET, 'key', 'value',
                                        version=1, clock=self.present)
        self.assertEqual(
            signed_v1,
            b'dmFsdWU=|1300000000|31c934969f53e48164c50768b40cbd7e2daaaa4f')
    
        @gen_test
    def test_put_timeout_preempted(self):
        q = queues.Queue(1)
        q.put_nowait(0)
        put = q.put(1, timeout=timedelta(seconds=0.01))
        q.get()
        yield gen.sleep(0.02)
        yield put  # No TimeoutError.