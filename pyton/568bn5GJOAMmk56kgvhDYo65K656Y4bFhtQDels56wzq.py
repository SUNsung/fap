
        
            def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
    
seller_category_map = {}
seller_category_map['Exxon'] = DefaultCategories.GAS
seller_category_map['Target'] = DefaultCategories.SHOPPING
    
            Emit key value pairs of the form:
    
    
class Person(object):
    
        def __init__(self):
        self.head = None
        self.tail = None
    
    
def win_service_main(service_name, real_main, argc, argv_raw):
    try:
        # args = [argv_raw[i].value for i in range(argc)]
        stop_event = threading.Event()
        handler = HandlerEx(functools.partial(stop_event, win_service_handler))
        h = advapi32.RegisterServiceCtrlHandlerExW(service_name, handler, None)
        if not h:
            raise OSError('Handler registration failed: %s' %
                          ctypes.FormatError())
    
        with io.open(changelog_file, encoding='utf-8') as inf:
        changelog = inf.read()
    
    with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
    ie_template = '''
class {name}({bases}):
    _VALID_URL = {valid_url!r}
    _module = '{module}'
'''
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
    import os
from os.path import dirname as dirn
import sys
    
        params = {
        'data_files': data_files,
    }
    if setuptools_available:
        params['entry_points'] = {'console_scripts': ['youtube-dl = youtube_dl:main']}
    else:
        params['scripts'] = ['bin/youtube-dl']
    
            password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x0b\xe6\xa4\xd9z\x0e\xb8\xb9\xd0\xd4i_\x85\x1d\x99\x98_\xe5\x80\xe7.\xbf\xa5\x83'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 32))
        self.assertEqual(decrypted, self.secret_msg)
    
    author:
  - Mike Mochan (@mmochan)
  - Will Thames (@willthames)
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
def get_web_acl(client, module, web_acl_id):
    try:
        return client.get_web_acl(WebACLId=web_acl_id)['WebACL']
    except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
        module.fail_json_aws(e, msg='Could not get Web ACL with id %s' % web_acl_id)
    
    RETURN = '''
log_groups:
    description: Return the list of complex objetcs representing log groups
    returned: success
    type: complex
    contains:
        log_group_name:
            description: The name of the log group.
            returned: always
            type: string
        creation_time:
            description: The creation time of the log group.
            returned: always
            type: integer
        retention_in_days:
            description: The number of days to retain the log events in the specified log group.
            returned: always
            type: integer
        metric_filter_count:
            description: The number of metric filters.
            returned: always
            type: integer
        arn:
            description: The Amazon Resource Name (ARN) of the log group.
            returned: always
            type: string
        stored_bytes:
            description: The number of bytes stored.
            returned: always
            type: string
        kms_key_id:
            description: The Amazon Resource Name (ARN) of the CMK to use when encrypting log data.
            returned: always
            type: string
'''
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
        if stream_found and not check_mode:
        if current_stream['ShardsCount'] != number_of_shards:
            err_msg = 'Can not change the number of shards in a Kinesis Stream'
            return success, changed, err_msg, results
    
        def parse(self, response):
        for link in self.link_extractor.extract_links(response):
            yield scrapy.Request(link.url, callback=self.parse)

    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def print_items(self, lvl=None, colour=True):
        if lvl is None:
            items = [item for lst in self.items.values() for item in lst]
        else:
            items = self.items.get(lvl, [])
    
    class Command(ScrapyCommand):
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
        return strings

    
    
def _arp(ip_address):
    '''Get the MAC address for a given IP.'''
    cmd = ['arp', '-n', ip_address]
    arp = subprocess.Popen(cmd, stdout=subprocess.PIPE)
    out, _ = arp.communicate()
    match = re.search(r'(([0-9A-Fa-f]{1,2}\:){5}[0-9A-Fa-f]{1,2})', str(out))
    if match:
        return match.group(0)
    _LOGGER.info('No MAC address found for %s', ip_address)
    return None
    
    
class SwisscomDeviceScanner(DeviceScanner):
    '''This class queries a router running Swisscom Internet-Box firmware.'''
    
        return True

    
            try:
            _state = state_helper.state_as_number(state)
        except ValueError:
            _state = state.state
    
    
def setup(hass, config):
    '''Set up the folder watcher.'''
    conf = config[DOMAIN]
    for watcher in conf:
        path = watcher[CONF_FOLDER]
        patterns = watcher[CONF_PATTERNS]
        if not hass.config.is_allowed_path(path):
            _LOGGER.error('folder %s is not valid or allowed', path)
            return False
        Watcher(path, patterns, hass)
    
        session.sensor = Pyhiveapi.Sensor()
    session.heating = Pyhiveapi.Heating()
    session.hotwater = Pyhiveapi.Hotwater()
    session.light = Pyhiveapi.Light()
    session.switch = Pyhiveapi.Switch()
    session.weather = Pyhiveapi.Weather()
    session.attributes = Pyhiveapi.Attributes()
    hass.data[DATA_HIVE] = session