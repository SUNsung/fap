
        
            def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
            version = {
            9: '0.9',
            10: '1.0',
            11: '1.1',
            20: '2',
        }[original.version]
    
            :param headers: The headers as text.
    
    
class HTTPBasicAuth(requests.auth.HTTPBasicAuth):
    
    
setup(
    name='httpie',
    version=httpie.__version__,
    description=httpie.__doc__.strip(),
    long_description=long_description(),
    url='http://httpie.org/',
    download_url='https://github.com/jakubroztocil/httpie',
    author=httpie.__author__,
    author_email='jakub@roztocil.co',
    license=httpie.__licence__,
    packages=find_packages(),
    entry_points={
        'console_scripts': [
            'http = httpie.__main__:main',
        ],
    },
    extras_require=extras_require,
    install_requires=install_requires,
    tests_require=tests_require,
    cmdclass={'test': PyTest},
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.1',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Environment :: Console',
        'Intended Audience :: Developers',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: BSD License',
        'Topic :: Internet :: WWW/HTTP',
        'Topic :: Software Development',
        'Topic :: System :: Networking',
        'Topic :: Terminals',
        'Topic :: Text Processing',
        'Topic :: Utilities'
    ],
)

    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
        def test_implicit_POST_stdin(self, httpbin):
        with open(FILE_PATH) as f:
            env = MockEnvironment(stdin_isatty=False, stdin=f)
            r = http('--form', httpbin.url + '/post', env=env)
        assert HTTP_OK in r
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
class ConstantTest(unittest.TestCase):
    '''Tests for acme.messages._Constant.'''
    
    
def load_pyopenssl_private_key(*names):
    '''Load pyOpenSSL private key.'''
    loader = _guess_loader(
        names[-1], crypto.FILETYPE_PEM, crypto.FILETYPE_ASN1)
    return crypto.load_privatekey(loader, load_vector(*names))
    
            self.config.rollback_checkpoints()
        self.assertEqual(mock_load.call_count, 1)
    
        forbidden_extensions = ['html', 'htm'] if results.nohtml else []
    
    import os
import sys
import codecs
import re
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.hitron_coda/
'''
import logging
from collections import namedtuple
    
            devicesstring = ''
        devices = self.api.trusted_devices
        for i, device in enumerate(devices):
            devicename = device.get(
                'deviceName', 'SMS to %s' % device.get('phoneNumber'))
            devicesstring += '{}: {};'.format(i, devicename)
    
        def refresh_token(self):
        '''Get a new token.'''
        self.token = _get_token(self.origin, self.username, self.password)
    
            self.last_results = {}
        self.token = _get_token(self.host, self.username, self.password)
    
        _LOGGER.info('Connected to Dyson account')
    dyson_devices = dyson_account.devices()
    if CONF_DEVICES in config[DOMAIN] and config[DOMAIN].get(CONF_DEVICES):
        configured_devices = config[DOMAIN].get(CONF_DEVICES)
        for device in configured_devices:
            dyson_device = next((d for d in dyson_devices if
                                 d.serial == device['device_id']), None)
            if dyson_device:
                try:
                    connected = dyson_device.connect(device['device_ip'])
                    if connected:
                        _LOGGER.info('Connected to device %s', dyson_device)
                        hass.data[DYSON_DEVICES].append(dyson_device)
                    else:
                        _LOGGER.warning('Unable to connect to device %s',
                                        dyson_device)
                except OSError as ose:
                    _LOGGER.error('Unable to connect to device %s: %s',
                                  str(dyson_device.network_device), str(ose))
            else:
                _LOGGER.warning(
                    'Unable to find device %s in Dyson account',
                    device['device_id'])
    else:
        # Not yet reliable
        for device in dyson_devices:
            _LOGGER.info('Trying to connect to device %s with timeout=%i '
                         'and retry=%i', device, timeout, retry)
            connected = device.auto_connect(timeout, retry)
            if connected:
                _LOGGER.info('Connected to device %s', device)
                hass.data[DYSON_DEVICES].append(device)
            else:
                _LOGGER.warning('Unable to connect to device %s', device)