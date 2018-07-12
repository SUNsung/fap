
        
        from .theplatform import theplatform_download_by_pid
    
    	type, ext, size = url_info(url)
	print_info(site_info, title, type, size)
	
	if not info_only:
		download_urls([url], title, ext, size, output_dir, merge = merge)
    
        def __init__(self, pin_json):
        img_file = pin_json['file']
        self.id = str(pin_json['pin_id'])
        self.url = urlparse.urljoin(self.host, img_file['key'])
        self.ext = img_file['type'].split('/')[-1]
    
    __all__ = ['kugou_download']
    
    site_info = 'MioMio.tv'
download = miomio_download
download_playlist = playlist_not_supported('miomio')

    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    Usage:
while True:
    try:
        chunk = Chunk(file)
    except EOFError:
        break
    chunktype = chunk.getname()
    while True:
        data = chunk.read(nbytes)
        if not data:
            pass
        # do something with data
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)
    
    SERVICETEMPLATE = '''
extern int PythonService_main(int, char **);
    
                # In previous versions of SimpleXMLRPCServer, _dispatch
            # could be overridden in this class, instead of in
            # SimpleXMLRPCDispatcher. To maintain backwards compatibility,
            # check to see if a subclass implements _dispatch and dispatch
            # using that method if present.
            response = self.server._marshaled_dispatch(
                    data, getattr(self, '_dispatch', None), self.path
                )
        except Exception as e: # This should only happen if the module is buggy
            # internal error, report as HTTP server error
            self.send_response(500)
    
        def check_syntax_error(self, err, basename, lineno, offset=0):
        self.assertIn('%s.py, line %d' % (basename, lineno), str(err))
        self.assertEqual(os.path.basename(err.filename), basename + '.py')
        self.assertEqual(err.lineno, lineno)
        self.assertEqual(err.offset, offset)
    
            try:
            fds = s.select()
        except OSError as e:
            if e.errno == errno.EINVAL and sys.platform == 'darwin':
                # unexplainable errors on macOS don't need to fail the test
                self.skipTest('Invalid argument error calling poll()')
            raise
        self.assertEqual(NUM_FDS // 2, len(fds))
    
    import dataclasses
import typing
    
    
def read_binary(package: Package, resource: Resource) -> bytes:
    '''Return the binary contents of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    with open_binary(package, resource) as fp:
        return fp.read()
    
        def allowance(self, filename):
        '''Preconditions:
        - our agent applies to this entry
        - filename is URL decoded'''
        for line in self.rulelines:
            if line.applies_to(filename):
                return line.allowance
        return True

    
    
def import_object(name):
    # type: (_BaseString) -> Any
    '''Imports an object by name.
    
            if self.stream_request_body:
            self.handler._prepared_future = Future()
        # Note that if an exception escapes handler._execute it will be
        # trapped in the Future it returns (which we are ignoring here,
        # leaving it to be logged when the Future is GC'd).
        # However, that shouldn't happen because _execute has a blanket
        # except handler, and we cannot easily access the IOLoop here to
        # call add_future (because of the requirement to remain compatible
        # with WSGI)
        self.handler._execute(transforms, *self.path_args,
                              **self.path_kwargs)
        # If we are streaming the request body, then execute() is finished
        # when the handler has prepared to receive the body.  If not,
        # it doesn't matter when execute() finishes (so we return None)
        return self.handler._prepared_future
    
        def test_malformed_first_line_log(self):
        with ExpectLog(gen_log, '.*Malformed HTTP request line'):
            self.stream.write(b'asdf\r\n\r\n')
            # TODO: need an async version of ExpectLog so we don't need
            # hard-coded timeouts here.
            self.io_loop.add_timeout(datetime.timedelta(seconds=0.05),
                                     self.stop)
            self.wait()
    
        @gen_test
    def test_get_timeout_preempted(self):
        q = queues.Queue()
        get = q.get(timeout=timedelta(seconds=0.01))
        q.put(0)
        yield gen.sleep(0.02)
        self.assertEqual(0, (yield get))
    
        # pylint: disable=no-self-use
    def test_from_event(self):
        '''Test converting event to db event.'''
        event = ha.Event('test_event', {
            'some_data': 15
        })
        assert event == Events.from_event(event).to_native()