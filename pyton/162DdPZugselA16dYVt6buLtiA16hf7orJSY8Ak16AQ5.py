
        
        
class VehicleSize(Enum):
    
    from enum import Enum
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
    
def check_format(filename):
    '''
    validates that each line is formatted correctly,
    appending to error list as needed
    '''
    with open(filename) as fp:
        lines = list(line.rstrip() for line in fp)
    check_alphabetical(lines)
    # START Check Entries
    num_in_category = min_entries_per_section + 1
    category = ''
    category_line = 0
    for line_num, line in enumerate(lines):
        if section_title_re.match(line):
            title_links.append(section_title_re.match(line).group(1))
        # check each section for the minimum number of entries
        if line.startswith(anchor):
            match = anchor_re.match(line)
            if match:
                if match.group(1) not in title_links:
                    add_error(line_num, 'section header ({}) not added as a title link'.format(match.group(1)))
            else:
                add_error(line_num, 'section header is not formatted correctly')
            if num_in_category < min_entries_per_section:
                add_error(category_line, '{} section does not have the minimum {} entries (only has {})'.format(
                    category, min_entries_per_section, num_in_category))
            category = line.split(' ')[1]
            category_line = line_num
            num_in_category = 0
            continue
        # skips lines that we do not care about
        if not line.startswith('|') or line.startswith('|---'):
            continue
        num_in_category += 1
        segments = line.split('|')[1:-1]
        if len(segments) < num_segments:
            add_error(line_num, 'entry does not have all the required sections (have {}, need {})'.format(
                len(segments), num_segments))
            continue
        # START Global
        for segment in segments:
            # every line segment should start and end with exactly 1 space
            if len(segment) - len(segment.lstrip()) != 1 or len(segment) - len(segment.rstrip()) != 1:
                add_error(line_num, 'each segment must start and end with exactly 1 space')
        # END Global
        segments = [seg.strip() for seg in segments]
        check_entry(line_num, segments)
    # END Check Entries
    
        elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
        def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
            '''
        raise NotImplementedError()
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_implicit_POST_stdin(self, httpbin):
        with open(FILE_PATH) as f:
            env = MockEnvironment(stdin_isatty=False, stdin=f)
            r = http('--form', httpbin.url + '/post', env=env)
        assert HTTP_OK in r
    
    # For every line, fix the respective file
for line in output_lines:
    match = re.match(line_re, line)
    
        def handleStatus(self, version, status, message):
        self.factory.gotStatus(version, status, message)
    
    	for n in xrange(m+1):
		for k in xrange(1, m):
			memo[n][k] += memo[n][k-1]
			if n-k > 0:
				memo[n][k] += memo[n-k-1][k]
    
    
        '''
        loop over all possible splits for the decision tree. find the best split.
        if no split exists that is less than 2 * error for the entire array
        then the data set is not split and the average for the entire array is used as the predictor
        '''
        for i in range(len(X)):
            if len(X[:i]) < self.min_leaf_size:
                continue
            elif len(X[i:]) < self.min_leaf_size:
                continue
            else:
                error_left = self.mean_squared_error(X[:i], np.mean(y[:i]))
                error_right = self.mean_squared_error(X[i:], np.mean(y[i:]))
                error = error_left + error_right
                if error < min_error:
                    best_split = i
                    min_error = error
    
        return res
    
    * @author chinmoy159
* @version 1.0 dated 10/08/2017
'''
    
        return ''.join(freqOrder)
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
            # Return if click event is in ignored click types
        hass_click_type = self._hass_click_types[click_type]
        if hass_click_type in self._ignored_click_types:
            return
    
                        _LOGGER.debug('Downloading of %s done', url)
                    hass.bus.fire(
                        '{}_{}'.format(DOMAIN, DOWNLOAD_COMPLETED_EVENT), {
                            'url': url,
                            'filename': filename
                            })
    
        def __init__(self, schema, allow_empty=False):
        '''Initialize the decorator.'''
        self._schema = schema
        self._allow_empty = allow_empty
    
        hass.data[DOMAIN] = hlmn
    for dev in devices:
        _LOGGER.debug('Discovered LaMetric device: %s', dev)