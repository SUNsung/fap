
        
            @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
        def __init__(self, handler=None, host='localhost', port=0, requests_to_handle=1, wait_to_close_event=None):
        super(Server, self).__init__()
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
        # Sometimes, urllib3 only reports its version as 16.1.
    if len(urllib3_version) == 2:
        urllib3_version.append('0')
    
    
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
        def tearDown(self):
        shutil.rmtree(self.config_dir)
        shutil.rmtree(self.work_dir)
        shutil.rmtree(self.temp_dir)
    
        def test_basic_ifdefine(self):
        self.assertEqual(len(self.parser.find_dir('VAR_DIRECTIVE')), 2)
        self.assertEqual(len(self.parser.find_dir('INVALID_VAR_DIRECTIVE')), 0)
    
    from certbot_apache import obj
    
        def test_conflicts(self):
        from certbot_apache.obj import Addr
        from certbot_apache.obj import VirtualHost
    
            self.sni.configurator.parser.find_dir(
            'Include', self.sni.challenge_conf)
        vh_match = self.sni.configurator.aug.match(
            '/files' + self.sni.challenge_conf + '//VirtualHost')
    
    from acme.magic_typing import Set  # pylint: disable=unused-import, no-name-in-module
from certbot.plugins import common
from certbot.errors import PluginError, MissingCommandlineFlag