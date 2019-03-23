
        
            def shuffle(self):
        pass

    
    
if __name__ == '__main__':
    HitCounts.run()

    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
        '''
    # The value that should be passed to --auth-type
    # to use this auth plugin. Eg. 'my-auth'
    auth_type = None
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    error_msg = None
    
        def test_non_existent_file_raises_parse_error(self, httpbin):
        with pytest.raises(ParseError):
            http('--form',
                 'POST', httpbin.url + '/post', 'foo@/__does_not_exist__')
    
        def _get_path(self):
        '''Return the config file path without side-effects.'''
        raise NotImplementedError()