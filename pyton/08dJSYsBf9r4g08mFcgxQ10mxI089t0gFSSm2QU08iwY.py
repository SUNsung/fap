
        
            BLACKJACK = 21
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
    
class ContainedBy(PostgresSimpleLookup):
    lookup_name = 'contained_by'
    operator = '<@'
    
            self.config.rollback_checkpoints()
        self.assertEqual(mock_load.call_count, 1)
    
            matches = self.parser.find_dir('TestVariablePort')
        self.assertRaises(
            errors.PluginError, self.parser.get_arg, matches[0])
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)