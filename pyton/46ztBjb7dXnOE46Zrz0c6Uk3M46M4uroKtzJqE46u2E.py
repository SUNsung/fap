
        
        
if __name__ == '__main__':
    HitCounts.run()

    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
            If `sign` is incorrect, /validate call throws an HTTP 556 error
        '''
        logger = WarningLogger()
        ie = IqiyiIEWithCredentials(FakeYDL({'logger': logger}))
        ie._login()
        self.assertTrue('unable to log in:' in logger.messages[0])
    
    
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    no_match_output = '''
Listing... Done
'''
    
            self.download(output_dir = output_dir, 
                    merge = merge, 
                    info_only = info_only, **kwargs)
    
        type, ext, size = url_info(urls[0], True)
    size = urls_size(urls)
    
            host = 'http://' + urllib.parse.urlparse(url).netloc
        js_path = [urllib.parse.urljoin(host, rel_path) for rel_path in js]
    
        type, ext, size = url_info(url[0], True)
    size = urls_size(url)