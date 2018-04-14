
        
            with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        def test_youtube_feeds(self):
        self.assertMatch('https://www.youtube.com/feed/watch_later', ['youtube:watchlater'])
        self.assertMatch('https://www.youtube.com/feed/subscriptions', ['youtube:subscriptions'])
        self.assertMatch('https://www.youtube.com/feed/recommended', ['youtube:recommended'])
        self.assertMatch('https://www.youtube.com/my_favorites', ['youtube:favorites'])
    
            self.port = random.randint(20000, 30000)
        self.server_process = subprocess.Popen([
            'srelay', '-f', '-i', '127.0.0.1:%d' % self.port],
            stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
        def _real_extract(self, url):
        # URLs end with [uploader name]/[uploader title]
        # this title is whatever the user types in, and is rarely
        # the proper song title.  Real metadata is in the api response
        album_url_tag = self._match_id(url)
        result = {'_type': 'playlist', 'entries': []}
        # There is no one endpoint for album metadata - instead it is included/repeated in each song's metadata
        # Therefore we don't know how many songs the album has and must infi-loop until failure
        for track_no in itertools.count():
            # Get song's metadata
            api_response = self._download_json(
                'http://www.audiomack.com/api/music/url/album/%s/%d?extended=1&_=%d'
                % (album_url_tag, track_no, time.time()), album_url_tag,
                note='Querying song information (%d)' % (track_no + 1))
    
            # Video URL construction algorithm is reverse-engineered from cwhplayer.swf
        rtmp_url = 'rtmp://camwithher.tv/clipshare/%s' % (
            ('mp4:%s.mp4' % flv_id) if int(flv_id) > 2010 else flv_id)
    
            .. versionadded:: 0.11
        '''
        mappings = []
        if len(mapping) == 1:
            if hasattr(mapping[0], 'items'):
                mappings.append(mapping[0].items())
            else:
                mappings.append(mapping[0])
        elif len(mapping) > 1:
            raise TypeError(
                'expected at most 1 positional argument, got %d' % len(mapping)
            )
        mappings.append(kwargs.items())
        for mapping in mappings:
            for (key, value) in mapping:
                if key.isupper():
                    self[key] = value
        return True
    
        for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name,
                                                srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
def set_filename_version(filename, version_number, pattern):
    changed = []
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
    del sys

    
        exitcode = 0
    
        requires_project = True
    
        def tested_methods_from_spidercls(self, spidercls):
        methods = []
        for key, value in vars(spidercls).items():
            if (callable(value) and value.__doc__ and
                    re.search(r'^\s*@', value.__doc__, re.MULTILINE)):
                methods.append(key)
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def __init__(self, license_plate):
        super(Bus, self).__init__(VehicleSize.LARGE, license_plate, spot_size=5)
    
        def append_to_front(self, node):
        pass
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    # -- General configuration ------------------------------------------------
    
    # Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
#html_theme_options = {}
    
    
class NotifyTests(unittest.TestCase):
    '''Tests for the notifier.'''
    
    from tornado.http1connection import HTTP1Connection
from tornado.httputil import HTTPMessageDelegate
from tornado.iostream import IOStream
from tornado.locks import Event
from tornado.netutil import add_accept_handler
from tornado.testing import AsyncTestCase, bind_unused_port, gen_test
    
            @gen.coroutine
        def worker():
            while True:
                item = yield q.get()
                self.accumulator += item
                q.task_done()
                yield gen.sleep(random() * 0.01)
    
            # It would be better to run the wsgiref server implementation in
        # another thread instead of using our own WSGIContainer, but this
        # fits better in our async testing framework and the wsgiref
        # validator should keep us honest
        return WSGIContainer(validator(WSGIApplication([
            ('/', HelloHandler),
            ('/path/(.*)', PathQuotingHandler),
            ('/typecheck', TypeCheckHandler),
        ])))
    
            self.reader, addr = a.accept()
        set_close_exec(self.reader.fileno())
        self.reader.setblocking(0)
        self.writer.setblocking(0)
        a.close()
        self.reader_fd = self.reader.fileno()
    
        @gen_test
    def test_garbage_collection(self):
        # Test that timed-out waiters are occasionally cleaned from the queue.
        sem = locks.Semaphore(value=0)
        futures = [sem.acquire(timedelta(seconds=0.01)) for _ in range(101)]
    
                server = TCPServer()
            server.bind(0, address='127.0.0.1')
            server.start(3)
            IOLoop.current().run_sync(lambda: None)
            print(task_id(), end='')
        ''')
        out = self.run_subproc(code)
        self.assertEqual(''.join(sorted(out)), '012')
    
        def get_current_user(self):
        user_id = self.get_secure_cookie('blogdemo_user')
        if not user_id:
            return None
        return self.db.get('SELECT * FROM authors WHERE id = %s', int(user_id))