
        
            :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
def secure_hash_s(data, hash_func=sha1):
    ''' Return a secure hash hex digest of data. '''
    
            expected = {
            'description': 'foo_url_map description',
            'hostRules': [
                {
                    'description': 'host rules description',
                    'hosts': [
                        'www.example.com',
                        'www2.example.com'
                    ],
                    'pathMatcher': 'host_rules_path_matcher'
                }
            ],
            'name': 'foo_url_map_name',
            'pathMatchers': [
                {
                    'defaultService': 'bes-pathmatcher-one-default',
                    'description': 'path matcher one',
                    'name': 'path_matcher_one',
                    'pathRules': [
                        {
                            'paths': [
                                '/',
                                '/aboutus'
                            ],
                            'service': 'my-one-bes'
                        }
                    ]
                },
                {
                    'defaultService': 'bes-pathmatcher-two-default',
                    'description': 'path matcher two',
                    'name': 'path_matcher_two',
                    'pathRules': [
                        {
                            'paths': [
                                '/webapp',
                                '/graphs'
                            ],
                            'service': 'my-two-bes'
                        }
                    ]
                }
            ]
        }
    
    
class TerminalModule(TerminalBase):
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
        class ClassRegistree(BaseRegisteredClass):
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        @Transactional
    def do_stuff(self):
        self.value = '1111'  # <- invalid value
        self.increment()  # <- will fail and rollback
    
    from __future__ import print_function
    
        def __init__(self, one, other):
        self._one = one
        self._other = other