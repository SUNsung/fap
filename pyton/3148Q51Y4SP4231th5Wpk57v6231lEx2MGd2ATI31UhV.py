
        
          def __call__(self, inputs, state, scope=None):
    '''Gated recurrent unit (GRU) function.
    
        with tf.gfile.Open(filename) as f:
      idx = 0
      for line in f:
        word_name = line.strip()
        if word_name == '<S>':
          self._bos = idx
        elif word_name == '</S>':
          self._eos = idx
        elif word_name == '<UNK>':
          self._unk = idx
        if word_name == '!!!MAXTERMID':
          continue
    
    # Dependency imports
    
        if FLAGS.critic_update_dis_vars:
      if FLAGS.discriminator_model == 'bidirectional_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/rnn')
        ]
      elif FLAGS.discriminator_model == 'seq2seq_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/decoder/rnn/multi_rnn_cell')
        ]
      critic_vars.extend(output_vars)
    else:
      critic_vars = output_vars
    print('\nOptimizing Critic vars:')
    for v in critic_vars:
      print(v)
    critic_grads = tf.gradients(critic_loss, critic_vars)
    critic_grads_clipped, _ = tf.clip_by_global_norm(critic_grads,
                                                     FLAGS.grad_clipping)
    critic_train_op = critic_optimizer.apply_gradients(
        zip(critic_grads_clipped, critic_vars), global_step=global_step)
    return critic_train_op, critic_grads_clipped, critic_vars

    
    
def generate_mask():
  '''Generate the mask to be fed into the model.'''
  if FLAGS.mask_strategy == 'random':
    p = np.random.choice(
        [True, False],
        size=[FLAGS.batch_size, FLAGS.sequence_length],
        p=[FLAGS.is_present_rate, 1. - FLAGS.is_present_rate])
    
      # The unique ngrams in the training set.
  unique_ngrams_in_train = 0.
    
          next input: `cell_input`, this decoder function does not modify the
      given input. The input could be modified when applying e.g. attention.
    
        # register the database commands
    from flaskr import db
    db.init_app(app)
    
        Here, `error` is the instance of :exc:`~werkzeug.routing.BuildError`, and
    `endpoint` and `values` are the arguments passed into `url_for`.  Note
    that this is for building URLs outside the current application, and not for
    handling 404 NotFound errors.
    
        def dumps(self, value):
        '''Tag the value and dump it to a compact JSON string.'''
        return dumps(self.tag(value), separators=(',', ':'))
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
                # If we have no method at all in there we don't want to add a
            # method list. This is for instance the case for the base class
            # or another subclass of a base method view that does not introduce
            # new methods.
            if methods:
                cls.methods = methods
    
    shells.shell = shells.Generic()
    
    
@pytest.fixture(autouse=True)
def logs(mocker):
    return mocker.patch('thefuck.entrypoints.not_configured.logs',
                        new_callable=MagicMock)
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    
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
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
        def __len__(self):
        return len(self._store)
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    # FileModeWarnings go off per the default.
warnings.simplefilter('default', FileModeWarning, append=True)

    
    # ---------
# Specifics
# ---------
    
    DOCUMENTATION = '''
module: aws_waf_facts
short_description: Retrieve facts for WAF ACLs, Rule , Conditions and Filters.
description:
  - Retrieve facts for WAF ACLs, Rule , Conditions and Filters.
