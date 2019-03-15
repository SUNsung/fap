
        
        # We used to check for high-bit characters, but after much discussion we
# decided those were OK, as long as they were in UTF-8 and didn't represent
# hard-coded international strings, which belong in a separate i18n file.
    
    *Where is the pattern used practically?
    
        def test_relatives_not_in_properties(self):
        self.assertNotIn('relatives', self.John.__dict__)
    
    
class TestDispatcherFeatures(unittest.TestCase):
    def setUp(self):
        self.dispatcher = PrototypeDispatcher()
        self.prototype = Prototype()
        c = self.prototype.clone()
        a = self.prototype.clone(value='a-value', ext_value='E')
        b = self.prototype.clone(value='b-value', diff=True)
        self.dispatcher.register_object('A', a)
        self.dispatcher.register_object('B', b)
        self.dispatcher.register_object('C', c)