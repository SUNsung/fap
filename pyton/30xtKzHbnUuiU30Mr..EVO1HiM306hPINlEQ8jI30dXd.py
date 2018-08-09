
        
                def to_json(self, value):
            return [[k, self.serializer.tag(v)] for k, v in iteritems(value)]
    
    
def attach_enctype_error_multidict(request):
    '''Since Flask 0.8 we're monkeypatching the files object in case a
    request is detected that does not use multipart form data but the files
    object is accessed.
    '''
    oldcls = request.files.__class__
    class newcls(oldcls):
        def __getitem__(self, key):
            try:
                return oldcls.__getitem__(self, key)
            except KeyError:
                if key not in request.form:
                    raise
                raise DebugFilesKeyError(request, key)
    newcls.__name__ = oldcls.__name__
    newcls.__module__ = oldcls.__module__
    request.files.__class__ = newcls
    
            This check is usually skipped if the session was deleted.
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
        with open(filename) as f:
        contents = re.sub(
            r'^(\s*%s\s*=\s*')(.+?)(')' % pattern,
            inject_version, f.read(),
            flags=re.DOTALL | re.MULTILINE
        )
    
        sys.meta_path.append(Loader())
    request.addfinalizer(sys.meta_path.pop)
    
                greenlets.append(greenlet(g))
            return 'Hello World!'
    
        def __init__(self, expecting, input):
        RecognitionException.__init__(self, input)
        
        self.expecting = expecting
    
    '''
    
    
class PostModule(tornado.web.UIModule):
    def render(self, post):
        return self.render_string('modules/post.html', post=post)
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
    
if __name__ == '__main__':
    options.parse_command_line()
    start(options.port, options.root_directory, options.bucket_depth)

    
    If you are seeing this message on Linux you probably need to
install GCC and/or the Python development package for your
version of Python.