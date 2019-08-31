
        
                    elif opt in ('-V', '--version'):
                # Display version.
                log.println('you-get:', log.BOLD)
                log.println('    version:  {}'.format(__version__))
                if head is not None:
                    log.println('    branch:   {}\n    commit:   {}'.format(*head))
                else:
                    log.println('    branch:   {}\n    commit:   {}'.format('(stable)', '(tag v{})'.format(__version__)))
    
    site = Bigthink()
download = site.download_by_url

    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
    site_info = 'ifeng.com'
download = ifeng_download
download_playlist = playlist_not_supported('ifeng')

    
    
@gen.engine
def e1():
    for i in range(10):
        yield gen.Task(e2)
    
    
if __name__ == '__main__':
    main()

    
        @gen_test
    def test_websocket_close_buffered_data(self):
        ws = yield websocket_connect('ws://127.0.0.1:%d/echo' % self.get_http_port())
        ws.write_message('hello')
        ws.write_message('world')
        # Close the underlying stream.
        ws.stream.close()