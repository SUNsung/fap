
        
            def database_backwards(self, app_label, schema_editor, from_state, to_state):
        schema_editor.execute('DROP EXTENSION %s' % schema_editor.quote_name(self.name))
        # Clear cached, stale oids.
        get_hstore_oids.cache_clear()
        get_citext_oids.cache_clear()
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def _close_server_sock_ignore_errors(self):
        try:
            self.server_sock.close()
        except IOError:
            pass
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
        if isinstance(cookies, dict):
        cookiejar = cookiejar_from_dict(
            cookies, cookiejar=cookiejar, overwrite=False)
    elif isinstance(cookies, cookielib.CookieJar):
        try:
            cookiejar.update(cookies)
        except AttributeError:
            for cookie_in_jar in cookies:
                cookiejar.set_cookie(cookie_in_jar)
    
        See https://github.com/requests/requests/issues/1979.
    '''
    text_401 = (b'HTTP/1.1 401 UNAUTHORIZED\r\n'
                b'Content-Length: 0\r\n'
                b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                b', opaque='372825293d1c26955496c80ed6426e9e', '
                b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
    
@pytest.mark.parametrize(
    'value, expected', (
        ('example.com/path', 'http://example.com/path'),
        ('//example.com/path', 'http://example.com/path'),
    ))
def test_prepend_scheme_if_needed(value, expected):
    assert prepend_scheme_if_needed(value, 'http') == expected
    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
# html_extra_path = []
    
    
if __name__ == '__main__':
    main()

    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
        try:
        os.mkdir(args.directory)
    except FileExistsError:
        pass
    
        op = manager.operator()
    print('op.add(23, 45) =', op.add(23, 45))
    print('op.pow(2, 94) =', op.pow(2, 94))
    print('op._exposed_ =', op._exposed_)