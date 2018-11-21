
        
            with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
from youtube_dl.version import __version__
version = __version__
# The full version, including alpha/beta/rc tags.
release = version
    
            ydl = YDL({'format': 'mp3'})
        ie = YoutubeIE(ydl)
        ie._sort_formats(info_dict['formats'])
        ydl.process_ie_result(copy.deepcopy(info_dict))
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], 'mp3-64')
    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
    
def _download_restricted(url, filename, age):
    ''' Returns true if the file has been downloaded '''
    
    
from test.helper import FakeYDL
from youtube_dl.cache import Cache
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
    
RETURN = '''
placement_groups:
  description: Placement group attributes
  returned: always
  type: complex
  contains:
    name:
      description: PG name
      type: string
      sample: my-cluster
    state:
      description: PG state
      type: string
      sample: 'available'
    strategy:
      description: PG strategy
      type: string
      sample: 'cluster'
    
    
def create_snapshot_ansible_module():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            volume_id=dict(),
            description=dict(),
            instance_id=dict(),
            snapshot_id=dict(),
            device_name=dict(),
            wait=dict(type='bool', default=True),
            wait_timeout=dict(type='int', default=0),
            last_snapshot_min_age=dict(type='int', default=0),
            snapshot_tags=dict(type='dict', default=dict()),
            state=dict(choices=['absent', 'present'], default='present'),
        )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    return module
    
        region, ec2_url, aws_connect_params = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='iam',
                        region=region, endpoint=ec2_url, **aws_connect_params)
    
        check_mode = module.check_mode
    try:
        region, ec2_url, aws_connect_kwargs = (
            get_aws_connection_info(module, boto3=True)
        )
        client = (
            boto3_conn(
                module, conn_type='client', resource='kinesis',
                region=region, endpoint=ec2_url, **aws_connect_kwargs
            )
        )
    except botocore.exceptions.ClientError as e:
        err_msg = 'Boto3 Client Error - {0}'.format(to_native(e.msg))
        module.fail_json(
            success=False, changed=False, result={}, msg=err_msg
        )
    
    DOCUMENTATION = '''
---
module: rds_snapshot_facts
version_added: '2.6'
short_description: obtain facts about one or more RDS snapshots
description:
  - obtain facts about one or more RDS snapshots. These can be for unclustered snapshots or snapshots of clustered DBs (Aurora)
  - Aurora snapshot facts may be obtained if no identifier parameters are passed or if one of the cluster parameters are passed.
options:
  db_snapshot_identifier:
    description:
      - Name of an RDS (unclustered) snapshot. Mutually exclusive with I(db_instance_identifier), I(db_cluster_identifier), I(db_cluster_snapshot_identifier)
    required: false
    aliases:
      - snapshot_name
  db_instance_identifier:
    description:
      - RDS instance name for which to find snapshots. Mutually exclusive with I(db_snapshot_identifier), I(db_cluster_identifier),
        I(db_cluster_snapshot_identifier)
    required: false
  db_cluster_identifier:
    description:
      - RDS cluster name for which to find snapshots. Mutually exclusive with I(db_snapshot_identifier), I(db_instance_identifier),
        I(db_cluster_snapshot_identifier)
    required: false
  db_cluster_snapshot_identifier:
    description:
      - Name of an RDS cluster snapshot. Mutually exclusive with I(db_instance_identifier), I(db_snapshot_identifier), I(db_cluster_identifier)
    required: false
  snapshot_type:
    description:
      - Type of snapshot to find. By default both automated and manual
        snapshots will be returned.
    required: false
    choices: ['automated', 'manual', 'shared', 'public']
requirements:
    - 'python >= 2.6'
    - 'boto3'
author:
    - 'Will Thames (@willthames)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
    if twisted_version >= (14, 0, 0):
    
            crawler.signals.connect(self._close, signals.engine_stopped)
    
    
    
    __all__ = ['ehow_download']
    
        if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    from .const import (
    ATTR_MAIN_TEXT, ATTR_REDIRECTION_URL, ATTR_STREAM_URL, ATTR_TITLE_TEXT,
    ATTR_UID, ATTR_UPDATE_DATE, CONF_AUDIO, CONF_DISPLAY_URL, CONF_TEXT,
    CONF_TITLE, CONF_UID, DATE_FORMAT)
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_HOST, default=DEFAULT_HOST): cv.string,
        vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
        vol.Optional(CONF_PREFIX, default=DEFAULT_PREFIX): cv.string,
        vol.Optional(CONF_RATE, default=DEFAULT_RATE):
            vol.All(vol.Coerce(int), vol.Range(min=1)),
    }),
}, extra=vol.ALLOW_EXTRA)
    
            now = dt_util.now()
        actiontec_data = self.get_actiontec_data()
        if not actiontec_data:
            return False
        self.last_results = [Device(data['mac'], name, now)
                             for name, data in actiontec_data.items()
                             if data['timevalid'] > -60]
        _LOGGER.info('Scan successful')
        return True
    
        def observe(call=None):
        '''Observe three entities.'''
        random_see('demo_paulus', 'Paulus')
        random_see('demo_anne_therese', 'Anne Therese')
    
        def _make_request(self):
        # Weirdly enough, this doesn't seem to require authentication
        data = [{
            'request': {
                'sinceRevision': 0
            },
            'action': 'http://linksys.com/jnap/devicelist/GetDevices'
        }]
        headers = {'X-JNAP-Action': 'http://linksys.com/jnap/core/Transaction'}
        return requests.post('http://{}/JNAP/'.format(self.host),
                             timeout=DEFAULT_TIMEOUT,
                             headers=headers,
                             json=data)

    
            if self.home_interval:
            boundary = dt_util.now() - self.home_interval
            last_results = [device for device in self.last_results
                            if device.last_update > boundary]
            if last_results:
                exclude_hosts = self.exclude + [device.ip for device
                                                in last_results]
            else:
                exclude_hosts = self.exclude
        else:
            last_results = []
            exclude_hosts = self.exclude
        if exclude_hosts:
            options += ' --exclude {}'.format(','.join(exclude_hosts))
    
    _LOGGER = logging.getLogger(__name__)
    
        def dweet_event_listener(event):
        '''Listen for new messages on the bus and sends them to Dweet.io.'''
        state = event.data.get('new_state')
        if state is None or state.state in (STATE_UNKNOWN, '') \
                or state.entity_id not in whitelist:
            return
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import CONF_ENTITIES, CONF_NAME, ATTR_ENTITY_ID
from homeassistant.helpers.entity import Entity
from homeassistant.helpers.entity_component import EntityComponent