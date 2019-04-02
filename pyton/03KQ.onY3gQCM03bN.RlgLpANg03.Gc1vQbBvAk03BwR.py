
        
            if len(word) > self.max_word_length - 2:
      word = word[:self.max_word_length-2]
    cur_word = self.bow_char + word + self.eow_char
    for j in range(len(cur_word)):
      code[j] = ord(cur_word[j])
    return code
    
        if np.isnan(log_perp):
      sys.stderr.error('log_perplexity is Nan.\n')
    else:
      sum_num += log_perp * weights.mean()
      sum_den += weights.mean()
    if sum_den > 0:
      perplexity = np.exp(sum_num / sum_den)
    
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
    
        return attention_score_fn

    
    if __name__ == '__main__':
    list_n_samples = np.linspace(100, 10000, 5).astype(np.int)
    list_n_features = [10, 100, 1000]
    n_test = 1000
    max_iter = 1000
    noise = 0.1
    alpha = 0.01
    sgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    elnet_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    ridge_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    asgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    for i, n_train in enumerate(list_n_samples):
        for j, n_features in enumerate(list_n_features):
            X, y, coef = make_regression(
                n_samples=n_train + n_test, n_features=n_features,
                noise=noise, coef=True)
    
    n_samples, n_features = 5000, 300
