
        
            event_log = advapi32.RegisterEventSourceW(None, service_name)
    if not event_log:
        raise OSError('Could not report event: %s' % ctypes.FormatError())
    
        elif not RESULT and ('info_dict' in test and 'age_limit' in test['info_dict'] and
                         test['info_dict']['age_limit'] == 18):
        print('\nPotential false negative: {0}'.format(test['name']))
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        See also `test_auth_plugins.py`
    
        def test_POST_form_auto_Content_Type(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/x-www-form-urlencoded' in r
    
    
def unicode_is_ascii(u_string):
    '''Determine if unicode string only contains ASCII characters.
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
    # If true, 'Created using Sphinx' is shown in the HTML footer. Default is True.
html_show_sphinx = False