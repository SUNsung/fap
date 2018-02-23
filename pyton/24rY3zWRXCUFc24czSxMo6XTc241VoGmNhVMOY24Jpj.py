
        
        
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def test_secondary_proxy_https(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('https://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
    import re
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or dict()
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    import collections
    
            assert len(server.handler_results) == 0
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
        This is necessary because when request_hooks == {'response': []}, the
    merge breaks Session hooks entirely.
    '''
    if session_hooks is None or session_hooks.get('response') == []:
        return request_hooks
    
    
#
# Backwards compat functions.  Some modules include md5s in their return values
# Continue to support that for now.  As of ansible-1.8, all of those modules
# should also return 'checksum' (sha1 for now)
# Do not use md5 unless it is needed for:
# 1) Optional backwards compatibility
# 2) Compliance with a third party protocol
#
# MD5 will not work on systems which are FIPS-140-2 compliant.
#
    
        indent = None
    if format:
        indent = 4
    
    from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
            # test exceptions
        no_projects_input_url = 'https://www.googleapis.com/compute/v1/not-projects/myproject/global/backendServices/mybackendservice/getHealth'
        no_resource_input_url = 'https://www.googleapis.com/compute/v1/not-projects/myproject/global'
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
            size_full = 0
        for url in url_list:
            type_, ext, size = url_info(url, headers=fake_headers)
            size_full += size
    
        def test_create_entries(self):
        self.dialog.top = self.root
        self.dialog.row = 0
        self.engine.setpat('hello')
        self.dialog.create_entries()
        self.assertIn(self.dialog.ent.get(), 'hello')
    
        # Uses bisection search to search for x in data with log(n) time complexity
    # Find the position of leftmost occurrence of x in data
    l1 = _find_lteq(data, x)
    # Find the position of rightmost occurrence of x in data[l1...len(data)]
    # Assuming always l1 <= l2
    l2 = _find_rteq(data, l1, x)
    cf = l1
    f = l2 - l1 + 1
    return L + interval*(n/2 - cf)/f
    
                self.assertIn('Project-Id-Version', header)
            self.assertIn('POT-Creation-Date', header)
            self.assertIn('PO-Revision-Date', header)
            self.assertIn('Last-Translator', header)
            self.assertIn('Language-Team', header)
            self.assertIn('MIME-Version', header)
            self.assertIn('Content-Type', header)
            self.assertIn('Content-Transfer-Encoding', header)
            self.assertIn('Generated-By', header)
    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
        def __init__(self, message=None):
        '''Initialize a MaildirMessage instance.'''
        self._subdir = 'new'
        self._info = ''
        self._date = time.time()
        Message.__init__(self, message)
    
        with SimpleXMLRPCServer(('localhost', 8000)) as server:
        server.register_function(pow)
        server.register_function(lambda x,y: x+y, 'add')
        server.register_instance(ExampleService(), allow_dotted_names=True)
        server.register_multicall_functions()
        print('Serving XML-RPC on localhost port 8000')
        print('It is advisable to run this example server within a secure, closed network.')
        try:
            server.serve_forever()
        except KeyboardInterrupt:
            print('\nKeyboard interrupt received, exiting.')
            sys.exit(0)

    
            For now, we use tp_flags, after doing some string comparisons on the
        tp_name for some special-cases that don't seem to be visible through
        flags
        '''
        try:
            tp_name = t.field('tp_name').string()
            tp_flags = int(t.field('tp_flags'))
        except RuntimeError:
            # Handle any kind of error e.g. NULL ptrs by simply using the base
            # class
            return cls
    
        def test_count(self):
        self.assertEqual(range(3).count(-1), 0)
        self.assertEqual(range(3).count(0), 1)
        self.assertEqual(range(3).count(1), 1)
        self.assertEqual(range(3).count(2), 1)
        self.assertEqual(range(3).count(3), 0)
        self.assertIs(type(range(3).count(-1)), int)
        self.assertIs(type(range(3).count(1)), int)
        self.assertEqual(range(10**20).count(1), 1)
        self.assertEqual(range(10**20).count(10**20), 0)
        self.assertEqual(range(3).index(1), 1)
        self.assertEqual(range(1, 2**100, 2).count(2**87), 0)
        self.assertEqual(range(1, 2**100, 2).count(2**87+1), 1)
    
        print('Done!')
    if failures:
        print('Some downloads have failed:')
        for fail in failures:
            print('> ' + fail)

    
            yield conn.read_response(Delegate())
        yield event.wait()
        self.assertEqual(self.code, 200)
        self.assertEqual(b''.join(body), b'hello')

    
    
class ProducerConsumerTest(AsyncTestCase):
    @gen_test
    def test_producer_consumer(self):
        q = queues.Queue(maxsize=3)
        history = []
    
    from tornado.escape import json_decode
from tornado.test.httpserver_test import TypeCheckHandler
from tornado.testing import AsyncHTTPTestCase
from tornado.web import RequestHandler, Application
from tornado.wsgi import WSGIApplication, WSGIContainer, WSGIAdapter
    
    define('ioloop', type=str, default=None)
    
    
def main():
    parse_command_line()
    app = Application([('/', ChunkHandler)])
    app.listen(options.port, address='127.0.0.1')
    
    def is_api(subtype = ''):
    return c.render_style and c.render_style.startswith(api_type(subtype))
    
        def simple_event(self, name):
        stats = self.stacked_proxy_safe_get(g, 'stats', None)
        if stats:
            return stats.simple_event(name)

    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 10)
        self.blackboard.common_state['suggestions'] += random.randint(1, 10)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(1, 2)
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def publishReport(self):
        self._db.update()
        self._reporter.report()
    
    
# Example usage
class Data(Subject):
    
        def and_specification(self, candidate):
        raise NotImplementedError()