
        
                # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
            morsel_b = cookies.Morsel()
        morsel_b.update(attribs)
        morsel_b.set(*base_case)
        morsel_b['comment'] = 'bar'
        self.assertFalse(morsel_a == morsel_b)
        self.assertTrue(morsel_a != morsel_b)
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
        def test_header(self):
        '''Make sure the required fields are in the header, according to:
           http://www.gnu.org/software/gettext/manual/gettext.html#Header-Entry
        '''
        with temp_cwd(None) as cwd:
            assert_python_ok(self.script)
            with open('messages.pot') as fp:
                data = fp.read()
            header = self.get_header(data)
    
    +----------------+
| ID (4 bytes)   |
+----------------+
| size (4 bytes) |
+----------------+
| data           |
| ...            |
+----------------+
    
        def flush(self):
        '''Write any pending changes to the disk.'''
        raise NotImplementedError('Method must be implemented by subclass')
    
        def test_oldargs1_1_kw(self):
        self.assertRaises(TypeError, [].count, {}, x=2)
    
        def write(self, data):
        if self.maxlen:
            if len(data) + len(self._val) > self.maxlen:
                # Truncation:
                self._val += data[0:self.maxlen - len(self._val)]
                raise StringTruncated()
    
        @gen_test
    def asyncSetUp(self):
        listener, port = bind_unused_port()
        event = Event()
    
    
# This is kind of hacky, but run some of the HTTPServer and web tests
# through WSGIContainer and WSGIApplication to make sure everything
# survives repeated disassembly and reassembly.
class WSGIConnectionTest(httpserver_test.HTTPConnectionTest):
    def get_app(self):
        return WSGIContainer(validator(WSGIApplication(self.get_handlers())))
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']
    
    See file_uploader.py in this directory for code that uploads files in this format.
'''
    
        app = Application(
        [
            ('/', MainHandler),
            ('/login', LoginHandler),
            ('/logout', LogoutHandler),
        ],
        login_url='/login',
        **options.group_dict('application'))
    app.listen(options.port)
    
    
if __name__ == '__main__':
    main()
