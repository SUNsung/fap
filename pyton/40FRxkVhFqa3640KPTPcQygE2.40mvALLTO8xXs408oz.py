
        
            @property
    def non_field_errors(self):
        return self.form.non_field_errors
    
            # The inline has been added, it has the right id, and it contains the
        # correct fields.
        self.assertEqual(len(self.selenium.find_elements_by_css_selector('.dynamic-profile_set')), 2)
        self.assertEqual(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set')[1].get_attribute('id'), 'profile_set-1')
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set#profile_set-1 input[name=profile_set-1-first_name]')), 1)
        self.assertEqual(len(self.selenium.find_elements_by_css_selector(
            '.dynamic-profile_set#profile_set-1 input[name=profile_set-1-last_name]')), 1)
    
        @property
    def width(self):
        'Return the width of this Field.'
        return capi.get_field_width(self.ptr)
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    
@gen.coroutine
def c1():
    for i in range(10):
        yield c2()
    
        All imported modules are watched by default.
    '''
    _watched_files.add(filename)
    
    import os
    
        def get(self):
        params = self._oauth_request_parameters(
            'http://www.example.com/api/asdf',
            dict(key='uiop', secret='5678'),
            parameters=dict(foo='bar'),
        )
        self.write(params)