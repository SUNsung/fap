
        
        
class TestLocalhostShorthand:
    def test_expand_localhost_shorthand(self):
        args = parser.parse_args(args=[':'], env=MockEnvironment())
        assert args.url == 'http://localhost'
    
        def test_filename_from_url(self):
        assert 'foo.txt' == filename_from_url(
            url='http://example.org/foo',
            content_type='text/plain'
        )
        assert 'foo.html' == filename_from_url(
            url='http://example.org/foo',
            content_type='text/html; charset=utf8'
        )
        assert 'foo' == filename_from_url(
            url='http://example.org/foo',
            content_type=None
        )
        assert 'foo' == filename_from_url(
            url='http://example.org/foo',
            content_type='x-foo/bar'
        )
    
        '''
    headers = []
    data = []
    files = []
    params = []
    for item in items:
        value = item.value
        if item.sep == SEP_HEADERS:
            if value == '':
                # No value => unset the header
                value = None
            target = headers
        elif item.sep == SEP_HEADERS_EMPTY:
            if item.value:
                raise ParseError(
                    'Invalid item '%s' '
                    '(to specify an empty header use `Header;`)'
                    % item.orig
                )
            target = headers
        elif item.sep == SEP_QUERY:
            target = params
        elif item.sep == SEP_FILES:
            try:
                with open(os.path.expanduser(value), 'rb') as f:
                    value = (os.path.basename(value),
                             BytesIO(f.read()),
                             get_content_type(value))
            except IOError as e:
                raise ParseError(''%s': %s' % (item.orig, e))
            target = files
    
                # >leading or trailing LWS MAY be removed without
            # >changing the semantics of the field value'
            # -https://www.w3.org/Protocols/rfc2616/rfc2616-sec4.html
            # Also, requests raises `InvalidHeader` for leading spaces.
            value = value.strip()
    
            status_line = 'HTTP/{version} {status} {reason}'.format(
            version=version,
            status=original.status,
            reason=original.reason
        )
        headers = [status_line]
        try:
            # `original.msg` is a `http.client.HTTPMessage` on Python 3
            # `_headers` is a 2-tuple
            headers.extend(
                '%s: %s' % header for header in original.msg._headers)
        except AttributeError:
            # and a `httplib.HTTPMessage` on Python 2.x
            # `headers` is a list of `name: val<CRLF>`.
            headers.extend(h.strip() for h in original.msg.headers)
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
'''
    
    
_DEFAULTS = {
    'threshold': {
        'default': 99.0,
        'info': 'Adjust the threshold for histogram matching. Can reduce extreme colors '
                'leaking in by filtering out colors at the extreme ends of the histogram '
                'spectrum.',
        'datatype': float,
        'rounding': 1,
        'min_max': (90.0, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    }
}

    
    logger = logging.getLogger(__name__)  # pylint: disable=invalid-name
    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
    import tkinter as tk
from tkinter import ttk
    
            if not obs_states:
            obs_states = prev_states_expect_next if prev_states_expect_next else all_states
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    
'''