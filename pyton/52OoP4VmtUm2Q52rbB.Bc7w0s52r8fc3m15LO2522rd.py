
        
        # Dependency labels used in the paths.
DEPLABELS = [
    'PAD',     'UNK',       'ROOT',    'abbrev',    'acomp', 'advcl',
    'advmod',  'agent',     'amod',    'appos',     'attr',  'aux',
    'auxpass', 'cc',        'ccomp',   'complm',    'conj',  'cop',
    'csubj',   'csubjpass', 'dep',     'det',       'dobj',  'expl',
    'infmod',  'iobj',      'mark',    'mwe',       'nc',    'neg',
    'nn',      'npadvmod',  'nsubj',   'nsubjpass', 'num',   'number',
    'p',       'parataxis', 'partmod', 'pcomp',     'pobj',  'poss',
    'preconj', 'predet',    'prep',    'prepc',     'prt',   'ps',
    'purpcl',  'quantmod',  'rcmod',   'ref',       'rel',   'suffix',
    'title',   'tmod',      'xcomp',   'xsubj',
]
    
      # Note that we put these 'truth' rates and input into this
  # structure, the only data that is used in LFADS are the noisy
  # data e.g. spike trains.  The rest is either for printing or posterity.
  data = {'train_truth': rates_train,
          'valid_truth': rates_valid,
          'input_train_truth' : input_train,
          'input_valid_truth' : inputs_valid,
          'train_data' : noisy_data_train,
          'valid_data' : noisy_data_valid,
          'train_percentage' : train_percentage,
          'nreplications' : nreplications,
          'dt' : rnn['dt'],
          'input_magnitude' : input_magnitude,
          'input_times_train' : input_times_train,
          'input_times_valid' : input_times_valid,
          'P_sxn' : P_sxn,
          'condition_labels_train' : condition_labels_train,
          'condition_labels_valid' : condition_labels_valid,
          'conversion_factor': 1.0 / rnn['conversion_factor']}
  datasets[dataset_name] = data
    
    def get_train_n_valid_inds(num_trials, train_fraction, nreplications):
  '''Split the numbers between 0 and num_trials-1 into two portions for
  training and validation, based on the train fraction.
  Args:
    num_trials: the number of trials
    train_fraction: (e.g. .80)
    nreplications: the number of spiking trials per initial condition
  Returns:
    a 2-tuple of two lists: the training indices and validation indices
    '''
  train_inds = []
  valid_inds = []
  for i in range(num_trials):
    # This line divides up the trials so that within one initial condition,
    # the randomness of spikifying the condition is shared among both
    # training and validation data splits.
    if (i % nreplications)+1 > train_fraction * nreplications:
      valid_inds.append(i)
    else:
      train_inds.append(i)
    
        Args:
      filename: Vocabulary file name.
    '''
    
    tf.app.flags.DEFINE_string(
    'data_dir', 'reproduce', 
    'Path to directory containing data and model checkpoints.')
    
    
def write_masked_log(log, id_to_word, sequence_eval, present_eval):
  indices_arr = np.asarray(sequence_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, present_eval,
                                      FLAGS.batch_size)
  for sample in samples:
    log.write(sample + '\n')
  log.flush()
  return samples
    
      Args:
    gen_logits:  Generator logits.
    gen_labels:  Labels for the correct token.
    dis_values:  Discriminator values Tensor of shape [batch_size,
      sequence_length].
    is_real_input:  Tensor indicating whether the label is present.
    
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
    
    
def create_masked_cross_entropy_loss(targets, present, logits):
  '''Calculate the cross entropy loss matrices for the masked tokens.'''
  cross_entropy_losses = losses.cross_entropy_loss_matrix(targets, logits)
    
    
def test_for_generic_shell(shell, logs):
    shell.how_to_configure.return_value = None
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    
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
    
    
def test_match():
    assert match(Command('apt list --upgradable', match_output))
    assert match(Command('sudo apt list --upgradable', match_output))
    
    You can install with Homebrew-Cask:
  brew cask install osxfuse
    
    
@pytest.mark.parametrize('command', [
    Command('cargo buid', no_such_subcommand_old),
    Command('cargo buils', no_such_subcommand)])
def test_match(command):
    assert match(command)
    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_side_effect(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    side_effect(Command(script.format(filename.format(ext)), ''), None)
    assert set(os.listdir('.')) == {unquoted.format(ext), 'd'}
    
    tmpl = Template('''\
