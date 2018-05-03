
        
        from astronet.data import preprocess
    
      Returns:
    labels: An int64 tf.Placeholder with shape [batch_size].
  '''
  batch_size = None  # Batch size will be dynamically specified.
  return tf.placeholder(dtype=tf.int64, shape=[batch_size], name='labels')

    
    '''Configuration container for TensorFlow models.
    
      return all_time, all_flux

    
      Returns:
    interp_spline: List of numpy arrays; each is the masked spline with missing
        points linearly interpolated.
  '''
  interp_spline = []
  for time, masked_time, masked_spline in zip(
      all_time, all_masked_time, all_masked_spline):
    if len(masked_time) > 0:  # pylint:disable=g-explicit-length-test
      interp_spline.append(np.interp(time, masked_time, masked_spline))
    else:
      interp_spline.append(np.full_like(time, np.nan))
  return interp_spline
    
    
def epoch_completed(model, session, epoch, epoch_loss,
                    val_instances, val_labels, saver, save_path, best_f1):
  '''Runs every time an epoch completes.
    
      def Conversion3dTestWithType(self, dtype):
    original_data = np.arange(24).reshape(2, 3, 4).astype(dtype)
    serialized = datum_io.SerializeToString(original_data)
    retrieved_data = datum_io.ParseFromString(serialized)
    self.assertTrue(np.array_equal(original_data, retrieved_data))
    
      @property
  def target_layer_type(self):
    return self._target_layer_type
    
        @property
    def apparent_encoding(self):
        '''The apparent encoding, provided by the chardet library.'''
        return chardet.detect(self.content)['encoding']
    
        if not isinstance(password, basestring):
        warnings.warn(
            'Non-string passwords will no longer be supported in Requests '
            '3.0.0. Please convert the object you've passed in ({0!r}) to '
            'a string or bytes object in the near future to avoid '
            'problems.'.format(password),
            category=DeprecationWarning,
        )
        password = str(password)
    # -- End Removal --
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('http://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
                # Extract any cookies sent on the response to the cookiejar
            # in the new request. Because we've mutated our copied prepared
            # request, use the old one that we haven't yet touched.
            extract_cookies_to_jar(prepared_request._cookies, req, resp.raw)
            merge_cookies(prepared_request._cookies, self.cookies)
            prepared_request.prepare_cookies(prepared_request._cookies)
    
        with server as (host, port):
        url = 'http://{0}:{1}/'.format(host, port)
        r = requests.get(url, auth=auth)
        # Verify server didn't authenticate us.
        assert r.status_code == 401
        assert r.history[0].status_code == 401
        close_server.set()
    
            except MaxRetryError as e:
            if isinstance(e.reason, ConnectTimeoutError):
                # TODO: Remove this in 3.0.0: see #2811
                if not isinstance(e.reason, NewConnectionError):
                    raise ConnectTimeout(e, request=request)
    
    __all__ = ['__version__', 'version_info', 'twisted_version',
           'Spider', 'Request', 'FormRequest', 'Selector', 'Item', 'Field']
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
            return requests
    
    >>> mean([-1.0, 2.5, 3.25, 5.75])
2.625
    
        def test_keys_reuse(self):
        s = '[{'a_key': 1, 'b_\xe9': 2}, {'a_key': 3, 'b_\xe9': 4}]'
        self.check_keys_reuse(s, self.loads)
        self.check_keys_reuse(s, self.json.decoder.JSONDecoder().decode)
    
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
    
        def _longcmdstring(self, line, file=None):
        '''Internal: send a command and get the response plus following text.
        Same as _longcmd() and _getlongresp(), except that the returned `lines`
        are unicode strings rather than bytes objects.
        '''
        self._putcmd(line)
        resp, list = self._getlongresp(file)
        return resp, [line.decode(self.encoding, self.errors)
                      for line in list]
    
        def _get_baseURI(self):
        return self.baseURI
    def _set_baseURI(self, uri):
        self.baseURI = uri
    
    int main( int argc, char **argv)
{
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return PythonService_main(argc, argv);
}
'''
    
    DEFAULT_DB = None
SPACE = ' '
COMMASPACE = ', '
    
        def _create_infile(self):
        infile = support.TESTFN
        with open(infile, 'w') as fp:
            self.addCleanup(os.remove, infile)
            fp.write(self.data)
        return infile
    
    try:
    WINFUNCTYPE
except NameError:
    # fake to enable this test on Linux
    WINFUNCTYPE = CFUNCTYPE
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
            yield conn.read_response(Delegate())
        yield event.wait()
        self.assertEqual(self.code, 200)
        self.assertEqual(b''.join(body), b'hello')

    
            self.reader, addr = a.accept()
        set_close_exec(self.reader.fileno())
        self.reader.setblocking(0)
        self.writer.setblocking(0)
        a.close()
        self.reader_fd = self.reader.fileno()
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
    
@skipIfNonUnix
class TestMultiprocess(unittest.TestCase):
    # These tests verify that the two multiprocess examples from the
    # TCPServer docs work. Both tests start a server with three worker
    # processes, each of which prints its task id to stdout (a single
    # byte, so we don't have to worry about atomicity of the shared
    # stdout stream) and then exits.
    def run_subproc(self, code):
        proc = subprocess.Popen(sys.executable,
                                stdin=subprocess.PIPE,
                                stdout=subprocess.PIPE)
        proc.stdin.write(utf8(code))
        proc.stdin.close()
        proc.wait()
        stdout = proc.stdout.read()
        proc.stdout.close()
        if proc.returncode != 0:
            raise RuntimeError('Process returned %d. stdout=%r' % (
                proc.returncode, stdout))
        return to_unicode(stdout)