
        
            def create_client(self, resource):
        try:
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(self.module, boto3=True)
            self.client = boto3_conn(self.module, conn_type='client', resource=resource, region=region, endpoint=ec2_url, **aws_connect_kwargs)
        except (ClientError, BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Unable to establish connection.')
    
        cwe_rule = CloudWatchEventRule(module,
                                   client=get_cloudwatchevents_client(module),
                                   **rule_data)
    cwe_rule_manager = CloudWatchEventRuleManager(cwe_rule, targets)
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
    
DOCUMENTATION = '''
---
module: ec2_eip_facts
short_description: List EC2 EIP details
description:
    - List details of EC2 Elastic IP addresses.
version_added: '2.6'
author: 'Brad Macpherson (@iiibrad)'
options:
  filters:
    description:
      - A set of filters to use. Each filter is a name:value pair. The value
        may be a list or a single element.
    required: false
    default: {}
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    try:
    import botocore
except ImportError:
    pass  # handled by AnsibleAWSModule
    
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
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
    # datasets available: ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
datasets = ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
    
        samples : array-like of ints (1d or 0d)
        The number of samples to generate as input.
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
    
def type_auto_or_int(val):
    if val == 'auto':
        return 'auto'
    else:
        return int(val)
    
    '''
from __future__ import division
from __future__ import print_function
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
    '''
    
    
class Root(Resource):
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        def __init__(self):
        self.settings = None  # set in scrapy.cmdline
    
    
class Command(ScrapyCommand):
    
        def long_desc(self):
        return ('Edit a spider using the editor defined in the EDITOR environment'
                ' variable or else the EDITOR setting')
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def long_desc(self):
        return 'Interactive console for scraping the given url'
    
        Any state that has a semantic predicate edge is special; those states
    are generated with if-then-else structures in a specialStateTransition()
    which is generated by cyclicDFA template.
    
    '''
    
    def __init__(
        self,
        recognizer, decisionNumber,
        eot, eof, min, max, accept, special, transition
        ):
        ## Which recognizer encloses this DFA?  Needed to check backtracking
        self.recognizer = recognizer
    
    	# Record every single token pulled from the source so we can reproduce
        # chunks of it later.
        self.tokens = []
    
    # Often instead of just checking if two faces match or not (True or False), it's helpful to see how similar they are.
# You can do that by using the face_distance function.
    
    2. Then, call the 'train' function with the appropriate parameters. Make sure to pass in the 'model_save_path' if you
   want to save the model to disk so you can re-use the model without having to re-train it.
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # Initialize some variables
face_locations = []
face_encodings = []
    
        # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
    PY_MAJOR, PY_MINOR, PY_PATCH = sys.version_info[ 0 : 3 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR == 7 and PY_PATCH >= 1 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 4 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.7.1 or >= 3.4; '
            'your version of Python is ' + sys.version )
    
      # See ':h group-name' for details on how the initial group hierarchy is built.
  group_name_to_group = {
    'Boolean': SyntaxGroup( 'Boolean' ),
    'Identifier': identifier_group,
    'Statement': statement_group,
    'PreProc': preproc_group,
    'Type': type_group
  }
    
    
  def Extra_Info_No_Doc_String_test( self ):
    self._Check( 0, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'extra_data': {
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
@patch( 'ycm.client.messages_request.PostVimMessage',
        new_callable = ExtendedMock )
def HandlePollResponse_MultipleMessages_test( post_vim_message ):
  assert_that( _HandlePollResponse( [ { 'message': 'this is a message' },
                                      { 'message': 'this is another one' } ] ,
                                    None ),
               equal_to( True ) )
    
    
@YouCompleteMeInstance()
def SendCompletionRequest_UnicodeWorkingDirectory_test( ycm ):
  unicode_dir = PathToTestFile( 'uni¢𐍈d€' )
  current_buffer = VimBuffer( PathToTestFile( 'uni¢𐍈d€', 'current_buffer' ) )
    
      opts = _JavaFilter( { 'regex' : '.*taco.*',
                        'level' : 'warning' } )
  f = _CreateFilterForTypes( opts, [ 'java' ] )
    
      diagnostics = [
    {
      'kind': 'ERROR',
      'text': 'error text in current buffer',
      'location': {
        'filepath': '/current',
        'line_num': 1,
        'column_num': 1
      },
      'location_extent': {
        'start': {
          'filepath': '/current',
          'line_num': 1,
          'column_num': 1,
        },
        'end': {
          'filepath': '/current',
          'line_num': 1,
          'column_num': 1,
        }
      },
      'ranges': []
    },
    {
      'kind': 'ERROR',
      'text': 'error text in hidden buffer',
      'location': {
        'filepath': '/has_diags',
        'line_num': 4,
        'column_num': 2
      },
      'location_extent': {
        'start': {
          'filepath': '/has_diags',
          'line_num': 4,
          'column_num': 2,
        },
        'end': {
          'filepath': '/has_diags',
          'line_num': 4,
          'column_num': 2,
        }
      },
      'ranges': []
    },
    {
      'kind': 'ERROR',
      'text': 'error text in buffer not open in Vim',
      'location': {
        'filepath': '/not_open',
        'line_num': 8,
        'column_num': 4
      },
      'location_extent': {
        'start': {
          'filepath': '/not_open',
          'line_num': 8,
          'column_num': 4,
        },
        'end': {
          'filepath': '/not_open',
          'line_num': 8,
          'column_num': 4,
        }
      },
      'ranges': []
    }
  ]