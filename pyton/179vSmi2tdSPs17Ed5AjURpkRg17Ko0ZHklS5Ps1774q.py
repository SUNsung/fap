
        
                (Initialized proxies ALWAYS return a value, either a set value
        or an empty string)
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        user=VAccountByName('username'),
        months=VInt('months', min=1, max=36),
        timeout=VNotInTimeout(),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/give/{username}',
    )
    def POST_give(self, user, months, timeout):
        self._gift_using_creddits(
            recipient=user,
            months=months,
            proxying_for=request.POST.get('proxying_for'),
        )

    
    from pylons import app_globals as g
from pylons import tmpl_context as c
from pylons import request
    
    from r2.controllers.reddit_base import MinimalController
from r2.lib import promote, cache