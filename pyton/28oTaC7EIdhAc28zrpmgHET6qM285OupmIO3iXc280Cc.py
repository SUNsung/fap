
        
                String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    #: The set of HTTP status codes that indicate an automatically
#: processable redirect.
REDIRECT_STATI = (
    codes.moved,               # 301
    codes.found,               # 302
    codes.other,               # 303
    codes.temporary_redirect,  # 307
    codes.permanent_redirect,  # 308
)
    
        def __init__(self, username, password):
        self.username = username
        self.password = password
    
        builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
        @classmethod
    def register_sources(cls, datasource_config):
        for module_name, class_names in datasource_config.items():
            class_names = [str(s) for s in class_names]
            module_obj = __import__(module_name, fromlist=class_names)
            for class_name in class_names:
                source_class = getattr(module_obj, class_name)
                cls.sources[source_class.type] = source_class
    
        def dttm_sql_literal(self, dttm):
        '''Convert datetime object to a SQL expression string
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    
@wsgi_safe
class NamedURLSpecGroupsTest(WebTestCase):
    def get_handlers(self):
        class EchoHandler(RequestHandler):
            def get(self, path):
                self.write(path)
    
    The one public-facing part of this module is the `Configurable` class
and its `~Configurable.configure` method, which becomes a part of the
interface of its subclasses, including `.AsyncHTTPClient`, `.IOLoop`,
and `.Resolver`.
'''
    
    # This import will fail if path is not set up correctly
import testapp
    
        @gen_test
    def test_stop_in_callback(self):
        # Issue #2069: calling server.stop() in a loop callback should not
        # raise EBADF when the loop handles other server connection
        # requests in the same loop iteration
    
    
if __name__ == '__main__':
    main()

    
        __metaclass__ = abc.ABCMeta
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
    production code which is untestable:
    
        test = CatalogStatic('param_value_1')
    test.main_method()
    
    
@coroutine
def coroutine3(target):
    while True:
        request = yield
        if 20 < request <= 30:
            print('request {} handled in coroutine 3'.format(request))
        else:
            target.send(request)
    
    ### OUTPUT ###
# renaming foo.txt to bar.txt
# renaming bar.txt to baz.txt
# renaming baz.txt to bar.txt
# renaming bar.txt to foo.txt

    
    
def count_to(count):
    '''Counts by word numbers, up to a maximum of five'''
    numbers = ['one', 'two', 'three', 'four', 'five']
    for number in numbers[:count]:
        yield number
    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
    
class CompositeSpecification(Specification):