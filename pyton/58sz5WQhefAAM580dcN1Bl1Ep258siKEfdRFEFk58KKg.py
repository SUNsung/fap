
        
          Args:
    pairs: the word pairs (list of tuple of two strings).
    labels: the gold-standard labels for these pairs (array of rel ID).
    predictions: the predicted labels for these pairs (array of rel ID).
    classes: a list of relation names.
    predictions_file: where to save the predictions.
  '''
  with open(predictions_file, 'w') as f_out:
    for pair, label, pred in zip(pairs, labels, predictions):
      w1, w2 = pair
      f_out.write('\t'.join([w1, w2, classes[label], classes[pred]]) + '\n')

    
      if FLAGS.noise_type == 'poisson':
    noisy_data = spikify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  elif FLAGS.noise_type == 'gaussian':
    noisy_data = gaussify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  else:
    raise ValueError('Only noise types supported are poisson or gaussian')
    
      return data_e, x0s, inputs_e
    
        sys.stderr.write('Eval Step: %d, Average Perplexity: %f.\n' %
                     (i, perplexity))
    
        yield (x, y, w)

    
    
def create_dis_train_op(hparams, dis_loss, global_step):
  '''Create Discriminator train op.'''
  with tf.name_scope('train_discriminator'):
    dis_optimizer = tf.train.AdamOptimizer(hparams.dis_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    print('\nOptimizing Discriminator vars:')
    for v in dis_vars:
      print(v)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_train_op = dis_optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_train_op, dis_grads_clipped, dis_vars
    
          # combine cell_input and attention
      next_input = tf.concat([cell_input, attention], 1)
    
        template = template.replace('@SITES@', textwrap.indent('\n'.join(ie_htmls), '\t'))
    
    import io
import optparse
    
        def gen_ies_md(ies):
        for ie in ies:
            ie_md = '**{0}**'.format(ie.IE_NAME)
            ie_desc = getattr(ie, 'IE_DESC', None)
            if ie_desc is False:
                continue
            if ie_desc is not None:
                ie_md += ': {0}'.format(ie.IE_DESC)
            if not ie.working():
                ie_md += ' (Currently broken)'
            yield ie_md
    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
        if not HAS_PYTHON26:
        module.fail_json(
            msg='GCE module requires python's 'ast' module, python v2.6+')
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True
                           )
    
    
if __name__ == '__main__':
    main()

    
            self.module.exit_json(changed=change_applied)
    
        if module.params.get('state') == 'present':
        add_device()
    else:
        remove_device()
    
        module = AnsibleModule(
        argument_spec=dict(
            key=dict(required=True),
            event=dict(required=True, choices=['deploy', 'annotation']),
            msg=dict(),
            revision_id=dict(),
            annotated_by=dict(default='Ansible'),
            level=dict(default='INFO', choices=['INFO', 'WARN', 'ERROR']),
            instance_id=dict(),
            event_epoch=dict(),
            deployed_by=dict(default='Ansible'),
            deployed_to=dict(),
            repository=dict(),
        ),
        supports_check_mode=True
    )
    
        # TODO: decoder/encoder should accept cls? Otherwise, subclassing
    # JSONObjectWithFields is tricky...
    header_cls = Header
    header = jose.Field(
        'header', omitempty=True, default=header_cls(),
        decoder=header_cls.from_json)
    
            self.assertEqual(len(self.parser.filter_args_num(matches, 1)), 3)
        self.assertEqual(len(self.parser.filter_args_num(matches, 2)), 2)
        self.assertEqual(len(self.parser.filter_args_num(matches, 3)), 1)
    
            print('****************** Testing Edit Distance DP Algorithm ******************')
        print()
    
    def revise_centroids(data, k, cluster_assignment):
    new_centroids = []
    for i in range(k):
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i]
        # Compute the mean of the data points. Fill in the blank (RHS only)
        centroid = member_data_points.mean(axis=0)
        new_centroids.append(centroid)
    new_centroids = np.array(new_centroids)
    
    return new_centroids
    
            a += a
        b >>= 1
    
    def getLetterCount(message):
    letterCount = {'A': 0, 'B': 0, 'C': 0, 'D': 0, 'E': 0, 'F': 0, 'G': 0, 'H': 0,
                   'I': 0, 'J': 0, 'K': 0, 'L': 0, 'M': 0, 'N': 0, 'O': 0, 'P': 0,
                   'Q': 0, 'R': 0, 'S': 0, 'T': 0, 'U': 0, 'V': 0, 'W': 0, 'X': 0,
                   'Y': 0, 'Z': 0}
    for letter in message.upper():
        if letter in LETTERS:
            letterCount[letter] += 1
    
    Win1250HungarianModel = {
  'char_to_order_map': win1250HungarianCharToOrderMap,
  'precedence_matrix': HungarianLangModel,
  'typical_positive_ratio': 0.947368,
  'keep_english_letter': True,
  'charset_name': 'windows-1250',
  'language': 'Hungarian',
}

    
    SJIS_CLS = (
    1,1,1,1,1,1,1,1,  # 00 - 07
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    2,2,2,2,2,2,2,2,  # 40 - 47
    2,2,2,2,2,2,2,2,  # 48 - 4f
    2,2,2,2,2,2,2,2,  # 50 - 57
    2,2,2,2,2,2,2,2,  # 58 - 5f
    2,2,2,2,2,2,2,2,  # 60 - 67
    2,2,2,2,2,2,2,2,  # 68 - 6f
    2,2,2,2,2,2,2,2,  # 70 - 77
    2,2,2,2,2,2,2,1,  # 78 - 7f
    3,3,3,3,3,2,2,3,  # 80 - 87
    3,3,3,3,3,3,3,3,  # 88 - 8f
    3,3,3,3,3,3,3,3,  # 90 - 97
    3,3,3,3,3,3,3,3,  # 98 - 9f
    #0xa0 is illegal in sjis encoding, but some pages does
    #contain such byte. We need to be more error forgiven.
    2,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,2,2,2,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,2,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    3,3,3,3,3,3,3,3,  # e0 - e7
    3,3,3,3,3,4,4,4,  # e8 - ef
    3,3,3,3,3,3,3,3,  # f0 - f7
    3,3,3,3,3,0,0,0)  # f8 - ff
    
        def get_confidence(self):
        context_conf = self.context_analyzer.get_confidence()
        distrib_conf = self.distribution_analyzer.get_confidence()
        return max(context_conf, distrib_conf)

    
    
def get_tls_version(environment):
    compose_tls_version = environment.get('COMPOSE_TLS_VERSION', None)
    if not compose_tls_version:
        return None
    
    
def format_return(result, max_lines):
    if isinstance(result, (list, tuple, set)):
        return '({0} with {1} items)'.format(type(result).__name__, len(result))
    
    
class TLSConfigTestCase(unittest.TestCase):
    cert_path = 'tests/fixtures/tls/'
    ca_cert = os.path.join(cert_path, 'ca.pem')
    client_cert = os.path.join(cert_path, 'cert.pem')
    key = os.path.join(cert_path, 'key.pem')