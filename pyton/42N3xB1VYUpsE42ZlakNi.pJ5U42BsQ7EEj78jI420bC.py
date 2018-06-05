
        
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
    
        def get_headers(self):
        return self.formatting.format_headers(
            self.msg.headers).encode(self.output_encoding)
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_unicode_raw_json_item_verbose(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
    output_options.add_argument(
    '--continue', '-c',
    dest='download_resume',
    action='store_true',
    default=False,
    help='''
    Resume an interrupted download. Note that the --output option needs to be
    specified as well.
    
        def has_password(self):
        return self.value is not None
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
            return plugin.get_auth(**credentials)