
        
          # Print rows
  for i, label1 in enumerate(short_labels):
    row = '%{0}s '.format(columnwidth) % label1[:10]
    for j in range(len(short_labels)):
      value = int(cm[i, j]) if not np.isnan(cm[i, j]) else 0
      cell = ' %{0}d '.format(10) % value
      row += cell + ' '
    print(row)
    
    
def plot_lfads(train_bxtxd, train_model_vals,
               train_ext_input_bxtxi=None, train_truth_bxtxd=None,
               valid_bxtxd=None, valid_model_vals=None,
               valid_ext_input_bxtxi=None, valid_truth_bxtxd=None,
               bidx=None, cf=1.0, output_dist='poisson'):
    
      # print('Number of batches per epoch: %d' % epoch_size)
  for i in range(epoch_size):
    x = data[:, i * num_steps:(i + 1) * num_steps]
    y = data[:, i * num_steps + 1:(i + 1) * num_steps + 1]
    w = np.ones_like(x)
    yield (x, y, w)

    
    
def print_and_log(log, id_to_word, sequence_eval, max_num_to_print=5):
  '''Helper function for printing and logging evaluated sequences.'''
  indices_eval = convert_to_indices(sequence_eval)
  indices_arr = np.asarray(indices_eval)
  samples = convert_to_human_readable(id_to_word, indices_arr, max_num_to_print)
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
      Returns:
    variable_mapping:  Dictionary with Key: ckpt_name, Value: model_varself.
  '''
  assert FLAGS.discriminator_model == 'seq2seq_vd'
  assert hparams.dis_num_layers == 2
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
    
def sanitize_module_name(module_name):
    '''Sanitize the given module name, by replacing dashes and points
    with underscores and prefixing it with a letter if it doesn't start
    with one
    '''
    module_name = module_name.replace('-', '_').replace('.', '_')
    if module_name[0] not in string.ascii_letters:
        module_name = 'a' + module_name
    return module_name
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath
    
        def download_request(self, request, spider):
        parsed_url = urlparse_cached(request)
        user = request.meta.get('ftp_user', self.default_user)
        password = request.meta.get('ftp_password', self.default_password)
        passive_mode = 1 if bool(request.meta.get('ftp_passive',
                                                  self.passive_mode)) else 0
        creator = ClientCreator(reactor, FTPClient, user, password,
            passive=passive_mode)
        return creator.connectTCP(parsed_url.hostname, parsed_url.port or 21).addCallback(self.gotClient,
                                request, unquote(parsed_url.path))
    
            self.assertEqual(self.vhosts[5], self._call(self.vhosts))
    
        def test_simple(self):
        def f(p):
            pass
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
        @property
    def suffixes(self):
        '''A list of the final component's suffixes, if any.'''
        name = self.name
        if name.endswith('.'):
            return []
        name = name.lstrip('.')
        return ['.' + suffix for suffix in name.split('.')[1:]]
    
        if AVAILABLE_TARGETS:
        # Coercion is expected to use the first available target locale
        CLI_COERCION_TARGET = AVAILABLE_TARGETS[0]
        CLI_COERCION_WARNING = CLI_COERCION_WARNING_FMT.format(CLI_COERCION_TARGET)
    
    --Pepé
''')