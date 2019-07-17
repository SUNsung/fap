
        
            username = models.CharField(
        _('username'),
        max_length=150,
        unique=True,
        help_text=_('Required. 150 characters or fewer. Letters, digits and @/./+/-/_ only.'),
        validators=[username_validator],
        error_messages={
            'unique': _('A user with that username already exists.'),
        },
    )
    first_name = models.CharField(_('first name'), max_length=30, blank=True)
    last_name = models.CharField(_('last name'), max_length=150, blank=True)
    email = models.EmailField(_('email address'), blank=True)
    is_staff = models.BooleanField(
        _('staff status'),
        default=False,
        help_text=_('Designates whether the user can log into this admin site.'),
    )
    is_active = models.BooleanField(
        _('active'),
        default=True,
        help_text=_(
            'Designates whether this user should be treated as active. '
            'Unselect this instead of deleting accounts.'
        ),
    )
    date_joined = models.DateTimeField(_('date joined'), default=timezone.now)
    
        def test_create_user_is_staff(self):
        email = 'normal@normal.com'
        user = User.objects.create_user('user', email, is_staff=True)
        self.assertEqual(user.email, email)
        self.assertEqual(user.username, 'user')
        self.assertTrue(user.is_staff)
    
        def to_python(self, value):
        return uuid.UUID(value)
    
        The setUp() method sets the current working dir to the temporary tree.
    It'll be removed when cleaning up.
    '''
    
            # Getting the pointer for this field.
        fld_ptr = capi.get_feat_field_defn(feat.ptr, index)
        if not fld_ptr:
            raise GDALException('Cannot create OGR Field, invalid pointer given.')
        self.ptr = fld_ptr
    
        with pytest.raises(AssertionError):
        conv_utils.conv_output_length(18, 5, 'diagonal', 2)
    
        # not specified `validation_steps`
    with pytest.raises(ValueError):
        model.fit_generator(custom_generator(),
                            steps_per_epoch=STEPS_PER_EPOCH,
                            validation_data=custom_generator(),
                            validation_steps=None,
                            max_queue_size=10,
                            workers=1,
                            use_multiprocessing=False)
    
            params = self._canonical_to_params(
            weights=[
                self.kernel_r,
                self.kernel_z,
                self.kernel_h,
                self.recurrent_kernel_r,
                self.recurrent_kernel_z,
                self.recurrent_kernel_h,
            ],
            biases=[
                self.bias_r_i,
                self.bias_z_i,
                self.bias_h_i,
                self.bias_r,
                self.bias_z,
                self.bias_h,
            ],
        )
        outputs, h = self._cudnn_gru(
            inputs,
            input_h=input_h,
            params=params,
            is_training=True)
    
    from .conv_utils import convert_kernel
from .. import backend as K
import numpy as np
    
    
class CharacterTable(object):
    '''Given a set of characters:
    + Encode them to a one-hot integer representation
    + Decode the one-hot or integer representation to their character output
    + Decode a vector of probabilities to their character output
    '''
    def __init__(self, chars):
        '''Initialize character table.
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
        def test_walk_modules_egg(self):
        egg = os.path.join(os.path.dirname(__file__), 'test.egg')
        sys.path.append(egg)
        try:
            mods = walk_modules('testegg')
            expected = [
                'testegg.spiders',
                'testegg.spiders.a',
                'testegg.spiders.b',
                'testegg'
            ]
            self.assertEqual(set([m.__name__ for m in mods]), set(expected))
        finally:
            sys.path.remove(egg)
    
    from scrapy.utils.misc import arg_to_iter
from scrapy.utils.url import (
    url_is_from_any_domain, url_has_any_extension,
)
    
    
_scrapy_root_handler = None
    
    from tests import tests_datadir
    
        global pteredor_is_running, usable
    pteredor_is_running = probe_nat
    prober = teredo_prober(probe_nat=probe_nat)
    
        # Calling directly the omnifunc may move the cursor position. This is the
    # case with the default Vim omnifunc for C-family languages
    # (ccomplete#Complete) which calls searchdecl to find a declaration. This
    # function is supposed to move the cursor to the found declaration but it
    # doesn't when called through the omni completion mapping (CTRL-X CTRL-O).
    # So, we restore the cursor position after the omnifunc calls.
    line, column = vimsupport.CurrentLineAndColumn()
    
    
