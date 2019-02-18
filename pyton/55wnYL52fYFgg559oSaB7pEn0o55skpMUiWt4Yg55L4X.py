
        
            for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
exclude_patterns = ['_build']
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)
    
        def test_youtube_feeds(self):
        self.assertMatch('https://www.youtube.com/feed/watch_later', ['youtube:watchlater'])
        self.assertMatch('https://www.youtube.com/feed/subscriptions', ['youtube:subscriptions'])
        self.assertMatch('https://www.youtube.com/feed/recommended', ['youtube:recommended'])
        self.assertMatch('https://www.youtube.com/my_favorites', ['youtube:favorites'])
    
        def debug(self, msg):
        pass
    
        if not args.session and not args.session_read_only:
        kwargs = get_requests_kwargs(args)
        if args.debug:
            dump_request(kwargs)
        response = requests_session.request(**kwargs)
    else:
        response = sessions.get_response(
            requests_session=requests_session,
            args=args,
            config_dir=config_dir,
            session_name=args.session or args.session_read_only,
            read_only=bool(args.session_read_only),
        )
    
            headers = dict(self._orig.headers)
        if 'Host' not in self._orig.headers:
            headers['Host'] = url.netloc.split('@')[-1]
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
    # TODO: run all these tests in session mode as well
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
        def __init__(self, json_name, value):
        self.value = value
        super(Fixed, self).__init__(
            json_name=json_name, default=value, omitempty=False)
    
    
def parse_define_file(filepath, varname):
    ''' Parses Defines from a variable in configuration file
    
        :param list indices: Meant to hold indices of challenges in a
        larger array. ApacheTlsSni01 is capable of solving many challenges
        at once which causes an indexing issue within ApacheConfigurator
        who must return all responses in order.  Imagine ApacheConfigurator
        maintaining state about where all of the http-01 Challenges,
        TLS-SNI-01 Challenges belong in the response array.  This is an
        optional utility.
    
    
def setup_scanner(hass, config, see, discovery_info=None):
    '''Set up the demo tracker.'''
    def offset():
        '''Return random offset.'''
        return (random.randrange(500, 2000)) / 2e5 * random.choice((-1, 1))
    
            from nmap import PortScanner, PortScannerError
        scanner = PortScanner()
    
            devices = {}
        for device in request.json()['status']:
            try:
                devices[device['Key']] = {
                    'ip': device['IPAddress'],
                    'mac': device['PhysAddress'],
                    'host': device['Name'],
                    'status': device['Active']
                    }
            except (KeyError, requests.exceptions.RequestException):
                pass
        return devices

    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/notify.clickatell/
'''
import logging
    
    import voluptuous as vol
    
            if resp.status_code == 400:
            _LOGGER.error('At least one parameter is missing')
        elif resp.status_code == 402:
            _LOGGER.error('Too much SMS send in a few time')
        elif resp.status_code == 403:
            _LOGGER.error('Wrong Username/Password')
        elif resp.status_code == 500:
            _LOGGER.error('Server error, try later')

    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.notify import (
    ATTR_TARGET, ATTR_DATA, PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_TOKEN, CONF_HOST, CONF_ROOM
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the LlamaLab Automate notification service.'''
    secret = config.get(CONF_API_KEY)
    recipient = config.get(CONF_TO)
    device = config.get(CONF_DEVICE)
    
        return MessageBirdNotificationService(config.get(CONF_SENDER), client)
    
    
from homeassistant.components.notify import BaseNotificationService