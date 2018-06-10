
        
        
if __name__ == '__main__':
    main(sys.argv[1:])

    
        # get project ID
    
    alphanumeric_range = r'''
    \[
        (?:
            [a-z]:[a-z]|                # one-char alphabetic range
            [0-9]+:[0-9]+               # ...or a numeric one
        )
        (?::[0-9]+)?                    # numeric :step (optional)
    \]
'''
    
    
@pytest.fixture()
def chdir(tmpdir):
    '''Change to pytest-provided temporary directory'''
    tmpdir.chdir()

    
            for spidername in args or spider_loader.list():
            spidercls = spider_loader.load(spidername)
            spidercls.start_requests = lambda s: conman.from_spider(s, result)
    
    RecognitionException are generated, when a recognizer encounters incorrect
or unexpected input.
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
        def __init__(self, blackboard):
        self.blackboard = blackboard
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
        def test_bear_greek_localization(self):
        self.assertEqual(self.g.get('bear'), 'bear')

    
    from dft.constructor_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def rollback(self):
        for a_state in self.states:
            a_state()