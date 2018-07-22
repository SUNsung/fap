
        
                if (not line.strip() == '```'):
            if ('???' == no_comment_line or '...' == no_comment_line):
                has_question_marks = True
            linebuffer.append(dedent(line, indent_depth) if not fenced else line)
        try:
            line = read_filehandle.next()
            linenum += 1
        except StopIteration:
            line = ''
            break
    codefile = os.path.join(codedir, '%s%s.cpp' % (name, index))
    if fenced:
        text_filehandle.write('\n')
    
            for func, args, kwargs, expected in self.CALLS_KWARGS:
            with self.subTest(func=func, args=args, kwargs=kwargs):
                kwnames = tuple(kwargs.keys())
                args = args + tuple(kwargs.values())
                result = _testcapi.pyobject_fastcallkeywords(func, args, kwnames)
                self.check_result(result, expected)
    
        def getFeature(self, name):
        xname = _name_xform(name)
        try:
            return getattr(self._options, xname)
        except AttributeError:
            if name == 'infoset':
                options = self._options
                return (options.datatype_normalization
                        and options.whitespace_in_element_content
                        and options.comments
                        and options.charset_overrides_xml_encoding
                        and not (options.namespace_declarations
                                 or options.validate_if_schema
                                 or options.create_entity_ref_nodes
                                 or options.entities
                                 or options.cdata_sections))
            raise xml.dom.NotFoundErr('feature %s not known' % repr(name))
    
    
class CrawlDelayAndCustomAgentTest(BaseRobotTest, unittest.TestCase):
    robots_txt = '''\
# robots.txt for http://www.example.com/
    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
    
class Application(tornado.web.Application):
    def __init__(self, db):
        self.db = db
        handlers = [
            (r'/', HomeHandler),
            (r'/archive', ArchiveHandler),
            (r'/feed', FeedHandler),
            (r'/entry/([^/]+)', EntryHandler),
            (r'/compose', ComposeHandler),
            (r'/auth/create', AuthCreateHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            blog_title=u'Tornado Blog',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            ui_modules={'Entry': EntryModule},
            xsrf_cookies=True,
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            debug=True,
        )
        super(Application, self).__init__(handlers, **settings)
    
    # Without this line sphinx includes a copy of object.__init__'s docstring
# on any class that doesn't define __init__.
# https://bitbucket.org/birkenfeld/sphinx/issue/1337/autoclass_content-both-uses-object__init__
autodoc_docstring_signature = False