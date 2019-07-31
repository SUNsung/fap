
        
        
class SouthParkDkIE(SouthParkIE):
    IE_NAME = 'southparkstudios.dk'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southparkstudios\.(?:dk|nu)/(?:clips|full-episodes|collections)/(?P<id>.+?)(\?|#|$))'
    _FEED_URL = 'http://www.southparkstudios.dk/feeds/video-player/mrss/'
    
            info = self._get_common_fields(webpage)
        info.update({
            'id': video_id,
            'formats': formats,
            'view_count': view_count,
            'subtitles': subtitles,
        })
        return info
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
    
def match(command):
    return (command.script_parts
            and (command.script_parts[0] in ('pacman', 'yay', 'yaourt')
                 or command.script_parts[0:2] == ['sudo', 'pacman'])
            and 'error: target not found:' in command.output)
    
        def test_to_shell(self, shell):
        assert shell.to_shell('pwd') == 'pwd'
    
        def _expand_aliases(self, command_script):
        aliases = self.get_aliases()
        binary = command_script.split(' ')[0]
        if binary in aliases:
            return command_script.replace(binary, aliases[binary], 1)
        else:
            return command_script
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, output, which', [
    ('qweqwe', 'qweqwe: not found', None),
    ('vom file.py', 'some text', None),
    ('vim file.py', 'vim: not found', 'vim')])
def test_not_match(mocker, script, output, which):
    mocker.patch('thefuck.rules.no_command.which', return_value=which)
    
    
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
    
    
@eager
def _parse_apt_get_and_cache_operations(help_text_lines):
    is_commands_list = False
    for line in help_text_lines:
        line = line.decode().strip()
        if is_commands_list:
            if not line:
                return
    
    from ansible.module_utils.basic import AnsibleModule, missing_required_lib
    
        def _get_alert_policies(self, alias):
        '''
        Get the alert policies for account alias by calling the CLC API.
        :param alias: the account alias
        :return: the alert policies for the account alias
        '''
        response = {}
    
    
DOCUMENTATION = '''
module: clc_firewall_policy
short_description: Create/delete/update firewall policies
description:
  - Create or delete or update firewall polices on Centurylink Cloud
version_added: '2.0'
options:
  location:
    description:
      - Target datacenter for the firewall policy
    required: True
  state:
    description:
      - Whether to create or delete the firewall policy
    default: present
    choices: ['present', 'absent']
  source:
    description:
      - The list  of source addresses for traffic on the originating firewall.
        This is required when state is 'present'
  destination:
    description:
      - The list of destination addresses for traffic on the terminating firewall.
        This is required when state is 'present'
  ports:
    description:
      - The list of ports associated with the policy.
        TCP and UDP can take in single ports or port ranges.
    choices: ['any', 'icmp', 'TCP/123', 'UDP/123', 'TCP/123-456', 'UDP/123-456']
  firewall_policy_id:
    description:
      - Id of the firewall policy. This is required to update or delete an existing firewall policy
  source_account_alias:
    description:
      - CLC alias for the source account
    required: True
  destination_account_alias:
    description:
      - CLC alias for the destination account
  wait:
    description:
      - Whether to wait for the provisioning tasks to finish before returning.
    type: bool
    default: 'yes'
  enabled:
    description:
      - Whether the firewall policy is enabled or disabled
    choices: [True, False]
    default: 'yes'
requirements:
    - python = 2.7
    - requests >= 2.5.0
    - clc-sdk
author: 'CLC Runner (@clc-runner)'
notes:
    - To use this module, it is required to set the below environment variables which enables access to the
      Centurylink Cloud
          - CLC_V2_API_USERNAME, the account login id for the centurylink cloud
          - CLC_V2_API_PASSWORD, the account password for the centurylink cloud
    - Alternatively, the module accepts the API token and account alias. The API token can be generated using the
      CLC account login and password via the HTTP api call @ https://api.ctl.io/v2/authentication/login
          - CLC_V2_API_TOKEN, the API token generated from https://api.ctl.io/v2/authentication/login
          - CLC_ACCT_ALIAS, the account alias associated with the centurylink cloud
    - Users can set CLC_V2_API_URL to specify an endpoint for pointing to a different CLC environment.
'''
    
    import traceback
    
        if vsize:
        virtual_capacity = Capacity(vsize).roundup(6 * 64 * KiB)
        if pool.get_virtual_capacity() != virtual_capacity:
            if not module.check_mode:
                pool.update_virtual_capacity(virtual_capacity)
            changed = True
    
            self.client.post(linking_url)
    
        @classmethod
    def threshold(cls, severity):
        threshold = cls.SEVERITY_LEVELS[severity]
    
    from django.conf import settings
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'key_id', 'value_id'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['project_id',
        # 'event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
        min_project_id = 0
    max_project_id = Project.objects.aggregate(x=Max('id'))['x'] or 0
    step = 1000
    while min_project_id < max_project_id:
        queryset = Group.objects.filter(
            last_seen__gte=now - timedelta(days=1),
            project__gte=min_project_id,
            project__lt=min_project_id + step,
            platform__isnull=False,
        ).values_list('platform', 'project_id').distinct()
    
    from sentry.app import locks
from sentry.models import ScheduledJob
from sentry.tasks.base import instrumented_task