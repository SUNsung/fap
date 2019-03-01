
        
            def init_poolmanager(self, *args, **kwargs):
        kwargs['ssl_version'] = self._ssl_version
        super(HTTPieHTTPAdapter, self).init_poolmanager(*args, **kwargs)
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        message = BINARY_SUPPRESSED_NOTICE
    
    
def test_unicode_raw_json_item_verbose(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
    
def testRaw():
    check(b'\x96\xda\x00\x00\xda\x00\x01a\xda\x00\x02ab\xdb\x00\x00'
          b'\x00\x00\xdb\x00\x00\x00\x01a\xdb\x00\x00\x00\x02ab',
          (b'', b'a', b'ab', b'', b'a', b'ab'))
    
        dest = pathlib.Path('dist')
    dest.mkdir(exist_ok=True)
    
        MARGIN_RATIOS = UNIT_RATIOS.copy()
    MARGIN_RATIOS.update({
        'none': ('pt', 0),
    })
    
        @pytest.mark.parametrize('tz', ['US/Eastern', 'Asia/Tokyo'])
    def test_fillna_datetime64(self, tz):
        # GH 11343
        idx = pd.DatetimeIndex(['2011-01-01 09:00', pd.NaT,
                                '2011-01-01 11:00'])
    
            exp4 = ('0   1 days\n'
                '1   2 days\n'
                '2   3 days\n'
                'dtype: timedelta64[ns]')