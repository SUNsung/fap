
        
        from test.helper import gettestcases
from youtube_dl.utils import compat_urllib_parse_urlparse
from youtube_dl.utils import compat_urllib_request
    
    with io.open(lazy_extractors_filename, 'wt', encoding='utf-8') as f:
    f.write(module_src)

    
        def test_cbc_decrypt(self):
        data = bytes_to_intlist(
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd'
        )
        decrypted = intlist_to_bytes(aes_cbc_decrypt(data, self.key, self.iv))
        self.assertEqual(decrypted.rstrip(b'\x08'), self.secret_msg)
    
    import youtube_dl.YoutubeDL
from youtube_dl.compat import (
    compat_http_client,
    compat_urllib_error,
    compat_HTTPError,
)
from youtube_dl.utils import (
    DownloadError,
    ExtractorError,
    format_bytes,
    UnavailableVideoError,
)
from youtube_dl.extractor import get_info_extractor
    
        def test_morespace(self):
        jsi = JSInterpreter('function x (a) { return 2 * a + 1 ; }')
        self.assertEqual(jsi.call_function('x', 3), 7)
    
    RETURN = '''
response_metadata:
  description: response metadata about the snapshot
  returned: always
  type: dict
  sample:
    http_headers:
      content-length: 1490
      content-type: text/xml
      date: Tue, 07 Feb 2017 16:43:04 GMT
      x-amzn-requestid: 7f436dea-ed54-11e6-a04c-ab2372a1f14d
    http_status_code: 200
    request_id: 7f436dea-ed54-11e6-a04c-ab2372a1f14d
    retry_attempts: 0
snapshot:
  description: snapshot data
  returned: always
  type: dict
  sample:
    auto_minor_version_upgrade: true
    cache_cluster_create_time: 2017-02-01T17:43:58.261000+00:00
    cache_cluster_id: test-please-delete
    cache_node_type: cache.m1.small
    cache_parameter_group_name: default.redis3.2
    cache_subnet_group_name: default
    engine: redis
    engine_version: 3.2.4
    node_snapshots:
      cache_node_create_time: 2017-02-01T17:43:58.261000+00:00
      cache_node_id: 0001
      cache_size:
    num_cache_nodes: 1
    port: 11211
    preferred_availability_zone: us-east-1d
    preferred_maintenance_window: wed:03:00-wed:04:00
    snapshot_name: deletesnapshot
    snapshot_retention_limit: 0
    snapshot_source: manual
    snapshot_status: creating
    snapshot_window: 10:00-11:00
    vpc_id: vpc-c248fda4
changed:
  description: if a snapshot has been created, deleted, or copied
  returned: always
  type: bool
  sample:
    changed: true
'''
    
        mod_params = {}
    mod_params['state'] = module.params.get('state')
    mod_params['topic'] = module.params.get('topic')
    mod_params['view'] = module.params.get('view')
    
            if module.check_mode:
            mp_id = get_monitoring_policy(oneandone_conn, monitoring_policy_id)
            if (monitoring_policy_processes and mp_id):
                return True
            return False
    
        def role_add_hostgroup(self, name, item):
        return self.role_add_member(name=name, item={'hostgroup': item})
    
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
    
                if re.search('already enabled', out) is None:
                change_applied = True
        else:
            if rc == 0:
                change_applied = True
            # RC is not 0 for this already disabled feature, handle it as no change applied
            elif re.search('Cannot disable feature '%s'. Target file .* does not exist' % self.feature_name, out):
                change_applied = False
            else:
                self.module.fail_json(msg='Failed to disable feature. Command returns %s' % out)
    
    
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
        requires_project = True
    
        def _err(self, msg):
        sys.stderr.write(msg + os.linesep)
        self.exitcode = 1
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
    if twisted_version >= (14, 0, 0):
    # ClientTLSOptions requires a recent-enough version of Twisted.
    # Not having ScrapyClientTLSOptions should not matter for older
    # Twisted versions because it is not used in the fallback
    # ScrapyClientContextFactory.
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'
    
        @pytest.mark.parametrize('tz', ['US/Eastern', 'Asia/Tokyo'])
    def test_fillna_datetime64(self, tz):
        # GH 11343
        idx = pd.DatetimeIndex(['2011-01-01 09:00', pd.NaT,
                                '2011-01-01 11:00'])