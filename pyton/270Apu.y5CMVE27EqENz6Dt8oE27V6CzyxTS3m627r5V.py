
        
          with open(vocab_file) as f_in:
    vocab = [line.strip() for line in f_in]
    
      model.train_model(datasets)
    
    
def GAN_loss_matrix(dis_predictions):
  '''Computes the cross entropy loss for G.
    
      Args;
    hparams:  Hyperparameters for the MaskGAN.
    inputs:  tf.int32 Tensor of the sequence input of shape [batch_size,
      sequence_length].
    present:  tf.bool Tensor indicating the presence or absence of the token
      of shape [batch_size, sequence_length].
    is_training:  Whether the model is training.
    is_validating:  Whether the model is being run in validation mode for
      calculating the perplexity.
    reuse (Optional):  Whether to reuse the model.
    
    
def hash_function(input_tuple):
  '''Hash function for a tuple.'''
  return hash(input_tuple)
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
from ansible.module_utils.aws.waf import list_web_acls, get_web_acl
    
        def describe(self):
        '''Returns the existing details of the rule in AWS'''
        try:
            rule_info = self.client.describe_rule(Name=self.name)
        except botocore.exceptions.ClientError as e:
            error_code = e.response.get('Error', {}).get('Code')
            if error_code == 'ResourceNotFoundException':
                return {}
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        except botocore.exceptions.BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Could not describe rule %s' % self.name)
        return self._snakify(rule_info)
    
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    logs = boto3_conn(module, conn_type='client', resource='logs', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    
def match_asg_tags(tags_to_match, asg):
    for key, value in tags_to_match.items():
        for tag in asg['Tags']:
            if key == tag['Key'] and value == tag['Value']:
                break
        else:
            return False
    return True
    
    
if __name__ == '__main__':
    main()

    
    
def load_data(cert, key, cert_chain):
    # if paths are provided rather than lookups read the files and return the contents
    if cert and os.path.isfile(cert):
        cert = open(cert, 'r').read().rstrip()
    if key and os.path.isfile(key):
        key = open(key, 'r').read().rstrip()
    if cert_chain and os.path.isfile(cert_chain):
        cert_chain = open(cert_chain, 'r').read()
    return cert, key, cert_chain
    
        # List comprehension that looks for any policy in the 'policy_names' list
    # that does not begin with 'arn'. If there aren't any, short circuit.
    # If there are, translate friendly name to the full arn
    if not any([not policy.startswith('arn:') for policy in policy_names if policy is not None]):
        return policy_names
    allpolicies = {}
    paginator = connection.get_paginator('list_policies')
    policies = paginator.paginate().build_full_result()['Policies']
    
        Returns:
        List
    '''
    tags = list()
    i = 0
    list_of_tags = list_of_tags
    for i in range(len(list_of_tags)):
        key_name = list_of_tags[i][0]
        key_val = list_of_tags[i][1]
        tags.append(
            {
                'Key': key_name,
                'Value': key_val
            }
        )
    return tags
    
        :param module: Ansible module reference
    :param aws: AWS client connection
    :return dict:
    '''
    client = aws.client('lambda')
    results = dict()
    changed = False
    current_state = 'absent'
    state = module.params['state']
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
    
    
  def Response( self ):
    return self._response
    
    
  def Done( self ):
    return True
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
  def _ThreadMain( self ):
    while True:
      time.sleep( self._ping_interval_seconds )
    
      # As a last resort, we search python in the PATH. We prefer Python 2 over 3
  # for the sake of backwards compatibility with ycm_extra_conf.py files out
  # there; few people wrote theirs to work on py3.
  # So we check 'python2' before 'python' because on some distributions (Arch
  # Linux for example), python refers to python3.
  python_interpreter = utils.PathToFirstExistingExecutable( [ 'python2',
                                                              'python',
                                                              'python3' ] )
  if python_interpreter:
    return python_interpreter
    
        keyword_matched = KEYWORD_REGEX.match( word )
    if keyword_matched:
      keywords.append( keyword_matched.group( 1 ) )
  return keywords
    
    
  def Extra_Info_No_Doc_String_With_Detailed_Info_test( self ):
    self._Check( '0', {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
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
    
    from hamcrest import assert_that, equal_to
from ycm.diagnostic_filter import DiagnosticFilter
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test', user_data='1' ) )
def GetCompletionsUserMayHaveCompleted_UseUserData1_test( *args ):
  # Identical completions but we specify the second one via user_data.
  completions = [
    BuildCompletionNamespace( 'namespace1' ),
    BuildCompletionNamespace( 'namespace2' )
  ]
    
      # Ensure we included all the diags though
  set_location_list_for_window.assert_has_exact_calls( [
    call( 1, [
      {
        'lnum': 1,
        'col': 1,
        'bufnr': 1,
        'valid': 1,
        'type': 'E',
        'text': 'error text in current buffer',
      },
    ] ),