<!doctype html>
<html>
  <head>
    <title>{{ page_title }}</title>
  </head>
  <body>
    <div class='header'>
      <h1>{{ page_title }}</h1>
    </div>
    <ul class='navigation'>
    {% for href, caption in [ \
        ('index.html', 'Index'), \
        ('downloads.html', 'Downloads'), \
        ('products.html', 'Products') \
      ] %}
      <li><a href='{{ href }}'>{{ caption }}</a></li>
    {% end %}
    </ul>
    <div class='table'>
      <table>
      {% for row in table %}
        <tr>
        {% for cell in row %}
          <td>{{ cell }}</td>
        {% end %}
        </tr>
      {% end %}
      </table>
    </div>
  </body>
</html>\
''')
    
        Note that for open file and socket handles it is generally
    preferable to set the ``FD_CLOEXEC`` flag (using `fcntl` or
    ``tornado.platform.auto.set_close_exec``) instead
    of using a reload hook to close them.
    '''
    _reload_hooks.append(fn)
    
            # In theory, we shouldn't have to do this because curl will
        # call _set_timeout whenever the timeout changes.  However,
        # sometimes after _handle_timeout we will need to reschedule
        # immediately even though nothing has changed from curl's
        # perspective.  This is because when socket_action is
        # called with SOCKET_TIMEOUT, libcurl decides internally which
        # timeouts need to be processed by using a monotonic clock
        # (where available) while tornado uses python's time.time()
        # to decide when timeouts have occurred.  When those clocks
        # disagree on elapsed time (as they will whenever there is an
        # NTP adjustment), tornado might call _handle_timeout before
        # libcurl is ready.  After each timeout, resync the scheduled
        # timeout with libcurl's current state.
        new_timeout = self._multi.timeout()
        if new_timeout >= 0:
            self._set_timeout(new_timeout)
    
    For each function or class described in `tornado.platform.interface`,
the appropriate platform-specific implementation exists in this module.
Most code that needs access to this functionality should do e.g.::
    
            :arg str template_string: the contents of the template file.
        :arg str name: the filename from which the template was loaded
            (used for error message).
        :arg tornado.template.BaseLoader loader: the `~tornado.template.BaseLoader` responsible
            for this template, used to resolve ``{% include %}`` and ``{% extend %}`` directives.
        :arg bool compress_whitespace: Deprecated since Tornado 4.3.
            Equivalent to ``whitespace='single'`` if true and
            ``whitespace='all'`` if false.
        :arg str autoescape: The name of a function in the template
            namespace, or ``None`` to disable escaping by default.
        :arg str whitespace: A string specifying treatment of whitespace;
            see `filter_whitespace` for options.
    
    JIS_TYPICAL_DISTRIBUTION_RATIO = 3.0
    
    # Character Mapping Table:
