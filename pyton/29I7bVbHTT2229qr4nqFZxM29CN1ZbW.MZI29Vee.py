
        
        
def test_custom_tag():
    class Foo(object):
        def __init__(self, data):
            self.data = data
    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
        Implements signals based on blinker if available, otherwise
    falls silently back to a noop.
    
            rv = client.get('/?foo=bar')
        assert rv.data == b'Hello World!'
    
        recorded = []
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
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
    
    
class FormatterPlugin(object):
    
    network.add_argument(
    '--timeout',
    type=float,
    default=30,
    metavar='SECONDS',
    help='''
    The connection timeout of the request in seconds. The default value is
    30 seconds.
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
                if isinstance(token, Escaped):
                continue
    
    ] + _py_files('scrapy/contrib') + _py_files('scrapy/contrib_exp')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def __init__(self, method, *args):
        self.testcase_pre = _create_testcase(method, '@%s pre-hook' % self.name)
        self.testcase_post = _create_testcase(method, '@%s post-hook' % self.name)
        self.args = args