X = np.random.randn(n_samples, n_features)
inds = np.arange(n_samples)
np.random.shuffle(inds)
X[inds[int(n_features / 1.2):]] = 0  # sparsify input
print('input data sparsity: %f' % sparsity_ratio(X))
coef = 3 * np.random.randn(n_features)
inds = np.arange(n_features)
np.random.shuffle(inds)
coef[inds[n_features // 2:]] = 0  # sparsify coef
print('true coef sparsity: %f' % sparsity_ratio(coef))
y = np.dot(X, coef)
    
        gc.collect()
    
    
def user_role(name, rawtext, text, lineno,
              inliner, options=None, content=None):
    '''Sphinx role for linking to a user profile. Defaults to linking to
    GitHub profiles, but the profile URIS can be configured via the
    ``issues_user_uri`` config value.
    
        # Print the classification report
    print(metrics.classification_report(y_test, y_predicted,
                                        target_names=dataset.target_names))
    
    
def generate_data(case, sparse=False):
    '''Generate regression/classification data.'''
    bunch = None
    if case == 'regression':
        bunch = datasets.load_boston()
    elif case == 'classification':
        bunch = datasets.fetch_20newsgroups_vectorized(subset='all')
    X, y = shuffle(bunch.data, bunch.target)
    offset = int(X.shape[0] * 0.8)
    X_train, y_train = X[:offset], y[:offset]
    X_test, y_test = X[offset:], y[offset:]
    if sparse:
        X_train = csr_matrix(X_train)
        X_test = csr_matrix(X_test)
    else:
        X_train = np.array(X_train)
        X_test = np.array(X_test)
    y_test = np.array(y_test)
    y_train = np.array(y_train)
    data = {'X_train': X_train, 'X_test': X_test, 'y_train': y_train,
            'y_test': y_test}
    return data
    
    '''
print(__doc__)
    
    np.random.seed(5)
    
    
X, y = nudge_images(X, y)
    
    # Author: Phil Roth <mr.phil.roth@gmail.com>
# License: BSD 3 clause
    
    - ANTLRStringStream: Reads from a string objects. The input should be a unicode
  object, or ANTLR3 will have trouble decoding non-ascii data.
- ANTLRFileStream: Opens a file and read the contents, with optional character
  decoding.
- ANTLRInputStream: Reads the date from a file-like object, with optional
  character decoding.
    
    
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue
    
    from future.utils import itervalues
import re
from ycm import vimsupport
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
    
@YouCompleteMeInstance()
def SendCompletionRequest_UnicodeWorkingDirectory_test( ycm ):
  unicode_dir = PathToTestFile( 'uni¢𐍈d€' )
  current_buffer = VimBuffer( PathToTestFile( 'uni¢𐍈d€', 'current_buffer' ) )
    
    
class FakeFuture( object ):
  '''A fake version of a future response object, just about suitable for
  mocking a server response as generated by PostDataToHandlerAsync.
  Not usually used directly. See MockAsyncServerResponse* methods'''
  def __init__( self, done, response = None, exception = None ):
    self._done = done
    
    
def _worker( executor_reference, work_queue ):
  try:
    while True:
      work_item = work_queue.get( block=True )
      if work_item is not None:
        work_item.run()
        continue
      executor = executor_reference()
      # Exit if:
      #   - The executor that owns the worker has been collected OR
      #   - The executor that owns the worker has been shutdown.
      if executor is None or executor._shutdown:
        # Notice other workers
        work_queue.put( None )
        return
      del executor
  except BaseException:
    _base.LOGGER.critical( 'Exception in worker', exc_info=True )
    
            for es in domains:
            uid = short_uid()
            node_ids[es.id] = uid
            result['nodes'].append({'id': uid, 'arn': es.id, 'name': es.name(), 'type': 'es'})
        for b in buckets:
            uid = short_uid()
            node_ids[b.id] = uid
            result['nodes'].append({'id': uid, 'arn': b.id, 'name': b.name(), 'type': 's3'})
        for db in dbs:
            uid = short_uid()
            node_ids[db.id] = uid
            result['nodes'].append({'id': uid, 'arn': db.id, 'name': db.name(), 'type': 'dynamodb'})
        for s in streams:
            uid = short_uid()
            node_ids[s.id] = uid
            result['nodes'].append({'id': uid, 'arn': s.id, 'name': s.name(), 'type': 'kinesis'})
            for shard in s.shards:
                uid1 = short_uid()
                name = re.sub(r'shardId-0*', '', shard.id) or '0'
                result['nodes'].append({'id': uid1, 'arn': shard.id, 'name': name,
                    'type': 'kinesis_shard', 'streamName': s.name(), 'parent': uid})
        for f in firehoses:
            uid = short_uid()
            node_ids[f.id] = uid
            result['nodes'].append({'id': uid, 'arn': f.id, 'name': f.name(), 'type': 'firehose'})
            for d in f.destinations:
                result['edges'].append({'source': uid, 'target': node_ids[d.id]})
        for q in queues:
            uid = short_uid()
            node_ids[q.id] = uid
            result['nodes'].append({'id': uid, 'arn': q.id, 'name': q.name(), 'type': 'sqs'})
        for l in lambdas:
            uid = short_uid()
            node_ids[l.id] = uid
            result['nodes'].append({'id': uid, 'arn': l.id, 'name': l.name(), 'type': 'lambda'})
            for s in l.event_sources:
                lookup_id = s.id
                if isinstance(s, DynamoDBStream):
                    lookup_id = s.table.id
                result['edges'].append({'source': node_ids.get(lookup_id), 'target': uid})
            for t in l.targets:
                lookup_id = t.id
                result['edges'].append({'source': uid, 'target': node_ids.get(lookup_id)})
        for b in buckets:
            for n in b.notifications:
                src_uid = node_ids[b.id]
                tgt_uid = node_ids[n.target.id]
                result['edges'].append({'source': src_uid, 'target': tgt_uid})
    
    
@app.route('%s/es/domain/<domain_name>' % API_PREFIX, methods=['DELETE'])
def delete_domain(domain_name):
    if domain_name not in ES_DOMAINS:
        return error_response(error_type='ResourceNotFoundException')
    result = get_domain_status(domain_name, deleted=True)
    ES_DOMAINS.pop(domain_name)
    return jsonify(result)
    
    '''
    
            if prefix in self._list:
            return self._list[prefix]
    
        def _paragraph_contains(paragraph, keyword, insensitive=False, word_boundaries=True):
        '''
        Check if `paragraph` contains `keyword`.
        Several keywords can be joined together using ~
        For example: ~ssh~passphrase
        '''
        answer = True