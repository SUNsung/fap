
        
          # Print the confusion matrix
  print('%s confusion matrix:' % set_name)
  cm = metrics.confusion_matrix(labels, pred, labels=range(len(classes)))
  cm = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis] * 100
  print_cm(cm, labels=classes)
  return pred
    
        Returns:
      The test predictions along with their scores.
    '''
    test_pred = [0] * len(inputs)
    
    def get_data_batch(batch_size, T, rng, u_std):
  u_bxt = rng.randn(batch_size, T) * u_std
  running_sum_b = np.zeros([batch_size])
  labels_bxt = np.zeros([batch_size, T])
  for t in xrange(T):
    running_sum_b += u_bxt[:, t]
    labels_bxt[:, t] += running_sum_b
  labels_bxt = np.clip(labels_bxt, -1, 1)
  return u_bxt, labels_bxt
    
      return spikes_e
    
      return num_correct_answer / num_questions

    
    
def percent_correct(real_sequence, fake_sequences):
  '''Determine the percent of tokens correctly generated within a batch.'''
  identical = 0.
  for fake_sequence in fake_sequences:
    for real, fake in zip(real_sequence, fake_sequence):
      if real == fake:
        identical += 1.
  return identical / recursive_length(fake_sequences)

    
    FLAGS = tf.app.flags.FLAGS
    
    '''We calculate n-Grams from the training text. We will use this as an
evaluation metric.'''
    
            :param headers: The headers as text.
    
    import requests.auth
    
        # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
        if mod_params['state'] == 'absent':
        # Remove the most granular resource.  If database is specified
        # we remove it.  If only instance is specified, that is what is removed.
        if d is not None and d.exists():
            d.drop()
            changed = True
        else:
            if i.exists():
                if mod_params['force_instance_delete']:
                    i.delete()
                else:
                    module.fail_json(
                        msg=(('Cannot delete Spanner instance: '
                              ''force_instance_delete' argument not specified')))
                changed = True
    elif mod_params['state'] == 'present':
        if not i.exists():
            i = spanner_client.instance(mod_params['instance_id'],
                                        configuration_name=config_name,
                                        display_name=mod_params['instance_display_name'],
                                        node_count=mod_params['node_count'] or 1)
            i.create()
            changed = True
        else:
            # update instance
            i.reload()
            inst_prev_vals = {}
            if i.display_name != mod_params['instance_display_name']:
                inst_prev_vals['instance_display_name'] = i.display_name
                i.display_name = mod_params['instance_display_name']
            if mod_params['node_count']:
                if i.node_count != mod_params['node_count']:
                    inst_prev_vals['node_count'] = i.node_count
                    i.node_count = mod_params['node_count']
            if inst_prev_vals:
                changed = instance_update(i)
                json_output['updated'] = changed
                json_output['previous_values'] = {'instance': inst_prev_vals}
        if d:
            if not d.exists():
                d.create()
                d.reload()
                changed = True
    
    
if __name__ == '__main__':
    main()

    
    
if __name__ == '__main__':
    main()

    
        module = AnsibleModule(
        argument_spec=dict(
            component=dict(required=True, aliases=['name']),
            version=dict(required=True),
            token=dict(required=True, no_log=True),
            state=dict(required=True, choices=['started', 'finished', 'failed']),
            hosts=dict(required=False, default=[socket.gethostname()], aliases=['host']),
            env=dict(required=False),
            owner=dict(required=False),
            description=dict(required=False),
            message=dict(required=False),
            source_system=dict(required=False, default='ansible'),
            validate_certs=dict(default='yes', type='bool'),
            url=dict(required=False, default='https://api.bigpanda.io'),
        ),
        supports_check_mode=True,
    )
    
    def main():
    
        device = dict(
        model_handle=model_handle,
        address=device_ip,
        landscape=model_landscape,
    )
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
            name, domain = args[0:2]
        module = sanitize_module_name(name)
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))
    
            'A TLS/SSL connection established with [this method] may
         understand the SSLv3, TLSv1, TLSv1.1 and TLSv1.2 protocols.'
        '''
    
        def __init__(self, settings, aws_access_key_id=None, aws_secret_access_key=None, \
            httpdownloadhandler=HTTPDownloadHandler, **kw):
    
    
class NoTalkProxy(Proxy):
    def talk(self):
        print('Proxy checking for Sales Manager availability')
        time.sleep(0.1)
        print('This Sales Manager will not talk to you', 'whether he/she is busy or not')
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update, patch.object(
            cls.hex_obs, 'update'
        ) as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)