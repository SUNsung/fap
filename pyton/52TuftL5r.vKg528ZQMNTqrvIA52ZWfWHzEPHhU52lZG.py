
        
            total_cost_ph = tf.placeholder(tf.float32, shape=[], name='total_cost_ph')
    self.cost_t_summ = tf.summary.scalar('Total cost (train)', total_cost_ph,
                                         collections=['train_summaries'])
    self.cost_v_summ = tf.summary.scalar('Total cost (valid)', total_cost_ph,
                                         collections=['valid_summaries'])
    
      # Sample neuron subsets.  The assumption is the PC axes of the RNN
  # are not unit aligned, so sampling units is adequate to sample all
  # the high-variance PCs.
  P_sxn = np.eye(S,N)
  for m in range(n):
    P_sxn = np.roll(P_sxn, S, axis=1)
    
    # not the best way to do this but E is small enough
rates = []
spikes = []
for trial in xrange(E):
  if rnn_to_use[trial] == 0:
    rates.append(rates_a[trial])
    spikes.append(spikes_a[trial])
  else:
    rates.append(rates_b[trial])
    spikes.append(spikes_b[trial])
    
      Returns:
    flat_list: Flattened list.
    flat_list_idxs: Flattened list indices.
  '''
  flat_list = []
  flat_list_idxs = []
  start_idx = 0
  for item in list_of_lists:
    if isinstance(item, list):
      flat_list += item
      l = len(item)
      idxs = range(start_idx, start_idx+l)
      start_idx = start_idx+l
    else:                   # a value
      flat_list.append(item)
      idxs = [start_idx]
      start_idx += 1
    flat_list_idxs.append(idxs)
    
      sess, t = _LoadModel(FLAGS.pbtxt, FLAGS.ckpt)
    
    
def evaluate_ensemble(test_data_name, number_of_lms):
  ensemble = EnsembleLM(test_data_name)
  model_list = ['lm{:02d}'.format(i+1) for i in range(number_of_lms)]
  for model_name in model_list:
    ensemble.add_single_model(model_name)
  accuracy = ensemble.evaluate()
  print('Accuracy of {} LM(s) on {} = {}'.format(
      number_of_lms, test_data_name, accuracy))
    
      ## Encoder variables.
  encoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  encoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
            outputs_train, state_train = seq2seq.dynamic_rnn_decoder(...)
        logits_train = output_fn(outputs_train)
    
    from ycm.client.base_request import BaseRequest
    
    
def CompileRegex( raw_regex ):
  pattern = re.compile( raw_regex, re.IGNORECASE )
    
      raise RuntimeError( 'Cannot find Python 2.7 or 3.4+. '
                      'Set the 'g:ycm_server_python_interpreter' option '
                      'to a Python interpreter path.' )
    
    
def AdjustCandidateInsertionText_MultipleStrings_test():
  with MockTextAfterCursor( 'bar' ):
    eq_( [ { 'abbr': 'foobar', 'word': 'foo' },
           { 'abbr': 'zobar', 'word': 'zo' },
           { 'abbr': 'qbar', 'word': 'q' },
           { 'abbr': 'bar', 'word': '' }, ],
         base.AdjustCandidateInsertionText( [ 'foobar',
                                              'zobar',
                                              'qbar',
                                              'bar' ] ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def RawResponse_ConvertedFromOmniCompleter_test():
  vim_results = [
    { 'word': 'WORD', 'abbr': 'ABBR', 'menu': 'MENU',
      'kind': 'KIND', 'info': 'INFO' },
    { 'word': 'WORD2', 'abbr': 'ABBR2', 'menu': 'MENU2',
      'kind': 'KIND2', 'info': 'INFO' },
    { 'word': 'WORD', 'abbr': 'ABBR', },
    {},
  ]
  expected_results = [
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',
                   'extra_menu_info': 'MENU', 'kind': [ 'KIND' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD2', 'menu_text': 'ABBR2',
                   'extra_menu_info': 'MENU2', 'kind': [ 'KIND2' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR', } ),
    has_entries( {} ),
  ]
  request = BuildOmnicompletionRequest( vim_results )
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerResponse ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      post_vim_message.assert_has_exact_calls( [
        call( 'Exception: message', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': contains( has_entries( {
            'word': 'insertion_text',
            'abbr': 'menu_text',
            'menu': 'extra_menu_info',
            'info': 'detailed_info\ndoc_string',
            'kind': 'k',
            'dup': 1,
            'empty': 1
          } ) ),
          'completion_start_column': 3
        } )
      )
    
        @staticmethod
    def _static_method_1():
        print('executed method 1!')
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)
    
    
if __name__ == '__main__':
    main()
    
        def toggle_amfm(self):
        self.state.toggle_amfm()
    
    *TL;DR80
Enables selecting an algorithm at runtime.
'''
    
    An example of the Template pattern in Python
    
    
class Prototype(object):