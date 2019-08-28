
        
            # register the database commands
    from flaskr import db
    
        .. versionchanged:: 0.10
       This function's return value is now always safe for HTML usage, even
       if outside of script tags or if used in XHTML.  This rule does not
       hold true when using this function in HTML attributes that are double
       quoted.  Always single quote attributes if you use the ``|tojson``
       filter.  Alternatively use ``|tojson|forceescape``.
    '''
    rv = (
        dumps(obj, **kwargs)
        .replace(u'<', u'\\u003c')
        .replace(u'>', u'\\u003e')
        .replace(u'&', u'\\u0026')
        .replace(u''', u'\\u0027')
    )
    if not _slash_escape:
        rv = rv.replace('\\/', '/')
    return rv
    
            connect = connect_via = connected_to = temporarily_connected_to = _fail
        disconnect = _fail
        has_receivers_for = receivers_for = _fail
        del _fail
    
                if isinstance(args[0], werkzeug.test.EnvironBuilder):
                environ.update(args[0].get_environ())
            else:
                environ.update(args[0])
    
            The arguments passed to :meth:`as_view` are forwarded to the
        constructor of the class.
        '''
    
        @property
    def max_content_length(self):
        '''Read-only view of the ``MAX_CONTENT_LENGTH`` config key.'''
        if current_app:
            return current_app.config['MAX_CONTENT_LENGTH']
    
        assert cleanup_stuff == [None]
    
    
def test_config_from_file():
    app = flask.Flask(__name__)
    app.config.from_pyfile(__file__.rsplit('.', 1)[0] + '.py')
    common_object_test(app)
    
    
def test_uninstalled_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('config_module_app.py').write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_module_app')
    
            def to_json(self, value):
            return self.serializer.tag(value.data)
    
        def check_range(self, request):
        if self.start <= request < self.end:
            print('request {} handled in handler 1'.format(request))
            return True
    
    
class Cat(object):
    def speak(self):
        return 'meow'
    
    *Where is the pattern used practically?
    
    *What does this example do?
When the number of prototypes in an application can vary, it can be
useful to keep a Dispatcher (aka, Registry or Manager). This allows
clients to query the Dispatcher for a prototype before cloning a new
instance.
    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
    *References:
https://sourcemaking.com/design_patterns/facade
https://fkromer.github.io/python-pattern-references/design/#facade
http://python-3-patterns-idioms-test.readthedocs.io/en/latest/ChangeInterface.html#facade
    
    def check_live_url(url):
    
        The purpose is to have agents optimise their exploration parameters (e.g. how far to
    explore from previous actions) based on previous experience. Because the goal changes
    each episode a state-value or action-value function isn't able to provide any additional
    benefit apart from being able to tell whether to increase or decrease the next guess.
    
        Blackjack is a card game where the goal is to obtain cards that sum to as
    near as possible to 21 without going over.  They're playing against a fixed
    dealer.
    Face cards (Jack, Queen, King) have point value 10.
    Aces can either count as 11 or 1, and it's called 'usable' at 11.
    This game is placed with an infinite deck (or with replacement).
    The game starts with each (player and dealer) having one face up and one
    face down card.
    
        def _get_obs(self, pos=None):
        '''Return an observation corresponding to the given read head position
        (or the current read head position, if none is given).'''
        raise NotImplementedError
    
    bogus_mnist = \
[[
' **** ',
'*    *',
'*    *',
'*    *',
'*    *',
' **** '
], [
'  **  ',
' * *  ',
'   *  ',
'   *  ',
'   *  ',
'  *** '
], [
' **** ',
'*    *',
'     *',
'  *** ',
'**    ',
'******'
], [
' **** ',
'*    *',
'   ** ',
'     *',
'*    *',
' **** '
], [
' *  * ',
' *  * ',
' *  * ',
' **** ',
'    * ',
'    * '
], [
' **** ',
' *    ',
' **** ',
'    * ',
'    * ',
' **** '
], [
'  *** ',
' *    ',
' **** ',
' *  * ',
' *  * ',
' **** '
], [
' **** ',
'    * ',
'   *  ',
'   *  ',
'  *   ',
'  *   '
], [
' **** ',
'*    *',
' **** ',
'*    *',
'*    *',
' **** '
], [
' **** ',
'*    *',
'*    *',
' *****',
'     *',
' **** '
]]
    
    from gym import utils
from gym.envs.toy_text import discrete