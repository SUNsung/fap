
        
            def test_app_alias_alter_history(self, settings, shell):
        settings.alter_history = True
        assert 'builtin history delete' in shell.app_alias('FUCK')
        assert 'builtin history merge' in shell.app_alias('FUCK')
        settings.alter_history = False
        assert 'builtin history delete' not in shell.app_alias('FUCK')
        assert 'builtin history merge' not in shell.app_alias('FUCK')
    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['bash', '-c', 'echo $BASH_VERSION'],
                     stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').strip()

    
        def _script_from_history(self, line):
        if '- cmd: ' in line:
            return line.split('- cmd: ', 1)[1]
        else:
            return ''
    
        def encode_utf8(self, command):
        if six.PY2:
            return command.encode('utf8')
        return command
    
        def _parse_alias(self, alias):
        name, value = alias.split('=', 1)
        if value[0] == value[-1] == ''' or value[0] == value[-1] == ''':
            value = value[1:-1]
        return name, value
    
        response, info = fetch_url(module=module, url=url, headers=headers, data=rawdata, method=method)
    status = info['status']
    content = ''
    if response:
        content = response.read()
    if status == 204:
        return True, content
    elif status == 200 or status == 201:
        return True, json.loads(content)
    else:
        return False, str(status) + ': ' + content
    
        def _get_policies_for_datacenter(self, p):
        '''
        Get the Policies for a datacenter by calling the CLC API.
        :param p: datacenter to get policies from
        :return: policies in the datacenter
        '''
        response = {}
    
    ---
- name: Create Server Group
  hosts: localhost
  gather_facts: False
  connection: local
  tasks:
    - name: Create / Verify a Server Group at CenturyLink Cloud
      clc_group:
        name: My Cool Server Group
        parent: Default Group
        state: present
      register: clc
    
    LINODE_IMP_ERR = None
try:
    from linode_api4 import Instance, LinodeClient
    HAS_LINODE_DEPENDENCY = True
except ImportError:
    LINODE_IMP_ERR = traceback.format_exc()
    HAS_LINODE_DEPENDENCY = False
    
        # create a client object
    client = MatrixClient(module.params['hs_url'])
    if module.params['token'] is not None:
        client.api.token = module.params['token']
    else:
        client.login(module.params['user_id'], module.params['password'], sync=False)
    
        response, info = post_sendgrid_api(module, username, password,
                                       from_address, to_addresses, subject, body, attachments=attachments,
                                       bcc=bcc, cc=cc, headers=headers, html_body=html_body, api_key=api_key)
    
        if layman.is_installed(name):
        return False
    
        def log(self, e):
        if log.log_tier(e.level) == log.log_tier('error'):
            outfile = self.outfile or realstderr
        else:
            outfile = self.outfile or realstdout
    
        Attributes:
        address: Remote address. Can be both a domain or an IP address.
        ip_address: Resolved remote IP address.
        source_address: Local IP address or client's source IP address.
        tls_established: True if TLS is established, False otherwise
        cert: The certificate presented by the remote during the TLS handshake
        sni: Server Name Indication sent by the proxy during the TLS handshake
        alpn_proto_negotiated: The negotiated application protocol
        tls_version: TLS version
        via: The underlying server connection (e.g. the connection to the upstream proxy in upstream proxy mode)
        timestamp_start: Connection start timestamp
        timestamp_tcp_setup: TCP ACK received timestamp
        timestamp_tls_setup: TLS established timestamp
        timestamp_end: Connection end timestamp
    '''
    
    
    class TextChunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.keyword = (self._io.read_bytes_term(0, False, True, True)).decode(u'iso8859-1')
            self.text = (self._io.read_bytes_full()).decode(u'iso8859-1')
    
    		logging.debug('Total bytes dequeued: %d' % wbXMLBytes.bytesDequeued)

    
        def configure(self, updated):
        if 'web_static_viewer' in updated and ctx.options.web_static_viewer:
            flows = io.read_flows_from_paths([ctx.options.rfile])
            p = pathlib.Path(ctx.options.web_static_viewer).expanduser()
            self.export(p, flows)
    
    
class TestBombEnemy(unittest.TestCase):
    def test_3x4(self):
        grid1 = [
                 ['0','E','0','0'],
                 ['E','0','W','E'],
                 ['0','E','0','0']
                ]
        self.assertEqual(3, bomb_enemy.max_killed_enemies(grid1))
    
        def _remove_from_nonleaf_node(self, node: Node, key_index: int):
        key = node.keys[key_index]
        left_subtree = node.children[key_index]
        if len(left_subtree.keys) > self.min_numbers_of_keys:
            largest_key = self._find_largest_and_delete_in_left_subtree(left_subtree)
        elif len(node.children[key_index + 1].keys) > self.min_numbers_of_keys:
            largest_key = self._find_largest_and_delete_in_right_subtree(node.children[key_index + 1])
        else:
            self._merge(node, key_index, key_index + 1)
            return self._remove_key(node, key)
    
    def remove_dups_wothout_set(head):
    '''
    Time Complexity: O(N^2)
    Space Complexity: O(1)
    '''
    current = head
    while current:
        runner = current
        while runner.next:
            if runner.next.val == current.val:
                runner.next = runner.next.next
            else:
                runner = runner.next
        current = current.next