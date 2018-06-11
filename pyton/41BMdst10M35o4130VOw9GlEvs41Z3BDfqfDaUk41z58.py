
        
                if triple is None:
            detail = 'no match'
        else:
            detail = 'found (%r)' % (triple[1] or '<string>')
            total_found += 1
        info.append('       -> %s' % detail)
    
    
def test_egg_installed_paths(install_egg, modules_tmpdir,
                             modules_tmpdir_prefix):
    modules_tmpdir.mkdir('site_egg').join('__init__.py').write(
        'import flask\n\napp = flask.Flask(__name__)'
    )
    install_egg('site_egg')
    try:
        import site_egg
        assert site_egg.app.instance_path == \
            str(modules_tmpdir.join('var/').join('site_egg-instance'))
    finally:
        if 'site_egg' in sys.modules:
            del sys.modules['site_egg']
    
        flask.request_started.connect(before_request_signal, app)
    flask.request_finished.connect(after_request_signal, app)
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
        if key:
        return key
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
    
class TerminalModule(TerminalBase):
    
        terminal_stdout_re = [
        re.compile(br'[\r\n]?[\w+\-\.:\/\[\]]+(?:\([^\)]+\)){,3}(?:>|#) ?$'),
        re.compile(br'\@[\w\-\.]+:\S+?[>#\$] ?$')
    ]
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def syntax(self):
        return '[options] <spider>'