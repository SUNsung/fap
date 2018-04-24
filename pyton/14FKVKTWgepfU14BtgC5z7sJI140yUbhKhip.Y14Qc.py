
        
            plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
            self._progress_reporter.output.write(
            'Downloading %sto '%s'\n' % (
                (humanize_bytes(total_size) + ' '
                 if total_size is not None
                 else ''),
                self._output_file.name
            )
        )
        self._progress_reporter.start()
    
        def __init__(self):
        self._plugins = []
    
        return inner
    
            if isinstance(params, (str, bytes)):
            params = to_native_string(params)
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    if (twisted_version.major, twisted_version.minor, twisted_version.micro) >= (15, 5, 0):
    collect_ignore += _py_files('scrapy/xlib/tx')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    api('wikipagelisting', WikiPageListingJsonTemplate)
api('wikipagediscussions', WikiJsonTemplate)
api('wikipagesettings', WikiSettingsJsonTemplate)
    
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
    
        @require_oauth2_scope('identity')
    @validate(
        VUser(),
        fields=VList(
            'fields',
            choices=PREFS_JSON_SPEC.spec.keys(),
            error=errors.errors.NON_PREFERENCE,
        ),
    )
    @api_doc(api_section.account, uri='/api/v1/me/prefs')
    def GET_prefs(self, fields):
        '''Return the preference settings of the logged in user'''
        resp = PrefsJsonTemplate(fields).data(c.oauth_user)
        return self.api_wrapper(resp)
    
            To request a new CAPTCHA,
        use [/api/new_captcha](#POST_api_new_captcha).
        '''
        image = captcha.get_image(iden)
        f = StringIO.StringIO()
        image.save(f, 'PNG')
        response.content_type = 'image/png;'
        return f.getvalue()
    

    
        GET_help = POST_help = renderurl