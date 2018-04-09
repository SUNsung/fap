
        
            infile, outfile = args
    
    from __future__ import unicode_literals
    
            return {
            'id': flv_id,
            'url': rtmp_url,
            'ext': 'flv',
            'no_resume': True,
            'title': title,
            'description': description,
            'duration': duration,
            'view_count': view_count,
            'comment_count': comment_count,
            'uploader': uploader,
            'upload_date': upload_date,
        }

    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            export YOURAPPLICATION_SETTINGS='/path/to/config/file'
    
            if triple is None:
            detail = 'no match'
        else:
            detail = 'found (%r)' % (triple[1] or '<string>')
            total_found += 1
        info.append('       -> %s' % detail)
    
        Internally, the dict key is suffixed with `__`, and the suffix is removed
    when deserializing.
    '''
    
        def open_session(self, app, request):
        '''This method has to be implemented and must either return ``None``
        in case the loading failed because of a configuration error or an
        instance of a session object which implements a dictionary like
        interface + the methods and attributes on :class:`SessionMixin`.
        '''
        raise NotImplementedError()
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
        return request('put', url, data=data, **kwargs)
    
    from .auth import HTTPBasicAuth
from .cookies import cookiejar_from_dict, get_cookie_header, _copy_cookie_jar
from .exceptions import (
    HTTPError, MissingSchema, InvalidURL, ChunkedEncodingError,
    ContentDecodingError, ConnectionError, StreamConsumedError)
from ._internal_utils import to_native_string, unicode_is_ascii
from .utils import (
    guess_filename, get_auth_from_url, requote_uri,
    stream_decode_response_unicode, to_key_val_list, parse_header_links,
    iter_slices, guess_json_utf, super_len, check_header_validity)
from .compat import (
    cookielib, urlunparse, urlsplit, urlencode, str, bytes,
    is_py2, chardet, builtin_str, basestring)
from .compat import json as complexjson
from .status_codes import codes
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
    import pytest
import requests
from tests.testserver.server import Server
    
    
class StreamConsumedError(RequestException, TypeError):
    '''The content for this response was already consumed'''
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
        # Get options and arguments.
    try:
        opts, args = getopt.getopt(sys.argv[1:], _short_options, _options)
    except getopt.GetoptError as e:
        log.wtf('''
    [Fatal] {}.
    Try '{} --help' for more options.'''.format(e, script_name))
    
    __all__ = ['fc2video_download']
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
    from ..common import *
from ..extractor import VideoExtractor
    
    #----------------------------------------------------------------------
def showroom_get_roomid_by_room_url_key(room_url_key):
    '''str->str'''
    fake_headers_mobile = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
        'Accept-Charset': 'UTF-8,*;q=0.5',
        'Accept-Encoding': 'gzip,deflate,sdch',
        'Accept-Language': 'en-US,en;q=0.8',
        'User-Agent': 'Mozilla/5.0 (Linux; Android 4.4.2; Nexus 4 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36'
    }
    webpage_url = 'https://www.showroom-live.com/' + room_url_key
    html = get_content(webpage_url, headers = fake_headers_mobile)
    roomid = match1(html, r'room\?room_id\=(\d+)')
    assert roomid
    return roomid
    
        def test_small_ints(self):
        for i in range(-5, 257):
            self.assertIs(i, i + 0)
            self.assertIs(i, i * 1)
            self.assertIs(i, i - 0)
            self.assertIs(i, i // 1)
            self.assertIs(i, i & -1)
            self.assertIs(i, i | 0)
            self.assertIs(i, i ^ 0)
            self.assertIs(i, ~~i)
            self.assertIs(i, i**1)
            self.assertIs(i, int(str(i)))
            self.assertIs(i, i<<2>>2, str(i))
        # corner cases
        i = 1 << 70
        self.assertIs(i - i, 0)
        self.assertIs(0 * i, 0)
    
    Subclass SectionName gets a name for a new config file section.
Configdialog uses it for new highlight theme and keybinding set names.
Subclass ModuleName gets a name for File => Open Module.
Subclass HelpSource gets menu item and path for additions to Help menu.
'''
# Query and Section name result from splitting GetCfgSectionNameDialog
# of configSectionNameDialog.py (temporarily config_sec.py) into
# generic and specific parts.  3.6 only, July 2016.
# ModuleName.entry_ok came from editor.EditorWindow.load_module.
# HelpSource was extracted from configHelpSourceEdit.py (temporarily
# config_help.py), with darwin code moved from ok to path_ok.
    
            # test issue11004
        # block advance failed after rotation aligned elements on right side of block
        d = deque([None]*16)
        for i in range(len(d)):
            d.rotate(-1)
        d.rotate(1)
        self.assertEqual(d.count(1), 0)
        self.assertEqual(d.count(None), 16)
    
    
class TestDecode:
    def test_decimal(self):
        rval = self.loads('1.1', parse_float=decimal.Decimal)
        self.assertTrue(isinstance(rval, decimal.Decimal))
        self.assertEqual(rval, decimal.Decimal('1.1'))
    
    if C is not None:
    c = C.getcontext()
    c.prec = C.MAX_PREC
    c.Emax = C.MAX_EMAX
    c.Emin = C.MIN_EMIN
    
    subsystem_details = {
    # -s flag        : (C entry point template), (is it __main__?), (is it a DLL?)
    'console'        : (None,                    1,                 0),
    'windows'        : (WINMAINTEMPLATE,         1,                 0),
    'service'        : (SERVICETEMPLATE,         0,                 0),
    'com_dll'        : ('',                      0,                 1),
}
    
        expect_without_sort_keys = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'field': 'yes',
            'morefield': false
        }
    ]
    ''')
    
        def test_empty(self):
        r = range(0)
        self.assertNotIn(0, r)
        self.assertNotIn(1, r)
    
        def test_from_buffer_copy_with_offset(self):
        a = array.array('i', range(16))
        x = (c_int * 15).from_buffer_copy(a, sizeof(c_int))
    
            del wndclass
        del wndproc
    
            def func(arg):
            for i in range(10):
##                print arg[i],
                self.result.append(arg[i])
##            print
            return 0
        callback = PROTOTYPE(func)
    
    
def extract_errtype(violation, tool):
    '''Based on a line of `tool`'s output, return the kind of infraction.
    
    
def register_api_templates(template_name, template_class):
    for style in ('api', 'api-html', 'api-compact'):
        tpm.add_handler(
            name=template_name,
            style=style,
            handler=template_class,
        )
    
            Responds with a 120x50 `image/png` which should be displayed
        to the user.
    
    from r2.controllers.reddit_base import RedditController
from r2.lib.base import proxyurl
from r2.lib.csrf import csrf_exempt
from r2.lib.template_helpers import get_domain
from r2.lib.pages import Embed, BoringPage, HelpPage
from r2.lib.filters import websafe, SC_OFF, SC_ON
from r2.lib.memoize import memoize
    
                if isinstance(c.user, basestring):
                # somehow requests are getting here with c.user unset
                c.user_is_loggedin = False
                c.user = UnloggedUser(browser_langs=None)