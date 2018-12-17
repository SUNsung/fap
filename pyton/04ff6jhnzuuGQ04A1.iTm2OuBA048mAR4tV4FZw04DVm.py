
        
        
    z_mean_1xn = tf.get_variable(name=name+'/mean', shape=size_1xn,
                                 initializer=tf.constant_initializer(mean_init))
    self.mean_bxn = mean_bxn = tf.tile(z_mean_1xn, size_bx1)
    mean_bxn.set_shape(size__xn) # tile loses shape
    
      plt.subplot(nrows,2,5+subplot_cidx)
  plot_time_series(means, bidx,
                   n_to_plot=n_to_plot, scale=1.0,
                   title=col_title + ' Spikes (LFADS - red, Spikes - black)')
  plot_time_series(data_bxtxn, bidx, n_to_plot=n_to_plot, color='k', scale=1.0)
    
    # save down the inputs used to generate this data
train_inputs_u, valid_inputs_u = split_list_by_inds(u_e,
                                                    train_inds,
                                                    valid_inds)
train_inputs_u = nparray_and_transpose(train_inputs_u)
valid_inputs_u = nparray_and_transpose(valid_inputs_u)
    
    
def _EvalModel(dataset):
  '''Evaluate model perplexity using provided dataset.
    
      Raises:
    ValueError: if batch_size or num_steps are too high.
  '''
  del epoch_size_override
  data_len = len(raw_data)
  num_batches = data_len // batch_size - 1
    
    import numpy as np
from six.moves import xrange
import tensorflow as tf
    
      Returns:
    values:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.baseline_method == 'critic':
    if FLAGS.discriminator_model == 'seq2seq_vd':
      values = critic_vd.critic_seq2seq_vd_derivative(
          hparams, sequence, is_training, reuse=reuse)
    else:
      raise NotImplementedError
  else:
    raise NotImplementedError
  return values

    
    
def construct_ngrams_dict(ngrams_list):
  '''Construct a ngram dictionary which maps an ngram tuple to the number
  of times it appears in the text.'''
  counts = {}
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
            if 'latency' in request.args:
            latency = float(request.args['latency'][0])
            reactor.callLater(latency, self._finish, request)
            return NOT_DONE_YET
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    def _get_commands_from_entry_points(inproject, group='scrapy.commands'):
    cmds = {}
    for entry_point in pkg_resources.iter_entry_points(group):
        obj = entry_point.load()
        if inspect.isclass(obj):
            cmds[entry_point.name] = obj()
        else:
            raise Exception('Invalid entry point %s' % entry_point.name)
    return cmds
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
        def syntax(self):
        return '[options] <spider>'
    
        def short_desc(self):
        return 'Generate new spider using pre-defined templates'
    
        def __init__(self, crawler):
        self._crawler = crawler
        self._schemes = {}  # stores acceptable schemes on instancing
        self._handlers = {}  # stores instanced handlers for schemes
        self._notconfigured = {}  # remembers failed handlers
        handlers = without_none_values(
            crawler.settings.getwithbase('DOWNLOAD_HANDLERS'))
        for scheme, clspath in six.iteritems(handlers):
            self._schemes[scheme] = clspath
    
        def gotClient(self, client, request, filepath):
        self.client = client
        protocol = ReceivedDataProtocol(request.meta.get('ftp_local_filename'))
        return client.retrieveFile(filepath, protocol)\
                .addCallbacks(callback=self._build_response,
                        callbackArgs=(request, protocol),
                        errback=self._failed,
                        errbackArgs=(request,))
    
    
site_info = 'fantasy.tv'
download = fantasy_download
download_playlist = playlist_not_supported('fantasy.tv')

    
    
    {
    {pattern_inline_title = r'<title>([^<]*)</title>'
pattern_inline_api_key = r'api\.site_key\s*=\s*'([^']+)''
pattern_inline_img_url = r''url':'([^']+)','key':'[^']+'}}'
pattern_inline_NSID = r''nsid'\s*:\s*'([^']+)''
pattern_inline_video_mark = r'('mediaType':'video')'
    
    ### OUTPUT ###
# Ellipse: 1
# Ellipse: 2
# Ellipse: 3
# Ellipse: 4

    
    
class Person(object):
    def __init__(self, name, action):
        self.name = name
        self.action = action
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))
    
        def subscribe(self, msg):
        self.provider.subscribe(msg, self)
    
        def is_satisfied_by(self, candidate):
        return bool(self._one.is_satisfied_by(candidate) and self._other.is_satisfied_by(candidate))
    
    An example of the Template pattern in Python
    
        def register_object(self, name, obj):
        '''Register an object'''
        self._objects[name] = obj
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight
