
        
            def approve_friend_request(self, from_user_id, to_user_id):
        pass
    
            Emit key value pairs of the form:
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
        for chunk in xrange(0, len(test_pred), self.hparams.batch_size):
    
    
def plot_lfads_timeseries(data_bxtxn, model_vals, ext_input_bxtxi=None,
                          truth_bxtxn=None, bidx=None, output_dist='poisson',
                          conversion_factor=1.0, subplot_cidx=0,
                          col_title=None):
    
    data_train_truth = nparray_and_transpose(data_train_truth)
data_valid_truth = nparray_and_transpose(data_valid_truth)
data_train_spiking = nparray_and_transpose(data_train_spiking)
data_valid_spiking = nparray_and_transpose(data_valid_spiking)
    
        if no_more_data and np.sum(weights) == 0:
      # There is no more data and this is an empty batch. Done!
      break
    yield inputs, char_inputs, global_word_ids, targets, weights
    
    
if __name__ == '__main__':
  tf.app.run()

    
      def evaluate(self):
    '''Evaluate the current ensemble.'''
    # Attach word probabilities and correctness label to each substitution
    ensembled_probs = sum(self.all_probs) / len(self.all_probs)
    scorings = []
    for i, sentence in enumerate(self.sentences):
      correctness = self.labels[i]
      word_probs = ensembled_probs[i, :len(sentence)]
      joint_prob = np.prod(word_probs, dtype=np.float64)
    
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
    
      Args:
    session:  Current tf.Session.
    percent_real_update: tf.assign operation.
    new_rate: tf.placeholder for the new rate.
    current_rate: Percent of tokens that are currently real.  Fake tokens
      are the ones being imputed by the Generator.
  '''
  session.run(percent_real_update, feed_dict={new_rate: current_rate})
    
      decoder_embedding = [
      v for v in tf.trainable_variables()
      if v.op.name == 'gen/decoder/rnn/embedding'
  ][0]
  decoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  decoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
  decoder_softmax_b = [
      v for v in tf.trainable_variables()
      if v.op.name == 'gen/decoder/rnn/softmax_b'
  ][0]
    
          # combine cell_input and attention
      next_input = tf.concat([cell_input, attention], 1)
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []
    
        # TASK: Predict the outcome on the testing set and store it in a variable
    # named y_predicted
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
        input_file = open(os.path.join(exercise_dir, f))
    output_file = open(os.path.join(skeleton_dir, f), 'w')
    
    import matplotlib.pyplot as plt
import numpy as np
    
    ######################################################################
# Run the clustering and plot
    
    # #############################################################################
# Plot result
import matplotlib.pyplot as plt
from itertools import cycle
    
        def owner(self):
        raise NotImplementedError('Path.owner() is unsupported on this system')
    
        def test_summaryinfo_getproperty_issue1104(self):
        db, db_path = init_database()
        try:
            sum_info = db.GetSummaryInformation(99)
            title = sum_info.GetProperty(msilib.PID_TITLE)
            self.assertEqual(title, b'Installation Database')
    
        def __FunctionDef_helper(self, t, fill_suffix):
        self.write('\n')
        for deco in t.decorator_list:
            self.fill('@')
            self.dispatch(deco)
        def_str = fill_suffix+' '+t.name + '('
        self.fill(def_str)
        self.dispatch(t.args)
        self.write(')')
        if t.returns:
            self.write(' -> ')
            self.dispatch(t.returns)
        self.enter()
        self.dispatch(t.body)
        self.leave()
    
    NAME_MAPPING.update({
    ('__builtin__', 'basestring'): ('builtins', 'str'),
    ('exceptions', 'StandardError'): ('builtins', 'Exception'),
    ('UserDict', 'UserDict'): ('collections', 'UserDict'),
    ('socket', '_socketobject'): ('socket', 'SocketType'),
})
    
        def test_async(self):
        # Async/await extension:
        self.check_tokenize('async = 1', '''\
    NAME       'async'       (1, 0) (1, 5)
    OP         '='           (1, 6) (1, 7)
    NUMBER     '1'           (1, 8) (1, 9)
    ''')
    
    import pickle
import sqlite3
from collections import namedtuple
    
    def noop(x):
    pass
    
        return res
    
            # parsing response
        for info in result:
            mac = info['macAddr']
            name = info['hostName']
            # No address = no item :)
            if mac is None:
                continue
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Required(CONF_USERNAME): cv.string
})
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_COMMAND): cv.string,
    vol.Optional(CONF_NAME): cv.string,
})
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        self.gntp.notify(noteType='Notification',
                         title=kwargs.get(ATTR_TITLE, ATTR_TITLE_DEFAULT),
                         description=message)

    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Lannouncer notification service.'''
    host = config.get(CONF_HOST)
    port = config.get(CONF_PORT)