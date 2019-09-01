
        
        
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def test_max_headers_no_limit(httpbin_both):
    assert HTTP_OK in http('--max-headers=0', httpbin_both + '/get')

    
    
def test_compress_force_with_negative_ratio(httpbin_both):
    r = http(
        '--compress',
        '--compress',
        httpbin_both + '/post',
        'foo=bar',
    )
    assert HTTP_OK in r
    assert r.json['headers']['Content-Encoding'] == 'deflate'
    assert_decompressed_equal(r.json['data'], '{'foo': 'bar'}')
    
    from httpie.utils import repr_dict
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        def iter_body(self) -> Iterable[bytes]:
        '''Return an iterator over the message body.'''
        raise NotImplementedError()
    
        '''
)
troubleshooting.add_argument(
    '--traceback',
    action='store_true',
    default=False,
    help='''
    Prints the exception traceback should one occur.
    
        @staticmethod
    def get_converter(mime: str) -> Optional[ConverterPlugin]:
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        def format_headers(self, headers: str) -> str:
        '''Return processed `headers`
    
    
def main():
    package_meta_map = {
        package_name: get_package_meta(package_name)
        for package_name in PACKAGES
    }
    httpie_meta = package_meta_map.pop('httpie')
    print()
    print('  url '{url}''.format(url=httpie_meta['url']))
    print('  sha256 '{sha256}''.format(sha256=httpie_meta['sha256']))
    print()
    for dep_meta in package_meta_map.values():
        print('  resource '{name}' do'.format(name=dep_meta['name']))
        print('    url '{url}''.format(url=dep_meta['url']))
        print('    sha256 '{sha256}''.format(sha256=dep_meta['sha256']))
        print('  end')
        print('')
    
            if self.args.output_options is None:
            if self.args.verbose:
                self.args.output_options = ''.join(OUTPUT_OPTIONS)
            else:
                self.args.output_options = (
                    OUTPUT_OPTIONS_DEFAULT
                    if self.env.stdout_isatty
                    else OUTPUT_OPTIONS_DEFAULT_STDOUT_REDIRECTED
                )
    
    
def video_info(vid, **kwargs):
    url = 'http://player-pc.le.com/mms/out/video/playJson?id={}&platid=1&splatid=105&format=1&tkey={}&domain=www.le.com&region=cn&source=1000&accesyx=1'.format(vid, calcTimeKey(int(time.time())))
    r = get_content(url, decoded=False)
    info = json.loads(str(r, 'utf-8'))
    info = info['msgs']
    
            if args:
            if 'gui' in conf and conf['gui']:
                # Enter GUI mode.
                from .gui import gui_main
                gui_main(*args, **conf)
            else:
                # Enter console mode.
                from .console import console_main
                console_main(*args, **conf)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    #----------------------------------------------------------------------
def ckplayer_download(url, output_dir = '.', merge = False, info_only = False, is_xml = True, **kwargs):
    if is_xml:  #URL is XML URL
        try:
            title = kwargs['title']
        except:
            title = ''
        try:
            headers = kwargs['headers']  #headers provided
            ckinfo = get_content(url, headers = headers)
        except NameError:
            ckinfo = get_content(url)
        
        ckplayer_download_by_xml(ckinfo, output_dir, merge, 
                                info_only, title = title)
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        fc2video_download_by_upid(upid, output_dir, merge, info_only)
    
    import mock
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
            If an error occurs while requesting the record set, it is suppressed
        and None is returned.
    
    .. code-block:: bash
   :caption: To acquire a single certificate for both ``example.com`` and
             ``www.example.com``
    
        @mock.patch('dns.query.tcp')
    def test_add_txt_record_wraps_errors(self, query_mock):
        query_mock.side_effect = Exception
        # _find_domain | pylint: disable=protected-access
        self.rfc2136_client._find_domain = mock.MagicMock(return_value='example.com')