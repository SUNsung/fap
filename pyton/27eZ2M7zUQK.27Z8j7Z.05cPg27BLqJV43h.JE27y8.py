
        
        with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def test_proxy_http(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
            with io.open(as_file, 'r', encoding='utf-8') as as_f:
            as_content = as_f.read()
    
                # Total failure, only occurs when url is totally wrong
            # Won't happen in middle of valid playlist (next case)
            if 'url' not in api_response or 'error' in api_response:
                raise ExtractorError('Invalid url for track %d of album url %s' % (track_no, url))
            # URL is good but song id doesn't exist - usually means end of playlist
            elif not api_response['url']:
                break
            else:
                # Pull out the album metadata and add to result (if it exists)
                for resultkey, apikey in [('id', 'album_id'), ('title', 'album_title')]:
                    if apikey in api_response and resultkey not in result:
                        result[resultkey] = api_response[apikey]
                song_id = url_basename(api_response['url']).rpartition('.')[0]
                result['entries'].append({
                    'id': compat_str(api_response.get('id', song_id)),
                    'uploader': api_response.get('artist'),
                    'title': api_response.get('title', song_id),
                    'url': api_response['url'],
                })
        return result

    
            page = self._download_json(
            'http://vxml.56.com/json/%s/' % text_id, text_id, 'Downloading video info')
    
    
def best_server():
    # TODO: find and use the best server
    # teredo.remlab.net / teredo - debian.remlab.net(Germany)
    # teredo.ngix.ne.kr(South Korea)
    # teredo.managemydedi.com(USA, Chicago)
    # teredo.trex.fi(Finland)
    # win8.ipv6.microsoft.com(The Teredo server hidden in Windows RT 8.1) of which Windows 7 has no knowledge.
    # win10.ipv6.microsoft.com
    return 'teredo.remlab.net'
    
        win_version = env_info.win32_version()
    if win_version == 10:
        xlog.info('detected Win10, enable connect concurrency control, interval:%d', config.connect_interval)
        return config.connect_interval
    
        version_string = 'Version:%d-%d; Build:%d; Platform:%d; CSD:%s; ServicePack:%d-%d; Suite:%d; ProductType:%d' %  (
        os_version.dwMajorVersion, os_version.dwMinorVersion,
        os_version.dwBuildNumber,
        os_version.dwPlatformId,
        os_version.szCSDVersion,
        os_version.wServicePackMajor, os_version.wServicePackMinor,
        os_version.wSuiteMask,
        os_version.wReserved
    )
    
    
class MismatchedNotSetException(MismatchedSetException):
    '''@brief Used for remote debugger deserialization'''
    
    def __str__(self):
        return 'MismatchedNotSetException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
    This should be interpreted in this way: you have two data points in the class
interval 1.5-2.5, three data points in the class interval 2.5-3.5, and one in
the class interval 3.5-4.5. The median of these data points is 2.8333...
    
        def test_secure_httponly_true_if_have_value(self):
        # This isn't really valid, but demonstrates what the current code
        # is expected to do in this case.
        C = cookies.SimpleCookie()
        C.load('eggs=scrambled; httponly=foo; secure=bar; Path=/bacon')
        self.assertTrue(C['eggs']['httponly'])
        self.assertTrue(C['eggs']['secure'])
        # Here is what it actually does; don't depend on this behavior.  These
        # checks are testing backward compatibility for issue 16611.
        self.assertEqual(C['eggs']['httponly'], 'foo')
        self.assertEqual(C['eggs']['secure'], 'bar')
    
    from heapq import nlargest as _nlargest
from collections import namedtuple as _namedtuple
    
        # override in derived classes
    def _extractrgb(self, mo):
        return [int(x) for x in mo.group('red', 'green', 'blue')]
    
        def test_oldargs1_0(self):
        msg = r'count\(\) takes exactly one argument \(0 given\)'
        self.assertRaisesRegex(TypeError, msg, [].count)
    
    This module can be used to create simple XML-RPC servers
by creating a server and either installing functions, a
class instance, or by extending the SimpleXMLRPCServer
class.