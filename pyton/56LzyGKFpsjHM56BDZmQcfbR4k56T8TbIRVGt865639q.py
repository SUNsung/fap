
        
            out = issue_template_tmpl % {'version': locals()['__version__']}
    
        def test_proxy_http(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
        def _real_extract(self, url):
        display_id = self._match_id(url)
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
                write_stream_kwargs = {
                'stream': build_output_stream(
                    args=args,
                    env=env,
                    request=response.request,
                    response=response,
                    output_options=(
                        args.output_options
                        if response is final_response
                        else args.output_options_history
                    )
                ),
                # NOTE: `env.stdout` will in fact be `stderr` with `--download`
                'outfile': env.stdout,
                'flush': env.stdout_isatty or args.stream
            }
            try:
                if env.is_windows and is_py3 and 'colors' in args.prettify:
                    write_stream_with_colors_win_py3(**write_stream_kwargs)
                else:
                    write_stream(**write_stream_kwargs)
            except IOError as e:
                if not show_traceback and e.errno == errno.EPIPE:
                    # Ignore broken pipes unless --traceback.
                    env.stderr.write('\n')
                else:
                    raise
    
        # Build candidate mime type and lexer names.
    mime_types, lexer_names = [mime], []
    type_, subtype = mime.split('/', 1)
    if '+' not in subtype:
        lexer_names.append(subtype)
    else:
        subtype_name, subtype_suffix = subtype.split('+', 1)
        lexer_names.extend([subtype_name, subtype_suffix])
        mime_types.extend([
            '%s/%s' % (type_, subtype_name),
            '%s/%s' % (type_, subtype_suffix)
        ])
    
    
def load_json_preserve_order(s):
    return json.loads(s, object_pairs_hook=OrderedDict)
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
    
def test_timelines(client):
    '''Make sure that timelines work'''
    register_and_login(client, 'foo', 'default')
    add_message(client, 'the message by foo')
    logout(client)
    register_and_login(client, 'bar', 'default')
    add_message(client, 'the message by bar')
    rv = client.get('/public')
    assert b'the message by foo' in rv.data
    assert b'the message by bar' in rv.data
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        @mock.patch('certbot.notify.smtplib.LMTP')
    @mock.patch('certbot.notify.subprocess.Popen')
    def test_smtp_failure(self, mock_popen, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        lmtp_obj.sendmail.side_effect = socket.error(17)
        proc = mock.MagicMock()
        mock_popen.return_value = proc
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
        self.assertEqual(proc.communicate.call_count, 1)
    
                        # Now |value| = top * 2**e exactly.
                    if e >= 0:
                        n = top << e
                        d = 1
                    else:
                        n = top
                        d = 1 << -e
                    if value < 0:
                        n = -n
                    self.n = n
                    self.d = d
                    assert float(n) / float(d) == value
                else:
                    raise TypeError('can't deal with %r' % value)
    
    
class TestDecode:
    def test_decimal(self):
        rval = self.loads('1.1', parse_float=decimal.Decimal)
        self.assertTrue(isinstance(rval, decimal.Decimal))
        self.assertEqual(rval, decimal.Decimal('1.1'))
    
        if C is not None:
        # C version of decimal
        start_calc = time.time()
        x = factorial(C.Decimal(n), 0)
        end_calc = time.time()
        start_conv = time.time()
        sx = str(x)
        end_conv = time.time()
        print('cdecimal:')
        print('calculation time: %fs' % (end_calc-start_calc))
        print('conversion time: %fs\n' % (end_conv-start_conv))
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.size_read >= self.chunksize:
            return b''
        if size < 0:
            size = self.chunksize - self.size_read
        if size > self.chunksize - self.size_read:
            size = self.chunksize - self.size_read
        data = self.file.read(size)
        self.size_read = self.size_read + len(data)
        if self.size_read == self.chunksize and \
           self.align and \
           (self.chunksize & 1):
            dummy = self.file.read(1)
            self.size_read = self.size_read + len(dummy)
        return data
    
    def _decode_uXXXX(s, pos):
    esc = s[pos + 1:pos + 5]
    if len(esc) == 4 and esc[1] not in 'xX':
        try:
            return int(esc, 16)
        except ValueError:
            pass
    msg = 'Invalid \\uXXXX escape'
    raise JSONDecodeError(msg, s, pos)
    
    
class DOMBuilderFilter:
    '''Element filter which can be used to tailor construction of
    a DOM instance.
    '''
    
        objects = []
    libs = ['shell32.lib', 'comdlg32.lib', 'wsock32.lib', 'user32.lib', 'oleaut32.lib']
    for moddefn in moddefns:
        print('# Module', moddefn.name)
        for file in moddefn.sourceFiles:
            base = os.path.basename(file)
            base, ext = os.path.splitext(base)
            objects.append(base + '.obj')
            print(r'$(temp_dir)\%s.obj: '%s'' % (base, file))
            print('\t@$(CC) -c -nologo /Fo$* $(cdl) $(c_debug) /D BUILD_FREEZE', end=' ')
            print(''-I$(pythonhome)/Include'  '-I$(pythonhome)/PC' \\')
            print('\t\t$(cflags) $(cdebug) $(cinclude) \\')
            extra = moddefn.GetCompilerOptions()
            if extra:
                print('\t\t%s \\' % (' '.join(extra),))
            print('\t\t'%s'' % file)
            print()
    
            # C type static method: METH_FASTCALL | METH_CLASS
        (int.from_bytes, (b'\x01\x00', 'little'), 1),
    
            Default implementation indicates an error because
        XML-RPC uses the POST method.
        '''
    
                    # Map Unicode whitespace and control characters
                # (categories Z* and C* except ASCII space)
                if not printable:
                    if ch2 is not None:
                        # Match Python 3's representation of non-printable
                        # wide characters.
                        code = (ord(ch) & 0x03FF) << 10
                        code |= ord(ch2) & 0x03FF
                        code += 0x00010000
                    else:
                        code = ord(ucs)
    
        def test_sort_keys_flag(self):
        infile = self._create_infile()
        rc, out, err = assert_python_ok('-m', 'json.tool', '--sort-keys', infile)
        self.assertEqual(rc, 0)
        self.assertEqual(out.splitlines(),
                         self.expect_without_sort_keys.encode().splitlines())
        self.assertEqual(err, b'')

    
                    it = pickle.loads(d)
                try:
                    next(it)
                except StopIteration:
                    continue
                d = pickle.dumps(it, proto)
                it = pickle.loads(d)
                self.assertEqual(list(it), data[1:])
    
        @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        '''def test_object(queue):
           queue_object = QueueObject(queue, True)
           print('Inside func: {}'.format(queue_object.object))'''
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls