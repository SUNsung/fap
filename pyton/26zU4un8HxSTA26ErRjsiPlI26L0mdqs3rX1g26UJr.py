
        
                self.host = host
        self.port = port
        self.requests_to_handle = requests_to_handle
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
    Compatibility code to be able to use `cookielib.CookieJar` with requests.
    
    about = {}
with open(os.path.join(here, 'requests', '__version__.py'), 'r', 'utf-8') as f:
    exec(f.read(), about)
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        sourceType = info['sourceType']
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    site = Bigthink()
download = site.download_by_url

    
    
def get_coub_data(html):
    coub_data = r1(r'<script id=\'coubPageCoubJson\' type=\'text/json\'>([^<]+)</script>', html)
    json_data = json.loads(coub_data)
    return json_data
    
    from ..common import *
import urllib.parse
    
        # Test an invalid call (bpo-34126)
    def test_unbound_method_no_args(self):
        def f(p):
            dict.get()
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident)])
    
    
def splitext(p):
    if isinstance(p, bytes):
        return genericpath._splitext(p, b':', altsep, b'.')
    else:
        return genericpath._splitext(p, sep, altsep, extsep)
splitext.__doc__ = genericpath._splitext.__doc__
    
        PurePath represents a filesystem path and offers operations which
    don't imply any actual filesystem I/O.  Depending on your system,
    instantiating a PurePath will return either a PurePosixPath or a
    PureWindowsPath object.  You can also instantiate either of these classes
    directly, regardless of your system.
    '''
    __slots__ = (
        '_drv', '_root', '_parts',
        '_str', '_hash', '_pparts', '_cached_cparts',
    )
    
    import locale
import os
import sys
import textwrap
import unittest
from test import support
from test.support.script_helper import assert_python_ok, assert_python_failure
    
        counter = 1
    for part in msg.walk():
        # multipart/* are just containers
        if part.get_content_maintype() == 'multipart':
            continue
        # Applications should really sanitize the given filename so that an
        # email message can't be used to overwrite important files
        filename = part.get_filename()
        if not filename:
            ext = mimetypes.guess_extension(part.get_content_type())
            if not ext:
                # Use a generic bag-of-bits extension
                ext = '.bin'
            filename = 'part-%03d%s' % (counter, ext)
        counter += 1
        with open(os.path.join(args.directory, filename), 'wb') as fp:
            fp.write(part.get_payload(decode=True))
    
    ### OUTPUT ###
# dog σκύλος
# parrot parrot
# cat γάτα
# bear bear

    
    *References:
https://en.wikipedia.org/wiki/Composite_pattern
https://infinitescript.com/2014/10/the-23-gang-of-three-design-patterns/
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        # verify that none of the target files exist
    assert not lexists('foo.txt')
    assert not lexists('bar.txt')
    assert not lexists('baz.txt')
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
        def run(self, msg):
        print('{} got {}'.format(self.name, msg))
    
    '''
Lazily-evaluated property pattern in Python.
    
        sample_queue = queue.Queue()
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
        def __init__(self, blackboard):
        self.blackboard = blackboard