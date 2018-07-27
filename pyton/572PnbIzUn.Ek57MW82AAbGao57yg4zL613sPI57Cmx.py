
        
        
def side_effect(old_cmd, command):
    with tarfile.TarFile(_tar_file(old_cmd.script_parts)[0]) as archive:
        for file in archive.getnames():
            try:
                os.remove(file)
            except OSError:
                # does not try to remove directories as we cannot know if they
                # already existed before
                pass

    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
        See <https://github.com/httpie/httpie-ntlm> for an example auth plugin.
    
            with open(self.path, 'w') as f:
            json.dump(self, f, indent=4, sort_keys=True, ensure_ascii=True)
            f.write('\n')
    
    
class TestVerboseFlag:
    def test_verbose(self, httpbin):
        r = http('--verbose',
                 'GET', httpbin.url + '/get', 'test-header:__test__')
        assert HTTP_OK in r
        assert r.count('__test__') == 2
    
            if args.job_metadata:
            path = os.path.join(output_dir, '%s/job.json' % job_number)
            contents = json.dumps(j, sort_keys=True, indent=4)
    
        return results

    
        def construct_yaml_map(self, node):
        data = AnsibleMapping()
        yield data
        value = self.construct_mapping(node)
        data.update(value)
        data.ansible_pos = self._node_position_info(node)
    
    
class FullJitterBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _full_jitter_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
            '''
        if self.installer is None:
            logger.warning('No installer is specified, there isn't any '
                           'configuration to enhance.')
            raise errors.Error('No installer available')
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
    
def ConvertVimDataToCompletionData( vim_data ):
  # see :h complete-items for a description of the dictionary fields
  completion_data = {}
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds