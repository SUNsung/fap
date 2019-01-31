
        
        
class Environment(object):
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
                yield line.decode(self.msg.encoding) \
                      .encode(self.output_encoding, 'replace') + lf
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    from httpie.input import ParseError
from utils import MockEnvironment, http, HTTP_OK
from fixtures import FILE_PATH_ARG, FILE_PATH, FILE_CONTENT
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
    updated:
   description: Boolean field to denote an update has occurred.
   returned: When an update has occurred.
   type: bool
   sample: True
'''
try:
    from ast import literal_eval
    HAS_PYTHON26 = True
except ImportError:
    HAS_PYTHON26 = False
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.heroku import HerokuHelper
    
    
if __name__ == '__main__':
    main()

    
        ipa_dnszone = client.dnszone_find(zone_name)
    
    # Create nested groups
- group_by:
    key: el{{ ansible_distribution_major_version }}-{{ ansible_architecture }}
    parents:
      - el{{ ansible_distribution_major_version }}
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
        '''
    return_vars = {}
    # Get list of words in the variable
    a_opts = util.get_var_from_file(varname, filepath).split()
    for i, v in enumerate(a_opts):
        # Handle Define statements and make sure it has an argument
        if v == '-D' and len(a_opts) >= i+2:
            var_parts = a_opts[i+1].partition('=')
            return_vars[var_parts[0]] = var_parts[2]
        elif len(v) > 2 and v.startswith('-D'):
            # Found var with no whitespace separator
            var_parts = v[2:].partition('=')
            return_vars[var_parts[0]] = var_parts[2]
    return return_vars
    
            :param int rollback: Number of checkpoints to revert
    
            :param str port: Desired port
    
            self.setup_variables()
        # This needs to happen after due to setup_variables not being run
        # until after
        self.parser.parse_modules()  # pylint: disable=protected-access
    
        @property
    def name(self):
        '''Return the name of the device.'''
        return 'flic_{}'.format(self.address.replace(':', ''))
    
            # doing a request
        try:
            res = requests.get(self._url, timeout=10, cookies={
                'userid': self._userid
            })
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            result = res.json()
        except ValueError:
            # If json decoder could not parse the response
            _LOGGER.error('Failed to parse response from router')
            return False
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_API_KEY): cv.string,
        vol.Required(CONF_URL): cv.string,
        vol.Required(CONF_INPUTNODE): cv.positive_int,
        vol.Required(CONF_WHITELIST): cv.entity_ids,
        vol.Optional(CONF_SCAN_INTERVAL, default=30): cv.positive_int,
    }),
}, extra=vol.ALLOW_EXTRA)
    
            def process(self, event):
            '''On Watcher event, fire HA event.'''
            _LOGGER.debug('process(%s)', event)
            if not event.is_directory:
                folder, file_name = os.path.split(event.src_path)
                self.hass.bus.fire(
                    DOMAIN, {
                        'event_type': event.event_type,
                        'path': event.src_path,
                        'file': file_name,
                        'folder': folder,
                        })
    
        def send_sms_service(service):
        '''Service to send sms from devices.'''
        send_sms(device_id=device_id,
                 device_ids=device_ids,
                 device_names=device_names,
                 sms_number=service.data.get('number'),
                 sms_text=service.data.get('message'),
                 api_key=api_key)
    
    DEFAULT_HOST = '0.0.0.0'
DEFAULT_PORT = 65432