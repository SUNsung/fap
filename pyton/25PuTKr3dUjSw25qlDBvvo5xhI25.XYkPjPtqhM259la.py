
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
    
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
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
    
        def __init__(self, msg, with_headers=True, with_body=True,
                 on_body_chunk_downloaded=None):
        '''
        :param msg: a :class:`models.HTTPMessage` subclass
        :param with_headers: if `True`, headers will be included
        :param with_body: if `True`, body will be included
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def test_unicode_form_item(httpbin):
    r = http('--form', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['form'] == {'test': UNICODE}
    
    Invocation flow:
    
        '''
    # The value that should be passed to --auth-type
    # to use this auth plugin. Eg. 'my-auth'
    auth_type = None
    
        code_block_index = 0
    last_header = ''
    linenum = 0
    with io.open(args.sourcefile, 'r') as read_filehandle:
        with io.open(args.targetfile, 'w') as text_filehandle:
            for line in read_filehandle:
                linenum += 1
                indent_depth = is_code(line)
                if indent_depth:
                    (line, linenum) = process_code(read_filehandle,
                                                    text_filehandle,
                                                    line, linenum,
                                                    args.sourcefile, args.codedir,
                                                    last_header, code_block_index,
                                                    indent_depth)
                    code_block_index += 1
                # reach here either line was not code, or was code
                # and we dealt with n code lines
                if indent_depth < 4 or not is_code(line, indent_depth):
                    # store header id for codeblock
                    section_id = get_marker(line)
                    if section_id is not None:
                        code_block_index = 0
                        last_header = section_id
                    sline = stripped(line)
                    text_filehandle.write(sline)
    
    def is_api(subtype = ''):
    return c.render_style and c.render_style.startswith(api_type(subtype))
    
            return user.name in self.stacked_proxy_safe_get(g, 'admins', [])
    
    
class LimitUploadSize(object):
    '''
    Middleware for restricting the size of uploaded files (such as
    image files for the CSS editing capability).
    '''
    def __init__(self, app, max_size=1024*500):
        self.app = app
        self.max_size = max_size
    
    tpm = tp_manager.tp_manager()