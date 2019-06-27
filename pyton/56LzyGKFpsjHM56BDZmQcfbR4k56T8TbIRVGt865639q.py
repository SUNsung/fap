
        
        options:
  query:
    description:
      - Specifies the resource type for which to gather facts.  Leave blank to retrieve all facts.
    required: true
    choices: [ 'aliases', 'all', 'config', 'mappings', 'policy', 'versions' ]
    default: 'all'
  function_name:
    description:
      - The name of the lambda function for which facts are requested.
    aliases: [ 'function', 'name']
  event_source_arn:
    description:
      - For query type 'mappings', this is the Amazon Resource Name (ARN) of the Amazon Kinesis or DynamoDB stream.
author: Pierre Jodouin (@pjodouin)
requirements:
    - boto3
extends_documentation_fragment:
  - aws
  - ec2
'''
    
    try:
    from google.cloud import pubsub
    HAS_GOOGLE_CLOUD_PUBSUB = True
except ImportError as e:
    HAS_GOOGLE_CLOUD_PUBSUB = False
    
            elif desired_state == 'absent':
            if current_state != HOST_ABSENT:
                if one.host.delete(host.ID):
                    result['changed'] = True
                else:
                    self.fail(msg='could not delete host from cluster')
    
    
def protocol_to_type(protocol):
    try:
        protocols = ProtocolsType()
        setattr(protocols, protocol, True)
        return protocols
    except AttributeError:
        raise VcaError('The value in protocol is not valid')
    
        module = AnsibleModule(argument_spec=argument_spec,
                           supports_check_mode=True,
                           )
    
        def _exec(self, args):
        cmd = [self._icinga2, 'feature']
        rc, out, err = self.module.run_command(cmd + args, check_rc=True)
        return rc, out
    
        if running and state == 'stopped':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('stop')
        if status in ['not monitored'] or 'stop pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not stopped' % name, status=status)
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
        def close(self):
        self.fd.close()
    
    def version_str_to_tuple(version_str):
    import re
    import sys
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
            return ''.join([t.text for t in self.tokens[start:stop+1]])
    
            The pattern is deliberately not stored as a loader attribute so that
        packages can continue discovery themselves. top_level_dir is stored so
        load_tests does not need to pass this argument in to loader.discover().
    
    # This is a copy of lib2to3.fixes.fix_imports.MAPPING.  We cannot import
# lib2to3 and use the mapping defined there, because lib2to3 uses pickle.
# Thus, this could cause the module to be imported recursively.
IMPORT_MAPPING = {
    '__builtin__' : 'builtins',
    'copy_reg': 'copyreg',
    'Queue': 'queue',
    'SocketServer': 'socketserver',
    'ConfigParser': 'configparser',
    'repr': 'reprlib',
    'tkFileDialog': 'tkinter.filedialog',
    'tkSimpleDialog': 'tkinter.simpledialog',
    'tkColorChooser': 'tkinter.colorchooser',
    'tkCommonDialog': 'tkinter.commondialog',
    'Dialog': 'tkinter.dialog',
    'Tkdnd': 'tkinter.dnd',
    'tkFont': 'tkinter.font',
    'tkMessageBox': 'tkinter.messagebox',
    'ScrolledText': 'tkinter.scrolledtext',
    'Tkconstants': 'tkinter.constants',
    'Tix': 'tkinter.tix',
    'ttk': 'tkinter.ttk',
    'Tkinter': 'tkinter',
    'markupbase': '_markupbase',
    '_winreg': 'winreg',
    'thread': '_thread',
    'dummy_thread': '_dummy_thread',
    'dbhash': 'dbm.bsd',
    'dumbdbm': 'dbm.dumb',
    'dbm': 'dbm.ndbm',
    'gdbm': 'dbm.gnu',
    'xmlrpclib': 'xmlrpc.client',
    'SimpleXMLRPCServer': 'xmlrpc.server',
    'httplib': 'http.client',
    'htmlentitydefs' : 'html.entities',
    'HTMLParser' : 'html.parser',
    'Cookie': 'http.cookies',
    'cookielib': 'http.cookiejar',
    'BaseHTTPServer': 'http.server',
    'test.test_support': 'test.support',
    'commands': 'subprocess',
    'urlparse' : 'urllib.parse',
    'robotparser' : 'urllib.robotparser',
    'urllib2': 'urllib.request',
    'anydbm': 'dbm',
    '_abcoll' : 'collections.abc',
}
    
    class TokenizeTest(TestCase):
    # Tests for the tokenize module.
    
    import smtplib
    
        for filename in os.listdir(directory):
        path = os.path.join(directory, filename)
        if not os.path.isfile(path):
            continue
        # Guess the content type based on the file's extension.  Encoding
        # will be ignored, although we should check for simple things like
        # gzip'd or compressed files.
        ctype, encoding = mimetypes.guess_type(path)
        if ctype is None or encoding is not None:
            # No guess could be made, or the file is encoded (compressed), so
            # use a generic bag-of-bits type.
            ctype = 'application/octet-stream'
        maintype, subtype = ctype.split('/', 1)
        with open(path, 'rb') as fp:
            msg.add_attachment(fp.read(),
                               maintype=maintype,
                               subtype=subtype,
                               filename=filename)
    # Now send or store the message
    if args.output:
        with open(args.output, 'wb') as fp:
            fp.write(msg.as_bytes(policy=SMTP))
    else:
        with smtplib.SMTP('localhost') as s:
            s.send_message(msg)
    
        with open(args.msgfile, 'rb') as fp:
        msg = email.message_from_binary_file(fp, policy=default)
    
            it = pool.imap(f, list(range(10)))
        for i in range(10):
            try:
                x = next(it)
            except ZeroDivisionError:
                if i == 5:
                    pass
            except StopIteration:
                break
            else:
                if i == 5:
                    raise AssertionError('expected ZeroDivisionError')
    
    def plus(a, b):
    time.sleep(0.5*random.random())
    return a + b
    
    
def relu(x):
    '''ReLU
    `o = max(0., x)`
    '''
    return tf.nn.relu(x)
    
    References：
    [1509.01626] Character-level Convolutional Networks for Text Classification https://arxiv.org/abs/1509.01626
'''
    
    l2_regularizer = L1L2Regularizer(l2=0.01)
    
    
class GraphSearch:
    
        def test_cloning_propperty_assigned_values(self):
        sample_object_1 = self.prototype.clone()
        sample_object_2 = self.prototype.clone(value='re-assigned')
        self.assertNotEqual(sample_object_1.value, sample_object_2.value)
    
    
class StandbyStateTest(unittest.TestCase):
    ''' Exemplary 2nd level state test class (here: Standby state). Add missing
    state test classes... '''
    
        def unsubscribe(self, msg):
        self.provider.unsubscribe(msg, self)
    
        @classmethod
    def get_registry(cls):
        return dict(cls.REGISTRY)
    
    
def main():
    '''
    Before subclassing
    >>> sorted(RegistryHolder.REGISTRY)
    ['BaseRegisteredClass']
    
    
def main():
    '''
    >>> move = Action('move')
    >>> person = Person('Jack', move)
    >>> person.do_action().amount('5m').stop()
    Jack move 5m then stop
    '''