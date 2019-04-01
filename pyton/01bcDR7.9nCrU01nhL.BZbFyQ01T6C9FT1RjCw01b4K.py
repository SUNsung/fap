
        
        
class Cache(object):
    
      model.train_model(datasets)
    
        # Loop through the 2D matrix of word_patches and score each.
    for i, row in enumerate(word_patches):
      print('Reset RNN states.')
      self.reset()  # reset states before processing each row.
      row_probs = np.zeros([batch_size, 0])
      for j, word_patch in enumerate(row):
        print('Processing patch '
              '({}, {}) / ({}, {})'.format(i+1, j+1, nrow, ncol))
        patch_probs = (self._score(word_patch) if word_patch else
                       np.zeros([batch_size, num_timesteps]))
        row_probs = np.concatenate([row_probs, patch_probs], 1)
      probs = np.concatenate([probs, row_probs], 0)
    return probs
    
      train_data = _read_words(train_path)
  valid_data = _read_words(valid_path)
  return train_data, valid_data
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
      # The unique ngrams in the training set.
  unique_ngrams_in_train = 0.
    
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
    
            # The rule matches AWS only if all rule data fields are equal
        # to their corresponding local value defined in the task
        return all([
            getattr(self.rule, field) == aws_rule_data.get(field, None)
            for field in self.RULE_FIELDS
        ])
    
    # Create a snapshot only if the most recent one is older than 1 hour
- local_action:
    module: ec2_snapshot
    volume_id: vol-abcdef12
    last_snapshot_min_age: 60
'''
    
    - heroku_collaborator:
    api_key: YOUR_API_KEY
    user: '{{ item.user }}'
    apps: '{{ item.apps | default(apps) }}'
    suppress_invitation: '{{ item.suppress_invitation | default(suppress_invitation) }}'
    state: '{{ item.state | default('present') }}'
  with_items:
    - { user: 'a.b@example.com' }
    - { state: 'absent', user: 'b.c@example.com', suppress_invitation: false }
    - { user: 'x.y@example.com', apps: ['heroku-example-app'] }
'''
    
        def role_remove_group(self, name, item):
        return self.role_remove_member(name=name, item={'group': item})
    
        if module.params['user']:
        params['deploy[local_username]'] = module.params['user']
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
        # Deploy params
    revision_id = module.params['revision_id']
    deployed_by = module.params['deployed_by']
    deployed_to = module.params['deployed_to']
    repository = module.params['repository']
    
    # Used for remembering the file (and its contents)
# so we don't have to open the same file again.
_filename = None
_contents = None
    
        def syntax(self):
        return '[options] <spider>'
    
        def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
        def _find_template(self, template):
        template_file = join(self.templates_dir, '%s.tmpl' % template)
        if exists(template_file):
            return template_file
        print('Unable to find template: %s\n' % template)
        print('Use 'scrapy genspider --list' to see all available templates.')
    
    class Command(ScrapyCommand):
    
        def short_desc(self):
        return 'Print Scrapy version'
    
            def __init__(self, method=SSL.SSLv23_METHOD, *args, **kwargs):
            super(ScrapyClientContextFactory, self).__init__(*args, **kwargs)
            self._ssl_method = method
    
        if twisted_version < (17, 0, 0):
        from twisted.internet._sslverify import _maybeSetHostNameIndication
        set_tlsext_host_name = _maybeSetHostNameIndication
    else:
        def set_tlsext_host_name(connection, hostNameBytes):
            connection.set_tlsext_host_name(hostNameBytes)
    
    
def _parsed_url_args(parsed):
    # Assume parsed is urlparse-d from Request.url,
    # which was passed via safe_url_string and is ascii-only.
    b = lambda s: to_bytes(s, encoding='ascii')
    path = urlunparse(('', '', parsed.path or '/', parsed.params, parsed.query, ''))
    path = b(path)
    host = b(parsed.hostname)
    port = parsed.port
    scheme = b(parsed.scheme)
    netloc = b(parsed.netloc)
    if port is None:
        port = 443 if scheme == b'https' else 80
    return scheme, netloc, host, port, path
    
        def _debug_set_cookie(self, response, spider):
        if self.debug:
            cl = [to_native_str(c, errors='replace')
                  for c in response.headers.getlist('Set-Cookie')]
            if cl:
                cookies = '\n'.join('Set-Cookie: {}\n'.format(c) for c in cl)
                msg = 'Received cookies from: {}\n{}'.format(response, cookies)
                logger.debug(msg, extra={'spider': spider})
    
    
def highway_dense(x, act_fn=relu, carry_bias=-1.0, name=None):
    '''用于全连接层的 highway
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_input]