
        
        from youtube_dl.compat import (
    compat_basestring,
    compat_input,
    compat_getpass,
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import (
    make_HTTPS_handler,
    sanitized_Request,
)
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
from youtube_dl.utils import shell_quote
    
    
iv = key = [0x20, 0x15] + 14 * [0]
    
    import io
import optparse
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        def _list_templates(self):
        print('Available templates:')
        for filename in sorted(os.listdir(self.templates_dir)):
            if filename.endswith('.tmpl'):
                print('  %s' % splitext(filename)[0])
    
        def syntax(self):
        return '[options] <url>'
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
        def short_desc(self):
        return 'Print Scrapy version'