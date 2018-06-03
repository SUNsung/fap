    return inner
    
                handler_result = self.handler(sock)
    
        def __init__(self, name=None):
        self.name = name
        super(LookupDict, self).__init__()
    
    import pytest
    
            with pytest.raises(socket.error):
            new_sock = socket.socket()
            new_sock.connect((host, port))
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
@pytest.mark.parametrize(
    'value, expected', (
        ('foo='is a fish', bar='as well'', {'foo': 'is a fish', 'bar': 'as well'}),
        ('key_without_value', {'key_without_value': None})
    ))
def test_parse_dict_header(value, expected):
    assert parse_dict_header(value) == expected
    
            return request_content
    
    
# From mitsuhiko/werkzeug (used with permission).
def parse_list_header(value):
    '''Parse lists as described by RFC 2068 Section 2.
    
        def add_options(self, parser):
        '''
        Populate option parse with options available for this command
        '''
        group = OptionGroup(parser, 'Global Options')
        group.add_option('--logfile', metavar='FILE',
            help='log file. if omitted stderr will be used')
        group.add_option('-L', '--loglevel', metavar='LEVEL', default=None,
            help='log level (default: %s)' % self.settings['LOG_LEVEL'])
        group.add_option('--nolog', action='store_true',
            help='disable logging completely')
        group.add_option('--profile', metavar='FILE', default=None,
            help='write python cProfile stats to FILE')
        group.add_option('--pidfile', metavar='FILE',
            help='write process ID to FILE')
        group.add_option('-s', '--set', action='append', default=[], metavar='NAME=VALUE',
            help='set/override setting (may be repeated)')
        group.add_option('--pdb', action='store_true', help='enable pdb on failure')
    
        def add_pre_hook(self, request, results):
        if hasattr(self, 'pre_process'):
            cb = request.callback
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def park_vehicle(self, vehicle):
        spot = self._find_available_spot(vehicle)
        if spot is None:
            return None
        else:
            spot.park_vehicle(vehicle)
            return spot
    
    
class DefaultCategories(Enum):
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        This function never blocks.
    
    # General information about the project.
project = u'futures'
copyright = u'2009-2011, Brian Quinlan'
    
      for match in regex.finditer( line ):
    if match.end() == previous_char_index:
      return True
  # If the whole line is whitespace, that means the user probably finished an
  # identifier on the previous line.
  return line[ : current_column ].isspace()
    
        # The only other type of response we understand is GoTo, and that is the
    # only one that we can't detect just by inspecting the response (it should
    # either be a single location or a list)
    return self._HandleGotoResponse()
    
        return self._cached_response if self._cached_response else []