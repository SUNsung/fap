
        
          dim = embeddings.shape[1]
    
        h = tf.matmul(self.input_vec, self.weights1)
    self.output = h
    
        Returns:
      the labels.
    '''
    return session.run(self.labels_to_load,
                       feed_dict={self.instances_to_load: batch_instances})
    
      LFADS generates a number of outputs for each examples, and these are all
  saved.  They are:
    The mean and variance of the prior of g0.
    The mean and variance of approximate posterior of g0.
    The control inputs (if enabled)
    The initial conditions, g0, for all examples.
    The generator states for all time.
    The factors for all time.
    The rates for all time.
    
      Args:
    hparams:  MaskGAN hyperparameters.
    learning_rate:  tf.Variable scalar learning rate.
    final_gen_objective:  Scalar final REINFORCE objective for the sequence.
    averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
    global_step:  global_step tf.Variable.
    
                # >leading or trailing LWS MAY be removed without
            # >changing the semantics of the field value'
            # -https://www.w3.org/Protocols/rfc2616/rfc2616-sec4.html
            # Also, requests raises `InvalidHeader` for leading spaces.
            value = value.strip()
    
        def iter_body(self, chunk_size=1):
        return self._orig.iter_content(chunk_size=chunk_size)
    
        def __iter__(self):
        return iter(self._plugins)
    
    
@mock.patch('httpie.input.AuthCredentials._getpass',
            new=lambda self, prompt: 'password')
def test_password_prompt(httpbin):
    r = http('--auth', 'user',
             'GET', httpbin.url + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
    
@pytest.mark.skip('unimplemented')
def test_unset_host_header(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert 'Host' in r.json['headers']  # default Host present
    
    - name: create a batch of invalidations using an alias as a reference and one path using a wildcard match
  cloudfront_invalidation:
    alias: alias.test.com
    caller_reference: testing 123
    target_paths:
      - /testpathone/test4.css
      - /testpathtwo/test5.js
      - /testpaththree/*
    
    import re
    
        def tag_cgw_name(self, gw_id, name):
        response = self.ec2.create_tags(
            DryRun=False,
            Resources=[
                gw_id,
            ],
            Tags=[
                {
                    'Key': 'Name',
                    'Value': name
                },
            ]
        )
        return response
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=False, default=[], type='list'),
            sort=dict(required=False, default=None,
                      choices=['launch_configuration_name', 'image_id', 'created_time', 'instance_type', 'kernel_id', 'ramdisk_id', 'key_name']),
            sort_order=dict(required=False, default='ascending',
                            choices=['ascending', 'descending']),
            sort_start=dict(required=False),
            sort_end=dict(required=False),
        )
    )
    
        result = dict(gateway_id=eigw_id, vpc_id=vpc_id)
    changed = False
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
            try:
            matching_groups = conn.describe_cache_subnet_groups(group_name, max_records=100)
            exists = len(matching_groups) > 0
        except BotoServerError as e:
            if e.error_code != 'CacheSubnetGroupNotFoundFault':
                module.fail_json(msg=e.error_message)
    
            try:
            lambda_facts.update(versions=client.list_versions_by_function(FunctionName=function_name, **params)['Versions'])
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(versions=[])
            else:
                module.fail_json_aws(e, msg='Trying to get {0} versions'.format(function_name))
    else:
        module.fail_json(msg='Parameter function_name required for query=versions.')
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = '0'
# The full version, including alpha/beta/rc tags.
release = '0'
    
    from acme import client
from acme import messages
    
    
def get_internal_aug_path(vhost_path):
    '''Get the Augeas path for a vhost with the file path removed.
    
            Examples:
    
        @certbot_util.patch_get_utility()
    def test_multiple_names(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 5)
    
            mock_exists.return_value = True
        self.sni.configurator.parser.update_runtime_variables = mock.Mock()
    
    # -- Options for LaTeX output ---------------------------------------------
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        def scan_completed_callback(scan_wizard, result, address, name):
        '''Restart scan wizard to constantly check for new buttons.'''
        if result == pyflic.ScanWizardResult.WizardSuccess:
            _LOGGER.info('Found new button %s', address)
        elif result != pyflic.ScanWizardResult.WizardFailedTimeout:
            _LOGGER.warning(
                'Failed to connect to button %s. Reason: %s', address, result)
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
        return True

    
            self.last_results = {}
        self.token = _get_token(self.host, self.username, self.password)
    
    ATTR_FILENAME = 'filename'
ATTR_SUBDIR = 'subdir'
ATTR_URL = 'url'
ATTR_OVERWRITE = 'overwrite'
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/emoncms_history/
'''
import logging
from datetime import timedelta
    
        def __init__(self):
        self.trans = dict(dog='σκύλος', cat='γάτα')
    
        def main_method(self):
        '''will execute either _static_method_1 or _static_method_2
    
        def amount(self, val):
        print(val, end=' ')
        return self
    
    ### OUTPUT ###
# jim got cartoon
# jack got music
# gee got movie
# jim got cartoon
# jim got cartoon
# gee got movie

    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class ProductionCodeTimeProvider(object):
    '''
    Production code version of the time provider (just a wrapper for formatting
    datetime for this example).
    '''
    
    
class GraphSearch: