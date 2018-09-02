
        
          # Print the confusion matrix
  print('%s confusion matrix:' % set_name)
  cm = metrics.confusion_matrix(labels, pred, labels=range(len(classes)))
  cm = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis] * 100
  print_cm(cm, labels=classes)
  return pred
    
    class Poisson(object):
  '''Poisson distributon
    
      Returns:
    dictionary of hyper parameters (ignoring other flag types).
  '''
  d = {}
  # Data
  d['output_dist'] = flags.output_dist
  d['data_dir'] = flags.data_dir
  d['lfads_save_dir'] = flags.lfads_save_dir
  d['checkpoint_pb_load_name'] = flags.checkpoint_pb_load_name
  d['checkpoint_name'] = flags.checkpoint_name
  d['output_filename_stem'] = flags.output_filename_stem
  d['max_ckpt_to_keep'] = flags.max_ckpt_to_keep
  d['max_ckpt_to_keep_lve'] = flags.max_ckpt_to_keep_lve
  d['ps_nexamples_to_process'] = flags.ps_nexamples_to_process
  d['ext_input_dim'] = flags.ext_input_dim
  d['data_filename_stem'] = flags.data_filename_stem
  d['device'] = flags.device
  d['csv_log'] = flags.csv_log
  d['num_steps_for_gen_ic'] = flags.num_steps_for_gen_ic
  d['inject_ext_input_to_gen'] = flags.inject_ext_input_to_gen
  # Cell
  d['cell_weight_scale'] = flags.cell_weight_scale
  # Generation
  d['ic_dim'] = flags.ic_dim
  d['factors_dim'] = flags.factors_dim
  d['ic_enc_dim'] = flags.ic_enc_dim
  d['gen_dim'] = flags.gen_dim
  d['gen_cell_input_weight_scale'] = flags.gen_cell_input_weight_scale
  d['gen_cell_rec_weight_scale'] = flags.gen_cell_rec_weight_scale
  # KL distributions
  d['ic_prior_var_min'] = flags.ic_prior_var_min
  d['ic_prior_var_scale'] = flags.ic_prior_var_scale
  d['ic_prior_var_max'] = flags.ic_prior_var_max
  d['ic_post_var_min'] = flags.ic_post_var_min
  d['co_prior_var_scale'] = flags.co_prior_var_scale
  d['prior_ar_atau'] = flags.prior_ar_atau
  d['prior_ar_nvar'] =  flags.prior_ar_nvar
  d['do_train_prior_ar_atau'] = flags.do_train_prior_ar_atau
  d['do_train_prior_ar_nvar'] = flags.do_train_prior_ar_nvar
  # Controller
  d['do_causal_controller'] = flags.do_causal_controller
  d['controller_input_lag'] = flags.controller_input_lag
  d['do_feed_factors_to_controller'] = flags.do_feed_factors_to_controller
  d['feedback_factors_or_rates'] = flags.feedback_factors_or_rates
  d['co_dim'] = flags.co_dim
  d['ci_enc_dim'] = flags.ci_enc_dim
  d['con_dim'] = flags.con_dim
  d['co_mean_corr_scale'] = flags.co_mean_corr_scale
  # Optimization
  d['batch_size'] = flags.batch_size
  d['learning_rate_init'] = flags.learning_rate_init
  d['learning_rate_decay_factor'] = flags.learning_rate_decay_factor
  d['learning_rate_stop'] = flags.learning_rate_stop
  d['learning_rate_n_to_compare'] = flags.learning_rate_n_to_compare
  d['max_grad_norm'] = flags.max_grad_norm
  d['cell_clip_value'] = flags.cell_clip_value
  d['do_train_io_only'] = flags.do_train_io_only
  d['do_train_encoder_only'] = flags.do_train_encoder_only
  d['do_reset_learning_rate'] = flags.do_reset_learning_rate
  d['do_train_readin'] = flags.do_train_readin
    
    
