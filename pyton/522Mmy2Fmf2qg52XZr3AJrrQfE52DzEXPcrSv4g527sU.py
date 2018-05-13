
        
            '''
    req_h = OUT_REQ_HEAD in output_options
    req_b = OUT_REQ_BODY in output_options
    resp_h = OUT_RESP_HEAD in output_options
    resp_b = OUT_RESP_BODY in output_options
    req = req_h or req_b
    resp = resp_h or resp_b
    
    
class AuthPlugin(BasePlugin):
    '''
    Base auth plugin class.
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
        test_mode = False
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        target=VByName('fullname'),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/gild/{fullname}',
    )
    def POST_gild(self, target):
        if not isinstance(target, (Comment, Link)):
            err = RedditError('NO_THING_ID')
            self.on_validation_error(err)
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
            # c.error_page is special-cased in a couple places to bypass
        # c.site checks. We shouldn't allow the user to get here other
        # than through `middleware.py:error_mapper`.
        if not request.environ.get('pylons.error_call'):
            abort(403, 'direct access to error controller disallowed')
    
    from r2.controllers.reddit_base import MinimalController
from r2.lib.pages import (
    GoogleTagManagerJail,
    GoogleTagManager,
)
from r2.lib.validator import (
    validate,
    VGTMContainerId,
)