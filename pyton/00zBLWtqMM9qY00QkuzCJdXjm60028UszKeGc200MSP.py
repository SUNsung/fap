
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.DIRECTOR)
    
    
class Transaction(object):
    
        return g.db
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
        Defines all the global objects that are proxies to the current
    active context.
    
                datestr, codename = match.groups()
            return version, parse_date(datestr), codename
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
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
    
            Default OpenSSL method is TLS_METHOD (also called SSLv23_METHOD)
        which allows TLS protocol negotiation
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
            '''
        self.log_request(code)
        self.send_response_only(code, message)
        self.send_header('Server', self.version_string())
        self.send_header('Date', self.date_time_string())
    
        # 'Return a suite of all test cases contained in the TestCase-derived
    # class testCaseClass'
    #
    # Make sure it does the right thing even if no tests were found
    def test_loadTestsFromTestCase__no_matches(self):
        class Foo(unittest.TestCase):
            def foo_bar(self): pass
    
        binop = { 'Add':'+', 'Sub':'-', 'Mult':'*', 'MatMult':'@', 'Div':'/', 'Mod':'%',
                    'LShift':'<<', 'RShift':'>>', 'BitOr':'|', 'BitXor':'^', 'BitAnd':'&',
                    'FloorDiv':'//', 'Pow': '**'}
    def _BinOp(self, t):
        self.write('(')
        self.dispatch(t.left)
        self.write(' ' + self.binop[t.op.__class__.__name__] + ' ')
        self.dispatch(t.right)
        self.write(')')
    
    for excname in MULTIPROCESSING_EXCEPTIONS:
    NAME_MAPPING[('multiprocessing', excname)] = ('multiprocessing.context', excname)
    
        def test_tokenize(self):
        import tokenize as tokenize_module
        encoding = object()
        encoding_used = None
        def mock_detect_encoding(readline):
            return encoding, [b'first', b'second']
    
        # Fetch the records to be pickled.
    cursor.execute('SELECT * FROM memos')
    memos = [MemoRecord(key, task) for key, task in cursor]
    # Save the records using our custom DBPickler.
    file = io.BytesIO()
    DBPickler(file).dump(memos)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    def test():
    manager = MyManager()
    manager.start()
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = __short_version__
# The full version, including alpha/beta/rc tags.
release = __version__
    
    
def convert(value: float, unit_1: str, unit_2: str) -> float:
    '''Convert one unit of measurement to another.'''
    if unit_1 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_1, LENGTH))
    if unit_2 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_2, LENGTH))
    
        yield from hass.async_start()
    assert automation.is_on(hass, 'automation.hello')
    assert len(calls) == 1