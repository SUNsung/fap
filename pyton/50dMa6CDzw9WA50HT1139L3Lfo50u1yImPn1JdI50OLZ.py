
        
        POSTAG_TO_ID = {tag: tid for tid, tag in enumerate(POSTAGS)}
    
        # You probably do not want the LL associated values when pushing the mean
    # instead of sampling.
    model_runs['costs'] = costs
    model_runs['nll_bound_vaes'] = nll_bound_vaes
    model_runs['nll_bound_iwaes'] = nll_bound_iwaes
    model_runs['train_steps'] = train_steps
    return model_runs
    
      print ('loading data from ' + data_path + ' with stem ' + data_fname_stem)
  for fname in fnames:
    if fname.startswith(data_fname_stem):
      data_dict = read_data(os.path.join(data_path,fname))
      idx = len(data_fname_stem) + 1
      key = fname[idx:]
      data_dict['data_dim'] = data_dict['train_data'].shape[2]
      data_dict['num_steps'] = data_dict['train_data'].shape[1]
      dataset_dict[key] = data_dict
    
        test_data = utils.parse_commonsense_reasoning_test(test_data_name)
    self.question_ids, self.sentences, self.labels = test_data
    self.all_probs = []  # aggregate single-model prediction here.
    
    import json
import os
import numpy as np
import tensorflow as tf
    
      # Add the 0th time-step for coherence.
  first_token = np.expand_dims(inputs_eval[:, 0], axis=1)
  sequence_eval = np.concatenate((first_token, sequence_eval), axis=1)
    
      for ind_batch, pred_batch, crossent_batch in zip(indices, predictions,
                                                   cross_entropy):
    metrics = []
    
          for s in xrange(t, FLAGS.sequence_length):
        cum_advantage += reward_missing_list[s] * np.power(gamma, (s - t)) * (
            rewards_list[s] - baselines[s])
      # Clip advantages.
      cum_advantage = tf.clip_by_value(cum_advantage, -FLAGS.advantage_clipping,
                                       FLAGS.advantage_clipping)
      advantages.append(reward_missing_list[t] * cum_advantage)
      final_gen_objective += tf.multiply(
          log_probability,
          reward_missing_list[t] * tf.stop_gradient(cum_advantage))
    
        with tf.variable_scope('rnn') as vs:
      outputs, _, _ = tf.contrib.rnn.static_bidirectional_rnn(
          cell_fwd, cell_bwd, rnn_inputs, state_fwd, state_bwd, scope=vs)
    
            webpage = webpage.decode('utf8', 'replace')
    
        ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
        bug_text = re.search(
        r'(?s)#\s*BUGS\s*[^\n]*\s*(.*?)#\s*COPYRIGHT', readme).group(1)
    dev_text = re.search(
        r'(?s)(#\s*DEVELOPER INSTRUCTIONS.*?)#\s*EMBEDDING YOUTUBE-DL',
        readme).group(1)
    
        infile, outfile = args
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
    
def _dump_arg_defaults(kwargs):
    '''Inject default arguments for dump functions.'''
    if current_app:
        bp = current_app.blueprints.get(request.blueprint) if request else None
        kwargs.setdefault(
            'cls',
            bp.json_encoder if bp and bp.json_encoder
                else current_app.json_encoder
        )
    
        def check(self, value):
        return isinstance(value, UUID)
    
        with pytest.raises(Exception):
        with app.app_context():
            client.get('/')
    
    
if __name__ == '__main__':
    # Create our localizers
    e, g = get_localizer(language='English'), get_localizer(language='Greek')
    # Localize some text
    for msgid in 'dog parrot cat bear'.split():
        print(e.get(msgid), g.get(msgid))
    
        sample_queue = queue.Queue()
    
        def get_objects(self):
        '''Get all objects'''
        return self._objects
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class TimeDisplay(object):
    def __init__(self):
        pass
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
            path.append(start)
        if start == end:
            return path
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_path(node, end, path[:])
                if newpath:
                    return newpath
    
        def get_product_information(self, product):
        product_info = self.business_logic.product_information(product)
        if product_info:
            print('PRODUCT INFORMATION:')
            print(
                'Name: {0}, Price: {1:.2f}, Quantity: {2:}'.format(
                    product.title(), product_info.get('price', 0), product_info.get('quantity', 0)
                )
            )
        else:
            print('That product '{0}' does not exist in the records'.format(product))
    
    
if __name__ == '__main__':
    simple_hello = TextTag('hello, world!')
    special_hello = ItalicWrapper(BoldWrapper(simple_hello))
    print('before:', simple_hello.render())
    print('after:', special_hello.render())
    
    *Where is the pattern used practically?
This pattern can be seen in the Python standard library when we use
the isdir function. Although a user simply uses this function to know
whether a path refers to a directory, the system makes a few
operations and calls other modules (e.g., os.stat) to give the result.
    
    
class MobileView(object):
    def show_index_page(self):
        print('Displaying mobile index page')
    
    try:
    from unittest.mock import patch
except ImportError:
    from mock import patch