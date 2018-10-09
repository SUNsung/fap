
        
            def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def save(self, must_create=False):
        '''
        Save the current session data to the database. If 'must_create' is
        True, raise a database error if the saving operation doesn't create a
        new entry (as opposed to possibly updating an existing entry).
        '''
        if self.session_key is None:
            return self.create()
        data = self._get_session(no_load=must_create)
        obj = self.create_model_instance(data)
        using = router.db_for_write(self.model, instance=obj)
        try:
            with transaction.atomic(using=using):
                obj.save(force_insert=must_create, force_update=not must_create, using=using)
        except IntegrityError:
            if must_create:
                raise CreateError
            raise
        except DatabaseError:
            if not must_create:
                raise UpdateError
            raise
    
    _FH_SIGNATURE = 0
_FH_EXTRACT_VERSION = 1
_FH_EXTRACT_SYSTEM = 2
_FH_GENERAL_PURPOSE_FLAG_BITS = 3
_FH_COMPRESSION_METHOD = 4
_FH_LAST_MOD_TIME = 5
_FH_LAST_MOD_DATE = 6
_FH_CRC = 7
_FH_COMPRESSED_SIZE = 8
_FH_UNCOMPRESSED_SIZE = 9
_FH_FILENAME_LENGTH = 10
_FH_EXTRA_FIELD_LENGTH = 11
    
        # Test an invalid call (bpo-34125)
    def test_unbound_method_invalid_args(self):
        kwargs = {}
        def f(p):
            dict.get(print, 42, **kwargs)
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident)])
    
            self.assertIsInstance(sys.maxsize, int)
        self.assertIsInstance(sys.maxunicode, int)
        self.assertEqual(sys.maxunicode, 0x10FFFF)
        self.assertIsInstance(sys.platform, str)
        self.assertIsInstance(sys.prefix, str)
        self.assertIsInstance(sys.base_prefix, str)
        self.assertIsInstance(sys.version, str)
        vi = sys.version_info
        self.assertIsInstance(vi[:], tuple)
        self.assertEqual(len(vi), 5)
        self.assertIsInstance(vi[0], int)
        self.assertIsInstance(vi[1], int)
        self.assertIsInstance(vi[2], int)
        self.assertIn(vi[3], ('alpha', 'beta', 'candidate', 'final'))
        self.assertIsInstance(vi[4], int)
        self.assertIsInstance(vi.major, int)
        self.assertIsInstance(vi.minor, int)
        self.assertIsInstance(vi.micro, int)
        self.assertIn(vi.releaselevel, ('alpha', 'beta', 'candidate', 'final'))
        self.assertIsInstance(vi.serial, int)
        self.assertEqual(vi[0], vi.major)
        self.assertEqual(vi[1], vi.minor)
        self.assertEqual(vi[2], vi.micro)
        self.assertEqual(vi[3], vi.releaselevel)
        self.assertEqual(vi[4], vi.serial)
        self.assertTrue(vi > (1,0,0))
        self.assertIsInstance(sys.float_repr_style, str)
        self.assertIn(sys.float_repr_style, ('short', 'legacy'))
        if not sys.platform.startswith('win'):
            self.assertIsInstance(sys.abiflags, str)
    
            if username:
            # Try to guess user home directory.  By default all users
            # directories are located in the same place and are named by
            # corresponding usernames.  If current user home directory points
            # to nonstandard place, this guess is likely wrong.
            if os.environ['USERNAME'] != username:
                drv, root, parts = self.parse_parts((userhome,))
                if parts[-1] != os.environ['USERNAME']:
                    raise RuntimeError('Can't determine home directory '
                                       'for %r' % username)
                parts[-1] = username
                if drv or root:
                    userhome = drv + root + self.join(parts[1:])
                else:
                    userhome = self.join(parts)
        return userhome
    
        @classmethod
    def find_spec(cls, fullname, path=None, target=None):
        filepath = cls._search_registry(fullname)
        if filepath is None:
            return None
        try:
            _path_stat(filepath)
        except OSError:
            return None
        for loader, suffixes in _get_supported_file_loaders():
            if filepath.endswith(tuple(suffixes)):
                spec = _bootstrap.spec_from_loader(fullname,
                                                   loader(fullname, filepath),
                                                   origin=filepath)
                return spec
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_SingleMessage_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' } ] ,
                                    None ),
               equal_to( True ) )
    
      # We don't want the requests to actually be sent to the server, just have it
  # return success.
  with patch( 'ycm.client.completer_available_request.'
              'CompleterAvailableRequest.PostDataToHandler',
              return_value = True ):
    with patch( 'ycm.client.completion_request.CompletionRequest.'
                'PostDataToHandlerAsync',
                return_value = MagicMock( return_value=True ) ):
    
      opts = { 'filter_diagnostics' : {
    'java,c,cs' : { 'regex' : '.*taco.*' } } }
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).