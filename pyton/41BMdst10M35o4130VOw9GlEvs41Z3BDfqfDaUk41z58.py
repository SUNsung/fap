
        
            @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    requires = [
    'chardet>=3.0.2,<3.1.0',
    'idna>=2.5,<2.7',
    'urllib3>=1.21.1,<1.23',
    'certifi>=2017.4.17'
    
            # Second, if a POST is responded to with a 301, turn it into a GET.
        # This bizarre behaviour is explained in Issue 1704.
        if response.status_code == codes.moved and method == 'POST':
            method = 'GET'
    
    import r2.lib.helpers
from r2.config.paths import (
    get_r2_path,
    get_built_statics_path,
    get_raw_statics_path,
)
from r2.config.routing import make_map
from r2.lib.app_globals import Globals
from r2.lib.configparse import ConfigValue
    
    
class APIv1GoldController(OAuth2OnlyController):
    def _gift_using_creddits(self, recipient, months=1, thing_fullname=None,
            proxying_for=None):
        with creddits_lock(c.user):
            if not c.user.employee and c.user.gold_creddits < months:
                err = RedditError('INSUFFICIENT_CREDDITS')
                self.on_validation_error(err)
    
            bjs = self.get_wrapped_link(url, wrapper = builder_wrapper)
        response.content_type = 'text/javascript'
        return bjs.render()
    
            The user's response to the CAPTCHA should be sent as `captcha`
        along with your request.
    
    from urllib2 import HTTPError
    
    
try:
    # place all r2 specific imports in here.  If there is a code error, it'll
    # get caught and the stack trace won't be presented to the user in
    # production
    from r2.config import extensions
    from r2.controllers.reddit_base import RedditController, UnloggedUser
    from r2.lib.cookies import Cookies
    from r2.lib.errors import ErrorSet
    from r2.lib.filters import (
        safemarkdown,
        scriptsafe_dumps,
        websafe,
        websafe_json,
    )
    from r2.lib import log, pages
    from r2.lib.strings import get_funny_translated_string
    from r2.lib.template_helpers import static
    from r2.lib.base import abort
    from r2.models.link import Link
    from r2.models.subreddit import DefaultSR, Subreddit
except Exception, e:
    if g.debug:
        # if debug mode, let the error filter up to pylons to be handled
        raise e
    else:
        # production environment: protect the code integrity!
        print 'HuffmanEncodingError: make sure your python compiles before deploying, stupid!'
        # kill this app
        os._exit(1)
    
    import pylibmc
from pylons import request, response
from pylons import app_globals as g
from pylons.controllers.util import abort