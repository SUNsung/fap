
        
            def test_no_duplicated_ie_names(self):
        name_accu = collections.defaultdict(list)
        for ie in self.ies:
            name_accu[ie.IE_NAME.lower()].append(type(ie).__name__)
        for (ie_name, ie_list) in name_accu.items():
            self.assertEqual(
                len(ie_list), 1,
                'Multiple extractors with the same IE_NAME '%s' (%s)' % (ie_name, ', '.join(ie_list)))
    
            duration = parse_duration(self._search_regex(
            r'<b>Duration:</b> (?:<q itemprop='duration'>)?(\d+:\d+)', webpage, 'duration', fatal=False))
        view_count = int_or_none(self._html_search_regex(
            r'<b>Views:</b> (\d+)', webpage, 'view count', fatal=False))
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    sessions.add_argument(
    '--session',
    metavar='SESSION_NAME_OR_PATH',
    type=session_name_validator,
    help='''
    Create, or reuse and update a session. Within a session, custom headers,
    auth credential, as well as any cookies sent by the server persist between
    requests.
    
    # FIXME:
# We test against a local httpbin instance which uses a self-signed cert.
# Requests without --verify=<CA_BUNDLE> will fail with a verification error.
# See: https://github.com/kevin1024/pytest-httpbin#https-support
CA_BUNDLE = pytest_httpbin.certs.where()
    
    
class SessionNameValidator(object):