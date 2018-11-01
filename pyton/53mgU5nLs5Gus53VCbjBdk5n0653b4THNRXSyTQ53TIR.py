
        
            def extract_max_priority_page(self):
        '''Return the highest priority link in `links_to_crawl`.'''
        pass
    
        # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
        auth.login()
    response = client.get('/')
    assert b'test title' in response.data
    assert b'by test on 2018-01-01' in response.data
    assert b'test\nbody' in response.data
    assert b'href='/1/update'' in response.data
    
    import pytest
from flaskr.db import get_db
    
            url_prefix = self.options.get('url_prefix')
        if url_prefix is None:
            url_prefix = self.blueprint.url_prefix
        #: The prefix that should be used for all URLs defined on the
        #: blueprint.
        self.url_prefix = url_prefix
    
            :param obj: an import name or object
        '''
        if isinstance(obj, string_types):
            obj = import_string(obj)
        for key in dir(obj):
            if key.isupper():
                self[key] = getattr(obj, key)
    
    
# context locals
_request_ctx_stack = LocalStack()
_app_ctx_stack = LocalStack()
current_app = LocalProxy(_find_app)
request = LocalProxy(partial(_lookup_req_object, 'request'))
session = LocalProxy(partial(_lookup_req_object, 'session'))
g = LocalProxy(partial(_lookup_app_object, 'g'))

    
        if head[:2] in (codecs.BOM_UTF16_BE, codecs.BOM_UTF16_LE):
        return 'utf-16'
    
    :copyright: © 2010 by the Pallets team.
:license: BSD, see LICENSE for more details.
'''
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
        def invoke(self, cli=None, args=None, **kwargs):
        '''Invokes a CLI command in an isolated environment. See
        :meth:`CliRunner.invoke <click.testing.CliRunner.invoke>` for
        full method documentation. See :ref:`testing-cli` for examples.
    
    RETURN = '''
wafs:
  description: The WAFs that match the passed arguments
  returned: success
  type: complex
  contains:
    name:
      description: A friendly name or description of the WebACL
      returned: always
      type: string
      sample: test_waf
    default_action:
      description: The action to perform if none of the Rules contained in the WebACL match.
      returned: always
      type: int
      sample: BLOCK
    metric_name:
      description: A friendly name or description for the metrics for this WebACL
      returned: always
      type: string
      sample: test_waf_metric
    rules:
      description: An array that contains the action for each Rule in a WebACL , the priority of the Rule
      returned: always
      type: complex
      contains:
        action:
          description: The action to perform if the Rule matches
          returned: always
          type: string
          sample: BLOCK
        metric_name:
          description: A friendly name or description for the metrics for this Rule
          returned: always
          type: string
          sample: ipblockrule
        name:
          description: A friendly name or description of the Rule
          returned: always
          type: string
          sample: ip_block_rule
        predicates:
          description: The Predicates list contains a Predicate for each
            ByteMatchSet, IPSet, SizeConstraintSet, SqlInjectionMatchSet or XssMatchSet
            object in a Rule
          returned: always
          type: list
          sample:
            [
              {
                'byte_match_set_id': '47b822b5-abcd-1234-faaf-1234567890',
                'byte_match_tuples': [
                  {
                    'field_to_match': {
                      'type': 'QUERY_STRING'
                    },
                    'positional_constraint': 'STARTS_WITH',
                    'target_string': 'bobbins',
                    'text_transformation': 'NONE'
                  }
                ],
                'name': 'bobbins',
                'negated': false,
                'type': 'ByteMatch'
              }
            ]
'''
    
        distribution_id = validation_mgr.validate_distribution_id(distribution_id, alias)
    valid_target_paths = validation_mgr.validate_invalidation_batch(target_paths, caller_reference)
    valid_pascal_target_paths = snake_dict_to_camel_dict(valid_target_paths, True)
    result, changed = service_mgr.create_invalidation(distribution_id, valid_pascal_target_paths)
    
    EXAMPLES = '''
    
    
def find_launch_configs(client, module):
    name_regex = module.params.get('name_regex')
    sort_order = module.params.get('sort_order')
    limit = module.params.get('limit')
    
    
