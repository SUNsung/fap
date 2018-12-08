
        
              self.weights2 = tf.get_variable(
          'W2',
          shape=[hidden_dim, self.hparams.num_classes],
          dtype=tf.float32)
      self.bias2 = tf.get_variable(
          'b2',
          shape=[self.hparams.num_classes],
          dtype=tf.float32)
    
        # This is needed to make sure that the gradients are simple.
    # The value of the function shouldn't change.
    if z == self.sample_bxn:
      return gaussian_pos_log_likelihood(self.mean_bxn,
                                         self.logvar_bxn, self.noise_bxn)
    
      if bidx is not None:
    data_nxt = data_bxtxn[bidx,:,:].T
    params_nxt = model_vals['output_dist_params'][bidx,:,:].T
  else:
    data_nxt = np.mean(data_bxtxn, axis=0).T
    params_nxt = np.mean(model_vals['output_dist_params'], axis=0).T
  if output_dist == 'poisson':
    means_nxt = params_nxt
  elif output_dist == 'gaussian': # (means+vars) x time
    means_nxt = np.vsplit(params_nxt,2)[0] # get means
  else:
    assert 'NIY'
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
      dir_name = os.path.dirname(data_fname)
  if not os.path.exists(dir_name):
    os.makedirs(dir_name)
    
      if epoch_size_override:
    epoch_size = epoch_size_override
  else:
    epoch_size = (batch_len - 1) // num_steps
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
        @property
    def encoding(self):
        return 'utf8'
    
            Return a ``requests.auth.AuthBase`` subclass instance.
    
        if n == 1:
        return '1 B'
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
def test_unicode_form_item(httpbin):
    r = http('--form', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['form'] == {'test': UNICODE}
    
        def _remote_target_ids_to_remove(self):
        '''Returns a list of targets that need to be removed remotely'''
        target_ids = [t['id'] for t in self.targets]
        remote_targets = self.rule.list_targets()
        return [
            rt['id'] for rt in remote_targets if rt['id'] not in target_ids
        ]
    
        return youngest_snapshot
    
        state = module.params.get('state')
    group_name = module.params.get('name').lower()
    group_description = module.params.get('description')
    group_subnets = module.params.get('subnets') or {}
    
        if not HAS_BOTO3:
        module.fail_json(msg='boto3 required for this module')
    
    # The Prod alias will have a fixed version based on a variable
  - name: 'alias 'Prod' for function {{ lambda_facts.FunctionName }} '
    lambda_alias:
      state: '{{ state | default('present') }}'
      function_name: '{{ lambda_facts.FunctionName }}'
      name: Prod
      version: '{{ production_version }}'
      description: 'Production is version {{ production_version }}'
'''
    
        return [camel_dict_to_snake_dict(snapshot, ignore_list=['Tags']) for snapshot in results]
    
    
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
    def _get_commands_from_module(module, inproject):
    d = {}
    for cmd in _iter_command_classes(module):
        if inproject or not cmd.requires_project:
            cmdname = cmd.__module__.split('.')[-1]
            d[cmdname] = cmd()
    return d
    
            spider_loader = self.crawler_process.spider_loader
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.item import BaseItem
from scrapy.utils import display
from scrapy.utils.conf import arglist_to_dict
from scrapy.utils.spider import iterate_spider_output, spidercls_for_request
from scrapy.exceptions import UsageError
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath
    
            for i in self.tree.iterfind('video/quality'):
            quality = i.attrib ['value']
            url = i[0].attrib['playurl']
            self.stream_types.append({'id': quality,
                                      'video_profile': i.attrib ['desp']})
            self.streams[quality] = {'url': url,
                                     'video_profile': i.attrib ['desp']}
            self.streams_sorted = [dict([('id', stream_type['id'])] + list(self.streams[stream_type['id']].items())) for stream_type in self.__class__.stream_types if stream_type['id'] in self.streams]
    
    
def get_loop_file_path(title, output_dir):
    return os.path.join(output_dir, get_output_filename([], title, 'txt', None, False))
    
        if found:
        return True
    
    def facebook_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
            # attempt to extract images first
        # TBD: posts with > 4 images
        # TBD: album links
        html = get_html(parse.unquote(url), faker=True)
        real_urls = []
        for src in re.findall(r'src='([^']+)'[^>]*itemprop='image'', html):
            t = src.split('/')
            t[0], t[-2] = t[0] or 'https:', 's0-d'
            u = '/'.join(t)
            real_urls.append(u)
        if not real_urls:
            real_urls = [r1(r'<meta property='og:image' content='([^']+)', html)]
            real_urls = [re.sub(r'w\d+-h\d+-p', 's0', u) for u in real_urls]
        post_date = r1(r''?(20\d\d[-/]?[01]\d[-/]?[0123]\d)'?', html)
        post_id = r1(r'/posts/([^']+)', html)
        title = post_date + '_' + post_id
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError