
        
                if opts.pidfile:
            with open(opts.pidfile, 'w') as f:
                f.write(str(os.getpid()) + os.linesep)
    
        def short_desc(self):
        return 'Generate new spider using pre-defined templates'
    
        def extract_contracts(self, method):
        contracts = []
        for line in method.__doc__.split('\n'):
            line = line.strip()
    
        name = 'scrapes'
    
        def add_cancelled(self, future):
        self.finished_futures.append(future)
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
      # Remove old YCM libs if present so that YCM can start.
  old_libs = (
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_core.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_client_support.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*clang*.*') ) )
  for lib in old_libs:
    os.remove( lib )
    
      if config_entry is None:
    return []
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )

    
    
def _IsReady():
  return BaseRequest.GetDataFromHandler( 'ready' )