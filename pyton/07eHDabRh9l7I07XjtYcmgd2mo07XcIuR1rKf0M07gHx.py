
        
        
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
        def test_upload_multiple_fields_with_the_same_name(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG,
                 'test-file@%s' % FILE_PATH_ARG)
        assert HTTP_OK in r
        assert r.count('Content-Disposition: form-data; name='test-file';'
                       ' filename='%s'' % os.path.basename(FILE_PATH)) == 2
        # Should be 4, but is 3 because httpbin
        # doesn't seem to support filed field lists
        assert r.count(FILE_CONTENT) in [3, 4]
        assert r.count('Content-Type: text/plain') == 2
    
        session = Session(path)
    session.load()
    
            #Required string to create directory title pages
        dir_title = '<h2 class=titledir>' + operating_sys.capitalize() + '</h2></body></html>'