
        
            def receive_friend_request(self, friend_id):
        pass
    
        def extract_year_month(self, timestamp):
        '''Return the year and month portions of the timestamp.'''
        ...
    
        with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))
    
        # test that successful registration redirects to the login page
    response = client.post('/auth/register', data={'username': 'a', 'password': 'a'})
    assert 'http://localhost/auth/login' == response.headers['Location']
    
        :param s: JSON string to deserialize.
    :param app: App instance to use to configure the JSON decoder.
        Uses ``current_app`` if not given, and falls back to the default
        encoder when not in an app context.
    :param kwargs: Extra arguments passed to :func:`json.dumps`.
    
            def _fail(self, *args, **kwargs):
            raise RuntimeError(
                'Signalling support is unavailable because the blinker'
                ' library is not installed.'
            )
    
        '''
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
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
    
        invocations = dict(
        aliases='alias_details',
        all='all_details',
        config='config_details',
        mappings='mapping_details',
        policy='policy_details',
        versions='version_details',
    )
    
    RETURN = '''
subscriptions:
    description: List of subscriptions.
    returned: When view is set to subscriptions.
    type: list
    sample: ['mysubscription', 'mysubscription2']
topic:
    description: Name of topic. Used to filter subscriptions.
    returned: Always
    type: str
    sample: 'mytopic'
topics:
    description: List of topics.
    returned: When view is set to topics.
    type: list
    sample: ['mytopic', 'mytopic2']
'''
    
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
    
    HAS_ONEANDONE_SDK = True
    
        try:
        client.login(username=module.params['ipa_user'],
                     password=module.params['ipa_pass'])
        changed, hbacrule = ensure(module, client)
        module.exit_json(changed=changed, hbacrule=hbacrule)
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils._text import to_native
from ansible.module_utils.urls import fetch_url
    
    
if __name__ == '__main__':
    main()
