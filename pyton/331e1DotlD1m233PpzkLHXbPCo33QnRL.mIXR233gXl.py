
        
        
class Fieldset:
    def __init__(self, form, name=None, readonly_fields=(), fields=(), classes=(),
                 description=None, model_admin=None):
        self.form = form
        self.name, self.fields = name, fields
        self.classes = ' '.join(classes)
        self.description = description
        self.model_admin = model_admin
        self.readonly_fields = readonly_fields
    
    
class StringConverter:
    regex = '[^/]+'
    
        def test_gin_index(self):
        # Ensure the table is there and doesn't have an index.
        self.assertNotIn('field', self.get_constraints(IntegerArrayModel._meta.db_table))
        # Add the index
        index_name = 'integer_array_model_field_gin'
        index = GinIndex(fields=['field'], name=index_name)
        with connection.schema_editor() as editor:
            editor.add_index(IntegerArrayModel, index)
        constraints = self.get_constraints(IntegerArrayModel._meta.db_table)
        # Check gin index was added
        self.assertEqual(constraints[index_name]['type'], GinIndex.suffix)
        # Drop the index
        with connection.schema_editor() as editor:
            editor.remove_index(IntegerArrayModel, index)
        self.assertNotIn(index_name, self.get_constraints(IntegerArrayModel._meta.db_table))
    
        @property
    def layer_name(self):
        'Return the name of the layer for the feature.'
        name = capi.get_feat_name(self._layer._ldefn)
        return force_str(name, self.encoding, strings_only=True)
    
            For raster formats using Persistent Auxiliary Metadata (PAM) services,
        the statistics might be cached in an auxiliary file.
        '''
        # Prepare array with arguments for capi function
        smin, smax, smean, sstd = c_double(), c_double(), c_double(), c_double()
        stats_args = [
            self._ptr, c_int(approximate), byref(smin), byref(smax),
            byref(smean), byref(sstd), c_void_p(), c_void_p(),
        ]
    
        volname='Python %s'%(getFullVersion())
    cmd = ('hdiutil create -format UDRW -volname %s -srcfolder %s -size 100m %s'%(
            shellQuote(volname),
            shellQuote(os.path.join(WORKDIR, 'installer')),
            shellQuote(imagepath + '.tmp.dmg' )))
    for i in range(5):
        fd = os.popen(cmd, 'r')
        data = fd.read()
        xit = fd.close()
        if not xit:
            break
        sys.stdout.write(data)
        print(' -- retrying hdiutil create')
        time.sleep(5)
    else:
        raise RuntimeError('command failed: %s'%(cmd,))
    
        def __init__(self, raise_on_events=None, exc_type=RuntimeError):
        self.raise_on_events = raise_on_events or ()
        self.exc_type = exc_type
        self.seen = []
        self.closed = False
    
        def test_get_source(self):
        # Verify the source code is returned as a string.
        # If an OSError is raised by get_data then raise ImportError.
        expected_source = self.loader.source.decode('utf-8')
        self.assertEqual(self.loader.get_source(self.name), expected_source)
        def raise_OSError(path):
            raise OSError
        self.loader.get_data = raise_OSError
        with self.assertRaises(ImportError) as cm:
            self.loader.get_source(self.name)
        self.assertEqual(cm.exception.name, self.name)
    
        # No need to report 'unknown' information...
    platform = platform.replace('unknown', '')
    
            def enum_types(mimedb):
            i = 0
            while True:
                try:
                    ctype = _winreg.EnumKey(mimedb, i)
                except OSError:
                    break
                else:
                    if '\0' not in ctype:
                        yield ctype
                i += 1
    
    
if __name__ == '__main__':
    unittest.main()

    
        def date(self):
        '''Process the DATE command.
        Returns:
        - resp: server response if successful
        - date: datetime object
        '''
        resp = self._shortcmd('DATE')
        if not resp.startswith('111'):
            raise NNTPReplyError(resp)
        elem = resp.split()
        if len(elem) != 2:
            raise NNTPDataError(resp)
        date = elem[1]
        if len(date) != 14:
            raise NNTPDataError(resp)
        return resp, _parse_datetime(date, None)
    
        def user(self, user):
        '''Send user name, return response
    
        def _qsize(self):
        return len(self.queue)
    
        def message_as_clear(self, body_parts, attachments, parts, msg):
        m = self._str_msg(msg)
        m.clear()
        self.assertEqual(len(m), 0)
        self.assertEqual(list(m.items()), [])
        self.assertIsNone(m.get_payload())
        self.assertEqual(list(m.iter_parts()), [])
    
            class B2(self.basetype):
            def __init__(me, *args, **kwargs):
                if self.basetype is not bytes:
                    self.basetype.__init__(me, *args, **kwargs)
                me.foo = 'bar'
    
        def test_reentrant_write_buffered(self):
        self.check_reentrant_write(b'xy', mode='wb')
    
    class ExtensionTests(unittest.TestCase):
    def CheckScriptStringSql(self):
        con = sqlite.connect(':memory:')
        cur = con.cursor()
        cur.executescript('''
            -- bla bla
            /* a stupid comment */
            create table a(i);
            insert into a(i) values (5);
            ''')
        cur.execute('select i from a')
        res = cur.fetchone()[0]
        self.assertEqual(res, 5)
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    
# copied from fix_tuple_params.py
def is_docstring(stmt):
    return isinstance(stmt, pytree.Node) and stmt.children[0].type == token.STRING
    
        kwargs['testRunner'] = test_runner_factory(orig_stderr)
    try:
        tornado.testing.main(**kwargs)
    finally:
        # The tests should run clean; consider it a failure if they
        # logged anything at info level or above.
        if (
            log_counter.info_count > 0
            or log_counter.warning_count > 0
            or log_counter.error_count > 0
            or counting_stderr.byte_count > 0
        ):
            logging.error(
                'logged %d infos, %d warnings, %d errors, and %d bytes to stderr',
                log_counter.info_count,
                log_counter.warning_count,
                log_counter.error_count,
                counting_stderr.byte_count,
            )
            sys.exit(1)
    
        def _handle_events(self, fd: int, events: int) -> None:
        read_fd = pycares.ARES_SOCKET_BAD
        write_fd = pycares.ARES_SOCKET_BAD
        if events & IOLoop.READ:
            read_fd = fd
        if events & IOLoop.WRITE:
            write_fd = fd
        self.channel.process_fd(read_fd, write_fd)