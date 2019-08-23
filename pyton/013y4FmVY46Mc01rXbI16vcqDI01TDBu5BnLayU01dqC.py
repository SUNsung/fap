
        
            @pytest.fixture(autouse=True)
    def history(self, mocker):
        return mocker.patch('thefuck.shells.shell.get_history',
                            return_value=['le cat', 'fuck', 'ls cat',
                                          'diff x', 'nocommand x', u'café ô'])
    
        @pytest.mark.parametrize('side_effect, expected_version, call_args', [
        ([b'''Major  Minor  Build  Revision
-----  -----  -----  --------
5      1      17763  316     \n'''], 'PowerShell 5.1.17763.316', ['powershell.exe']),
        ([IOError, b'PowerShell 6.1.2\n'], 'PowerShell 6.1.2', ['powershell.exe', 'pwsh'])])
    def test_info(self, side_effect, expected_version, call_args, shell, Popen):
        Popen.return_value.stdout.read.side_effect = side_effect
        assert shell.info() == expected_version
        assert Popen.call_count == len(call_args)
        assert all([Popen.call_args_list[i][0][0][0] == call_arg for i, call_arg in enumerate(call_args)])
    
        @pytest.fixture(autouse=True)
    def Popen(self, mocker):
        mock = mocker.patch('thefuck.shells.tcsh.Popen')
        mock.return_value.stdout.read.return_value = (
            b'fuck\teval $(thefuck $(fc -ln -1))\n'
            b'l\tls -CF\n'
            b'la\tls -A\n'
            b'll\tls -alF')
        return mock
    
    
class Fish(Generic):
    friendly_name = 'Fish Shell'
    
        import sys
    from mymodule import entry_function
    sys.exit(entry_function())
    
    
no_suggestions = '''\
az provider: error: the following arguments are required: _subcommand
usage: az provider [-h] {list,show,register,unregister,operation} ...
'''
    
    
def rev_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'http://hg.scrapy.org/scrapy/changeset/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'r' + text, refuri=ref, **options)
    return [node], []

    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
        default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            cookiejarkey = request.meta.get('cookiejar')
        jar = self.jars[cookiejarkey]
        cookies = self._get_request_cookies(jar, request)
        for cookie in cookies:
            jar.set_cookie_if_ok(cookie, request)
    
            for fmt, func in six.iteritems(self._formats):
            new_response = func(response)
            if new_response:
                logger.debug('Decompressed response with format: %(responsefmt)s',
                             {'responsefmt': fmt}, extra={'spider': spider})
                return new_response
        return response

    
    See documentation in docs/topics/downloader-middleware.rst
'''
    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth

    
        DOWNLOAD_EXCEPTIONS = (defer.TimeoutError, TimeoutError, DNSLookupError,
                           ConnectionRefusedError, ConnectionDone, ConnectError,
                           ConnectionLost, TCPTimedOutError, ResponseFailed,
                           IOError)