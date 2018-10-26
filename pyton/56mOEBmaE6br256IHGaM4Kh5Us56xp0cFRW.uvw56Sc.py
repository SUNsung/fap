
        
        
def build_completion(opt_parser):
    commands = []
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    import io
import optparse
    
    with io.open(README_FILE, 'w', encoding='utf-8') as f:
    f.write(header)
    f.write(options)
    f.write(footer)

    
        diropts = []
    for opt in opts_dir:
        if opt._short_opts:
            diropts.extend(opt._short_opts)
        if opt._long_opts:
            diropts.extend(opt._long_opts)
    
            ydl = YDL({'format': '[filesize>?1]'})
        ydl.process_ie_result(info_dict)
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], 'G')
    
        def test_pbs(self):
        # https://github.com/rg3/youtube-dl/issues/2350
        self.assertMatch('http://video.pbs.org/viralplayer/2365173446/', ['pbs'])
        self.assertMatch('http://video.pbs.org/widget/partnerplayer/980042464/', ['pbs'])
    
        def values(self):
        '''Dict-like values() that returns a list of values of cookies from the
        jar.
    
    # TODO: response is the only one
    
    import re
    
    def _print_header(settings, inproject):
    if inproject:
        print('Scrapy %s - project: %s\n' % (scrapy.__version__, \
            settings['BOT_NAME']))
    else:
        print('Scrapy %s - no active project\n' % scrapy.__version__)
    
    
class Command(ScrapyCommand):
    
        def get_callback_from_rules(self, spider, response):
        if getattr(spider, 'rules', None):
            for rule in spider.rules:
                if rule.link_extractor.matches(response.url):
                    return rule.callback or 'parse'
        else:
            logger.error('No CrawlSpider rules found in spider %(spider)r, '
                         'please specify a callback to use for parsing',
                         {'spider': spider.name})
    
            'A TLS/SSL connection established with [this method] may
         understand the SSLv3, TLSv1, TLSv1.1 and TLSv1.2 protocols.'
        '''
    
        @property
    def filename(self):
        return self.__filename
    
        def process_appid_not_exist(self, appid, ip):
        ret = self.check_api(ip, 'xxnet-1')
        if ret and ret.ok:
            self.set_appid_not_exist(appid)
        else:
            self.logger.warn('process_appid_not_exist, remove ip:%s', ip)
    
            # Cannot test with the POSIX locale, since the POSIX locale enables
        # the UTF-8 mode
        if not self.posix_locale():
            # PYTHONUTF8 should be ignored if -E is used
            out = self.get_output('-E', '-c', code, PYTHONUTF8='1')
            self.assertEqual(out, '0')
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)