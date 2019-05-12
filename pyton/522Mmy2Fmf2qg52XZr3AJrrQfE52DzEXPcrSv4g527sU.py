
        
        
class Person(object):
    
        @property
    def headers(self):
        '''Return a `str` with the message's headers.'''
        raise NotImplementedError()
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
    
def load_json_preserve_order(s):
    return json.loads(s, object_pairs_hook=OrderedDict)
    
        plugin_manager.register(Plugin)
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        @property
    def auth(self):
        auth = self.get('auth', None)
        if not auth or not auth['type']:
            return
    
    # Fail if the server certificate name was not found
- iam_server_certificate_facts:
    name: production-cert
  register: server_cert
  failed_when: '{{ server_cert.results | length == 0 }}'
'''
    
        if not HAS_PYTHON26:
        module.fail_json(
            msg='GCE module requires python's 'ast' module, python v2.6+')
    
            firewall_policy = oneandone_conn.remove_firewall_server(
            firewall_id=firewall_id,
            server_ip_id=server_ip_id)
        return firewall_policy
    except Exception as e:
        module.fail_json(msg=str(e))
    
    
def _add_ports(module, oneandone_conn, monitoring_policy_id, ports):
    '''
    Adds new ports to a monitoring policy.
    '''
    try:
        monitoring_policy_ports = []
    
            '''
        return self.wait_for_state('host',
                                   lambda: self.one.host.info(host.ID).STATE,
                                   lambda s: HOST_STATES(s).name, target_states,
                                   invalid_states=[HOST_STATES.ERROR, HOST_STATES.MONITORING_ERROR])
    
        elif p['state'] in ['absent', 'unfollowed']:
        unfollow_log(module, le_path, logs)
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        def test_setting_dict_to_valid(self):
        d = {'known_attr': 7}
        self.b.__dict__ = d
        # Test assignment
        self.assertIs(d, self.b.__dict__)
        # ... and on all the different ways of referencing the method's func
        self.F.a.__dict__ = d
        self.assertIs(d, self.fi.a.__func__.__dict__)
        self.assertIs(d, self.fi.a.__dict__)
        # Test value
        self.assertEqual(self.b.known_attr, 7)
        self.assertEqual(self.b.__dict__['known_attr'], 7)
        # ... and again, on all the different method's names
        self.assertEqual(self.fi.a.__func__.known_attr, 7)
        self.assertEqual(self.fi.a.known_attr, 7)
    
        Similarly, for output, lines ought to be separated by CRLF pairs
    but most clients grok LF characters just fine.
    
            When untokenize bugs are fixed, untokenize with 5-tuples should
        reproduce code that does not contain a backslash continuation
        following spaces.  A proper test should test this.
        '''
        # Get source code and original tokenizations
        if isinstance(f, str):
            code = f.encode('utf-8')
        else:
            code = f.read()
            f.close()
        readline = iter(code.splitlines(keepends=True)).__next__
        tokens5 = list(tokenize(readline))
        tokens2 = [tok[:2] for tok in tokens5]
        # Reproduce tokens2 from pairs
        bytes_from2 = untokenize(tokens2)
        readline2 = iter(bytes_from2.splitlines(keepends=True)).__next__
        tokens2_from2 = [tok[:2] for tok in tokenize(readline2)]
        self.assertEqual(tokens2_from2, tokens2)
        # Reproduce tokens2 from 5-tuples
        bytes_from5 = untokenize(tokens5)
        readline5 = iter(bytes_from5.splitlines(keepends=True)).__next__
        tokens2_from5 = [tok[:2] for tok in tokenize(readline5)]
        self.assertEqual(tokens2_from5, tokens2)
    
    # Are two stat buffers (obtained from stat, fstat or lstat)
# describing the same file?
def samestat(s1, s2):
    '''Test whether two stat buffers reference the same file'''
    return (s1.st_ino == s2.st_ino and
            s1.st_dev == s2.st_dev)
    
    from email.message import EmailMessage
from email.headerregistry import Address
from email.utils import make_msgid
    
    # Of course, there are lots of email messages that could break this simple
# minded program, but it will handle the most common ones.

    
    
if __name__ == '__main__':
    ''''''
    # _test()
    
        Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    References:
    https://github.com/fomorians/highway-fcn
    https://github.com/fomorians/highway-cnn
'''
import tensorflow as tf
    
    
def get_params_dict():
    '''以字典形式获取所有 trainable 参数'''
    param_dict = dict()
    for var in tf.trainable_variables():
        param_dict[var.name] = {'shape': list(map(int, var.shape)),
                                'number': int(reduce(mul, var.shape, 1))}
    return param_dict