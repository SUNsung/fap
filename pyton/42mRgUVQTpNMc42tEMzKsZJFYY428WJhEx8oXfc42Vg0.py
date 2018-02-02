
        
                def fetch(field):
            try:
                c = subprocess.Popen([intrptr, 'setup.py',
                                      '--' + field], cwd=folder,
                                      stdout=subprocess.PIPE)
                return c.communicate()[0].strip()
            except OSError:
                return '?'
        self.name = name
        self.license = fetch('license')
        self.author = fetch('author')
        self.version = fetch('version')
    
    # the signals
from .signals import signals_available, template_rendered, request_started, \
     request_finished, got_request_exception, request_tearing_down, \
     appcontext_tearing_down, appcontext_pushed, \
     appcontext_popped, message_flashed, before_render_template
    
        app.logger.info('\n'.join(info))
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.utils.template import render_templatefile, string_camelcase
from scrapy.exceptions import UsageError
    
    def mixcloud_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url, faker=True)
    title = r1(r'<meta property='og:title' content='([^']*)'', html)
    preview_url = r1(r'm-preview=\'([^\']+)\'', html)
    preview = r1(r'previews(.*)\.mp3$', preview_url)