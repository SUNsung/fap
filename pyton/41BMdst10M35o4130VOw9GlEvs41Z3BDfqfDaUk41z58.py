
        
                # remember the port
        try:
            environ['request_port'] = int(port)
        except ValueError:
            pass
    
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
    
    from pylons import request
from pylons import app_globals as g
from reddit_base import RedditController
from r2.lib.pages import AdminPage, AdminAwards
from r2.lib.pages import AdminAwardGive, AdminAwardWinners
from r2.lib.validator import *
    
    class EmbedController(RedditController):
    allow_stylesheets = True