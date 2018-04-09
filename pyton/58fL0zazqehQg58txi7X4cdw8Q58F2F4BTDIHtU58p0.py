
        
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
    
    
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def __iter__(self):
        return iter(sorted(plugin_manager.get_auth_plugin_mapping().keys()))
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
        fc2video_download_by_upid(upid, output_dir, merge, info_only)
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
    __all__ = ['kuwo_download']
    
        type_, ext, size = url_info(stream_url)
    print_info(site_info, title, type_, size)
    if not info_only:
        download_url_ffmpeg(url=stream_url, title=title, ext= 'mp4', output_dir=output_dir)
    
            msg = ('Error in conversion of integer {} to float.  '
               'Got {}, expected {}.'.format(n, actual, expected))
        self.assertEqual(actual, expected, msg)
    
        def test_copy_method(self):
        mut = [10]
        d = deque([mut])
        e = d.copy()
        self.assertEqual(list(d), list(e))
        mut[0] = 11
        self.assertNotEqual(id(d), id(e))
        self.assertEqual(list(d), list(e))
    
        def test_string_with_utf8_bom(self):
        # see #18958
        bom_json = '[1,2,3]'.encode('utf-8-sig').decode('utf-8')
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.loads(bom_json)
        self.assertIn('BOM', str(cm.exception))
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.json.load(StringIO(bom_json))
        self.assertIn('BOM', str(cm.exception))
        # make sure that the BOM is not detected in the middle of a string
        bom_in_str = ''{}''.format(''.encode('utf-8-sig').decode('utf-8'))
        self.assertEqual(self.loads(bom_in_str), '\ufeff')
        self.assertEqual(self.json.load(StringIO(bom_in_str)), '\ufeff')
    
        def seek(self, pos, whence=0):
        '''Seek to specified position into the chunk.
        Default position is 0 (start of chunk).
        If the file is not seekable, this will result in an error.
        '''
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
        def xover(self, start, end, *, file=None):
        '''Process an XOVER command (optional server extension) Arguments:
        - start: start of range
        - end: end of range
        - file: Filename string or file object to store the result in
        Returns:
        - resp: server response if successful
        - list: list of dicts containing the response fields
        '''
        resp, lines = self._longcmdstring('XOVER {0}-{1}'.format(start, end),
                                          file)
        fmt = self._getoverviewfmt()
        return resp, _parse_overview(lines, fmt)
    
        # This dictionary maps from (feature,value) to a list of
    # (option,value) pairs that should be set on the Options object.
    # If a (feature,value) setting is not in this dictionary, it is
    # not supported by the DOMBuilder.
    #
    _settings = {
        ('namespace_declarations', 0): [
            ('namespace_declarations', 0)],
        ('namespace_declarations', 1): [
            ('namespace_declarations', 1)],
        ('validation', 0): [
            ('validation', 0)],
        ('external_general_entities', 0): [
            ('external_general_entities', 0)],
        ('external_general_entities', 1): [
            ('external_general_entities', 1)],
        ('external_parameter_entities', 0): [
            ('external_parameter_entities', 0)],
        ('external_parameter_entities', 1): [
            ('external_parameter_entities', 1)],
        ('validate_if_schema', 0): [
            ('validate_if_schema', 0)],
        ('create_entity_ref_nodes', 0): [
            ('create_entity_ref_nodes', 0)],
        ('create_entity_ref_nodes', 1): [
            ('create_entity_ref_nodes', 1)],
        ('entities', 0): [
            ('create_entity_ref_nodes', 0),
            ('entities', 0)],
        ('entities', 1): [
            ('entities', 1)],
        ('whitespace_in_element_content', 0): [
            ('whitespace_in_element_content', 0)],
        ('whitespace_in_element_content', 1): [
            ('whitespace_in_element_content', 1)],
        ('cdata_sections', 0): [
            ('cdata_sections', 0)],
        ('cdata_sections', 1): [
            ('cdata_sections', 1)],
        ('comments', 0): [
            ('comments', 0)],
        ('comments', 1): [
            ('comments', 1)],
        ('charset_overrides_xml_encoding', 0): [
            ('charset_overrides_xml_encoding', 0)],
        ('charset_overrides_xml_encoding', 1): [
            ('charset_overrides_xml_encoding', 1)],
        ('infoset', 0): [],
        ('infoset', 1): [
            ('namespace_declarations', 0),
            ('validate_if_schema', 0),
            ('create_entity_ref_nodes', 0),
            ('entities', 0),
            ('cdata_sections', 0),
            ('datatype_normalization', 1),
            ('whitespace_in_element_content', 1),
            ('comments', 1),
            ('charset_overrides_xml_encoding', 1)],
        ('supported_mediatypes_only', 0): [
            ('supported_mediatypes_only', 0)],
        ('namespaces', 0): [
            ('namespaces', 0)],
        ('namespaces', 1): [
            ('namespaces', 1)],
    }
    
    

if __name__ == '__main__':
    colordb = get_colordb('/usr/openwin/lib/rgb.txt')
    if not colordb:
        print('No parseable color database found')
        sys.exit(1)
    # on my system, this color matches exactly
    target = 'navy'
    red, green, blue = rgbtuple = colordb.find_byname(target)
    print(target, ':', red, green, blue, triplet_to_rrggbb(rgbtuple))
    name, aliases = colordb.find_byrgb(rgbtuple)
    print('name:', name, 'aliases:', COMMASPACE.join(aliases))
    r, g, b = (1, 1, 128)                         # nearest to navy
    r, g, b = (145, 238, 144)                     # nearest to lightgreen
    r, g, b = (255, 251, 250)                     # snow
    print('finding nearest to', target, '...')
    import time
    t0 = time.time()
    nearest = colordb.nearest(r, g, b)
    t1 = time.time()
    print('found nearest color', nearest, 'in', t1-t0, 'seconds')
    # dump the database
    for n in colordb.unique_names():
        r, g, b = colordb.find_byname(n)
        aliases = colordb.aliases_of(r, g, b)
        print('%20s: (%3d/%3d/%3d) == %s' % (n, r, g, b,
                                             SPACE.join(aliases[1:])))

    
        def test_sane_len(self):
        # this test just tests our assumptions about __len__
        # this will start failing if __len__ changes assertions
        for badval in ['illegal', -1, 1 << 32]:
            class A:
                def __len__(self):
                    return badval
            try:
                bool(A())
            except (Exception) as e_bool:
                try:
                    len(A())
                except (Exception) as e_len:
                    self.assertEqual(str(e_bool), str(e_len))
    
            return None
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
            c.notify_all()
        self.loop_briefly()
        self.history.append('notify_all')
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/chatsocket', ChatSocketHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
        )
        super(Application, self).__init__(handlers, **settings)