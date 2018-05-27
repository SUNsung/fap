
        
        
def print_debug_info(env):
    env.stderr.writelines([
        'HTTPie %s\n' % httpie_version,
        'Requests %s\n' % requests_version,
        'Pygments %s\n' % pygments_version,
        'Python %s\n%s\n' % (sys.version, sys.executable),
        '%s %s' % (platform.system(), platform.release()),
    ])
    env.stderr.write('\n\n')
    env.stderr.write(repr(env))
    env.stderr.write('\n')
    
                    self._status_line = PROGRESS.format(
                    percentage=percentage,
                    downloaded=humanize_bytes(downloaded),
                    speed=humanize_bytes(speed),
                    eta=eta,
                )
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
class Session(BaseConfigDict):
    helpurl = 'https://httpie.org/docs#sessions'
    about = 'HTTPie session file'
    
    
def main():
    options = parse_args(sys.argv[1:])
    if options.report == 'regression':
        command = regression_report
    elif options.report == 'junit':
        command = junit_report
    elif options.report == 'report':
        command = human_report
    assert_tools_available()
    sys.exit(command(options))
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
    
class LimitUploadSize(object):
    '''
    Middleware for restricting the size of uploaded files (such as
    image files for the CSS editing capability).
    '''
    def __init__(self, app, max_size=1024*500):
        self.app = app
        self.max_size = max_size
    
    # class specific overrides
api('link',          LinkJsonTemplate)
api('promotedlink',  PromotedLinkJsonTemplate)
api('message',       MessageJsonTemplate)
api('subreddit',     SubredditJsonTemplate)
api('labeledmulti',  LabeledMultiJsonTemplate)
api('reddit',        RedditJsonTemplate)
api('panestack',     PanestackJsonTemplate)
api('htmlpanestack', NullJsonTemplate)
api('listing',       ListingJsonTemplate)
api('searchlisting', SearchListingJsonTemplate)
api('userlisting',   UserListingJsonTemplate)
api('usertableitem', UserTableItemJsonTemplate)
api('account',       AccountJsonTemplate)
    
            res = AdminPage(content = AdminAwardGive(award, recipient, desc,
                                                 url, hours),
                        title='give an award').render()
        return res
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass
    
            An iden is given as the `captcha` field with a `BAD_CAPTCHA`
        error, you should use this endpoint if you get a
        `BAD_CAPTCHA` error response.
    
            # Replace all links to '/wiki/help/...' with '/help/...'
        for link in output.findAll('a'):
            if link.has_key('href') and link['href'].startswith('/wiki/help'):
                link['href'] = link['href'][5:]