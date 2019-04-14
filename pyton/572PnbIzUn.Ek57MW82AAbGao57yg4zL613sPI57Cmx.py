
        
            elif METHOD == 'LIST':
        domain = compat_urllib_parse_urlparse(test['url']).netloc
        if not domain:
            print('\nFail: {0}'.format(test['name']))
            continue
        domain = '.'.join(domain.split('.')[-2:])
    
        for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
            self.server_process.terminate()
        self.server_process.communicate()
    
    import os  # noqa
    
        result = s[lambda x: ['A', 'B']]
    tm.assert_series_equal(result, s.loc[['A', 'B']])
    
        extract_tags = textrank

    
    seg_list = jieba.cut('他来到了网易杭研大厦')
print(', '.join(seg_list))
    
    USAGE = 'usage:    python extract_tags_with_weight.py [file name] -k [top k] -w [with weight=1 or 0]'
    
        def test_del_msg_success(self):
        '''Del_msg succeeds: Returns 200 and sets del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_1'
        message.to_id = self.id
        message.del_on_recipient = False
    
            # When a Bid is found, assert that auth is called
        with patch('r2.lib.authorize.interaction.Bid.one') as one:
            one_mock = MagicMock()
            one.return_value = one_mock
            auth_freebie_transaction(amount, self.user, link, campaign_id)
            self.assertTrue(one_mock.auth.called)
    
        def test_ftue_autocreate(self):
        request = MagicMock()
        context = MagicMock()
        request.cookies = {}
        loid = LoId.load(request, context, create=True)
        self.assertIsNotNone(loid.loid)
        self.assertIsNotNone(loid.created)
        self.assertTrue(loid.new)
    
    
class ModeratorPermissionSetTest(unittest.TestCase):
    def test_loads(self):
        self.assertTrue(ModeratorPermissionSet.loads(None).is_superuser())
        self.assertFalse(ModeratorPermissionSet.loads('').is_superuser())
    
        @patch('r2.models.Subreddit.user_subreddits')
    def test_frontpage_logged_in(self, user_subreddits):
        user_subreddits.return_value = subscriptions
        srnames = srnames_from_site(self.logged_in, Frontpage)
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'http://s3.amazonaws.com/a.jpg')
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'https://unsplash.it/200/400')
    
        def test_future_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        self.assert_invalid(
            body,
            header='2:awesomefuturespec',
            error=signing.ERRORS.UNKOWN_GLOBAL_VERSION,
            global_version=2,
        )
    
        def test_doctype(self):
        self.assertFragmentRaises('<!DOCTYPE VRML>', SoupSyntaxError)