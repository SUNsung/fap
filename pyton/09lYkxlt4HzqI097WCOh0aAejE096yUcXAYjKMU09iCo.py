
        
            class C(A):
        pass
    
        elif sys.platform.startswith('java'):
        # Jython
        name = 'Jython'
        match = _sys_version_parser.match(sys_version)
        if match is None:
            raise ValueError(
                'failed to parse Jython sys.version: %s' %
                repr(sys_version))
        version, buildno, builddate, buildtime, _ = match.groups()
        if builddate is None:
            builddate = ''
        compiler = sys.platform
    
        return results
    
                    --===
                Content-Type: text/html
                Content-Disposition: inline
    
        def __init__(self, max_size=0, mode='w+b', buffering=-1,
                 encoding=None, newline=None,
                 suffix=None, prefix=None, dir=None, *, errors=None):
        if 'b' in mode:
            self._file = _io.BytesIO()
        else:
            # Setting newline='\n' avoids newline translation;
            # this is important because otherwise on Windows we'd
            # get double newline translation upon rollover().
            self._file = _io.StringIO(newline='\n')
        self._max_size = max_size
        self._rolled = False
        self._TemporaryFileArgs = {'mode': mode, 'buffering': buffering,
                                   'suffix': suffix, 'prefix': prefix,
                                   'encoding': encoding, 'newline': newline,
                                   'dir': dir, 'errors': errors}
    
        raise_opts = ['-noraise', '-raise']
    remote_args = ['-remote', 'openURL(%s%action)']
    remote_action = ''
    remote_action_newwin = ',new-window'
    remote_action_newtab = ',new-tab'
    background = True
    
        user_options = [
        ('build-base=', 'b',
         'base directory for build library'),
        ('build-purelib=', None,
         'build directory for platform-neutral distributions'),
        ('build-platlib=', None,
         'build directory for platform-specific distributions'),
        ('build-lib=', None,
         'build directory for all distribution (defaults to either ' +
         'build-purelib or build-platlib'),
        ('build-scripts=', None,
         'build directory for scripts'),
        ('build-temp=', 't',
         'temporary build directory'),
        ('plat-name=', 'p',
         'platform name to build for, if supported '
         '(default: %s)' % get_platform()),
        ('compiler=', 'c',
         'specify the compiler type'),
        ('parallel=', 'j',
         'number of parallel build jobs'),
        ('debug', 'g',
         'compile extensions and libraries with debugging information'),
        ('force', 'f',
         'forcibly build everything (ignore file timestamps)'),
        ('executable=', 'e',
         'specify final destination interpreter path (build.py)'),
        ]
    
        print('Done!')
    if failures:
        print('Some downloads have failed:')
        for fail in failures:
            print('> ' + fail)

    
    import abc
import random
    
    
class FallbackHandler(Handler):
    @staticmethod
    def check_range(request):
        print('end of chain, no handler for {}'.format(request))
        return False
    
    *TL;DR
Separates an algorithm from an object structure on which it operates.
    
        def build_floor(self):
        raise NotImplementedError
    
    *References:
bottle
https://github.com/bottlepy/bottle/blob/cafc15419cbb4a6cb748e6ecdccf92893bb25ce5/bottle.py#L270
django
https://github.com/django/django/blob/ffd18732f3ee9e6f0374aff9ccf350d85187fac2/django/utils/functional.py#L19
pip
https://github.com/pypa/pip/blob/cb75cca785629e15efb46c35903827b3eae13481/pip/utils/__init__.py#L821
pyramimd
https://github.com/Pylons/pyramid/blob/7909e9503cdfc6f6e84d2c7ace1d3c03ca1d8b73/pyramid/decorator.py#L4
werkzeug
https://github.com/pallets/werkzeug/blob/5a2bf35441006d832ab1ed5a31963cbc366c99ac/werkzeug/utils.py#L35
    
    
class Human(object):
    def __init__(self):
        self.name = 'Human'
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
    
  def Start( self ):
    self._response_future = self.PostDataToHandlerAsync( self.request_data,
                                                         'completions' )
    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
    
def YouCompleteMeInstance( custom_options = {} ):
  '''Defines a decorator function for tests that passes a unique YouCompleteMe
  instance as a parameter. This instance is initialized with the default options
  `DEFAULT_CLIENT_OPTIONS`. Use the optional parameter |custom_options| to give
  additional options and/or override the already existing ones.
    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerResponse ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      post_vim_message.assert_has_exact_calls( [
        call( 'Exception: message', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': contains( has_entries( {
            'word': 'insertion_text',
            'abbr': 'menu_text',
            'menu': 'extra_menu_info',
            'info': 'detailed_info\ndoc_string',
            'kind': 'k',
            'dup': 1,
            'empty': 1
          } ) ),
          'completion_start_column': 3
        } )
      )
    
    
def MockAsyncServerResponseDone( response ):
  '''Return a fake future object that is complete with the supplied response
  message. Suitable for mocking a response future within a client request. For
  example:
    
            Raises:
            RuntimeError: if this method was already called or if set_result()
                or set_exception() was called.
        '''
        with self._condition:
            if self._state == CANCELLED:
                self._state = CANCELLED_AND_NOTIFIED
                for waiter in self._waiters:
                    waiter.add_cancelled(self)
                # self._condition.notify_all() is not necessary because
                # self.cancel() triggers a notification.
                return False
            elif self._state == PENDING:
                self._state = RUNNING
                return True
            else:
                LOGGER.critical('Future %s in unexpected state: %s',
                                id(self.future),
                                self.future._state)
                raise RuntimeError('Future in unexpected state')
    
        # Parse and validate the field names.  Validation serves two purposes,
    # generating informative error messages and preventing template injection attacks.
    if isinstance(field_names, basestring):
        field_names = field_names.replace(',', ' ').split() # names separated by whitespace and/or commas
    field_names = tuple(map(str, field_names))
    for name in (typename,) + field_names:
        if not all(c.isalnum() or c=='_' for c in name):
            raise ValueError('Type names and field names can only contain alphanumeric characters and underscores: %r' % name)
        if _iskeyword(name):
            raise ValueError('Type names and field names cannot be a keyword: %r' % name)
        if name[0].isdigit():
            raise ValueError('Type names and field names cannot start with a number: %r' % name)
    seen_names = set()
    for name in field_names:
        if name.startswith('_'):
            raise ValueError('Field names cannot start with an underscore: %r' % name)
        if name in seen_names:
            raise ValueError('Encountered duplicate field name: %r' % name)
        seen_names.add(name)
    
            'Intended Audience :: Developers',
        'Topic :: Software Development :: Libraries :: Python Modules',
    
            if reseed or not hasattr(self, 'np_random'):
            self.seed()
    
    LEFT = 0
DOWN = 1
RIGHT = 2
UP = 3
    
            reward = 0
        if self.prev_shaping is not None:
            reward = shaping - self.prev_shaping
        self.prev_shaping = shaping
    
        Blackjack is a card game where the goal is to obtain cards that sum to as
    near as possible to 21 without going over.  They're playing against a fixed
    dealer.
    Face cards (Jack, Queen, King) have point value 10.
    Aces can either count as 11 or 1, and it's called 'usable' at 11.
    This game is placed with an infinite deck (or with replacement).
    The game starts with each (player and dealer) having one face up and one
    face down card.
    
    from gym import core, spaces
from gym.utils import seeding
    
        def start(self):
        self.cmdline = (self.backend,
                     '-nostats',
                     '-loglevel', 'error', # suppress warnings
                     '-y',
                     '-r', '%d' % self.frames_per_sec,