@AWSRetry.backoff(delay=3, tries=8, catch_extra_error_codes=['InvalidVpcID.NotFound'])
def get_classic_link_with_backoff(connection, vpc_id):
    try:
        return connection.describe_vpc_classic_link(VpcIds=[vpc_id])['Vpcs'][0].get('ClassicLinkEnabled')
    except botocore.exceptions.ClientError as e:
        if e.response['Error']['Message'] == 'The functionality you requested is not available in this region.':
            return False
        else:
            raise
    
    author:
  - Will Thames (@willthames)
extends_documentation_fragment:
  - aws
  - ec2
'''
    
    EXAMPLES = '''
# Note: None of these examples set aws_access_key, aws_secret_key, or region.
# It is assumed that their matching environment variables are set.
---
- hosts: localhost
  connection: local
  tasks:
    - name: 'Create a snapshot'
      elasticache_snapshot:
        name: 'test-snapshot'
        state: 'present'
        cluster_id: '{{ cluster }}'
        replication_id: '{{ replication }}'
'''
    
        except BotoServerError as e:
        if e.error_message != 'No modifications were requested.':
            module.fail_json(msg=e.error_message)
        else:
            changed = False
    
        if any(ct in orig_cert_names_lower for ct in names_lower):
        for i_name in names_lower:
            if cert is not None:
                try:
                    c_index = orig_cert_names_lower.index(i_name)
                except NameError:
                    continue
                else:
                    # NOTE: remove the carriage return to strictly compare the cert bodies.
                    slug_cert = cert.replace('\r', '')
                    slug_orig_cert_bodies = orig_cert_bodies[c_index].replace('\r', '')
                    if slug_orig_cert_bodies == slug_cert:
                        update = True
                        break
                    elif slug_cert.startswith(slug_orig_cert_bodies):
                        update = True
                        break
                    else:
                        module.fail_json(changed=False, msg='A cert with the name %s already exists and'
                                         ' has a different certificate body associated'
                                         ' with it. Certificates cannot have the same name' % orig_cert_names[c_index])
            else:
                update = True
                break
    elif cert in orig_cert_bodies and not dup_ok:
        for crt_name, crt_body in zip(orig_cert_names, orig_cert_bodies):
            if crt_body == cert:
                module.fail_json(changed=False, msg='This certificate already'
                                                    ' exists under the name %s' % crt_name)
    
        argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            managed_policy=dict(default=[], type='list'),
            state=dict(choices=['present', 'absent'], required=True),
            purge_policy=dict(default=False, type='bool')
        )
    )
    
                elif retention_period == current_stream['RetentionPeriodHours']:
                retention_msg = (
                    'Retention {0} is the same as {1}'
                    .format(
                        retention_period,
                        current_stream['RetentionPeriodHours']
                    )
                )
                success = True
    
    
def generate_pathological_dataset(size):
    # Triggers O(n^2) complexity on the original implementation.
    return np.r_[np.arange(size),
                 np.arange(-(size - 1), size),
                 np.arange(-(size - 1), 1)]
    
                gc.collect()
            print('benchmarking lars_path (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lars_path(X, y, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (without Gram)'].append(delta)
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=0')
            tstart = time()
            randomized_svd(X, rank, n_iter=0)
            results['scikit-learn randomized_svd (n_iter=0)'].append(
                time() - tstart)
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
        ###########################################################################
    # List sampling algorithm
    ###########################################################################
    # We assume that sampling algorithm has the following signature:
    #   sample(n_population, n_sample)
    #
    sampling_algorithm = {}
    
        res.append(bench)
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
        return out
    
    A character stream is usually the first element in the pipeline of a typical
ANTLR3 application. It is used as the input for a Lexer.
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
        # The antlr_version attribute has been introduced in 3.1. If it is not
    # overwritten in the generated recognizer, we assume a default of 3.0.1.
    antlr_version = (3, 0, 1, 0)
    antlr_version_str = '3.0.1'
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( ShutdownRequest, self ).__init__()
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessagesAndDiagnostics_test( post_vim_message ):
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'message': 'On the first day of Christmas, my VimScript gave to me' },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'message': 'A test file in a Command-T' },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'message': 'On the second day of Christmas, my VimScript gave to me' },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
    { 'message': 'Two popup menus, and a test file in a Command-T' },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
    
def MockAsyncServerResponseException( exception ):
  '''Return a fake future object that is complete, but raises an exception.
  Suitable for mocking a response future within a client request. For example:
    
      assert_that( syntax_parse._KeywordsFromSyntaxListOutput(
                   ContentsOfTestFile( 'python_syntax' ) ),
               contains_inanyorder( *expected_keywords ) )