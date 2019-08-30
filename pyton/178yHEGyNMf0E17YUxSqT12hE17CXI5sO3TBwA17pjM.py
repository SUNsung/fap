
        
                '''
        self.enabled = True
        self.kwargs = kwargs
    
        def test_GET_explicit_JSON_explicit_headers(self, httpbin):
        r = http('--json', 'GET', httpbin.url + '/headers',
                 'Accept:application/xml',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Accept': 'application/xml'' in r
        assert ''Content-Type': 'application/xml'' in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    
class ExitStatus:
    '''Program exit code constants.'''
    SUCCESS = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
    del sys

    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
        return _S3Connection
    
            respcls = responsetypes.from_args(body=body)
        return response.replace(body=body, cls=respcls)
    
    
class DefaultHeadersMiddleware(object):
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
        @nonce.decoder
    def nonce(value):  # pylint: disable=missing-docstring,no-self-argument
        try:
            return jose.decode_b64jose(value)
        except jose.DeserializationError as error:
            # TODO: custom error
            raise jose.DeserializationError('Invalid nonce: {0}'.format(error))
    
            cert_pem = test_util.load_vector(certs[0])
        chain_pem = (test_util.load_vector(certs[0]) + test_util.load_vector(certs[1]))
        candidate_cert_path = os.path.join(tmp_path, 'certs', 'cert_512.pem')
        candidate_chain_path = os.path.join(tmp_path, 'chains', 'chain.pem')
        candidate_fullchain_path = os.path.join(tmp_path, 'chains', 'fullchain.pem')
        mock_parser.verb = 'certonly'
        mock_parser.args = ['--cert-path', candidate_cert_path,
                            '--chain-path', candidate_chain_path,
                            '--fullchain-path', candidate_fullchain_path]
    
        def _get_rfc2136_client(self):
        return _RFC2136Client(self.credentials.conf('server'),
                              int(self.credentials.conf('port') or self.PORT),
                              self.credentials.conf('name'),
                              self.credentials.conf('secret'),
                              self.ALGORITHMS.get(self.credentials.conf('algorithm'),
                                                  dns.tsig.HMAC_MD5))
    
            self.webroot = os.path.join(self.nginx_root, 'webroot')
        os.mkdir(self.webroot)
        with open(os.path.join(self.webroot, 'index.html'), 'w') as file_handler:
            file_handler.write('Hello World!')
    
        with open(context.nginx_config_path, 'r') as file_h:
        current_nginx_config = file_h.read()
    
        @property
    def problem(self):
        '''Return the Exception raised during plugin setup, or None if all is well'''
        if isinstance(self._prepared, Exception):
            return self._prepared
        return None
    
    
def rand_(left, right):
    return operator.and_(right, left)
    
        def time_pandas_dtype(self, dtype):
        pandas_dtype(dtype)
    
        for fixit in fixit_completion:
      vimsupport.ReplaceChunks( fixit[ 'chunks' ], silent=True )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'GoTo', 'ft=python' ], '', False, 1, 1 )
      send_request.assert_called_once_with( *expected_args )

    
      post_vim_message.assert_has_exact_calls( [
    call( 'On the first day of Christmas, my VimScript gave to me',
          warning=False,
          truncate=True ),
    call( 'A test file in a Command-T', warning=False, truncate=True ),
    call( 'On the second day of Christmas, my VimScript gave to me',
          warning=False,
          truncate=True ),
    call( 'Two popup menus, and a test file in a Command-T',
          warning=False,
          truncate=True ),
  ] )
