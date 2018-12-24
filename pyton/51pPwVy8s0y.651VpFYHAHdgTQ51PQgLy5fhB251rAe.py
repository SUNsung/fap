
        
        flags.DEFINE_integer('ci_enc_dim', CI_ENC_DIM,
                     'Cell hidden size, encoder of control inputs')
flags.DEFINE_integer('con_dim', CON_DIM,
                     'Cell hidden size, controller')
    
    
def add_alignment_projections(datasets, npcs, ntime=None, nsamples=None):
  '''Create a matrix that aligns the datasets a bit, under
  the assumption that each dataset is observing the same underlying dynamical
  system.
    
          softmax = sess.run(t['softmax_out'],
                         feed_dict={t['char_inputs_in']: char_ids_inputs,
                                    t['inputs_in']: inputs,
                                    t['targets_in']: targets,
                                    t['target_weights_in']: weights})
    
    
def convert_to_human_readable(id_to_word, arr, max_num_to_print):
  '''Convert a np.array of indices into words using id_to_word dictionary.
  Return max_num_to_print results.
  '''
  assert arr.ndim == 2
    
    import tensorflow as tf
    
    
def check_alphabetical(lines):
    '''
    checks if all entries per section are in alphabetical order based in entry title
    '''
    sections = {}
    section_line_num = {}
    for line_num, line in enumerate(lines):
        if line.startswith(anchor):
            category = line.split(anchor)[1].strip()
            sections[category] = []
            section_line_num[category] = line_num
            continue
        if not line.startswith('|') or line.startswith('|---'):
            continue
        raw_title = [x.strip() for x in line.split('|')[1:-1]][0]
        title_re_match = link_re.match(raw_title)
        if title_re_match:
            sections[category].append(title_re_match.group(1).upper())
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
            password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x0b\xe6\xa4\xd9z\x0e\xb8\xb9\xd0\xd4i_\x85\x1d\x99\x98_\xe5\x80\xe7.\xbf\xa5\x83'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 32))
        self.assertEqual(decrypted, self.secret_msg)
    
    
from youtube_dl import YoutubeDL
    
        def test_cache(self):
        ydl = FakeYDL({
            'cachedir': self.test_dir,
        })
        c = Cache(ydl)
        obj = {'x': 1, 'y': ['ä', '\\a', True]}
        self.assertEqual(c.load('test_cache', 'k.'), None)
        c.store('test_cache', 'k.', obj)
        self.assertEqual(c.load('test_cache', 'k2'), None)
        self.assertFalse(_is_empty(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), obj)
        self.assertEqual(c.load('test_cache', 'y'), None)
        self.assertEqual(c.load('test_cache2', 'k.'), None)
        c.remove()
        self.assertFalse(os.path.exists(self.test_dir))
        self.assertEqual(c.load('test_cache', 'k.'), None)
    
    
DOCUMENTATION = '''
---
module: elasticache_snapshot
short_description: Manage cache snapshots in Amazon Elasticache.
description:
  - Manage cache snapshots in Amazon Elasticache.
  - Returns information about the specified snapshot.
version_added: '2.3'
author: 'Sloane Hertel (@s-hertel)'
extends_documentation_fragment:
  - aws
  - ec2
requirements: [ boto3, botocore ]
options:
  name:
    description:
      - The name of the snapshot we want to create, copy, delete
    required: yes
  state:
    description:
      - Actions that will create, destroy, or copy a snapshot.
    choices: ['present', 'absent', 'copy']
  replication_id:
    description:
      - The name of the existing replication group to make the snapshot.
  cluster_id:
    description:
      - The name of an existing cache cluster in the replication group to make the snapshot.
  target:
    description:
      - The name of a snapshot copy
  bucket:
    description:
      - The s3 bucket to which the snapshot is exported
'''
    
        Basic Usage:
        >>> import boto3
        >>> iam = boto3.client('iam')
        >>> name = 'server-cert-name'
        >>> results = get_server_certs(iam, name)
        {
            'upload_date': '2015-04-25T00:36:40+00:00',
            'server_certificate_id': 'ADWAJXWTZAXIPIMQHMJPO',
            'certificate_body': '-----BEGIN CERTIFICATE-----\nbunch of random data\n-----END CERTIFICATE-----',
            'server_certificate_name': 'server-cert-name',
            'expiration': '2017-06-15T12:00:00+00:00',
            'path': '/',
            'arn': 'arn:aws:iam::911277865346:server-certificate/server-cert-name'
        }
    '''
    results = dict()
    try:
        if name:
            server_certs = [iam.get_server_certificate(ServerCertificateName=name)['ServerCertificate']]
        else:
            server_certs = iam.list_server_certificates()['ServerCertificateMetadataList']
    
        try:
        schema_facts = get_schema_facts(cursor)
        user_facts = get_user_facts(cursor)
        role_facts = get_role_facts(cursor)
        configuration_facts = get_configuration_facts(cursor)
        node_facts = get_node_facts(cursor)
        module.exit_json(changed=False,
                         ansible_facts={'vertica_schemas': schema_facts,
                                        'vertica_users': user_facts,
                                        'vertica_roles': role_facts,
                                        'vertica_configuration': configuration_facts,
                                        'vertica_nodes': node_facts})
    except NotSupportedError as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    except SystemExit:
        # avoid catching this on python 2.4
        raise
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
    
DOCUMENTATION = '''
---
module: group_by
short_description: Create Ansible groups based on facts
description:
  - Use facts to create ad-hoc groups that can be used later in a playbook.
  - This module is also supported for Windows targets.
version_added: '0.9'
options:
  key:
    description:
    - The variables whose values will be used as groups
    required: true
  parents:
    description:
    - The list of the parent groups
    required: false
    default: 'all'
    version_added: '2.4'
author: 'Jeroen Hoekx (@jhoekx)'
notes:
  - Spaces in group names are converted to dashes '-'.
  - This module is also supported for Windows targets.
'''
    
    from ansible.module_utils.basic import AnsibleModule
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    # The encoding of source files.
#source_encoding = 'utf-8-sig'
    
        :returns: file path and internal Augeas path
    :rtype: `tuple` of `str`
    
            :raises .errors.PluginError: If unable to revert the challenge config.
    
        def test_bad_save_finalize_checkpoint(self):
        self.config.reverter.finalize_checkpoint = mock.Mock(
            side_effect=errors.ReverterError)
        self.config.parser.add_dir(
            self.vh_truth[0].path, 'Test', 'bad_save_ckpt')
        self.assertRaises(errors.PluginError, self.config.save, 'Title')
    
        @mock.patch('certbot_apache.display_ops.display_util')
    @certbot_util.patch_get_utility()
    @mock.patch('certbot_apache.display_ops.logger')
    def test_small_display(self, mock_logger, mock_util, mock_display_util):
        mock_display_util.WIDTH = 20
        mock_util().menu.return_value = (display_util.OK, 0)
        self._call(self.vhosts)
    
        _multiprocess_can_split_ = True
    
        def _mod_config(self):
        '''Modifies Apache config files to include challenge vhosts.