
        
            try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
            # global, resource, entity
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps/my-url-map'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('compute', actual['service'])
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
    
if __name__ == '__main__':
    reporter = Reporter()
    db = DB()
    tm = TestManager()
    tm.setReporter(reporter)
    tm.setDB(db)
    reporter.setTM(tm)
    db.setTM(tm)
    # For simplification we are looping on the same test.
    # Practically, it could be about various unique test classes and their
    # objects
    for i in range(3):
        tc = TC()
        tc.setTM(tm)
        tm.setTC(tc)
        tc.setup()
        tc.execute()
        tc.tearDown()
    
        print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15
    print(u'Setting Data 1 = 3')
    data1.data = 3
    print(u'Setting Data 2 = 5')
    data2.data = 5
    print(u'Detach HexViewer from data1 and data2.')
    data1.detach(view2)
    data2.detach(view2)
    print(u'Setting Data 1 = 10')
    data1.data = 10
    print(u'Setting Data 2 = 15')
    data2.data = 15