
        
        import pytest
from requests.compat import urljoin
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
        def __repr__(self):
        return '<lookup \'%s\'>' % (self.name)
    
        def test_lower_items(self):
        assert list(self.case_insensitive_dict.lower_items()) == [('accept', 'application/json')]
    
            if not qop:
            respdig = KD(HA1, '%s:%s' % (nonce, HA2))
        elif qop == 'auth' or 'auth' in qop.split(','):
            noncebit = '%s:%s:%s:%s:%s' % (
                nonce, ncvalue, cnonce, 'auth', HA2
            )
            respdig = KD(HA1, noncebit)
        else:
            # XXX handle auth-int.
            return None
    
    import pytest
    
        def __getstate__(self):
        return dict((attr, getattr(self, attr, None)) for attr in
                    self.__attrs__)
    
    
class ConnectionError(RequestException):
    '''A Connection error occurred.'''
    
            '''
        try:
            return getattr(stacked_proxy, key)
        except TypeError:
            return default
    
    from r2.lib.manager import tp_manager
from r2.lib.jsontemplates import *
    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
    from pylons import request
from pylons import app_globals as g
from reddit_base import RedditController
from r2.lib.pages import AdminPage, AdminAwards
from r2.lib.pages import AdminAwardGive, AdminAwardWinners
from r2.lib.validator import *
    
    from r2.controllers.reddit_base import RedditController
from r2.lib.base import proxyurl
from r2.lib.csrf import csrf_exempt
from r2.lib.template_helpers import get_domain
from r2.lib.pages import Embed, BoringPage, HelpPage
from r2.lib.filters import websafe, SC_OFF, SC_ON
from r2.lib.memoize import memoize
    
        def send429(self):
        retry_after = request.environ.get('retry_after')
        if retry_after:
            response.headers['Retry-After'] = str(retry_after)
            template_name = '/ratelimit_toofast.html'
        else:
            template_name = '/ratelimit_throttled.html'