Latin2_HungarianCharToOrderMap = (
255,255,255,255,255,255,255,255,255,255,254,255,255,254,255,255,  # 00
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  # 10
253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,253,  # 20
252,252,252,252,252,252,252,252,252,252,253,253,253,253,253,253,  # 30
253, 28, 40, 54, 45, 32, 50, 49, 38, 39, 53, 36, 41, 34, 35, 47,
 46, 71, 43, 33, 37, 57, 48, 64, 68, 55, 52,253,253,253,253,253,
253,  2, 18, 26, 17,  1, 27, 12, 20,  9, 22,  7,  6, 13,  4,  8,
 23, 67, 10,  5,  3, 21, 19, 65, 62, 16, 11,253,253,253,253,253,
159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,
175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,
191,192,193,194,195,196,197, 75,198,199,200,201,202,203,204,205,
 79,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,
221, 51, 81,222, 78,223,224,225,226, 44,227,228,229, 61,230,231,
232,233,234, 58,235, 66, 59,236,237,238, 60, 69, 63,239,240,241,
 82, 14, 74,242, 70, 80,243, 72,244, 15, 83, 77, 84, 30, 76, 85,
245,246,247, 25, 73, 42, 24,248,249,250, 31, 56, 29,251,252,253,
)
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
    UCS2BE_CLS = (
    0,0,0,0,0,0,0,0,  # 00 - 07
    0,0,1,0,0,2,0,0,  # 08 - 0f
    0,0,0,0,0,0,0,0,  # 10 - 17
    0,0,0,3,0,0,0,0,  # 18 - 1f
    0,0,0,0,0,0,0,0,  # 20 - 27
    0,3,3,3,3,3,0,0,  # 28 - 2f
    0,0,0,0,0,0,0,0,  # 30 - 37
    0,0,0,0,0,0,0,0,  # 38 - 3f
    0,0,0,0,0,0,0,0,  # 40 - 47
    0,0,0,0,0,0,0,0,  # 48 - 4f
    0,0,0,0,0,0,0,0,  # 50 - 57
    0,0,0,0,0,0,0,0,  # 58 - 5f
    0,0,0,0,0,0,0,0,  # 60 - 67
    0,0,0,0,0,0,0,0,  # 68 - 6f
    0,0,0,0,0,0,0,0,  # 70 - 77
    0,0,0,0,0,0,0,0,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,0,0,0,0,0,0,0,  # a0 - a7
    0,0,0,0,0,0,0,0,  # a8 - af
    0,0,0,0,0,0,0,0,  # b0 - b7
    0,0,0,0,0,0,0,0,  # b8 - bf
    0,0,0,0,0,0,0,0,  # c0 - c7
    0,0,0,0,0,0,0,0,  # c8 - cf
    0,0,0,0,0,0,0,0,  # d0 - d7
    0,0,0,0,0,0,0,0,  # d8 - df
    0,0,0,0,0,0,0,0,  # e0 - e7
    0,0,0,0,0,0,0,0,  # e8 - ef
    0,0,0,0,0,0,0,0,  # f0 - f7
    0,0,0,0,0,0,4,5   # f8 - ff
)
    
        def feed(self, byte_str):
        if not self._model['keep_english_letter']:
            byte_str = self.filter_international_words(byte_str)
        if not byte_str:
            return self.state
        char_to_order_map = self._model['char_to_order_map']
        for i, c in enumerate(byte_str):
            # XXX: Order is in range 1-64, so one would think we want 0-63 here,
            #      but that leads to 27 more test failures than before.
            order = char_to_order_map[c]
            # XXX: This was SYMBOL_CAT_ORDER before, with a value of 250, but
            #      CharacterCategory.SYMBOL is actually 253, so we use CONTROL
            #      to make it closer to the original intent. The only difference
            #      is whether or not we count digits and control characters for
            #      _total_char purposes.
            if order < CharacterCategory.CONTROL:
                self._total_char += 1
            if order < self.SAMPLE_SIZE:
                self._freq_char += 1
                if self._last_order < self.SAMPLE_SIZE:
                    self._total_seqs += 1
                    if not self._reversed:
                        i = (self._last_order * self.SAMPLE_SIZE) + order
                        model = self._model['precedence_matrix'][i]
                    else:  # reverse the order of the letters in the lookup
                        i = (order * self.SAMPLE_SIZE) + self._last_order
                        model = self._model['precedence_matrix'][i]
                    self._seq_counters[model] += 1
            self._last_order = order