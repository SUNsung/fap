
        
        entries = []
for v in versions:
    fields = v.split('.')
    year, month, day = map(int, fields[:3])
    faked = 0
    patchlevel = 0
    while True:
        try:
            datetime.date(year, month, day)
        except ValueError:
            day -= 1
            faked += 1
            assert day > 0
            continue
        break
    if len(fields) >= 4:
        try:
            patchlevel = int(fields[3])
        except ValueError:
            patchlevel = 1
    timestamp = '%04d-%02d-%02dT00:%02d:%02dZ' % (year, month, day, faked, patchlevel)
    
        infile, outfile = args
    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
            self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            match_rex.match(got),
            'field %s (value: %r) should match %r' % (field, got, match_str))
    elif isinstance(expected, compat_str) and expected.startswith('startswith:'):
        start_str = expected[len('startswith:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            got.startswith(start_str),
            'field %s (value: %r) should start with %r' % (field, got, start_str))
    elif isinstance(expected, compat_str) and expected.startswith('contains:'):
        contains_str = expected[len('contains:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            contains_str in got,
            'field %s (value: %r) should contain %r' % (field, got, contains_str))
    elif isinstance(expected, type):
        self.assertTrue(
            isinstance(got, expected),
            'Expected type %r for field %s, but got value %r of type %r' % (expected, field, got, type(got)))
    elif isinstance(expected, dict) and isinstance(got, dict):
        expect_dict(self, got, expected)
    elif isinstance(expected, list) and isinstance(got, list):
        self.assertEqual(
            len(expected), len(got),
            'Expect a list of length %d, but got a list of length %d for field %s' % (
                len(expected), len(got), field))
        for index, (item_got, item_expected) in enumerate(zip(got, expected)):
            type_got = type(item_got)
            type_expected = type(item_expected)
            self.assertEqual(
                type_expected, type_got,
                'Type mismatch for list item at index %d for field %s, expected %r, got %r' % (
                    index, field, type_expected, type_got))
            expect_value(self, item_got, item_expected, field)
    else:
        if isinstance(expected, compat_str) and expected.startswith('md5:'):
            self.assertTrue(
                isinstance(got, compat_str),
                'Expected field %s to be a unicode object, but got value %r of type %r' % (field, got, type(got)))
            got = 'md5:' + md5(got)
        elif isinstance(expected, compat_str) and expected.startswith('mincount:'):
            self.assertTrue(
                isinstance(got, (list, dict)),
                'Expected field %s to be a list or a dict, but it is of type %s' % (
                    field, type(got).__name__))
            expected_num = int(expected.partition(':')[2])
            assertGreaterEqual(
                self, len(got), expected_num,
                'Expected %d items in field %s, but only got %d' % (expected_num, field, len(got)))
            return
        self.assertEqual(
            expected, got,
            'Invalid value for field %s, expected %r, got %r' % (field, expected, got))
    
    
def _mkdir(d):
    if not os.path.exists(d):
        os.mkdir(d)
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
            raw_payload = self._search_regex([
            r'class='amtv-embed'[^>]+id='([^']+)'',
            r'class=\\'amtv-embed\\'[^>]+id=\\'([^']+)\\'',
        ], webpage, 'raw payload')
        _, stage_mode, video_id, lang = raw_payload.split('-')
    
            return {
            'id': api_response.get('id', album_url_tag),
            'uploader': api_response.get('artist'),
            'title': api_response.get('title'),
            'url': api_response['url'],
        }
    
    import re
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
    	title = video.attributes['title'].value
	assert title 
    
    #----------------------------------------------------------------------
def makeMimi(upid):
    '''From http://cdn37.atwikiimg.com/sitescript/pub/dksitescript/FC2.site.js
    Also com.hps.util.fc2.FC2EncrptUtil.makeMimiLocal
    L110'''
    strSeed = 'gGddgPfeaf_gzyr'
    prehash = upid + '_' + strSeed
    return md5(prehash.encode('utf-8')).hexdigest()
    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
    from ..common import *
from ..extractor import VideoExtractor
    
    def showroom_download_by_room_id(room_id, output_dir = '.', merge = False, info_only = False, **kwargs):
    '''Source: Android mobile'''
    while True:
        timestamp = str(int(time() * 1000))
        api_endpoint = 'https://www.showroom-live.com/api/live/streaming_url?room_id={room_id}&_={timestamp}'.format(room_id = room_id, timestamp = timestamp)
        html = get_content(api_endpoint)
        html = json.loads(html)
        #{'streaming_url_list': [{'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 1, 'label': 'original spec(low latency)', 'is_default': True, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed/playlist.m3u8', 'is_default': True, 'id': 2, 'type': 'hls', 'label': 'original spec'}, {'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 3, 'label': 'low spec(low latency)', 'is_default': False, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low/playlist.m3u8', 'is_default': False, 'id': 4, 'type': 'hls', 'label': 'low spec'}]}
        if len(html) >= 1:
            break
        log.w('The live show is currently offline.')
        sleep(1)
    
    
def is_translated(msg):
    if isinstance(msg.string, basestring):
        return bool(msg.string)
    for item in msg.string:
        if not item:
            return False
    return True
    
    
def _worker(executor_reference, work_queue):
    try:
        while True:
            work_item = work_queue.get(block=True)
            if work_item is not None:
                work_item.run()
                continue
            executor = executor_reference()
            # Exit if:
            #   - The executor that owns the worker has been collected OR
            #   - The executor that owns the worker has been shutdown.
            if executor is None or executor._shutdown:
                # Notice other workers
                work_queue.put(None)
                return
            del executor
    except BaseException:
        _base.LOGGER.critical('Exception in worker', exc_info=True)
    
        def map(self, fn, *iterables, **kwargs):
        '''Returns a iterator equivalent to map(fn, iter).
    
            self.assertEqual(set([CANCELLED_AND_NOTIFIED_FUTURE,
                              EXCEPTION_FUTURE,
                              SUCCESSFUL_FUTURE,
                              future1]), finished)
        self.assertEqual(set([future2]), pending)
    
    
  def Start( self ):
    with HandleServerException( display = False ):
      self.PostDataToHandler( {}, 'shutdown', TIMEOUT_SECONDS )
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: in this class's implementation, we ask vimsupport for
    #  the current filetypes and delegate automatically; it is probably,
    #  more efficient, however, to call SubsetForTypes() and reuse
    #  the returned DiagnosticFilter if it will be checked repeatedly.
    filetypes = vimsupport.CurrentFiletypes()
    return self.SubsetForTypes( filetypes ).IsAllowed( diagnostic )
    
    
def ExtractKeywordsFromGroup_KeywordMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo contained bar',
                   'zoo goo'
                 ] ) ),
               contains_inanyorder( 'foo', 'contained', 'bar', 'zoo', 'goo' ) )
    
      Example usage: