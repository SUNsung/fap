
        
                return self.__dict__.get(key, None)
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def test_different_encodings_dont_break_post(self, httpbin):
        r = requests.post(httpbin('post'),
            data={'stuff': json.dumps({'a': 123})},
            params={'blah': 'asdf1234'},
            files={'file': ('test_requests.py', open(__file__, 'rb'))})
        assert r.status_code == 200
    
            self.concurrent -= 1
        return ''
    
        def from_method(self, method, results):
        contracts = self.extract_contracts(method)
        if contracts:
            # calculate request args
            args, kwargs = get_spec(Request.__init__)
            kwargs['callback'] = method
            for contract in contracts:
                kwargs = contract.adjust_request_args(kwargs)
    
            assertion = (self.min_bound <= occurrences <= self.max_bound)
    
    print()
    
        current_ref = get_current_ref()
    base_ref = get_merge_base()
    if options.files:
        files = options.files
    else:
        files = get_changed_files(base_ref, current_ref)
        logging.debug('files changed: %r', files)
    
    
def register_api_templates(template_name, template_class):
    for style in ('api', 'api-html', 'api-compact'):
        tpm.add_handler(
            name=template_name,
            style=style,
            handler=template_class,
        )
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import require_oauth2_scope
from r2.controllers.reddit_base import OAuth2OnlyController
from r2.controllers.ipn import send_gift
from r2.lib.errors import RedditError
from r2.lib.validator import (
    validate,
    VAccountByName,
    VByName,
    VInt,
    VNotInTimeout,
)
from r2.models import Account, Comment, Link, NotFound
from r2.models.gold import creddits_lock
from r2.lib.validator import VUser
    
                code =  request.GET.get('code', '')
            try:
                code = int(code)
            except ValueError:
                code = 404
            srname = request.GET.get('srname', '')
            takedown = request.GET.get('takedown', '')
            error_name = request.GET.get('error_name', '')
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()