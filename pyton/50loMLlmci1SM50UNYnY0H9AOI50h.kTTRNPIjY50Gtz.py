
        
            This could be extended by having nested blocks, sorting them recursively
    and flattening the end structure into a list of lines. Revision 2 maybe ^.^.
'''
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
        template = template.replace('@SITES@', textwrap.indent('\n'.join(ie_htmls), '\t'))
    
    
if __name__ == '__main__':
    main()

    
        infile, outfile = args
    
    
def get_base_name(base):
    if base is InfoExtractor:
        return 'LazyLoadExtractor'
    elif base is SearchInfoExtractor:
        return 'LazyLoadSearchExtractor'
    else:
        return base.__name__
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
        def test_compat_etree_fromstring_doctype(self):
        xml = '''<?xml version='1.0'?>
<!DOCTYPE smil PUBLIC '-//W3C//DTD SMIL 2.0//EN' 'http://www.w3.org/2001/SMIL20/SMIL20.dtd'>
<smil xmlns='http://www.w3.org/2001/SMIL20/Language'></smil>'''
        compat_etree_fromstring(xml)
    
            String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    # urllib3's DependencyWarnings should be silenced.
from urllib3.exceptions import DependencyWarning
warnings.simplefilter('ignore', DependencyWarning)
    
            A1 = '%s:%s:%s' % (self.username, realm, self.password)
        A2 = '%s:%s' % (method, path)
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
            # it had actual content (not checking for SOCKS protocol for now)
        assert len(fake_proxy.handler_results[0]) > 0
    
            ('hTTp://u:p@Some.Host/path', 'socks5://some.host.proxy', all_proxies),
        ('hTTp://u:p@Other.Host/path', 'socks5://http.proxy', all_proxies),
        ('hTTp:///path', 'socks5://http.proxy', all_proxies),
        ('hTTps://Other.Host', 'socks5://http.proxy', all_proxies),
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS}

    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
            '''
        # Check for the root of save problems
        new_errs = self.aug.match('/augeas//error')
        # logger.error('During Save - %s', mod_conf)
        logger.error('Unable to save files: %s. Attempted Save Notes: %s',
                     ', '.join(err[13:len(err) - 6] for err in new_errs
                               # Only new errors caused by recent save
                               if err not in ex_errs), self.save_notes)
    
    ALL_SSL_OPTIONS_HASHES = [
    '2086bca02db48daf93468332543c60ac6acdb6f0b58c7bfdf578a5d47092f82a',
    '4844d36c9a0f587172d9fa10f4f1c9518e3bcfa1947379f155e16a70a728c21a',
    '5a922826719981c0a234b1fbcd495f3213e49d2519e845ea0748ba513044b65b',
    '4066b90268c03c9ba0201068eaa39abbc02acf9558bb45a788b630eb85dadf27',
    'f175e2e7c673bd88d0aff8220735f385f916142c44aa83b09f1df88dd4767a88',
    'cfdd7c18d2025836ea3307399f509cfb1ebf2612c87dd600a65da2a8e2f2797b',
    '80720bd171ccdc2e6b917ded340defae66919e4624962396b992b7218a561791',
    'c0c022ea6b8a51ecc8f1003d0a04af6c3f2bc1c3ce506b3c2dfc1f11ef931082',
]
'''SHA256 hashes of the contents of previous versions of all versions of MOD_SSL_CONF_SRC'''
    
            :param addrs: Iterable Addresses
        :type addrs: Iterable :class:~obj.Addr
    
    from certbot_apache import configurator
from certbot_apache import entrypoint
    
    
class VirtualHostTest(unittest.TestCase):
    '''Test the VirtualHost class.'''
    
    from certbot_apache import obj
from certbot_apache.tests import util
    
    # Are two stat buffers (obtained from stat, fstat or lstat)
# describing the same file?
def samestat(s1, s2):
    '''Test whether two stat buffers reference the same file'''
    return (s1.st_ino == s2.st_ino and
            s1.st_dev == s2.st_dev)
    
        colon = _get_colon(s)
    return colon in s and s[:1] != colon
    
    def ismount(path):
    '''Test whether a path is a mount point'''
    try:
        s1 = os.lstat(path)
    except (OSError, ValueError):
        # It doesn't exist -- so not a mount point. :-)
        return False
    else:
        # A symlink can never be a mount point
        if stat.S_ISLNK(s1.st_mode):
            return False
    
        def test_ordering_common(self):
        # Ordering is tuple-alike
        def assertLess(a, b):
            self.assertLess(a, b)
            self.assertGreater(b, a)
        P = self.cls
        a = P('a')
        b = P('a/b')
        c = P('abc')
        d = P('b')
        assertLess(a, b)
        assertLess(a, c)
        assertLess(a, d)
        assertLess(b, c)
        assertLess(c, d)
        P = self.cls
        a = P('/a')
        b = P('/a/b')
        c = P('/abc')
        d = P('/b')
        assertLess(a, b)
        assertLess(a, c)
        assertLess(a, d)
        assertLess(b, c)
        assertLess(c, d)
        with self.assertRaises(TypeError):
            P() < {}
    
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
    
        # On Windows, pass bytes to subprocess doesn't test how Python decodes the
    # command line, but how subprocess does decode bytes to unicode. Python
    # doesn't decode the command line because Windows provides directly the
    # arguments as unicode (using wmain() instead of main()).
    @unittest.skipIf(sys.platform == 'win32',
                     'Windows has a native unicode API')
    def test_undecodable_code(self):
        undecodable = b'\xff'
        env = os.environ.copy()
        # Use C locale to get ascii for the locale encoding
        env['LC_ALL'] = 'C'
        env['PYTHONCOERCECLOCALE'] = '0'
        code = (
            b'import locale; '
            b'print(ascii('' + undecodable + b''), '
                b'locale.getpreferredencoding())')
        p = subprocess.Popen(
            [sys.executable, '-c', code],
            stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
            env=env)
        stdout, stderr = p.communicate()
        if p.returncode == 1:
            # _Py_char2wchar() decoded b'\xff' as '\udcff' (b'\xff' is not
            # decodable from ASCII) and run_command() failed on
            # PyUnicode_AsUTF8String(). This is the expected behaviour on
            # Linux.
            pattern = b'Unable to decode the command from the command line:'
        elif p.returncode == 0:
            # _Py_char2wchar() decoded b'\xff' as '\xff' even if the locale is
            # C and the locale encoding is ASCII. It occurs on FreeBSD, Solaris
            # and Mac OS X.
            pattern = b''\\xff' '
            # The output is followed by the encoding name, an alias to ASCII.
            # Examples: 'US-ASCII' or '646' (ISO 646, on Solaris).
        else:
            raise AssertionError('Unknown exit code: %s, output=%a' % (p.returncode, stdout))
        if not stdout.startswith(pattern):
            raise AssertionError('%a doesn't start with %a' % (stdout, pattern))
    
            if MS_WINDOWS:
            # PYTHONLEGACYWINDOWSFSENCODING disables the UTF-8 mode
            # and has the priority over PYTHONUTF8
            out = self.get_output('-X', 'utf8', '-c', code, PYTHONUTF8='1',
                                  PYTHONLEGACYWINDOWSFSENCODING='1')
            self.assertEqual(out, '0')
    
        def __init__(self, file, connection):
        super().__init__(file)
        self.connection = connection
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()