def linear(x, out_size, do_bias=True, alpha=1.0, identity_if_possible=False,
           normalized=False, name=None, collections=None):
  '''Linear (affine) transformation, y = x W + b, for a variety of
  configurations.
    
        for i, word in enumerate(self._id_to_word):
      self._word_char_ids[i] = self._convert_word_to_char_ids(word)
    
      prefix = [vocab.word_to_id(w) for w in prefix_words.split()]
  prefix_char_ids = [vocab.word_to_char_ids(w) for w in prefix_words.split()]
  for _ in xrange(FLAGS.num_samples):
    inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
    char_ids_inputs = np.zeros(
        [BATCH_SIZE, NUM_TIMESTEPS, vocab.max_word_length], np.int32)
    samples = prefix[:]
    char_ids_samples = prefix_char_ids[:]
    sent = ''
    while True:
      inputs[0, 0] = samples[0]
      char_ids_inputs[0, 0, :] = char_ids_samples[0]
      samples = samples[1:]
      char_ids_samples = char_ids_samples[1:]
    
    
def imdb_raw_data(data_path=None):
  '''Load IMDB raw data from data directory 'data_path'.
  Reads IMDB tf record files containing integer ids,
  and performs mini-batching of the inputs.
  Args:
    data_path: string path to the directory where simple-examples.tgz has
      been extracted.
  Returns:
    tuple (train_data, valid_data)
    where each of the data objects can be passed to IMDBIterator.
  '''
    
    
@pytest.fixture(autouse=True)
def no_cache(monkeypatch):
    monkeypatch.setattr('thefuck.utils.cache.disabled', True)
    
    
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
    
    
def test_get_new_command():
    new_command = get_new_command(Command('apt list --upgradable', match_output))
    assert new_command == 'apt upgrade'
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument operation: Invalid choice, valid choices are:
    
        def _get_obj_info(self, obj, depth=99, seen=None):
        '''
        Recursively build a data structure for the given pSphere object (depth
        only applies to ManagedObject instances).
        '''
        seen = seen or set()
        if isinstance(obj, ManagedObject):
            try:
                obj_unicode = text_type(getattr(obj, 'name'))
            except AttributeError:
                obj_unicode = ()
            if obj in seen:
                return obj_unicode
            seen.add(obj)
            if depth <= 0:
                return obj_unicode
            d = {}
            for attr in dir(obj):
                if attr.startswith('_'):
                    continue
                try:
                    val = getattr(obj, attr)
                    obj_info = self._get_obj_info(val, depth - 1, seen)
                    if obj_info != ():
                        d[attr] = obj_info
                except Exception as e:
                    pass
            return d
        elif isinstance(obj, SudsObject):
            d = {}
            for key, val in iter(obj):
                obj_info = self._get_obj_info(val, depth, seen)
                if obj_info != ():
                    d[key] = obj_info
            return d
        elif isinstance(obj, (list, tuple)):
            l = []
            for val in iter(obj):
                obj_info = self._get_obj_info(val, depth, seen)
                if obj_info != ():
                    l.append(obj_info)
            return l
        elif isinstance(obj, (type(None), bool, float) + string_types + integer_types):
            return obj
        else:
            return ()
    
        # build ordered list to loop over and dict with attributes
    clist.append(name)
    oblist[name] = dict((x, aobj.__dict__['_attributes'][x]) for x in aobj.__dict__['_attributes'] if 'private' not in x or not x.private)
    
                if record[12] == 'core':
                supported_by = 'core'
            elif record[12] == 'curated':
                supported_by = 'curated'
            elif record[12] == 'community':
                supported_by = 'community'
            else:
                print('Module %s has no supported_by field.  Using community' % record[0])
                supported_by = 'community'
                supported_by = DEFAULT_METADATA['supported_by']
    
        integration_target_aliases_rows = [dict(
        target=target.name,
        alias=alias,
    ) for target in targets for alias in target.aliases]
    
    try:
    ansible_out = subprocess.check_output(
        ['ansible', 'localhost', '-m', 'setup'])
except subprocess.CalledProcessError as e:
    print('ERROR: ansible run failed, output was: \n')
    print(e.output)
    sys.exit(e.returncode)
    
            # set host pattern to default if not supplied
        if len(self.args) > 0:
            self.options.pattern = self.args[0]
        else:
            self.options.pattern = 'all'
    
    GITHUB_PATH = '{}/{}'.format(
    PROJECT_GITHUB_USERNAME, PROJECT_GITHUB_REPOSITORY)
GITHUB_URL = 'https://github.com/{}'.format(GITHUB_PATH)
    
        @callback
    def async_remove():
        '''Remove state listeners async.'''
        unsub()
        for async_remove in unsub_track_same.values():
            async_remove()
        unsub_track_same.clear()
    
        if event == SUN_EVENT_SUNRISE:
        return async_track_sunrise(hass, call_action, offset)
    return async_track_sunset(hass, call_action, offset)

    
    
@asyncio.coroutine
def async_trigger(hass, config, action):
    '''Listen for state changes based on configuration.'''
    value_template = config.get(CONF_VALUE_TEMPLATE)
    value_template.hass = hass
    
        return async_track_state_change(hass, entity_id, zone_automation_listener,
                                    MATCH_ALL, MATCH_ALL)

    
        @property
    def device_state_attributes(self):
        '''Return device specific state attributes.'''
        return {'address': self.address}
    
        url = '/api/cloud/login'
    name = 'api:cloud:login'
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client.mac == device:
                return client.ip
        return None