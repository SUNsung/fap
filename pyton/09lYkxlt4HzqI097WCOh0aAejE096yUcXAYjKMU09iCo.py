
        
          with open(embedding_file) as f_in:
    embeddings = np.load(f_in)
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'itb_rnn',
                    'Name of data file for input case.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 800, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 5,
                     'Number of spikifications of the same underlying rates.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('max_firing_rate', 30.0,
                   'Map 1.0 of RNN to a spikes per second')
flags.DEFINE_float('u_std', 0.25,
                   'Std dev of input to integration to bound model')
flags.DEFINE_string('checkpoint_path', 'SAMPLE_CHECKPOINT',
                    '''Path to directory with checkpoints of model
                    trained on integration to bound task. Currently this
                    is a placeholder which tells the code to grab the
                    checkpoint that is provided with the code
                    (in /trained_itb/..). If you have your own checkpoint
                    you would like to restore, you would point it to
                    that path.''')
FLAGS = flags.FLAGS
    
      def _score_patches(self, word_patches):
    '''Score a 2D matrix of word_patches and stitch results together.'''
    batch_size, num_timesteps = self.shape
    nrow, ncol = len(word_patches), len(word_patches[0])
    max_len = num_timesteps * ncol
    probs = np.zeros([0, max_len])  # accumulate results into this.
    
    '''IMDB data loader and helpers.'''
    
      Args:
    gen_logits:  Generator logits.
    gen_labels:  Labels for the correct token.
    dis_values:  Discriminator values Tensor of shape [batch_size,
      sequence_length].
    is_real_input:  Tensor indicating whether the label is present.
    
      return variable_mapping

    
    # ZoneoutWrapper.
from regularization import zoneout
    
    # Ignore noisy twisted deprecation warnings
import warnings
warnings.filterwarnings('ignore', category=DeprecationWarning, module='twisted')
del warnings
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
            assertion = (self.min_bound <= occurrences <= self.max_bound)
    
    
logger = logging.getLogger(__name__)
    
    from twisted.web.client import HTTPClientFactory
from twisted.web.http import HTTPClient
from twisted.internet import defer
    
        def _format_cookie(self, cookie):
        # build cookie string
        cookie_str = '%s=%s' % (cookie['name'], cookie['value'])
    
    if args.quiet:
    jieba.setLogLevel(60)
if args.pos:
    import jieba.posseg
    posdelim = args.pos
    def cutfunc(sentence, _, HMM=True):
        for w, f in jieba.posseg.cut(sentence, HMM):
            yield w + posdelim + f
else:
    cutfunc = jieba.cut
    
    from __future__ import absolute_import, unicode_literals
import sys
from operator import itemgetter
from collections import defaultdict
import jieba.posseg
from .tfidf import KeywordExtractor
from .._compat import *
    
        def __init__(self):
        self._total_rel = None
        self._rel_sample = None
        self._need_to_skip_char_num = None
        self._last_char_order = None
        self._done = None
        self.reset()
    
        @property
    def charset_name(self):
        return 'ISO-8859-1'
    
    # To be accurate, the length of class 6 can be either 2 or 4.
# But it is not necessary to discriminate between the two since
# it is used for frequency analysis only, and we are validating
# each code range there as well. So it is safe to set it to be
# 2 here.
GB2312_CHAR_LEN_TABLE = (0, 1, 1, 1, 1, 1, 2)
    
            charset_name = self._model['charset_name']
        if self.state == ProbingState.DETECTING:
            if self._total_seqs > self.SB_ENOUGH_REL_THRESHOLD:
                confidence = self.get_confidence()
                if confidence > self.POSITIVE_SHORTCUT_THRESHOLD:
                    self.logger.debug('%s confidence = %s, we have a winner',
                                      charset_name, confidence)
                    self._state = ProbingState.FOUND_IT
                elif confidence < self.NEGATIVE_SHORTCUT_THRESHOLD:
                    self.logger.debug('%s confidence = %s, below negative '
                                      'shortcut threshhold %s', charset_name,
                                      confidence,
                                      self.NEGATIVE_SHORTCUT_THRESHOLD)
                    self._state = ProbingState.NOT_ME
    
        def reset(self):
        super(SingleByteCharSetProber, self).reset()
        # char order of last character
        self._last_order = 255
        self._seq_counters = [0] * SequenceLikelihood.get_num_categories()
        self._total_seqs = 0
        self._total_char = 0
        # characters that fall in our sampling range
        self._freq_char = 0
    
        def get_confidence(self):
        context_conf = self.context_analyzer.get_confidence()
        distrib_conf = self.distribution_analyzer.get_confidence()
        return max(context_conf, distrib_conf)

    
        def feed(self, byte_str):
        for c in byte_str:
            coding_state = self.coding_sm.next_state(c)
            if coding_state == MachineState.ERROR:
                self._state = ProbingState.NOT_ME
                break
            elif coding_state == MachineState.ITS_ME:
                self._state = ProbingState.FOUND_IT
                break
            elif coding_state == MachineState.START:
                if self.coding_sm.get_current_charlen() >= 2:
                    self._num_mb_chars += 1