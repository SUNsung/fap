
        
            def append_to_front(self, node):
        pass
    
        def _park_starting_at_spot(self, spot, vehicle):
        '''Occupy starting at spot.spot_number to vehicle.spot_size.'''
        pass
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
          if hps.do_train_readin:
          # only add to IO transformations collection only if we want it to be
          # learnable, because IO_transformations collection will be trained
          # when do_train_io_only
          collections_readin=['IO_transformations']
      else:
          collections_readin=None
    
    
def plot_lfads(train_bxtxd, train_model_vals,
               train_ext_input_bxtxi=None, train_truth_bxtxd=None,
               valid_bxtxd=None, valid_model_vals=None,
               valid_ext_input_bxtxi=None, valid_truth_bxtxd=None,
               bidx=None, cf=1.0, output_dist='poisson'):
    
      def call(self, h_tm1_bxn, u_bx1):
    act_t_bxn = tf.matmul(h_tm1_bxn, self.Wh_nxn) + self.b_1xn + u_bx1 * self.Bu_1xn
    h_t_bxn = tf.nn.tanh(act_t_bxn)
    z_t = tf.nn.xw_plus_b(h_t_bxn, self.Wro_nxo, self.bro_o)
    return z_t, h_t_bxn
    
    # generate trials for both RNNs
