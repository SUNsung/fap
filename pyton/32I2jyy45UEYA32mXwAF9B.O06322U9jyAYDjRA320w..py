
        
            parser.add_argument('--console-logs',
                        action='store_true',
                        help='download console logs')
    
        @g_connect
    def get_list(self, what):
        '''
        Fetch the list of items specified.
        '''
        try:
            url = '%s/%s/?page_size' % (self.baseurl, what)
            data = self.__call_galaxy(url)
            if 'results' in data:
                results = data['results']
            else:
                results = data
            done = True
            if 'next' in data:
                done = (data.get('next_link', None) is None)
            while not done:
                url = '%s%s' % (self._api_server, data['next_link'])
                data = self.__call_galaxy(url)
                results += data['results']
                done = (data.get('next_link', None) is None)
            return results
        except Exception as error:
            raise AnsibleError('Failed to download the %s list: %s' % (what, str(error)))
    
            input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies/mytargetproxy'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
        self.assertEquals('mytargetproxy', actual['entity_name'])