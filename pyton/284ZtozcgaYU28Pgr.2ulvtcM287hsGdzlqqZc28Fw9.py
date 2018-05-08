
        
        
@pytest.mark.parametrize('data', (
    {' t': (1, 2, 3)},
    {' t__': b'a'},
    {' di': ' di'},
    {'x': (1, 2, 3), 'y': 4},
    (1, 2, 3),
    [(1, 2, 3)],
    b'\xff',
    Markup('<html>'),
    uuid4(),
    datetime.utcnow().replace(microsecond=0),
))
def test_dump_load_unchanged(data):
    s = TaggedJSONSerializer()
    assert s.loads(s.dumps(data)) == data
    
        def get_cookie_httponly(self, app):
        '''Returns True if the session cookie should be httponly.  This
        currently just returns the value of the ``SESSION_COOKIE_HTTPONLY``
        config var.
        '''
        return app.config['SESSION_COOKIE_HTTPONLY']
    
                for key in http_method_funcs:
                if hasattr(cls, key):
                    methods.add(key.upper())
    
                    if change_info:
                    break
    
            # Force Python to track this dictionary at all times.
        # This is necessary since Python only starts tracking
        # dicts if they contain mutable objects.  It's a horrible,
        # horrible hack but makes this kinda testable.
        loc.__storage__['FOOO'] = [1, 2, 3]
    
    
def test_flash_signal(app):
    @app.route('/')
    def index():
        flask.flash('This is a flash message', category='notice')
        return flask.redirect('/other')
    
            assert len(self.args) in [1, 2, 3]
        self.obj_name = self.args[0] or None
        self.obj_type = self.objects[self.obj_name]
    
        @property
    def value(self):
        if self.is_ace() == 1:
            return 1
        elif self.is_face_card():
            return 10
        else:
            return self._value
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
    def deleteProgram(self, programName=DEFAULT_PROGRAM_NAME):
        '''Reset the program so that no instructions exist'''
            
        self.rollback(programName, self.MIN_TOKEN_INDEX)
    
            self.decisionNumber = decisionNumber
        self.eot = eot
        self.eof = eof
        self.min = min
        self.max = max
        self.accept = accept
        self.special = special
        self.transition = transition
    
            return 'MissingTokenException'
    __repr__ = __str__
    
    
class BadNonceTest(unittest.TestCase):
    '''Tests for acme.errors.BadNonce.'''
    
            self.assertTrue(self.vhost1.conflicts([self.addr2]))
        self.assertFalse(self.vhost1.conflicts([self.addr_default]))
    
        # The font size ('10pt', '11pt' or '12pt').
    #'pointsize': '10pt',
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        @mock.patch('certbot.display.enhancements.util')
    def test_cancel(self, mock_util):
        mock_util().menu.return_value = (display_util.CANCEL, 1)
        self.assertFalse(self._call())
    
        #Unless specified otherwise by the user, this is the default colorscheme
    colorscheme = 'basic'