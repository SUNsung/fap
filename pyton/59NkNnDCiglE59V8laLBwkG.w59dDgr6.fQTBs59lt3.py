
        
        
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    no_such_subcommand = '''error: no such subcommand
    
      - name: create WAF regex condition
    aws_waf_condition:
      name: my_regex_condition
      filters:
        - field_to_match: query_string
          regex_pattern:
            name: greetings
            regex_strings:
              - '[hH]ello'
              - '^Hi there'
              - '.*Good Day to You'
      type: regex
    
    try:
    import botocore
except ImportError:
    pass  # handled by AnsibleAWSModule
    
        if not asgs:
        return asgs
    try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        elbv2 = boto3_conn(module, conn_type='client', resource='elbv2', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        # This is nice to have, not essential
        elbv2 = None
    matched_asgs = []
    
    
DOCUMENTATION = '''
---
module: ec2_customer_gateway
short_description: Manage an AWS customer gateway
description:
    - Manage an AWS customer gateway
version_added: '2.2'
author: Michael Baydoun (@MichaelBaydoun)
requirements: [ botocore, boto3 ]
notes:
    - You cannot create more than one customer gateway with the same IP address. If you run an identical request more than one time, the
      first request creates the customer gateway, and subsequent requests return information about the existing customer gateway. The subsequent
      requests do not create new customer gateway resources.
    - Return values contain customer_gateway and customer_gateways keys which are identical dicts. You should use
      customer_gateway. See U(https://github.com/ansible/ansible-modules-extras/issues/2773) for details.
options:
  bgp_asn:
    description:
      - Border Gateway Protocol (BGP) Autonomous System Number (ASN), required when state=present.
  ip_address:
    description:
      - Internet-routable IP address for customers gateway, must be a static address.
    required: true
  name:
    description:
      - Name of the customer gateway.
    required: true
  routing:
    description:
      - The type of routing.
    choices: ['static', 'dynamic']
    default: dynamic
    version_added: '2.4'
  state:
    description:
      - Create or terminate the Customer Gateway.
    default: present
    choices: [ 'present', 'absent' ]
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
if __name__ == '__main__':
    main()

    
        # Here we need to get the zone info for the instance. This covers situation where
    # instance is specified but zone isn't.
    # Useful for playbooks chaining instance launch with volume create + attach and where the
    # zone doesn't matter to the user.
    inst = None
    if instance:
        try:
            reservation = ec2.get_all_instances(instance_ids=instance)
        except BotoServerError as e:
            module.fail_json(msg=e.message)
        inst = reservation[0].instances[0]
        zone = inst.placement
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
    
    
def _HandlePollResponse( response, diagnostics_handler ):
  if isinstance( response, list ):
    for notification in response:
      if 'message' in notification:
        PostVimMessage( notification[ 'message' ],
                        warning = False,
                        truncate = True )
      elif 'diagnostics' in notification:
        diagnostics_handler.UpdateWithNewDiagnosticsForFile(
          notification[ 'filepath' ],
          notification[ 'diagnostics' ] )
  elif response is False:
    # Don't keep polling for this file
    return False
  # else any truthy response means 'nothing to see here; poll again in a
  # while'
    
          BaseRequest().GetDataFromHandler( 'healthy', display_message = False )

    
      if config_entry is None:
    return []
    
    
  def _UpdateLocationLists( self ):
    vimsupport.SetLocationListsForBuffer(
      self._bufnr,
      vimsupport.ConvertDiagnosticsToQfList( self._diagnostics ) )
    
    
def WaitUntilReady( timeout = 5 ):
  expiration = time.time() + timeout
  while True:
    try:
      if time.time() > expiration:
        raise RuntimeError( 'Waited for the server to be ready '
                            'for {0} seconds, aborting.'.format( timeout ) )
      if _IsReady():
        return
    except requests.exceptions.ConnectionError:
      pass
    finally:
      time.sleep( 0.1 )
    
      # Other non-False responses mean the same thing
  assert_that( _HandlePollResponse( '', None ), equal_to( True ) )
  assert_that( _HandlePollResponse( 1, None ), equal_to( True ) )
  assert_that( _HandlePollResponse( {}, None ), equal_to( True ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def EndsWithPython_Python2Paths_test():
  python_paths = [
    'python',
    'python2',
    '/usr/bin/python2.7',
    '/home/user/.pyenv/shims/python2.7',
    r'C:\Python27\python.exe',
    '/Contents/MacOS/Python'
  ]
    
    
def ContentsOfTestFile( test_file ):
  dir_of_script = os.path.dirname( os.path.abspath( __file__ ) )
  full_path_to_test_file = os.path.join( dir_of_script, 'testdata', test_file )
  return ReadFile( full_path_to_test_file )