@YouCompleteMeInstance( { 'g:ycm_cache_omnifunc': 0,
                          'g:ycm_semantic_triggers': TRIGGERS } )
def OmniCompleter_GetCompletions_NoCache_ObjectListObject_test( ycm ):
  def Omnifunc( findstart, base ):
    if findstart:
      return 5
    return { 'words': [
      {
        'word': 'a',
        'abbr': 'ABBR',
        'menu': 'MENU',
        'info': 'INFO',
        'kind': 'K'
      },
      {
        'word': 'test',
        'abbr': 'ABBRTEST',
        'menu': 'MENUTEST',
        'info': 'INFOTEST',
        'kind': 'T'
      }
    ] }
    
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
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def _HandlePollResponse( response, diagnostics_handler ):
  if isinstance( response, list ):
    for notification in response:
      if 'message' in notification:
        PostVimMessage( notification[ 'message' ],
                        warning = False,
                        truncate = True )
      elif 'diagnostics' in notification:
        diagnostics_handler.UpdateWithNewDiagnosticsForFile(
          notification[ 'filepath' ],
          notification[ 'diagnostics' ] )
  elif response is False:
    # Don't keep polling for this file
    return False
  # else any truthy response means 'nothing to see here; poll again in a
  # while'
    
    
def _SyntaxGroupsFromOutput( syntax_output ):
  group_name_to_group = _CreateInitialGroupMap()
  lines               = syntax_output.split( '\n' )
  looking_for_group   = True
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
      opts = { 'filter_diagnostics' : {
    'java,c,cs' : { 'regex' : '.*taco.*' } } }
    
    Executor.submit() called:
- creates a uniquely numbered _WorkItem and adds it to the 'Work Items' dict
- adds the id of the _WorkItem to the 'Work Ids' queue
    
    
    '''
    def __init__(self, nS, nA, P, isd):
        self.P = P
        self.isd = isd
        self.lastaction = None # for rendering
        self.nS = nS
        self.nA = nA
    
            return self.observation, reward[0], done, {'number': self.number, 'guesses': self.guess_count}
    
    from gym import core, spaces
from gym.utils import seeding
    
                  'Programming Language :: Python :: 3',
              'Programming Language :: Python :: 2',
    
    github_rest_api = 'https://api.github.com/users/{}'
    
        def test_register_username_taken(self):
        with patch.object(
            Account, '_by_name', return_value=MagicMock(_deleted=False)
        ):
            res = self.do_register()
            self.assert_failure(res, 'USERNAME_TAKEN')
    
        def test_vote_event_with_prev(self):
        self.patch_liveconfig('events_collector_vote_sample_rate', 1.0)
        upvote = MagicMock(name='upvote',
                           is_automatic_initial_vote=False,
                           data={'rank': MagicMock()})
        upvote.previous_vote = MagicMock(name='previous_vote',
                                         is_upvote=False, is_downvote=True)
        g.events.vote_event(upvote)
    
    from r2.tests import RedditTestCase
    
        def test_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
    
        def test_alien_blue_detector(self):
        user_agent = 'AlienBlue/2.9.10.0.2 CFNetwork/758.4.3 Darwin/15.5.0'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'], AlienBlueDetector.name)
    
        def test_encrypt(self):
        from r2.lib.tracking import _encrypt, SALT_SIZE
        encrypted = _encrypt(
            'a' * SALT_SIZE,
            MESSAGE,
            SECRET,
        )
        self.assertEquals(encrypted, ENCRYPTED)
    
        def test_different_ports(self):
        u = UrlParser('http://example.com')
        u2 = UrlParser('http://example.com:8000')
        u3 = UrlParser('http://example.com:8008')
        self.assertNotEquals(u, u2)
        self.assertNotEquals(u2, u3)