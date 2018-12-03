    def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
        def can_fit_vehicle(self, vehicle):
        if self.vehicle is not None:
            return False
        return vehicle.can_fit_in_spot(self)
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
    
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        raw_title = [x.strip() for x in line.split('|')[1:-1]][0]
        title_re_match = link_re.match(raw_title)
        if title_re_match:
            sections[category].append(title_re_match.group(1).upper())
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
    
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
        if n == 1:
        return '1 B'
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_auth_plugin_require_auth_false(httpbin):
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
        def test_download_with_Content_Length(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 10}
        ))
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        downloader.finish()
        assert not downloader.interrupted
    
    
class SessionStore(SessionBase):
    '''
    A cache-based session store.
    '''
    cache_key_prefix = KEY_PREFIX
    
        def __init__(self, session_key=None):
        self._cache = caches[settings.SESSION_CACHE_ALIAS]
        super().__init__(session_key)
    
    def _check_arg_types(funcname, *args):
    hasstr = hasbytes = False
    for s in args:
        if isinstance(s, str):
            hasstr = True
        elif isinstance(s, bytes):
            hasbytes = True
        else:
            raise TypeError('%s() argument must be str or bytes, not %r' %
                            (funcname, s.__class__.__name__)) from None
    if hasstr and hasbytes:
        raise TypeError('Can't mix strings and bytes in path components') from None

    
        def test_open_common(self):
        p = self.cls(BASE)
        with (p / 'fileA').open('r') as f:
            self.assertIsInstance(f, io.TextIOBase)
            self.assertEqual(f.read(), 'this is file A\n')
        with (p / 'fileA').open('rb') as f:
            self.assertIsInstance(f, io.BufferedIOBase)
            self.assertEqual(f.read().strip(), b'this is file A')
        with (p / 'fileA').open('rb', buffering=0) as f:
            self.assertIsInstance(f, io.RawIOBase)
            self.assertEqual(f.read().strip(), b'this is file A')
    
    from . import abc as resources_abc
from contextlib import contextmanager, suppress
from importlib import import_module
from importlib.abc import ResourceLoader
from io import BytesIO, TextIOWrapper
from pathlib import Path
from types import ModuleType
from typing import Iterable, Iterator, Optional, Set, Union   # noqa: F401
from typing import cast
from typing.io import BinaryIO, TextIO
from zipimport import ZipImportError
    
        def test_showrefcount(self):
        def run_python(*args):
            # this is similar to assert_python_ok but doesn't strip
            # the refcount from stderr.  It can be replaced once
            # assert_python_ok stops doing that.
            cmd = [sys.executable]
            cmd.extend(args)
            PIPE = subprocess.PIPE
            p = subprocess.Popen(cmd, stdout=PIPE, stderr=PIPE)
            out, err = p.communicate()
            p.stdout.close()
            p.stderr.close()
            rc = p.returncode
            self.assertEqual(rc, 0)
            return rc, out, err
        code = 'import sys; print(sys._xoptions)'
        # normally the refcount is hidden
        rc, out, err = run_python('-c', code)
        self.assertEqual(out.rstrip(), b'{}')
        self.assertEqual(err, b'')
        # '-X showrefcount' shows the refcount, but only in debug builds
        rc, out, err = run_python('-X', 'showrefcount', '-c', code)
        self.assertEqual(out.rstrip(), b'{'showrefcount': True}')
        if Py_DEBUG:
            self.assertRegex(err, br'^\[\d+ refs, \d+ blocks\]')
        else:
            self.assertEqual(err, b'')
    
        def testPeekBytesIO(self):
        with BytesIO(self.DATA) as bio:
            with BZ2File(bio) as bz2f:
                pdata = bz2f.peek()
                self.assertNotEqual(len(pdata), 0)
                self.assertTrue(self.TEXT.startswith(pdata))
                self.assertEqual(bz2f.read(), self.TEXT)
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    from argparse import ArgumentParser
    
    # Now the header items can be accessed as a dictionary, and any non-ASCII will
# be converted to unicode:
print('To:', msg['to'])
print('From:', msg['from'])
print('Subject:', msg['subject'])