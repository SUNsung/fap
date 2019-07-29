
        
            def escalate_call(self):
        self.call.level = Rank.DIRECTOR
        self._escalate_call()
    
    
try:
    if int(pkg_resources.get_distribution('pip').version.split('.')[0]) < 6:
        print('pip older than 6.0 not supported, please upgrade pip with:\n\n'
              '    pip install -U pip')
        sys.exit(-1)
except pkg_resources.DistributionNotFound:
    pass
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {'fish_config': 'fish_config',
                                       'fuck': 'fuck',
                                       'funced': 'funced',
                                       'funcsave': 'funcsave',
                                       'history': 'history',
                                       'll': 'll',
                                       'math': 'math',
                                       'popd': 'popd',
                                       'pushd': 'pushd',
                                       'ruby': 'ruby',
                                       'g': 'git',
                                       'fish_key_reader': '/usr/bin/fish_key_reader',
                                       'alias_with_equal_sign': 'echo'}
        assert shell.get_aliases() == {'func1': 'func1', 'func2': 'func2'}
    
        def test_get_history(self, history_lines, shell):
        history_lines(['ls', 'rm'])
        # We don't know what to do in generic shell with history lines,
        # so just ignore them:
        assert list(shell.get_history()) == []
    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
    
@pytest.fixture(autouse=True)
def Popen(mocker):
    mock = mocker.patch('thefuck.rules.pyenv_no_such_command.Popen')
    mock.return_value.stdout.readlines.return_value = (
        b'--version\nactivate\ncommands\ncompletions\ndeactivate\nexec_\n'
        b'global\nhelp\nhooks\ninit\ninstall\nlocal\nprefix_\n'
        b'realpath.dylib\nrehash\nroot\nshell\nshims\nuninstall\nversion_\n'
        b'version-file\nversion-file-read\nversion-file-write\nversion-name_\n'
        b'version-origin\nversions\nvirtualenv\nvirtualenv-delete_\n'
        b'virtualenv-init\nvirtualenv-prefix\nvirtualenvs_\n'
        b'virtualenvwrapper\nvirtualenvwrapper_lazy\nwhence\nwhich_\n'
    ).split()
    return mock
    
    
def _get_operations(app):
    proc = subprocess.Popen([app, '--help'],
                            stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE)
    lines = proc.stdout.readlines()
    
    
class BalancerMember(object):
    ''' Apache 2.4 mod_proxy LB balancer member.
    attributes:
        read-only:
            host -> member host (string),
            management_url -> member management url (string),
            protocol -> member protocol (string)
            port -> member port (string),
            path -> member location (string),
            balancer_url -> url of this member's parent balancer (string),
            attributes -> whole member attributes (dictionary)
            module -> ansible module instance (AnsibleModule object).
        writable:
            status -> status of the member (dictionary)
    '''
    
    import traceback
    
        :raises ModuleError
    '''
    layman = init_layman()
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        if command is None:
        module.fail_json(msg=missing_required_lib('pyghmi'), exception=PYGHMI_IMP_ERR)
    
    
DOCUMENTATION = '''
---
module: github_release
short_description: Interact with GitHub Releases
description:
    - Fetch metadata about GitHub Releases
version_added: 2.2
options:
    token:
        description:
            - GitHub Personal Access Token for authenticating. Mutually exclusive with C(password).
    user:
        description:
            - The GitHub account that owns the repository
        required: true
    password:
        description:
            - The GitHub account password for the user. Mutually exclusive with C(token).
        version_added: '2.4'
    repo:
        description:
            - Repository name
        required: true
    action:
        description:
            - Action to perform
        required: true
        choices: [ 'latest_release', 'create_release' ]
    tag:
        description:
            - Tag name when creating a release. Required when using action is set to C(create_release).
        version_added: 2.4
    target:
        description:
            - Target of release when creating a release
        version_added: 2.4
    name:
        description:
            - Name of release when creating a release
        version_added: 2.4
    body:
        description:
            - Description of the release when creating a release
        version_added: 2.4
    draft:
        description:
            - Sets if the release is a draft or not. (boolean)
        type: 'bool'
        default: 'no'
        version_added: 2.4
    prerelease:
        description:
            - Sets if the release is a prerelease or not. (boolean)
        type: bool
        default: 'no'
        version_added: 2.4