version_added: '2.4'
requirements: [ boto3 ]
options:
  name:
    description:
      - The name of a Web Application Firewall
    
        def create_client(self, resource):
        try:
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(self.module, boto3=True)
            self.client = boto3_conn(self.module, conn_type='client', resource=resource, region=region, endpoint=ec2_url, **aws_connect_kwargs)
        except (ClientError, BotoCoreError) as e:
                self.module.fail_json_aws(e, msg='Unable to establish connection.')
    
        try:
        asgs_paginator = conn.get_paginator('describe_auto_scaling_groups')
        asgs = asgs_paginator.paginate().build_full_result()
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (connect_to_aws,
                                      boto3_conn,
                                      ec2_argument_spec,
                                      get_aws_connection_info)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported HAS_BOTO3
    
        module.exit_json(changed=changed,
                     snapshot_id=snapshot.id,
                     volume_id=snapshot.volume_id,
                     volume_size=snapshot.volume_size,
                     tags=snapshot.tags.copy())
    
    RETURN = '''
elasticache_clusters:
  description: List of elasticache clusters
  returned: always
  type: complex
  contains:
    auto_minor_version_upgrade:
      description: Whether to automatically upgrade to minor versions
      returned: always
      type: bool
      sample: true
    cache_cluster_create_time:
      description: Date and time cluster was created
      returned: always
      type: string
      sample: '2017-09-15T05:43:46.038000+00:00'
    cache_cluster_id:
      description: ID of the cache cluster
      returned: always
      type: string
      sample: abcd-1234-001
    cache_cluster_status:
      description: Status of Elasticache cluster
      returned: always
      type: string
      sample: available
    cache_node_type:
      description: Instance type of Elasticache nodes
      returned: always
      type: string
      sample: cache.t2.micro
    cache_nodes:
      description: List of Elasticache nodes in the cluster
      returned: always
      type: complex
      contains:
        cache_node_create_time:
          description: Date and time node was created
          returned: always
          type: string
          sample: '2017-09-15T05:43:46.038000+00:00'
        cache_node_id:
          description: ID of the cache node
          returned: always
          type: string
          sample: '0001'
        cache_node_status:
          description: Status of the cache node
          returned: always
          type: string
          sample: available
        customer_availability_zone:
          description: Availability Zone in which the cache node was created
          returned: always
          type: string
          sample: ap-southeast-2b
        endpoint:
          description: Connection details for the cache node
          returned: always
          type: complex
          contains:
            address:
              description: URL of the cache node endpoint
              returned: always
              type: string
              sample: abcd-1234-001.bgiz2p.0001.apse2.cache.amazonaws.com
            port:
              description: Port of the cache node endpoint
              returned: always
              type: int
              sample: 6379
        parameter_grou_status:
          description: Status of the Cache Parameter Group
          returned: always
          type: string
          sample: in-sync
    cache_parameter_group:
      description: Contents of the Cache Parameter GGroup
      returned: always
      type: complex
      contains:
        cache_node_ids_to_reboot:
          description: Cache nodes which need to be rebooted for parameter changes to be applied
          returned: always
          type: list
          sample: []
        cache_parameter_group_name:
          description: Name of the cache parameter group
          returned: always
          type: string
          sample: default.redis3.2
        parameter_apply_status:
          description: Status of parameter updates
          returned: always
          type: string
          sample: in-sync
    cache_security_groups:
      description: Security Groups used by the cache
      returned: always
      type: list
      sample:
        - 'sg-abcd1234'
    cache_subnet_group_name:
      description: Elasticache Subnet Group used by the cache
      returned: always
      type: string
      sample: abcd-subnet-group
    client_download_landing_page:
      description: URL of client download web page
      returned: always
      type: string
      sample: 'https://console.aws.amazon.com/elasticache/home#client-download:'
    engine:
      description: Engine used by elasticache
      returned: always
      type: string
      sample: redis
    engine_version:
      description: Version of elasticache engine
      returned: always
      type: string
      sample: 3.2.4
    notification_configuration:
      description: Configuration of notifications
      returned: if notifications are enabled
      type: complex
      contains:
        topic_arn:
          description: ARN of notification destination topic
          returned: if notifications are enabled
          type: string
          sample: arn:aws:sns:*:123456789012:my_topic
        topic_name:
          description: Name of notification destination topic
          returned: if notifications are enabled
          type: string
          sample: MyTopic
    num_cache_nodes:
      description: Number of Cache Nodes
      returned: always
      type: int
      sample: 1
    pending_modified_values:
      description: Values that are pending modification
      returned: always
      type: complex
      contains: {}
    preferred_availability_zone:
      description: Preferred Availability Zone
      returned: always
      type: string
      sample: ap-southeast-2b
    preferred_maintenance_window:
      description: Time slot for preferred maintenance window
      returned: always
      type: string
      sample: sat:12:00-sat:13:00
    replication_group_id:
      description: Replication Group Id
      returned: always
      type: string
      sample: replication-001
    security_groups:
      description: List of Security Groups associated with Elasticache
      returned: always
      type: complex
      contains:
        security_group_id:
          description: Security Group ID
          returned: always
          type: string
          sample: sg-abcd1234
        status:
          description: Status of Security Group
          returned: always
          type: string
          sample: active
    tags:
      description: Tags applied to the elasticache cluster
      returned: always
      type: complex
      sample:
        Application: web
        Environment: test
'''
    
    RETURN = '''
server_certificate_id:
    description: The 21 character certificate id
    returned: success
    type: str
    sample: 'ADWAJXWTZAXIPIMQHMJPO'
certificate_body:
    description: The asn1der encoded PEM string
    returned: success
    type: str
    sample: '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----'
server_certificate_name:
    description: The name of the server certificate
    returned: success
    type: str
    sample: 'server-cert-name'
arn:
    description: The Amazon resource name of the server certificate
    returned: success
    type: str
    sample: 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
path:
    description: The path of the server certificate
    returned: success
    type: str
    sample: '/'
expiration:
    description: The date and time this server certificate will expire, in ISO 8601 format.
    returned: success
    type: str
    sample: '2017-06-15T12:00:00+00:00'
upload_date:
    description: The date and time this server certificate was uploaded, in ISO 8601 format.
    returned: success
    type: str
    sample: '2015-04-25T00:36:40+00:00'
'''
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    
def issue_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/issues/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'issue ' + text, refuri=ref, **options)
    return [node], []
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    def _run_print_help(parser, func, *a, **kw):
    try:
        func(*a, **kw)
    except UsageError as e:
        if str(e):
            parser.error(str(e))
        if e.print_help:
            parser.print_help()
        sys.exit(2)
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
        def _genspider(self, module, name, domain, template_name, template_file):
        '''Generate the spider module, based on the given template'''
        tvars = {
            'project_name': self.settings.get('BOT_NAME'),
            'ProjectName': string_camelcase(self.settings.get('BOT_NAME')),
            'module': module,
            'name': name,
            'domain': domain,
            'classname': '%sSpider' % ''.join(s.capitalize() \
                for s in module.split('_'))
        }
        if self.settings.get('NEWSPIDER_MODULE'):
            spiders_module = import_module(self.settings['NEWSPIDER_MODULE'])
            spiders_dir = abspath(dirname(spiders_module.__file__))
        else:
            spiders_module = None
            spiders_dir = '.'
        spider_file = '%s.py' % join(spiders_dir, module)
        shutil.copyfile(template_file, spider_file)
        render_templatefile(spider_file, **tvars)
        print('Created spider %r using template %r ' % (name, \
            template_name), end=('' if spiders_module else '\n'))
        if spiders_module:
            print('in module:\n  %s.%s' % (spiders_module.__name__, module))
    
            self.crawler_process.crawl(spidercls, **opts.spargs)
        self.crawler_process.start()
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
    from ..common import *
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
    
def get_file_path(merge, output_dir, title, url):
    mime, ext, size = url_info(url)
    file_name = get_output_filename([], title, ext, output_dir, merge)
    file_path = os.path.join(output_dir, file_name)
    return file_name, file_path
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
    
# Remove the drawing library from memory as per the Pillow docs
del draw
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)