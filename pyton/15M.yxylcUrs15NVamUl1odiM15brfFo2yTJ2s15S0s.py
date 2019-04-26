
        
          # Four initially random vectors for the special tokens: <PAD>, <UNK>, <X>, <Y>
  special_embeddings = np.random.normal(0, 0.1, (4, dim))
  embeddings = np.vstack((special_embeddings, embeddings))
  embeddings = embeddings.astype(np.float32)
    
    matplotlib.rcParams['image.interpolation'] = 'nearest'
DATA_DIR = 'rnn_synth_data_v1.0'
    
      def __init__(self, filename, max_word_length):
    super(CharsVocabulary, self).__init__(filename)
    self._max_word_length = max_word_length
    chars_set = set()
    
      if FLAGS.output_masked_logs:
    samples = write_masked_log(log, id_to_word, sequence_eval, p)
  else:
    samples = write_unmasked_log(log, id_to_word, sequence_eval)
  return samples
    
    from models import bidirectional_zaremba
from models import cnn
from models import critic_vd
from models import feedforward
from models import rnn
from models import rnn_nas
from models import rnn_vd
from models import rnn_zaremba
from models import seq2seq
from models import seq2seq_nas
from models import seq2seq_vd
from models import seq2seq_zaremba
    
    
def retrieve_init_savers(hparams):
  '''Retrieve a dictionary of all the initial savers for the models.
    
      # Dictionary mapping.
  if model == 'gen':
    variable_mapping = {
        'Model/embedding': embedding,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': lstm_w_0,
        'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': lstm_b_0,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': lstm_w_1,
        'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': lstm_b_1,
        'Model/softmax_w': softmax_w,
        'Model/softmax_b': softmax_b
    }
  else:
    if FLAGS.dis_share_embedding:
      variable_mapping = {
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': lstm_w_0,
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': lstm_b_0,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': lstm_w_1,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': lstm_b_1
      }
    else:
      variable_mapping = {
          'Model/embedding': embedding,
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': lstm_w_0,
          'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': lstm_b_0,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': lstm_w_1,
          'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': lstm_b_1
      }
    
    
@function.Defun(func_name='attn_mul_fun', noinline=True)
def _attn_mul_fun(keys, query):
  return tf.reduce_sum(keys * query, [2])
    
      with tf.variable_scope('dis', reuse=reuse):
    cell_fwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    cell_bwd = tf.contrib.rnn.LayerNormBasicLSTMCell(
        hparams.dis_rnn_size, forget_bias=1.0, reuse=reuse)
    if FLAGS.zoneout_drop_prob > 0.0:
      cell_fwd = zoneout.ZoneoutWrapper(
          cell_fwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
      cell_bwd = zoneout.ZoneoutWrapper(
          cell_bwd,
          zoneout_drop_prob=FLAGS.zoneout_drop_prob,
          is_training=is_training)
    
        if RESULT and ('info_dict' not in test or 'age_limit' not in test['info_dict'] or
                   test['info_dict']['age_limit'] != 18):
        print('\nPotential missing age_limit check: {0}'.format(test['name']))
    
    import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    new_version = {}
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
    import io
import sys
import re
    
        outfile, = args
    
        return ret
    
        def test_socks4(self):
        self.assertTrue(isinstance(self._get_ip('socks4'), compat_str))
    
        def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
    
class TextTestResult(_TextTestResult):
    def printSummary(self, start, stop):
        write = self.stream.write
        writeln = self.stream.writeln
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
        def _build_response(self, body, request):
        request.meta['download_latency'] = self.headers_time-self.start_time
        status = int(self.status)
        headers = Headers(self.response_headers)
        respcls = responsetypes.from_args(headers=headers, url=self._url)
        return respcls(url=self._url, status=status, headers=headers, body=body)