rates_a, x0s_a, _ = generate_data(rnn_a, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_a = spikify_data(rates_a, rng, rnn_a['dt'], rnn_a['max_firing_rate'])
    
      Args:
    values: Value given by the Wasserstein Discriminator of shape [batch_size,
      sequence_length] to an imputed batch (real and fake).
    is_real_input: tf.bool Tensor of shape [batch_size, sequence_length]. If
      true, it indicates that the label is known.
    
    
def variable_summaries(var, name):
  '''Attach a lot of summaries to a Tensor.'''
  mean = tf.reduce_mean(var)
  tf.summary.scalar('mean/' + name, mean)
  with tf.name_scope('stddev'):
    stddev = tf.sqrt(tf.reduce_sum(tf.square(var - mean)))
  tf.summary.scalar('sttdev/' + name, stddev)
  tf.summary.scalar('max/' + name, tf.reduce_max(var))
  tf.summary.scalar('min/' + name, tf.reduce_min(var))
  tf.summary.histogram(name, var)
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
        elif FLAGS.discriminator_model == 'seq2seq_vd':
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_encoder_init_saver = init_savers['dis_encoder_init_saver']
      dis_decoder_init_saver = init_savers['dis_decoder_init_saver']
      dis_encoder_init_saver.restore(sess, load_ckpt)
      dis_decoder_init_saver.restore(sess, load_ckpt)
    
    
def find_all_ngrams(dataset, n):
  '''Generate a list of all ngrams.'''
  return zip(*[dataset[i:] for i in xrange(n)])
    
            try:
            region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
            self.client = boto3_conn(module, conn_type='client',
                                     resource='cloudformation', region=region,
                                     endpoint=ec2_url, **aws_connect_kwargs)
            backoff_wrapper = AWSRetry.jittered_backoff(retries=10, delay=3, max_delay=30)
            self.client.describe_stacks = backoff_wrapper(self.client.describe_stacks)
            self.client.list_stack_resources = backoff_wrapper(self.client.list_stack_resources)
            self.client.describe_stack_events = backoff_wrapper(self.client.describe_stack_events)
            self.client.get_stack_policy = backoff_wrapper(self.client.get_stack_policy)
            self.client.get_template = backoff_wrapper(self.client.get_template)
        except botocore.exceptions.NoRegionError:
            self.module.fail_json(msg='Region must be specified as a parameter, in AWS_DEFAULT_REGION environment variable or in boto configuration file')
        except Exception as e:
            self.module.fail_json(msg='Can't establish connection - ' + str(e), exception=traceback.format_exc())
    
            try:
            current_config = self.client.get_cloud_front_origin_access_identity_config(
                Id=origin_access_identity_id)['CloudFrontOriginAccessIdentityConfig']
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error getting Origin Access Identity config.')
    
    RETURN = '''
log_groups:
    description: Return the list of complex objetcs representing log groups
    returned: success
    type: complex
    contains:
        log_group_name:
            description: The name of the log group.
            returned: always
            type: string
        creation_time:
            description: The creation time of the log group.
            returned: always
            type: integer
        retention_in_days:
            description: The number of days to retain the log events in the specified log group.
            returned: always
            type: integer
        metric_filter_count:
            description: The number of metric filters.
            returned: always
            type: integer
        arn:
            description: The Amazon Resource Name (ARN) of the log group.
            returned: always
            type: string
        stored_bytes:
            description: The number of bytes stored.
            returned: always
            type: string
        kms_key_id:
            description: The Amazon Resource Name (ARN) of the CMK to use when encrypting log data.
            returned: always
            type: string
'''
    
    RETURN = '''
images:
  description: a list of images
  returned: always
  type: complex
  contains:
    architecture:
      description: The architecture of the image
      returned: always
      type: string
      sample: x86_64
    block_device_mappings:
      description: Any block device mapping entries
      returned: always
      type: complex
      contains:
        device_name:
          description: The device name exposed to the instance
          returned: always
          type: string
          sample: /dev/sda1
        ebs:
          description: EBS volumes
          returned: always
          type: complex
    creation_date:
      description: The date and time the image was created
      returned: always
      type: string
      sample: '2017-10-16T19:22:13.000Z'
    description:
      description: The description of the AMI
      returned: always
      type: string
      sample: ''
    ena_support:
      description: whether enhanced networking with ENA is enabled
      returned: always
      type: bool
      sample: true
    hypervisor:
      description: The hypervisor type of the image
      returned: always
      type: string
      sample: xen
    image_id:
      description: The ID of the AMI
      returned: always
      type: string
      sample: ami-5b466623
    image_location:
      description: The location of the AMI
      returned: always
      type: string
      sample: 408466080000/Webapp
    image_type:
      description: The type of image
      returned: always
      type: string
      sample: machine
    launch_permissions:
      description: launch permissions of the ami
      returned: when image is owned by calling account and describe_image_attributes is yes
      type: complex
      sample: [{'group': 'all'}, {'user_id': '408466080000'}]
    name:
      description: The name of the AMI that was provided during image creation
      returned: always
      type: string
      sample: Webapp
    owner_id:
      description: The AWS account ID of the image owner
      returned: always
      type: string
      sample: '408466080000'
    public:
      description: whether the image has public launch permissions
      returned: always
      type: bool
      sample: true
    root_device_name:
      description: The device name of the root device
      returned: always
      type: string
      sample: /dev/sda1
    root_device_type:
      description: The type of root device used by the AMI
      returned: always
      type: string
      sample: ebs
    sriov_net_support:
      description: whether enhanced networking is enabled
      returned: always
      type: string
      sample: simple
    state:
      description: The current state of the AMI
      returned: always
      type: string
      sample: available
    tags:
      description: Any tags assigned to the image
      returned: always
      type: complex
    virtualization_type:
      description: The type of virtualization of the AMI
      returned: always
      type: string
      sample: hvm
'''
    
    
def main():
    
        if region:
        try:
            connection = connect_to_aws(boto.ec2.cloudwatch, region, **aws_connect_params)
        except (NoAuthHandlerFound, AnsibleAWSError) as e:
            module.fail_json(msg=str(e))
    else:
        module.fail_json(msg='region must be specified')
    
    # List all placement groups.
- ec2_placement_group_facts:
  register: all_ec2_placement_groups
    
    
def list_ec2_snapshots(connection, module):
    
    Linkfix - a companion to sphinx's linkcheck builder.
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
            if opts.loglevel:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_LEVEL', opts.loglevel, priority='cmdline')
    
        def process_options(self, args, opts):
        ScrapyCommand.process_options(self, args, opts)
        try:
            opts.spargs = arglist_to_dict(opts.spargs)
        except ValueError:
            raise UsageError('Invalid -a value, use -a NAME=VALUE', print_help=False)
        if opts.output:
            if opts.output == '-':
                self.settings.set('FEED_URI', 'stdout:', priority='cmdline')
            else:
                self.settings.set('FEED_URI', opts.output, priority='cmdline')
            feed_exporters = without_none_values(
                self.settings.getwithbase('FEED_EXPORTERS'))
            valid_output_formats = feed_exporters.keys()
            if not opts.output_format:
                opts.output_format = os.path.splitext(opts.output)[1].replace('.', '')
            if opts.output_format not in valid_output_formats:
                raise UsageError('Unrecognized output format '%s', set one'
                                 ' using the '-t' switch or as a file extension'
                                 ' from the supported list %s' % (opts.output_format,
                                                                  tuple(valid_output_formats)))
            self.settings.set('FEED_FORMAT', opts.output_format, priority='cmdline')
    
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

    
        def short_desc(self):
        return 'Print Scrapy version'
    
        def _failed(self, result, request):
        message = result.getErrorMessage()
        if result.type == CommandFailed:
            m = _CODE_RE.search(message)
            if m:
                ftpcode = m.group()
                httpcode = self.CODE_MAPPING.get(ftpcode, self.CODE_MAPPING['default'])
                return Response(url=request.url, status=httpcode, body=to_bytes(message))
        raise result.type(result.value)
    
    WScript.quit
'''
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
    	# Track the line at which the error occurred in case this is
	# generated from a lexer.  We need to track this since the
        # unexpected char doesn't carry the line info.
        self.line = None
    
    *Where is the pattern used practically?
In graphics editors a shape can be basic or complex. An example of a
simple shape is a line, where a complex shape is a rectangle which is
made of four line objects. Since shapes have many operations in common
such as rendering the shape to screen, and since shapes follow a
part-whole hierarchy, composite pattern can be used to enable the
program to deal with all shapes uniformly.
    
        fftv = Publisher(message_center)
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        # A shop that sells random animals
    shop = PetShop(random_animal)
    for i in range(3):
        shop.show_pet()
        print('=' * 20)
    
    '''
*What is this pattern about?
It decouples the creation of a complex object and its representation,
so that the same process can be reused to build objects from the same
family.
This is useful when you must separate the specification of an object
from its actual representation (generally for abstraction).
    
    
if __name__ == '__main__':
    main()
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    class TimeDisplay(object):
    
        def find_all_path(self, start, end, path=None):
        path = path or []
        path.append(start)
        if start == end:
            return [path]
        paths = []
        for node in self.graph.get(start, []):
            if node not in path:
                newpaths = self.find_all_path(node, end, path[:])
                paths.extend(newpaths)
        return paths