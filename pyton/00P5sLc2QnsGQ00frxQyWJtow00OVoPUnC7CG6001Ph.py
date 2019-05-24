
        
        
def how_to_configure(proc, TIMEOUT):
    proc.sendline(u'fuck')
    assert proc.expect([TIMEOUT, u'alias isn't configured'])

    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
@pytest.mark.parametrize('command', [
    Command('aws dynamdb scan', misspelled_command),
    Command('aws dynamodb scn', misspelled_subcommand),
    Command('aws dynamodb t-item',
            misspelled_subcommand_with_multiple_options)])
def test_match(command):
    assert match(command)
    
    
@pytest.fixture
def brew_already_installed():
    return '''Warning: git-2.3.5 already installed'''
    
    
def quat2mat(quat):
    ''' Convert Quaternion to Euler Angles.  See rotation.py for notes '''
    quat = np.asarray(quat, dtype=np.float64)
    assert quat.shape[-1] == 4, 'Invalid shape quat {}'.format(quat)
    
        @type.setter
    def type(self, type):
        if type not in ['t', 'e']:
            raise error.Error('Invalid episode type {}: must be t for training or e for evaluation', type)
        self._type = type
    
    def test_text_envs():
    env = gym.make('FrozenLake-v0')
    video = VideoRecorder(env)
    try:
        env.reset()
        video.capture_frame()
        video.close()
    finally:
        os.remove(video.path)

    
    if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=None)
    parser.add_argument('env_id', nargs='?', default='CartPole-v0', help='Select the environment to run')
    args = parser.parse_args()
    
        def test_copy_target(self):
        env = alg.copy_.CopyEnv()
        self.assertEqual(env.target_from_input_data([0, 1, 2]), [0, 1, 2])
    
    
def docopt_full_help(docstring, *args, **kwargs):
    try:
        return docopt(docstring, *args, **kwargs)
    except DocoptExit:
        raise SystemExit(docstring)
    
        def __init__(self, obj_name, obj, log_name=None, max_lines=10):
        self.obj_name = obj_name
        self.obj = obj
        self.max_lines = max_lines
        self.log = logging.getLogger(log_name or __name__)
    
    
def sort_service_dicts(services):
    # Topological sort (Cormen/Tarjan algorithm).
    unmarked = services[:]
    temporary_marked = set()
    sorted_services = []
    
        Unrecognised input (anything other than 'y', 'n', 'yes',
    'no' or '') will return None.
    '''
    answer = input(prompt).strip().lower()
    
        assert parse_extra_hosts([
        'www.example.com: 192.168.0.17',
        'static.example.com:192.168.0.19',
        'api.example.com: 192.168.0.18',
        'v6.example.com: ::1'
    ]) == {
        'www.example.com': '192.168.0.17',
        'static.example.com': '192.168.0.19',
        'api.example.com': '192.168.0.18',
        'v6.example.com': '::1'
    }
    
        def test_remove_local_volume(self, mock_client):
        vol = volume.Volume(mock_client, 'foo', 'project')
        vol.remove()
        mock_client.remove_volume.assert_called_once_with('foo_project')