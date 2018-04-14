
        
        PY2 = sys.version_info[0] == 2
_identity = lambda x: x
    
    
def explain_template_loading_attempts(app, template, attempts):
    '''This should help developers understand what failed'''
    info = ['Locating template '%s':' % template]
    total_found = 0
    blueprint = None
    reqctx = _request_ctx_stack.top
    if reqctx is not None and reqctx.request.blueprint is not None:
        blueprint = reqctx.request.blueprint
    
            def check(self, value):
            return isinstance(value, OrderedDict)
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
        set_init_version(version)
    make_git_commit('Bump version number to %s', version)
    make_git_tag(version)
    build()
    set_init_version(dev_version)
    
        app = flask.Flask(__name__)
    with pytest.raises(TypeError):
        app.config.from_mapping(
            {}, {}
        )
    
    
def test_installed_module_paths(modules_tmpdir, modules_tmpdir_prefix,
                                purge_module, site_packages, limit_loader):
    site_packages.join('site_app.py').write(
        'import flask\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('site_app')
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    :copyright: (c) 2012 by Kenneth Reitz.
:license: Apache2, see LICENSE for more details.
'''
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
    
http_proxies = {'http': 'http://http.proxy',
                'http://some.host': 'http://some.host.proxy'}
all_proxies = {'all': 'socks5://http.proxy',
               'all://some.host': 'socks5://some.host.proxy'}
mixed_proxies = {'http': 'http://http.proxy',
                 'http://some.host': 'http://some.host.proxy',
                 'all': 'socks5://http.proxy'}
@pytest.mark.parametrize(
    'url, expected, proxies', (
        ('hTTp://u:p@Some.Host/path', 'http://some.host.proxy', http_proxies),
        ('hTTp://u:p@Other.Host/path', 'http://http.proxy', http_proxies),
        ('hTTp:///path', 'http://http.proxy', http_proxies),
        ('hTTps://Other.Host', None, http_proxies),
        ('file:///etc/motd', None, http_proxies),
    
        close_server = threading.Event()
    server = Server(digest_response_handler, wait_to_close_event=close_server)
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
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
    
            def eb_wrapper(failure):
            case = _create_testcase(method, 'errback')
            exc_info = failure.value, failure.type, failure.getTracebackObject()
            results.addError(case, exc_info)
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
            for s in self.stream_types:
            quality = s['id']
            src = match1(content,
                         r'src: '([^']+)', 'data-res': '%s'' % quality)
            if src is not None:
                url = 'http://en.musicplayon.com%s' % src
                self.streams[quality] = {'url': url}
    
        type_, ext, size = url_info(stream_url)
    print_info(site_info, title, type_, size)
    if not info_only:
        download_url_ffmpeg(url=stream_url, title=title, ext= 'mp4', output_dir=output_dir)