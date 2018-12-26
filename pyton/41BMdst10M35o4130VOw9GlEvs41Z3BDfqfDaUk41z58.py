
        
            def approve_friend_request(self, friend_id):
        pass
    
        @abstractmethod
    def can_fit_in_spot(self, spot):
        pass
    
    
class Conversion(object):
    
        package_name = '(builtin)'
    
        def get_auth_plugin_mapping(self):
        return {plugin.auth_type: plugin for plugin in self.get_auth_plugins()}
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        config['implicit_content_type'] = 'form'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert config['default_options'] == ['--form']
    
    
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        def _get_path(self):
        '''Return the config file path without side-effects.'''
        raise NotImplementedError()