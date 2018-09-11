
        
          # Print a classification report
  print('%s classification report:' % set_name)
  print(metrics.classification_report(labels, pred, target_names=classes))
    
      def __mlp__(self):
    '''Performs the MLP operations.
    
        # Note the use of the plural in all of these quantities.  This is intended
    # to mark that even though a sample z_t from the posterior is thought of a
    # single sample of a multidimensional gaussian, the prior is actually
    # thought of as U AR(1) processes, where U is the dimension of the inferred
    # input.
    size_bx1 = tf.stack([batch_size, 1])
    size__xu = [None, z_size]
    # process variance, the variance at time t over all instantiations of AR(1)
    # with these parameters.
    log_evar_inits_1xu = tf.expand_dims(tf.log(noise_variances), 0)
    self.logevars_1xu = logevars_1xu = \
        tf.Variable(log_evar_inits_1xu, name=name+'/logevars', dtype=tf.float32,
                    trainable=do_train_prior_ar_nvar)
    self.logevars_bxu = logevars_bxu = tf.tile(logevars_1xu, size_bx1)
    logevars_bxu.set_shape(size__xu) # tile loses shape
    
      if ext_input_bxtxi is not None:
    input_title += ' External Input'
    plot_time_series(ext_input_bxtxi, n_to_plot=n_to_plot, color='b',
                     scale=scale, title=col_title + input_title)
    
      Args:
    datasets: The dictionary of dataset structures.
    npcs:  The number of pcs for each, basically like lfads factors.
    nsamples (optional): Number of samples to take for each dataset.
    ntime (optional): Number of time steps to take in each sample.
    
      Args:
    values_t_bxn: The length T list of BxN numpy tensors.
    
      @property
  def vocab(self):
    return self._vocab

    
      Args:
    raw_data: one of the raw data outputs from imdb_raw_data.
    batch_size: int, the batch size.
    num_steps: int, the number of unrolls.
    
      if not FLAGS.seq2seq_share_embedding:
    variable_mapping = {
        str(model_str) + '/embedding':
            encoder_embedding,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            encoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            encoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            encoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            encoder_lstm_b_1
    }
  else:
    variable_mapping = {
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            encoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            encoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            encoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            encoder_lstm_b_1
    }
  return variable_mapping
    
            # attn_fun
        scores = _attn_add_fun(score_v, keys, query)
      elif attention_option == 'luong':
        # reshape query: [batch_size, 1, num_units]
        query = tf.reshape(query, [-1, 1, num_units])
    
        def validate_invalidation_batch(self, invalidation_batch, caller_reference):
        try:
            if caller_reference is not None:
                valid_caller_reference = caller_reference
            else:
                valid_caller_reference = datetime.datetime.now().isoformat()
            valid_invalidation_batch = {
                'paths': self.create_aws_list(invalidation_batch),
                'caller_reference': valid_caller_reference
            }
            return valid_invalidation_batch
        except (ClientError, BotoCoreError) as e:
            self.module.fail_json_aws(e, msg='Error validating invalidation batch.')
    
    
def wait_until_table_active(module, table, wait_timeout):
    max_wait_time = time.time() + wait_timeout
    while (max_wait_time > time.time()) and (table.describe()['Table']['TableStatus'] != 'ACTIVE'):
        time.sleep(5)
    if max_wait_time <= time.time():
        # waiting took too long
        module.fail_json(msg='timed out waiting for table to exist')
    
    - name: Gather facts about a filtered list of customer gateways, based on tags
  ec2_customer_gateway_facts:
    region: ap-southeast-2
    filters:
      'tag:Name': test-customer-gateway
      'tag:AltName': test-customer-gateway-alt
  register: cust_gw_facts
    
        if isinstance:
        try:
            reservations = ec2.get_all_reservations(instance_ids=[device_id])
        except boto.exception.EC2ResponseError as e:
            module.fail_json(msg=str(e))
    
        try:
        key = ec2_client.import_key_pair(KeyName=name, PublicKeyMaterial=to_bytes(key_material))
    except ClientError as err:
        module.fail_json_aws(err, msg='error importing key')
    return key
    
    
import traceback
from ansible.module_utils.ec2 import (get_aws_connection_info, ec2_argument_spec, ec2_connect, camel_dict_to_snake_dict, get_ec2_security_group_ids_from_names,
                                      boto3_conn, snake_dict_to_camel_dict, HAS_BOTO3)
from ansible.module_utils._text import to_text
from ansible.module_utils.basic import AnsibleModule
    
        region, ec2_url, aws_connect_params = get_aws_connection_info(module, True)
    
        By default this will get the strings from the blns.txt file
    
        def test_decode_bad(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
    
def _guess_loader(filename, loader_pem, loader_der):
    _, ext = os.path.splitext(filename)
    if ext.lower() == '.pem':
        return loader_pem
    elif ext.lower() == '.der':
        return loader_der
    else:  # pragma: no cover
        raise ValueError('Loader could not be recognized based on extension')
    
        :ivar aug: Augeas object
    :type aug: :class:`augeas.Augeas`
    
        def test_filter_args_num(self):
        '''Note: This may also fail do to Include conf-enabled/ syntax.'''
        matches = self.parser.find_dir('TestArgsDirective')
    
            self.vhost1b = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
        def _get_addrs(self, achall):
        '''Return the Apache addresses needed for TLS-SNI-01.'''
        # TODO: Checkout _default_ rules.
        addrs = set()
        default_addr = obj.Addr(('*', str(
            self.configurator.config.tls_sni_01_port)))
    
    # Send the message via local SMTP server.
with smtplib.SMTP('localhost') as s:
    s.send_message(msg)

    
    def test():
    manager = MyManager()
    manager.start()
    
                if buffer.lstrip().upper().startswith('SELECT'):
                print(cur.fetchall())
        except sqlite3.Error as e:
            print('An error occurred:', e.args[0])
        buffer = ''
    
        headers=extension,extension,...
      The allowed header extensions that cpplint will consider to be header files
      (by default, only files with extensions %s
      will be assumed to be headers)