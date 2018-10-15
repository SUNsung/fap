
        
            def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
        response_iterator = paginator.paginate(
        PaginationConfig={
            'MaxItems': 1000,
            'PageSize': 100
        }
    )
    
    
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
    
        ecr = EcsEcr(module)
    passed, result = run(ecr, module.params, module._verbosity)
    
    requirements: [ json, botocore, boto3 ]
options:
    state:
        description:
          - The desired state of the service
        required: true
        choices: ['present', 'absent', 'deleting']
    name:
        description:
          - The name of the service
        required: true
    cluster:
        description:
          - The name of the cluster in which the service exists
        required: false
    task_definition:
        description:
          - The task definition the service will run. This parameter is required when state=present
        required: false
    load_balancers:
        description:
          - The list of ELBs defined for this service
        required: false
    desired_count:
        description:
          - The count of how many instances of the service. This parameter is required when state=present
        required: false
    client_token:
        description:
          - Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.
        required: false
    role:
        description:
          - The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer
            on your behalf. This parameter is only required if you are using a load balancer with your service, in a network mode other than `awsvpc`.
        required: false
    delay:
        description:
          - The time to wait before checking that the service is available
        required: false
        default: 10
    repeat:
        description:
          - The number of times to check that the service is available
        required: false
        default: 10
    deployment_configuration:
        description:
          - Optional parameters that control the deployment_configuration; format is '{'maximum_percent':<integer>, 'minimum_healthy_percent':<integer>}
        required: false
        version_added: 2.3
    placement_constraints:
        description:
          - The placement constraints for the tasks in the service
        required: false
        version_added: 2.4
    placement_strategy:
        description:
          - The placement strategy objects to use for tasks in your service. You can specify a maximum of 5 strategy rules per service
        required: false
        version_added: 2.4
    network_configuration:
        description:
          - network configuration of the service. Only applicable for task definitions created with C(awsvpc) I(network_mode).
          - assign_public_ip requires botocore >= 1.8.4
        suboptions:
          subnets:
            description:
              - A list of subnet IDs to associate with the task
            version_added: 2.6
          security_groups:
            description:
              - A list of security group names or group IDs to associate with the task
            version_added: 2.6
          assign_public_ip:
            description:
              - Whether the task's elastic network interface receives a public IP address. This option requires botocore >= 1.8.4.
            type: bool
            version_added: 2.7
    launch_type:
        description:
          - The launch type on which to run your service
        required: false
        version_added: 2.7
        choices: ['EC2', 'FARGATE']
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
def get_tags(connection, load_balancer_name):
    tags = connection.describe_tags(LoadBalancerNames=[load_balancer_name])['TagDescriptions']
    if not tags:
        return {}
    return boto3_tag_list_to_ansible_dict(tags[0]['Tags'])
    
    # Read lines from the linkcheck output file
try:
    with open('build/linkcheck/output.txt') as out:
        output_lines = out.readlines()
except IOError:
    print('linkcheck output not found; please run linkcheck first.')
    exit(1)
    
    # Ignore noisy twisted deprecation warnings
import warnings
warnings.filterwarnings('ignore', category=DeprecationWarning, module='twisted')
del warnings
    
                if depth < opts.depth:
                for req in requests:
                    req.meta['_depth'] = depth + 1
                    req.meta['_callback'] = req.callback
                    req.callback = callback
                return requests
    
    from scrapy.commands import ScrapyCommand
from scrapy.shell import Shell
from scrapy.http import Request
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
from scrapy.utils.url import guess_scheme
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
    DIR_OF_THIS_SCRIPT = p.dirname( p.abspath( __file__ ) )
DIR_OF_OLD_LIBS = p.join( DIR_OF_THIS_SCRIPT, 'python' )
    
        if not self._response_future.done():
      # Nothing yet...
      return True
    
    
def EndsWithPython_Python3Paths_test():
  python_paths = [
    'python3',
    '/usr/bin/python3.4',
    '/home/user/.pyenv/shims/python3.4',
    r'C:\Python34\python.exe'
  ]
    
    
def ExtractKeywordsFromGroup_KeywordAssign_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'nextgroup=zoo skipwhite foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    from concurrent.futures import _base
    
    
def ParseArguments():
  parser = argparse.ArgumentParser()
  parser.add_argument( '--skip-build', action = 'store_true',
                       help = 'Do not build ycmd before testing' )
  parser.add_argument( '--coverage', action = 'store_true',
                       help = 'Enable coverage report' )
  parser.add_argument( '--no-flake8', action = 'store_true',
                       help = 'Do not run flake8' )
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
    
class FmState(State):
    def __init__(self, radio):
        self.radio = radio
        self.stations = ['81.3', '89.1', '103.9']
        self.pos = 0
        self.name = 'FM'
    
        return _lazy_property
    
    AXIS_DEFAULT_HOST = '192.168.0.90'
AXIS_DEFAULT_USERNAME = 'root'
AXIS_DEFAULT_PASSWORD = 'pass'
    
    
AWS_EXCEPTIONS = {
    'UserNotFoundException': UserNotFound,
    'NotAuthorizedException': Unauthenticated,
    'UserNotConfirmedException': UserNotConfirmed,
    'PasswordResetRequiredException': PasswordChangeRequired,
}
    
                    name = None
                for prop in device['properties']:
                    if prop['name'] == 'userDeviceName':
                        name = prop['value']
                if not name:
                    name = device.get('friendlyName', device['deviceID'])
    
    _LOGGER = logging.getLogger(__name__)
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/dominos/.
'''
import logging
from datetime import timedelta
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_NAME): cv.string,
        vol.Required(CONF_WHITELIST, default=[]):
            vol.All(cv.ensure_list, [cv.entity_id]),
    }),
}, extra=vol.ALLOW_EXTRA)
    
        def stop(self):
        '''Stop the server.'''
        # Request for server
        self._interrupted = True
        self.join()