
        
          # Predict the labels
  pred = model.predict(session, instances)
    
        Args:
      hps: The dictionary of hyper parameters.
      kind: the type of model to build (see above).
      datasets: a dictionary of named data_dictionaries, see top of lfads.py
    '''
    print('Building graph...')
    all_kinds = ['train', 'posterior_sample_and_average', 'posterior_push_mean',
                 'prior_sample']
    assert kind in all_kinds, 'Wrong kind'
    if hps.feedback_factors_or_rates == 'rates':
      assert len(hps.dataset_names) == 1, \
      'Multiple datasets not supported for rate feedback.'
    num_steps = hps.num_steps
    ic_dim = hps.ic_dim
    co_dim = hps.co_dim
    ext_input_dim = hps.ext_input_dim
    cell_class = GRU
    gen_cell_class = GenGRU
    
        softmax = self.sess.run(self.tensors['softmax_out'], feed_dict={
        self.tensors['inputs_in']: input_ids,
        self.tensors['char_inputs_in']: input_char_ids
    })
    
        yield (x, y, w)

    
    
def _file_to_word_ids(filename, word_to_id):
  data = _read_words(filename)
  return [word_to_id[word] for word in data if word in word_to_id]
    
        module.exit_json(changed=False, addresses=get_eips_details(module))
    
        function_name = module.params.get('function_name')
    if function_name:
        lambda_facts[function_name] = {}
        lambda_facts[function_name].update(config_details(client, module)[function_name])
        lambda_facts[function_name].update(alias_details(client, module)[function_name])
        lambda_facts[function_name].update(policy_details(client, module)[function_name])
        lambda_facts[function_name].update(version_details(client, module)[function_name])
        lambda_facts[function_name].update(mapping_details(client, module)[function_name])
    else:
        lambda_facts.update(config_details(client, module))
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.gcp import check_min_pkg_version, get_google_cloud_credentials
from ansible.module_utils.six import string_types
    
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
    
            firewall_policy = oneandone_conn.remove_firewall_rule(
            firewall_id=firewall_id,
            rule_id=rule_id
        )
        return firewall_policy
    except Exception as e:
        module.fail_json(msg=str(e))
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    monitoring_policy: ansible monitoring policy updated
    add_processes:
     -
       process: test_2
       alert_if: NOT_RUNNING
       email_notification: false
    wait: true
    state: update
    
    options:
    name:
        description:
            - Hostname of the machine to manage.
        required: true
    state:
        description:
            - Takes the host to the desired lifecycle state.
            - If C(absent) the host will be deleted from the cluster.
            - If C(present) the host will be created in the cluster (includes C(enabled), C(disabled) and C(offline) states).
            - If C(enabled) the host is fully operational.
            - C(disabled), e.g. to perform maintenance operations.
            - C(offline), host is totally offline.
        choices:
            - absent
            - present
            - enabled
            - disabled
            - offline
        default: present
    im_mad_name:
        description:
            - The name of the information manager, this values are taken from the oned.conf with the tag name IM_MAD (name)
        default: kvm
    vmm_mad_name:
        description:
            - The name of the virtual machine manager mad name, this values are taken from the oned.conf with the tag name VM_MAD (name)
        default: kvm
    cluster_id:
        description:
            - The cluster ID.
        default: 0
    cluster_name:
        description:
            - The cluster specified by name.
    labels:
        description:
            - The labels for this host.
    template:
        description:
            - The template or attribute changes to merge into the host template.
        aliases:
            - attributes
    
        def role_find(self, name):
        return self._post_json(method='role_find', name=None, item={'all': True, 'cn': name})
    
    
if __name__ == '__main__':
    main()

    
            if module.params['subdue_begin'] is not None and module.params['subdue_end'] is not None:
            subdue = {'begin': module.params['subdue_begin'],
                      'end': module.params['subdue_end'],
                      }
            if 'subdue' not in check or check['subdue'] != subdue:
                check['subdue'] = subdue
                changed = True
                reasons.append('`subdue\' did not exist or was different')
        else:
            if 'subdue' in check:
                del check['subdue']
                changed = True
                reasons.append('`subdue\' was removed')
    
        _tabulate(results, args.metrics, args.formats)
    
    input data sparsity: 0.050000
true coef sparsity: 0.000100
test data sparsity: 0.027400
model sparsity: 0.000024
r^2 on test data (dense model) : 0.233651
r^2 on test data (sparse model) : 0.233651
Wrote profile results to sparsity_benchmark.py.lprof
Timer unit: 1e-06 s
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
    
def get_pdf_size(version):
    api_url = ROOT_URL + '%s/_downloads' % version
    for path_details in json_urlread(api_url):
        if path_details['name'] == 'scikit-learn-docs.pdf':
            return human_readable_data_quantity(path_details['size'], 1000)
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    print(__doc__)
    
    # Learn a frontier for outlier detection with several classifiers
xx1, yy1 = np.meshgrid(np.linspace(-8, 28, 500), np.linspace(3, 40, 500))
xx2, yy2 = np.meshgrid(np.linspace(3, 10, 500), np.linspace(-5, 45, 500))
for i, (clf_name, clf) in enumerate(classifiers.items()):
    plt.figure(1)
    clf.fit(X1)
    Z1 = clf.decision_function(np.c_[xx1.ravel(), yy1.ravel()])
    Z1 = Z1.reshape(xx1.shape)
    legend1[clf_name] = plt.contour(
        xx1, yy1, Z1, levels=[0], linewidths=2, colors=colors[i])
    plt.figure(2)
    clf.fit(X2)
    Z2 = clf.decision_function(np.c_[xx2.ravel(), yy2.ravel()])
    Z2 = Z2.reshape(xx2.shape)
    legend2[clf_name] = plt.contour(
        xx2, yy2, Z2, levels=[0], linewidths=2, colors=colors[i])
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
            if response.status not in self.config.check_ip_accept_status:
            return False
    
        global pteredor_is_running, usable
    pteredor_is_running = probe_nat
    prober = teredo_prober(probe_nat=probe_nat)
    
    
class MissingTokenException(MismatchedTokenException):
    '''
    We were expecting a token but it's not found.  The current token
    is actually what we wanted next.
    '''