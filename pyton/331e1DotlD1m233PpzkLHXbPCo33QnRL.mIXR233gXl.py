
        
            if db is not None:
        db.close()
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
    PY2 = sys.version_info[0] == 2
_identity = lambda x: x
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = ['You tried to access the file '%s' in the request.files '
               'dictionary but it does not exist.  The mimetype for the request '
               'is '%s' instead of 'multipart/form-data' which means that no '
               'file contents were transmitted.  To fix this error you should '
               'provide enctype='multipart/form-data' in your form.' %
               (key, request.mimetype)]
        if form_matches:
            buf.append('\n\nThe browser instead transmitted some file names. '
                       'This was submitted: %s' % ', '.join(''%s'' % x
                            for x in form_matches))
        self.msg = ''.join(buf)
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
        def testOpenPathLikeFilename(self):
        filename = pathlib.Path(self.filename)
        with BZ2File(filename, 'wb') as f:
            f.write(self.DATA)
        with BZ2File(filename, 'rb') as f:
            self.assertEqual(f.read(), self.DATA)
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    def handleSlide(slide):
    handleSlideTitle(slide.getElementsByTagName('title')[0])
    handlePoints(slide.getElementsByTagName('point'))
    
    ##
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()
    
    PY_MAJOR, PY_MINOR, PY_PATCH = sys.version_info[ 0 : 3 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR == 7 and PY_PATCH >= 1 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 4 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.7.1 or >= 3.4; '
            'your version of Python is ' + sys.version )
    
      try:
    filepath = os.path.join( DIR_OF_YCMD, 'PYTHON_USED_DURING_BUILDING' )
    return utils.ReadFile( filepath ).strip()
  # We need to check for IOError for Python2 and OSError for Python3
  except ( IOError, OSError ):
    return None
    
    
def _KeywordsFromSyntaxListOutput( syntax_output ):
  group_name_to_group = _SyntaxGroupsFromOutput( syntax_output )
  _ConnectGroupChildren( group_name_to_group )
    
    
  def Empty_Insertion_Text_test( self ):
    self._Check( 0, {
      'insertion_text':  '',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
def GetVariableValue_CompleteItemIs( word, abbr = None, menu = None,
                                     info = None, kind = None, **kwargs ):
  def Result( variable ):
    if variable == 'v:completed_item':
      return CompleteItemIs( word, abbr, menu, info, kind, **kwargs )
    return DEFAULT
  return MagicMock( side_effect = Result )
    
        Args:
        max_workers: The maximum number of threads that can be used to
            execute the given calls.
    '''
    self._max_workers = max_workers
    self._work_queue = queue.Queue()
    self._threads = set()
    self._shutdown = False
    self._shutdown_lock = threading.Lock()