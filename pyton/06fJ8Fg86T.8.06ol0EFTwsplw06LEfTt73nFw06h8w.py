
        
                from .debughelpers import explain_template_loading_attempts
        explain_template_loading_attempts(self.app, template, attempts)
    
        flask.appcontext_pushed.connect(record_push, app)
    flask.appcontext_popped.connect(record_pop, app)
    try:
        with app.test_client() as c:
            rv = c.get('/')
            assert rv.data == b'Hello'
            assert recorded == ['push']
        assert recorded == ['push', 'pop']
    finally:
        flask.appcontext_pushed.disconnect(record_push, app)
        flask.appcontext_popped.disconnect(record_pop, app)
    
    
class Root(Resource):
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def run(self, args, opts):
        if opts.list:
            self._list_templates()
            return
        if opts.dump:
            template_file = self._find_template(opts.dump)
            if template_file:
                with open(template_file, 'r') as f:
                    print(f.read())
            return
        if len(args) != 2:
            raise UsageError()
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
        def get_testable_domain_names(self):
        '''Returns the set of domain names that can be tested against'''
        if self._test_names:
            return self._test_names
        else:
            return {'example.com'}
    
    # If true, the current module name will be prepended to all description
# unit titles (such as .. function::).
#add_module_names = True
    
        def tearDown(self):
        logging.disable(logging.NOTSET)
    
    if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
    __all__ = ['mixcloud_download']
    
    site = MusicPlayOn()
download = site.download_by_url
# TBD: implement download_playlist

    
            Args:
            fn: A callable that will take as many arguments as there are
                passed iterables.
            timeout: The maximum number of seconds to wait. If None, then there
                is no limit on the wait time.
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    
@contextlib.contextmanager
def captured_stderr():
    '''Return a context manager used by captured_stdout/stdin/stderr
    that temporarily replaces the sys stream *stream_name* with a StringIO.'''
    logging_stream = StringIO()
    handler = logging.StreamHandler(logging_stream)
    logging.root.addHandler(handler)
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      Example usage:
    
    
def OverlapLength_NoOverlap_test():
  eq_( 0, base.OverlapLength( 'foobar', 'goobar' ) )
  eq_( 0, base.OverlapLength( 'foobar', '(^($@#$#@' ) )
  eq_( 0, base.OverlapLength( 'foo bar zoo', 'foo zoo bar' ) )