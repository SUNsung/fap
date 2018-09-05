
        
            elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
        def iter_lines(self, chunk_size):
        return ((line, b'\n') for line in self._orig.iter_lines(chunk_size))
    
        def __init__(self, env, explicit_json=False,
                 color_scheme=DEFAULT_STYLE, **kwargs):
        super(ColorFormatter, self).__init__(**kwargs)
        if not env.colors:
            self.enabled = False
            return
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        :param int timeout: time to wait for status
    :param function func: function to run, should return True or False
    :param args func_args: function args to pass to func
    :param kwargs func_kwargs: function key word args
    :returns: True if func returns truthy within timeout
    :raises: TimeOutException
    
        if delete_snapshot:
        try:
            for snapshot_id in snapshots:
                connection.delete_snapshot(SnapshotId=snapshot_id)
        except botocore.exceptions.ClientError as e:
            # Don't error out if root volume snapshot was already deregistered as part of deregister_image
            if e.response['Error']['Code'] == 'InvalidSnapshot.NotFound':
                pass
        exit_params['snapshots_deleted'] = snapshots
    
    
def list_ec2_images(ec2_client, module):
    
        if not asgs:
        return asgs
    try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        elbv2 = boto3_conn(module, conn_type='client', resource='elbv2', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        # This is nice to have, not essential
        elbv2 = None
    matched_asgs = []
    
        lch_name = module.params.get('lifecycle_hook_name')
    asg_name = module.params.get('autoscaling_group_name')
    transition = module.params.get('transition')
    role_arn = module.params.get('role_arn')
    notification_target_arn = module.params.get('notification_target_arn')
    notification_meta_data = module.params.get('notification_meta_data')
    heartbeat_timeout = module.params.get('heartbeat_timeout')
    default_result = module.params.get('default_result')
    
        module = AnsibleModule(argument_spec=argument_spec)
    
        if len(response['PlacementGroups']) != 1:
        return None
    else:
        placement_group = response['PlacementGroups'][0]
        return {
            'name': placement_group['GroupName'],
            'state': placement_group['State'],
            'strategy': placement_group['Strategy'],
        }
    
            if 'itag' in stream:
            print('    # download-with: %s' % log.sprint('you-get --itag=%s [URL]' % stream_id, log.UNDERLINE))
        else:
            print('    # download-with: %s' % log.sprint('you-get --format=%s [URL]' % stream_id, log.UNDERLINE))
    
    def youku_acfun_proxy(vid, sign, ref):
    endpoint = 'http://player.acfun.cn/flash_data?vid={}&ct=85&ev=3&sign={}&time={}'
    url = endpoint.format(vid, sign, str(int(time.time() * 1000)))
    json_data = json.loads(get_content(url, headers=dict(referer=ref)))['data']
    enc_text = base64.b64decode(json_data)
    dec_text = rc4(b'8bdc7e1a', enc_text).decode('utf8')
    youku_json = json.loads(dec_text)
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
        mime, ext, size = url_info(real_url)
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
        q = parse_qs(urlparse(url).query)
    
            if (not has_actual_code
            and not line.strip().startswith('//')
            and not line.strip().startswith('???')
            and not line.strip() == ''):
            has_actual_code = True