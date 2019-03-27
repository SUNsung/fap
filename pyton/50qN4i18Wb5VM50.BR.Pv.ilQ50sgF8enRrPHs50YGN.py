
        
        # Fail if the server certificate name was not found
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
  failed_when: '{{ server_cert.results | length == 0 }}'
'''
    
        json_output = {}
    if mod_params['view'] == 'topics':
        json_output['topics'] = list_func(pubsub_client.list_topics())
    elif mod_params['view'] == 'subscriptions':
        if mod_params['topic']:
            t = pubsub_client.topic(mod_params['topic'])
            json_output['subscriptions'] = list_func(t.list_subscriptions())
        else:
            json_output['subscriptions'] = list_func(pubsub_client.list_subscriptions())
    
        elif state == 'present':
        for param in ('name', 'rules'):
            if not module.params.get(param):
                module.fail_json(
                    msg='%s parameter is required for new firewall policies.' % param)
        try:
            (changed, firewall_policy) = create_firewall_policy(module, oneandone_conn)
        except Exception as e:
            module.fail_json(msg=str(e))
    
            # apply properties
        if desired_state == 'present':
            if current_state == HOST_ABSENT:
                self.allocate_host()
                host = self.get_host_by_name(host_name)
                self.wait_for_host_state(host, [HOST_STATES.MONITORED])
            elif current_state in [HOST_STATES.ERROR, HOST_STATES.MONITORING_ERROR]:
                self.fail(msg='invalid host state %s' % current_state_name)
    
        if module.params['user']:
        params['deploy[local_username]'] = module.params['user']
    
        module.exit_json(changed=False, msg='logs(s) already followed')
    
        if event == 'annotation':
        if not msg:
            module.fail_json(msg='msg required for annotation events')
        try:
            send_annotation_event(module, key, msg, annotated_by, level, instance_id, event_epoch)
        except Exception as e:
            module.fail_json(msg='unable to sent annotation event: %s' % to_native(e),
                             exception=traceback.format_exc())
    
    
def linkcode_resolve(domain, info):
    '''Determine the URL corresponding to Python object.'''
    if domain != 'py':
        return None
    modname = info['module']
    fullname = info['fullname']
    submod = sys.modules.get(modname)
    if submod is None:
        return None
    obj = submod
    for part in fullname.split('.'):
        try:
            obj = getattr(obj, part)
        except:
            return None
    try:
        fn = inspect.getsourcefile(obj)
    except:
        fn = None
    if not fn:
        return None
    try:
        source, lineno = inspect.findsource(obj)
    except:
        lineno = None
    if lineno:
        linespec = '#L%d' % (lineno + 1)
    else:
        linespec = ''
    index = fn.find('/homeassistant/')
    if index == -1:
        index = 0
    
    
# Concrete Buildings
class House(Building):
    def build_floor(self):
        self.floor = 'One'
    
        sample_queue.put('yam')
    with ObjectPool(sample_queue) as obj:
        print('Inside with: {}'.format(obj))
    print('Outside with: {}'.format(sample_queue.get()))
    
    This is useful as it make it easier to derive new kinds of objects,
when instances of the class have only a few different combinations of
state, and when instantiation is expensive.
    
            if start == end:
            return path
        shortest = None
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_shortest_path(node, end, path[:])
                if newpath:
                    if not shortest or len(newpath) < len(shortest):
                        shortest = newpath
        return shortest
    
    
class Failed(OutOfService):
    '''No need to override any method.'''
    
        def test_publisher_shall_append_subscription_message_to_queue(cls):
        ''' msg_queue ~ Provider.notify(msg) ~ Publisher.publish(msg) '''
        expected_msg = 'expected msg'
        pro = Provider()
        pub = Publisher(pro)
        Subscriber('sub name', pro)
        cls.assertEqual(len(pro.msg_queue), 0)
        pub.publish(expected_msg)
        cls.assertEqual(len(pro.msg_queue), 1)
        cls.assertEqual(pro.msg_queue[0], expected_msg)
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
            Parameters
        ----------
        declarations_str : str
            A list of CSS declarations
        inherited : dict, optional
            Atomic properties indicating the inherited style context in which
            declarations_str is to be resolved. ``inherited`` should already
            be resolved, i.e. valid output of this method.
    
            exp = pd.DatetimeIndex(['2011-01-01 09:00', '2011-01-01 10:00',
                                '2011-01-01 11:00'])
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00')), exp)