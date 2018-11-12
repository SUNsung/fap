
        
        print()

    
        with io.open(changelog_file, encoding='utf-8') as inf:
        changelog = inf.read()
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    entries_str = textwrap.indent(''.join(entries), '\t')
atom_template = atom_template.replace('@ENTRIES@', entries_str)
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
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
    
        youngest_snapshot = max(snapshots, key=_get_snapshot_starttime)
    
    
def get_cidr_network_bits(module, cidr_block):
    fixed_cidrs = []
    for cidr in cidr_block:
        split_addr = cidr.split('/')
        if len(split_addr) == 2:
            # this_ip is a IPv4 CIDR that may or may not have host bits set
            # Get the network bits.
            valid_cidr = to_subnet(split_addr[0], split_addr[1])
            if cidr != valid_cidr:
                module.warn('One of your CIDR addresses ({0}) has host bits set. To get rid of this warning, '
                            'check the network mask and make sure that only network bits are set: {1}.'.format(cidr, valid_cidr))
            fixed_cidrs.append(valid_cidr)
        else:
            # let AWS handle invalid CIDRs
            fixed_cidrs.append(cidr)
    return fixed_cidrs
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            state=dict(required=True, type='str', choices=['present', 'absent', 'copy']),
            replication_id=dict(type='str'),
            cluster_id=dict(type='str'),
            target=dict(type='str'),
            bucket=dict(type='str'),
        )
    )
    
    
DOCUMENTATION = '''
---
module: iam_server_certificate_facts
short_description: Retrieve the facts of a server certificate
description:
  - Retrieve the attributes of a server certificate
version_added: '2.2'
author: 'Allen Sanabria (@linuxdynasty)'
requirements: [boto3, botocore]
options:
  name:
    description:
      - The name of the server certificate you are retrieving attributes for.
    required: true
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
        @classmethod
    def default_decoder(cls, value):
        try:
            return pyrfc3339.parse(value)
        except ValueError as error:
            raise jose.DeserializationError(error)
    
        # TODO: decoder should check that nonce is in the protected header
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        After removing '/files', this function splits vhost_path into the
    file path and the remaining Augeas path.
    
    OLD_REWRITE_HTTPS_ARGS = [
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,QSA,R=permanent]'],
    ['^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,QSA,R=permanent]']]
    
            self.assertRaises(
            errors.PluginError, self.config.recovery_routine)
    
        @certbot_util.patch_get_utility()
    def test_successful_choice(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 3)
        self.assertEqual(self.vhosts[3], self._call(self.vhosts))
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
})
    
    _LOGGER = logging.getLogger(__name__)
    
    DEPENDENCIES = ['history']
    
        session.sensor = Pyhiveapi.Sensor()
    session.heating = Pyhiveapi.Heating()
    session.hotwater = Pyhiveapi.Hotwater()
    session.light = Pyhiveapi.Light()
    session.switch = Pyhiveapi.Switch()
    session.weather = Pyhiveapi.Weather()
    session.attributes = Pyhiveapi.Attributes()
    hass.data[DATA_HIVE] = session
    
    from functools import wraps
import logging
    
      # Remove old YCM libs if present so that YCM can start.
  old_libs = (
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_core.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*ycm_client_support.*' ) ) +
    glob.glob( p.join( DIR_OF_OLD_LIBS, '*clang*.*') ) )
  for lib in old_libs:
    os.remove( lib )
    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    from ycm.client.messages_request import _HandlePollResponse
from ycm.tests.test_utils import ExtendedMock
    
      opts = { 'filter_diagnostics' : {
    'java,c,cs' : { 'regex' : '.*taco.*' } } }
    
    
@YouCompleteMeInstance()
# Select the second item of the list which is the ycmd stderr logfile.
@patch( 'ycm.vimsupport.SelectFromList', return_value = 1 )
@patch( 'ycm.vimsupport.OpenFilename', new_callable = ExtendedMock )
def YouCompleteMe_ToggleLogs_WithoutParameters_SelectLogfileNotAlreadyOpen_test(
  ycm, open_filename, *args ):