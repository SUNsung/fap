
        
            def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
    
class State(Enum):
    unvisited = 0
    visited = 1
    
        def __init__(self, db):
        self.db = db
        pass
    
        class CChainDispatchTableTests(AbstractDispatchTableTests):
        pickler_class = pickle.Pickler
        def get_dispatch_table(self):
            return collections.ChainMap({}, pickle.dispatch_table)
    
        if os.name == 'posix' and 'HOME' not in os.environ:
        try:
            import pwd
            os.environ['HOME'] = pwd.getpwuid(os.getuid())[5]
        except (ImportError, KeyError):
            # bpo-10496: if the current user identifier doesn't exist in the
            # password database, do nothing
            pass
    
    if sys.executable:
    _PROJECT_BASE = os.path.dirname(_safe_realpath(sys.executable))
else:
    # sys.executable can be empty if argv[0] has been changed and Python is
    # unable to retrieve the real program name
    _PROJECT_BASE = _safe_realpath(os.getcwd())
    
    
# wait() and as_completed() similar to those in PEP 3148.
    
    def fatal(msg):
    '''
    A fatal error, bail out.
    '''
    sys.stderr.write('FATAL: ')
    sys.stderr.write(msg)
    sys.stderr.write('\n')
    sys.exit(1)
    
        def test_bytearray_wrap(self):
        self.assertEqual(pprint.pformat(bytearray(), width=1), 'bytearray(b'')')
        letters = bytearray(b'abcdefghijklmnopqrstuvwxyz')
        self.assertEqual(pprint.pformat(letters, width=40), repr(letters))
        self.assertEqual(pprint.pformat(letters, width=28), '''\
bytearray(b'abcdefghijkl'
          b'mnopqrstuvwxyz')''')
        self.assertEqual(pprint.pformat(letters, width=27), '''\
bytearray(b'abcdefghijkl'
          b'mnopqrstuvwx'
          b'yz')''')
        self.assertEqual(pprint.pformat(letters, width=25), '''\
bytearray(b'abcdefghijkl'
          b'mnopqrstuvwx'
          b'yz')''')
        special = bytearray(range(16))
        self.assertEqual(pprint.pformat(special, width=72), repr(special))
        self.assertEqual(pprint.pformat(special, width=57), '''\
bytearray(b'\\x00\\x01\\x02\\x03\\x04\\x05\\x06\\x07\\x08\\t\\n\\x0b'
          b'\\x0c\\r\\x0e\\x0f')''')
        self.assertEqual(pprint.pformat(special, width=41), '''\
bytearray(b'\\x00\\x01\\x02\\x03'
          b'\\x04\\x05\\x06\\x07\\x08\\t\\n\\x0b'
          b'\\x0c\\r\\x0e\\x0f')''')
        self.assertEqual(pprint.pformat(special, width=1), '''\
bytearray(b'\\x00\\x01\\x02\\x03'
          b'\\x04\\x05\\x06\\x07'
          b'\\x08\\t\\n\\x0b'
          b'\\x0c\\r\\x0e\\x0f')''')
        self.assertEqual(pprint.pformat({'a': 1, 'b': letters, 'c': 2},
                                        width=31), '''\
{'a': 1,
 'b': bytearray(b'abcdefghijkl'
                b'mnopqrstuvwx'
                b'yz'),
 'c': 2}''')
        self.assertEqual(pprint.pformat([[[[[letters]]]]], width=37), '''\
[[[[[bytearray(b'abcdefghijklmnop'
               b'qrstuvwxyz')]]]]]''')
        self.assertEqual(pprint.pformat([[[[[special]]]]], width=50), '''\
[[[[[bytearray(b'\\x00\\x01\\x02\\x03\\x04\\x05\\x06\\x07'
               b'\\x08\\t\\n\\x0b\\x0c\\r\\x0e\\x0f')]]]]]''')
    
    
async def start_server(client_connected_cb, host=None, port=None, *,
                       loop=None, limit=_DEFAULT_LIMIT, **kwds):
    '''Start a socket server, call back for each client connected.
    
            self.loop.run_until_complete(test())
    
            def ntransfercmd(self, cmd, rest=None):
            conn, size = FTP.ntransfercmd(self, cmd, rest)
            if self._prot_p:
                conn = self.context.wrap_socket(conn,
                                                server_hostname=self.host)
            return conn, size
    
        def _check_obtain_certificate(self, auth_count=1):
        if auth_count == 1:
            self.client.auth_handler.handle_authorizations.assert_called_once_with(
                self.eg_order,
                self.config.allow_subset_of_names)
        else:
            self.assertEqual(self.client.auth_handler.handle_authorizations.call_count, auth_count)
    
    docs_extras = [
    # If you have Sphinx<1.5.1, you need docutils<0.13.1
    # https://github.com/sphinx-doc/sphinx/issues/3212
    'repoze.sphinx.autointerface',
    'Sphinx>=1.2', # Annotation support
    'sphinx_rtd_theme',
]
    
    .. note::
   There are a few tools shipped with BIND that can all generate TSIG keys;
   ``dnssec-keygen``, ``rndc-confgen``, and ``ddns-confgen``. Try and use the
   most secure algorithm supported by your DNS server.
    
        bintray_api = BintrayAPI(os.environ['BINTRAY_TOKEN'], bintray_user)
    if not bintray_api.repository_exists(bintray_org, release_branch.name):
        print('Creating data repository {} on bintray'.format(release_branch.name))
        bintray_api.create_repository(bintray_org, release_branch.name, 'generic')
    else:
        print('Bintray repository {} already exists. Skipping'.format(release_branch.name))
    
        if 'progress' in event:
        write_to_stream('%s %s%s' % (status, event['progress'], terminator), stream)
    elif 'progressDetail' in event:
        detail = event['progressDetail']
        total = detail.get('total')
        if 'current' in detail and total:
            percentage = float(detail['current']) / float(total) * 100
            write_to_stream('%s (%.1f%%)%s' % (status, percentage, terminator), stream)
        else:
            write_to_stream('%s%s' % (status, terminator), stream)
    elif 'stream' in event:
        write_to_stream('%s%s' % (event['stream'], terminator), stream)
    else:
        write_to_stream('%s%s\n' % (status, terminator), stream)
    
        def test_get_digest_from_push(self):
        digest = 'sha256:abcd'
        events = [
            {'status': '...'},
            {'status': '...'},
            {'progressDetail': {}, 'aux': {'Digest': digest}},
        ]
        assert progress_stream.get_digest_from_push(events) == digest
    
        return None
    
        @classmethod
    def from_env_file(cls, base_dir, env_file=None):
        def _initialize():
            result = cls()
            if base_dir is None:
                return result
            if env_file:
                env_file_path = os.path.join(base_dir, env_file)
            else:
                env_file_path = os.path.join(base_dir, '.env')
            try:
                return cls(env_vars_from_file(env_file_path))
            except EnvFileNotFound:
                pass
            return result
    
    import ruamel.yaml
    
    
if __name__ == '__main__':
    main()

    
    DOCUMENTATION = '''
---
module: lightsail_region_facts
short_description: Gather facts about AWS Lightsail regions.
description:
     - Gather facts about AWS Lightsail regions.
version_added: '2.5.3'
author: 'Jack Ivanov (@jackivanov)'
options:
requirements:
  - 'python >= 2.6'
  - boto3
    
                self.assertEqual(actual, expected)
    
        keys = list(data.keys())