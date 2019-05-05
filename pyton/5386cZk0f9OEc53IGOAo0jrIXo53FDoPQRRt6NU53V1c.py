
        
            By default, it represents the actual environment.
    All of the attributes can be overwritten though, which
    is used by the test suite to simulate various scenarios.
    
            return '\r\n'.join(headers)
    
        # This be set automatically once the plugin has been loaded.
    package_name = None
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    error_msg = None
    
        def test_upload_ok(self, httpbin):
        r = http('--form', '--verbose', 'POST', httpbin.url + '/post',
                 'test-file@%s' % FILE_PATH_ARG, 'foo=bar')
        assert HTTP_OK in r
        assert 'Content-Disposition: form-data; name='foo'' in r
        assert 'Content-Disposition: form-data; name='test-file';' \
               ' filename='%s'' % os.path.basename(FILE_PATH) in r
        assert FILE_CONTENT in r
        assert ''foo': 'bar'' in r
        assert 'Content-Type: text/plain' in r
    
        entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')
