
        
        
class BlackJackCard(Card):
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    
class QueryApi(object):
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
            status_line = 'HTTP/{version} {status} {reason}'.format(
            version=version,
            status=original.status,
            reason=original.reason
        )
        headers = [status_line]
        try:
            # `original.msg` is a `http.client.HTTPMessage` on Python 3
            # `_headers` is a 2-tuple
            headers.extend(
                '%s: %s' % header for header in original.msg._headers)
        except AttributeError:
            # and a `httplib.HTTPMessage` on Python 2.x
            # `headers` is a list of `name: val<CRLF>`.
            headers.extend(h.strip() for h in original.msg.headers)
    
        The message bytes are converted to an encoding suitable for
    `self.env.stdout`. Unicode errors are replaced and binary data
    is suppressed. The body is always streamed by line.
    
        def get_auth(self, username=None, password=None):
        '''
        If `auth_parse` is set to `True`, then `username`
        and `password` contain the parsed credentials.
    
    
class HTTPBasicAuth(requests.auth.HTTPBasicAuth):
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        plugin_manager.register(Plugin)
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
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
    
                for prefix in SESSION_IGNORED_HEADER_PREFIXES:
                if name.lower().startswith(prefix.lower()):
                    break
            else:
                self['headers'][name] = value
    
        def ensure_absent(self):
        '''Ensures the rule and targets are absent'''
        rule_description = self.rule.describe()
        if not rule_description:
            # Rule doesn't exist so don't need to delete
            return
        self.rule.delete()
    
    
DOCUMENTATION = '''
---
module: ec2_snapshot
short_description: creates a snapshot from an existing volume
description:
    - creates an EC2 snapshot from an existing EBS volume
version_added: '1.5'
options:
  volume_id:
    description:
      - volume from which to take the snapshot
    required: false
  description:
    description:
      - description to be applied to the snapshot
    required: false
  instance_id:
    description:
    - instance that has the required volume to snapshot mounted
    required: false
  device_name:
    description:
    - device name of a mounted volume to be snapshotted
    required: false
  snapshot_tags:
    description:
      - a hash/dictionary of tags to add to the snapshot
    required: false
    version_added: '1.6'
  wait:
    description:
      - wait for the snapshot to be ready
    type: bool
    required: false
    default: yes
    version_added: '1.5.1'
  wait_timeout:
    description:
      - how long before wait gives up, in seconds
      - specify 0 to wait forever
    required: false
    default: 0
    version_added: '1.5.1'
  state:
    description:
      - whether to add or create a snapshot
    required: false
    default: present
    choices: ['absent', 'present']
    version_added: '1.9'
  snapshot_id:
    description:
      - snapshot id to remove
    required: false
    version_added: '1.9'
  last_snapshot_min_age:
    description:
      - If the volume's most recent snapshot has started less than `last_snapshot_min_age' minutes ago, a new snapshot will not be created.
    required: false
    default: 0
    version_added: '2.0'
    
            elif desired_state == 'disabled':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be put in disabled state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.OFFLINE]:
                if one.host.status(host.ID, HOST_STATUS.DISABLED):
                    self.wait_for_host_state(host, [HOST_STATES.DISABLED])
                    result['changed'] = True
                else:
                    self.fail(msg='could not disable host')
            elif current_state in [HOST_STATES.DISABLED]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to disable' % current_state_name)
    
    
def nat_rules_to_dict(nat_rules):
    result = []
    for rule in nat_rules:
        gw_rule = rule.get_GatewayNatRule()
        result.append(
            dict(
                rule_type=rule.get_RuleType().lower(),
                original_ip=gw_rule.get_OriginalIp().lower(),
                original_port=(gw_rule.get_OriginalPort().lower() or 'any'),
                translated_ip=gw_rule.get_TranslatedIp().lower(),
                translated_port=(gw_rule.get_TranslatedPort().lower() or 'any'),
                protocol=(gw_rule.get_Protocol().lower() or 'any')
            )
        )
    return result
    
    
if __name__ == '__main__':
    main()

    
            if service is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('memberservice_hbacsvc', []), service,
                                            client.hbacrule_add_service,
                                            client.hbacrule_remove_service, 'hbacsvc') or changed
    
        try:
        data = urlencode(params)
        response, info = fetch_url(module, url, data=data)
    except Exception as e:
        module.fail_json(msg='Unable to notify Honeybadger: %s' % to_native(e), exception=traceback.format_exc())
    else:
        if info['status'] == 201:
            module.exit_json(changed=True)
        else:
            module.fail_json(msg='HTTP result code: %d connecting to %s' % (info['status'], url))
    
    # (c) 2013, Darryl Stoflet <stoflet@gmail.com>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        ##################################################################
    # deploy requires revision_id
    # annotation requires msg
    # We verify these manually
    ##################################################################
    
        def test_decode_bad(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
            # Force reload if files were modified
        # This is needed to recalculate augeas directive span
        if save_files:
            for sf in save_files:
                self.aug.remove('/files/'+sf)
            self.aug.load()
        if title and not temporary:
            self.finalize_checkpoint(title)
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-dns-cloudflare', u'certbot-dns-cloudflare Documentation',
     [author], 1)
]
    
    
setup_locate_faces = '''
import face_recognition
    
            # Draw a label with a name below the face
        text_width, text_height = draw.textsize(name)
        draw.rectangle(((left, bottom - text_height - 10), (right, bottom)), fill=(0, 0, 255), outline=(0, 0, 255))
        draw.text((left + 6, bottom - text_height - 5), name, fill=(255, 255, 255, 255))
    
    
if __name__ == '__main__':
    main()

    
        # Write the resulting image to the output video file
    print('Writing frame {} / {}'.format(frame_number, length))
    output_movie.write(frame)
    
            self.assertEqual(len(detected_faces), 1)
        self.assertAlmostEqual(detected_faces[0][0], 144, delta=25)
        self.assertAlmostEqual(detected_faces[0][1], 608, delta=25)
        self.assertAlmostEqual(detected_faces[0][2], 389, delta=25)
        self.assertAlmostEqual(detected_faces[0][3], 363, delta=25)
    
        # Sparkle the eyes
    d.polygon(face_landmarks['left_eye'], fill=(255, 255, 255, 30))
    d.polygon(face_landmarks['right_eye'], fill=(255, 255, 255, 30))
    
    # This is an example of running face recognition on a single image
# and drawing a box around each person that was identified.