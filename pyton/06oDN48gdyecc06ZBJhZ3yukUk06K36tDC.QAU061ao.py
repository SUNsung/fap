
        
        # TODO: ensure that history changes.

    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output', [
    ('apt', invalid_operation('saerch')),
    ('apt-get', invalid_operation('isntall')),
    ('apt-cache', invalid_operation('rumove'))])
def test_match(script, output):
    assert match(Command(script, output))
    
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
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument command: Invalid choice, valid choices are:
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
    
class Environment(object):
    '''
    Information about the execution context
    (standard streams, config directory, etc).
    
        def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
            if env.stdout_isatty:
            # Use the encoding supported by the terminal.
            output_encoding = env.stdout_encoding
        else:
            # Preserve the message encoding.
            output_encoding = self.msg.encoding
    
        # Output processing
    def get_formatters(self):
        return [plugin for plugin in self
                if issubclass(plugin, FormatterPlugin)]
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    from httpie.input import SEP_CREDENTIALS
from httpie.plugins import AuthPlugin, plugin_manager
from utils import http, HTTP_OK
    
        def call(self, inputs):
        inputs -= K.mean(inputs, axis=1, keepdims=True)
        inputs = K.l2_normalize(inputs, axis=1)
        pos = K.relu(inputs)
        neg = K.relu(-inputs)
        return K.concatenate([pos, neg], axis=1)
    
    import keras
from keras.callbacks import TensorBoard
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        def get_config(self):
        return {'l1': float(self.l1),
                'l2': float(self.l2)}
    
    
class MSE_MAE_loss:
    '''Loss function with internal state, for testing serialization code.'''
    def __init__(self, mse_fraction):
        self.mse_fraction = mse_fraction
    
    batch_size = 64  # Batch size for training.
epochs = 100  # Number of epochs to train for.
latent_dim = 256  # Latent dimensionality of the encoding space.
num_samples = 10000  # Number of samples to train on.
# Path to the data txt file on disk.
data_path = 'fra-eng/fra.txt'
    
    try:
    import boto3
    import botocore
    HAS_BOTO3 = True
except ImportError:
    HAS_BOTO3 = False
    
    # Fail if the server certificate name was not found
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
  failed_when: '{{ server_cert.results | length == 0 }}'
'''
    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
        return result_state, affected_apps
    
    DOCUMENTATION = '''
---
module: vca_nat
short_description: add remove nat rules in a gateway  in a vca
description:
  - Adds or removes nat rules from a gateway in a vca environment
version_added: '2.0'
author: Peter Sprygada (@privateip)
options:
    purge_rules:
      description:
        - If set to true, it will delete all rules in the gateway that are not given as parameter to this module.
      type: bool
      default: false
    nat_rules:
      description:
        - A list of rules to be added to the gateway, Please see examples on valid entries
      required: True
      default: false
extends_documentation_fragment: vca.documentation
'''
    
        try:
        dsn = (
            'Driver=Vertica;'
            'Server={0};'
            'Port={1};'
            'Database={2};'
            'User={3};'
            'Password={4};'
            'ConnectionLoadBalance={5}'
        ).format(module.params['cluster'], module.params['port'], db,
                 module.params['login_user'], module.params['login_password'], 'true')
        db_conn = pyodbc.connect(dsn, autocommit=True)
        cursor = db_conn.cursor()
    except Exception as e:
        module.fail_json(msg='Unable to connect to database: {0}.'.format(to_native(e)),
                         exception=traceback.format_exc())
    
    - name: creating a new schema with roles
  vertica_schema:
    name=schema_name
    create_roles=schema_name_all
    usage_roles=schema_name_ro,schema_name_rw
    db=db_name
    state=present
'''
import traceback
    
    DOCUMENTATION = r'''
---
author:
- Jeroen Hoekx (@jhoekx)
- Matt Robinson (@ribbons)
- Dag Wieers (@dagwieers)
module: iso_extract
short_description: Extract files from an ISO image
description:
- This module has two possible ways of operation.
- If 7zip is installed on the system, this module extracts files from an ISO
  into a temporary directory and copies files to a given destination,
  if needed.
- If the user has mount-capabilities (CAP_SYS_ADMIN on Linux) this module
  mounts the ISO image to a temporary location, and copies files to a given
  destination, if needed.
version_added: '2.3'
requirements:
- Either 7z (from I(7zip) or I(p7zip) package)
- Or mount capabilities (root-access, or CAP_SYS_ADMIN capability on Linux)
options:
  image:
    description:
    - The ISO image to extract files from.
    required: yes
    aliases: [ path, src ]
  dest:
    description:
    - The destination directory to extract files to.
    required: yes
  files:
    description:
    - A list of files to extract from the image.
    - Extracting directories does not work.
    required: yes
  force:
    description:
    - If C(yes), which will replace the remote file when contents are different than the source.
    - If C(no), the file will only be extracted and copied if the destination does not already exist.
    type: bool
    default: 'yes'
    aliases: [ thirsty ]
    version_added: '2.4'
  executable:
    description:
    - The path to the C(7z) executable to use for extracting files from the ISO.
    default: '7z'
    version_added: '2.4'
notes:
- Only the file checksum (content) is taken into account when extracting files
  from the ISO image. If C(force=no),  only checks the presence of the file.
- In Ansible v2.3 this module was using C(mount) and C(umount) commands only,
  requiring root access. This is no longer needed with the introduction of 7zip
  for extraction.
'''
    
            if hostgroup is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_hostgroup', []), hostgroup,
                                            client.role_add_hostgroup,
                                            client.role_remove_hostgroup) or changed
    
            if state == 'finished':
            body['status'] = 'success'
        else:
            body['status'] = 'failure'
    
        params['api_key'] = module.params['token']
    
    import re
from ansible.module_utils.basic import AnsibleModule
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
            # Placeholder for augeas
        self.aug = None
    
        def __eq__(self, other):
        '''This is defined as equivalent within Apache.
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
    # Add any extra paths that contain custom files (such as robots.txt or
# .htaccess) here, relative to this directory. These files are copied
# directly to the root of the documentation.
#html_extra_path = []