
        
        # Incompatible changes from the 2.x nntplib:
# - all commands are encoded as UTF-8 data (using the 'surrogateescape'
#   error handler), except for raw message data (POST, IHAVE)
# - all responses are decoded as UTF-8 data (using the 'surrogateescape'
#   error handler), except for raw message data (ARTICLE, HEAD, BODY)
# - the `file` argument to various methods is keyword-only
#
# - NNTP.date() returns a datetime object
# - NNTP.newgroups() and NNTP.newnews() take a datetime (or date) object,
#   rather than a pair of (date, time) strings.
# - NNTP.newgroups() and NNTP.list() return a list of GroupInfo named tuples
# - NNTP.descriptions() returns a dict mapping group names to descriptions
# - NNTP.xover() returns a list of dicts mapping field names (header or metadata)
#   to field values; each dict representing a message overview.
# - NNTP.article(), NNTP.head() and NNTP.body() return a (response, ArticleInfo)
#   tuple.
# - the 'internal' methods have been marked private (they now start with
#   an underscore)
    
        @cpython_only
    def test_import_bug(self):
        # We simulate a bug in importlib and check that it's not stripped
        # away from the traceback.
        self.create_module('foo', '')
        importlib = sys.modules['_frozen_importlib_external']
        if 'load_module' in vars(importlib.SourceLoader):
            old_exec_module = importlib.SourceLoader.exec_module
        else:
            old_exec_module = None
        try:
            def exec_module(*args):
                1/0
            importlib.SourceLoader.exec_module = exec_module
            try:
                import foo
            except ZeroDivisionError as e:
                tb = e.__traceback__
            else:
                self.fail('ZeroDivisionError should have been raised')
            self.assert_traceback(tb, [__file__, '<frozen importlib', __file__])
        finally:
            if old_exec_module is None:
                del importlib.SourceLoader.exec_module
            else:
                importlib.SourceLoader.exec_module = old_exec_module
    
    @dataclasses.dataclass
class CV:
    T_CV4 = typing.ClassVar
    cv0: typing.ClassVar[int] = 20
    cv1: typing.ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
    
try:
    from sys import is_finalizing
except ImportError:
    # Emulate it
    def _get_emulated_is_finalizing():
        L = []
        atexit.register(lambda: L.append(None))
    
        .. deprecated:: 5.0
       Tornado ``Futures`` have been merged with `asyncio.Future`,
       so this method is now a no-op.
    '''
    return asyncio_future
    
        def on_ping(self, data):
        pass
    
        def resolve(self, host, port, family=socket.AF_UNSPEC, *args, **kwargs):
        if (host, port, family) in self.mapping:
            host, port = self.mapping[(host, port, family)]
        elif (host, port) in self.mapping:
            host, port = self.mapping[(host, port)]
        elif host in self.mapping:
            host = self.mapping[host]
        return self.resolver.resolve(host, port, family, *args, **kwargs)
    
        def set(self, value):
        if self.multiple:
            if not isinstance(value, list):
                raise Error('Option %r is required to be a list of %s' %
                            (self.name, self.type.__name__))
            for item in value:
                if item is not None and not isinstance(item, self.type):
                    raise Error('Option %r is required to be a list of %s' %
                                (self.name, self.type.__name__))
        else:
            if value is not None and not isinstance(value, self.type):
                raise Error('Option %r is required to be a %s (%s given)' %
                            (self.name, self.type.__name__, type(value)))
        self._value = value
        if self.callback is not None:
            self.callback(self._value)