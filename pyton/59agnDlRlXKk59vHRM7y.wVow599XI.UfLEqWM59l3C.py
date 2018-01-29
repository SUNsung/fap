
        
        entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
    
if __name__ == '__main__':
    unittest.main()

    
    import re
    
            runtime = self._search_regex(
            r'Runtime\s*:\s*(.+?) \|', webpage, 'duration', default=None)
        if runtime:
            runtime = re.sub(r'[\s-]', '', runtime)
        duration = parse_duration(runtime)
        view_count = int_or_none(self._search_regex(
            r'Views\s*:\s*(\d+)', webpage, 'view count', default=None))
        comment_count = int_or_none(self._search_regex(
            r'Comments\s*:\s*(\d+)', webpage, 'comment count', default=None))
    
            self.addr_defined = Addr.fromstring('127.0.0.1:443')
        self.addr_default = Addr.fromstring('_default_:443')
    
        def load_config(self):
        '''Returns the next config directory to be tested'''
        shutil.rmtree(self.le_config.work_dir, ignore_errors=True)
        backup = os.path.join(self.le_config.work_dir, constants.BACKUP_DIR)
        os.makedirs(backup)
        return self._configs.pop()
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_error(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.side_effect = [acme_errors.Error]
        self.assertFalse(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
    # If false, no module index is generated.
#texinfo_domain_indices = True
    
        @require_oauth2_scope('mysubreddits')
    @validate(
        VUser(),
        friend_rel=VFriendOfMine('username'),
    )
    @api_doc(api_section.users, uri='/api/v1/me/friends/{username}')
    def GET_friends(self, friend_rel):
        '''Get information about a specific 'friend', such as notes.'''
        rel_view = FriendTableItem(friend_rel)
        return self.api_wrapper(FriendTableItemJsonTemplate().data(rel_view))
    
        def GET_button_demo_page(self):
        # no buttons for domain listings -> redirect to top level
        if isinstance(c.site, DomainSR):
            return self.redirect('/buttons')
        return BoringPage(_('reddit buttons'),
                          show_sidebar = False, 
                          content=ButtonDemoPanel()).render()
    
    from r2.controllers.reddit_base import RedditController
from r2.lib.base import proxyurl
from r2.lib.csrf import csrf_exempt
from r2.lib.template_helpers import get_domain
from r2.lib.pages import Embed, BoringPage, HelpPage
from r2.lib.filters import websafe, SC_OFF, SC_ON
from r2.lib.memoize import memoize