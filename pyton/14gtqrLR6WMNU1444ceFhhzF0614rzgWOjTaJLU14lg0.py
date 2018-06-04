    def to_json(self, value):
        return value.hex
    
        def get_expiration_time(self, app, session):
        '''A helper method that returns an expiration date for the session
        or ``None`` if the session is linked to the browser session.  The
        default implementation returns now + the permanent session
        lifetime configured on the application.
        '''
        if session.permanent:
            return datetime.utcnow() + app.permanent_session_lifetime
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        @app.errorhandler(Foo)
    def handle_foo(e):
        return str(e.whatever)
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
    
    {
    {        tokens.insertAfter('pass1', t, 'text to put after t');}
        tokens.insertAfter('pass2', u, 'text after u');}
        System.out.println(tokens.toString('pass1'));
        System.out.println(tokens.toString('pass2'));
    
            raise NotImplementedError
    
    @section streams Streams
    
        def create_widgets(self):  # Call from override, if any.
        # Bind to self widgets needed for entry_ok or unittest.
        self.frame = frame = Frame(self, padding=10)
        frame.grid(column=0, row=0, sticky='news')
        frame.grid_columnconfigure(0, weight=1)
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.seekable:
            try:
                n = self.chunksize - self.size_read
                # maybe fix alignment
                if self.align and (self.chunksize & 1):
                    n = n + 1
                self.file.seek(n, 1)
                self.size_read = self.size_read + n
                return
            except OSError:
                pass
        while self.size_read < self.chunksize:
            n = min(8192, self.chunksize - self.size_read)
            dummy = self.read(n)
            if not dummy:
                raise EOFError

    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
        def close(self):
        '''Flush and close the mailbox.'''
        if self._locked:
            self.unlock()
    
                        # args=NULL, nargs=0, kwargs={}
                    result = _testcapi.pyobject_fastcalldict(func, None, {})
                    self.check_result(result, expected)
    
        def __init__(self, test_case, skip=None):
        self.test_case = test_case
        self.dry_run = test_case.dry_run
        self.tracer = Tracer(test_case.expect_set, skip=skip,
                             dry_run=self.dry_run, test_case=test_case.id())
        self._original_tracer = None
    
            An empty string is returned if the value cannot be determined.
    
        top = Toplevel(parent)
    top.title('Test ColorDelegator')
    x, y = map(int, parent.geometry().split('+')[1:])
    top.geometry('700x250+%d+%d' % (x + 20, y + 175))
    source = (
        'if True: int ('1') # keyword, builtin, string, comment\n'
        'elif False: print(0)\n'
        'else: float(None)\n'
        'if iF + If + IF: 'keyword matching must respect case'\n'
        'if'': x or''  # valid string-keyword no-space combinations\n'
        'async def f(): await g()\n'
        '# All valid prefixes for unicode and byte strings should be colored.\n'
        ''x', '''x''', \'x\', \'\'\'x\'\'\'\n'
        'r'x', u'x', R'x', U'x', f'x', F'x'\n'
        'fr'x', Fr'x', fR'x', FR'x', rf'x', rF'x', Rf'x', RF'x'\n'
        'b'x',B'x', br'x',Br'x',bR'x',BR'x', rb'x'.rB'x',Rb'x',RB'x'\n'
        '# Invalid combinations of legal characters should be half colored.\n'
        'ur'x', ru'x', uf'x', fu'x', UR'x', ufr'x', rfu'x', xf'x', fx'x'\n'
        )
    text = Text(top, background='white')
    text.pack(expand=1, fill='both')
    text.insert('insert', source)
    text.focus_set()
    
    @dataclasses.dataclass
class CV:
    T_CV4 = typing.ClassVar
    cv0: typing.ClassVar[int] = 20
    cv1: typing.ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
    def clean_pdf_link(link):
    if 'arxiv' in link:
        link = link.replace('abs', 'pdf')   
        if not(link.endswith('.pdf')):
            link = '.'.join((link, 'pdf'))
    
    
class Person(object):
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
        if not sample_queue.empty():
        print(sample_queue.get())
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour, current_time.minute)
        return current_time_formatted
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(production_code_time_provider), expected_time)
    
    
def main():
    command_stack = []
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    *TL;DR80
Maintains a list of dependents and notifies them of any state changes.
'''