
        
        
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
            :param response: Initiated response object with headers already fetched
        :type response: requests.models.Response
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
        @cookies.setter
    def cookies(self, jar):
        '''
        :type jar: CookieJar
        '''
        # http://docs.python.org/2/library/cookielib.html#cookie-objects
        stored_attrs = ['value', 'path', 'secure', 'expires']
        self['cookies'] = {}
        for cookie in jar:
            self['cookies'][cookie.name] = {
                attname: getattr(cookie, attname)
                for attname in stored_attrs
            }
    
            Additional subclass init must be done before calling this
        unless  _utest=True is passed to suppress wait_window().
    
        Fractions and Decimals are also supported:
    
        def ihave(self, message_id, data):
        '''Process an IHAVE command.  Arguments:
        - message_id: message-id of the article
        - data: file containing the article
        Returns:
        - resp: server response if successful
        Note that if the server refuses the article an exception is raised.'''
        return self._post('IHAVE {0}'.format(message_id), data)
    
        print('# The following line assumes you have built Python using the standard instructions')
    print('# Otherwise fix the following line to point to the library.')
    print('pythonlib = '$(pythonhome)/pcbuild/python%s$(debug_suffix).lib'' % version_suffix)
    print()
    
                        # args=NULL, nargs=0, kwargs={}
                    result = _testcapi.pyobject_fastcalldict(func, None, {})
                    self.check_result(result, expected)
    
    from r2.config.extensions import set_extension
from r2.controllers.reddit_base import RedditController, generate_modhash
from r2.controllers.login import handle_login, handle_register
from r2.lib.csrf import csrf_exempt
from r2.lib.validator import (
    json_validate,
    ValidEmail,
    VPasswordChange,
    VRatelimit,
    VSigned,
    VThrottledLogin,
    VUname,
)
    
            # See if the target is already an existing friend.
        # If not, create the friend relationship.
        friend_rel = Account.get_friend(c.user, friend)
        rel_exists = bool(friend_rel)
        if not friend_rel:
            friend_rel = c.user.add_friend(friend)
            response.status = 201
    
            An iden is given as the `captcha` field with a `BAD_CAPTCHA`
        error, you should use this endpoint if you get a
        `BAD_CAPTCHA` error response.