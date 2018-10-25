
        
            def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
            self.wait_to_close_event = wait_to_close_event
        self.ready_event = threading.Event()
        self.stop_event = threading.Event()
    
    
def main():
    '''Pretty-print the bug information as JSON.'''
    print(json.dumps(info(), sort_keys=True, indent=2))
    
            if pending is not None:
            yield pending
    
    import sys
    
    
def test_chunked_upload():
    '''can safely send generators'''
    close_server = threading.Event()
    server = Server.basic_response_server(wait_to_close_event=close_server)
    data = iter([b'a', b'b', b'c'])
    
        @pytest.mark.parametrize(
        'cid', (
            CaseInsensitiveDict({'Foo': 'foo', 'BAr': 'bar'}),
            CaseInsensitiveDict([('Foo', 'foo'), ('BAr', 'bar')]),
            CaseInsensitiveDict(FOO='foo', BAr='bar'),
        ))
    def test_init(self, cid):
        assert len(cid) == 2
        assert 'foo' in cid
        assert 'bar' in cid
    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
        app.connect('doctree-read', collect_scrapy_settings_refs)
    app.connect('doctree-resolved', replace_settingslist_nodes)
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
    def _run_command_profiled(cmd, args, opts):
    if opts.profile:
        sys.stderr.write('scrapy: writing cProfile stats to %r\n' % opts.profile)
    loc = locals()
    p = cProfile.Profile()
    p.runctx('cmd.run(args, opts)', globals(), loc)
    if opts.profile:
        p.dump_stats(opts.profile)
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        requires_project = False
    
    
class Command(ScrapyCommand):
    
            # The crawler is created this way since the Shell manually handles the
        # crawling engine, so the set up in the crawl method won't work
        crawler = self.crawler_process._create_crawler(spidercls)
        # The Shell class needs a persistent engine in the crawler
        crawler.engine = crawler._create_engine()
        crawler.engine.start()
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    __all__ = ['ckplayer_download']
    
    
def get_loop_file_path(title, output_dir):
    return os.path.join(output_dir, get_output_filename([], title, 'txt', None, False))
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
    
'''
http://open.iqiyi.com/lib/player.html
'''
iqiyi_patterns = [r'(?:\'|\')(https?://dispatcher\.video\.qiyi\.com\/disp\/shareplayer\.swf\?.+?)(?:\'|\')',
                  r'(?:\'|\')(https?://open\.iqiyi\.com\/developer\/player_js\/coopPlayerIndex\.html\?.+?)(?:\'|\')']
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(urls, title, ext, size, output_dir, merge=False)
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)