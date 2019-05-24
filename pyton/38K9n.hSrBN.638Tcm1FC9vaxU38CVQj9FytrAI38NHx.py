
        
            module.exit_json(changed=changed)
    
        if state == 'absent':
        if not module.params.get('name'):
            module.fail_json(
                msg=''name' parameter is required to delete a firewall policy.')
        try:
            (changed, firewall_policy) = remove_firewall_policy(module, oneandone_conn)
        except Exception as e:
            module.fail_json(msg=str(e))
    
            if sourcehostgroup is not None:
            changed = client.modify_if_diff(name, ipa_hbacrule.get('sourcehost_group', []), sourcehostgroup,
                                            client.hbacrule_add_sourcehost,
                                            client.hbacrule_remove_sourcehost, 'hostgroup') or changed
    
    import traceback
    
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
    
    
- name: Remove device from CA Spectrum
  local_action:
    module: spectrum_device
    device: '{{ ansible_host }}'
    landscape: '{{ landscape_handle }}'
    oneclick_url: http://oneclick.example.com:8080
    oneclick_user: username
    oneclick_password: password
    use_proxy: no
    state: absent
'''
    
    
def send_annotation_event(module, key, msg, annotated_by='Ansible', level=None, instance_id=None, event_epoch=None):
    '''Send an annotation event to Stackdriver'''
    annotation_api = 'https://event-gateway.stackdriver.com/v1/annotationevent'
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.
    
    import json
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
    	xml = get_html('http://www.ehow.com/services/video/series.xml?demand_ehow_videoid=%s' % vid)
    
	from xml.dom.minidom import parseString
	doc = parseString(xml)
	tab = doc.getElementsByTagName('related')[0].firstChild
    
        title = match1(html, r'&title=([^&]+)')
    
    import json
    
    
site_info = 'huomao.com'
download = huomaotv_download
download_playlist = playlist_not_supported('huomao')

    
            else:
            # gallery image
            content = get_content(self.url)
            image = json.loads(match1(content, r'image\s*:\s*({.*}),'))
            ext = image['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (image['hash'], ext)],
                    'size': image['size'],
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (image['hash'], '.jpg')],
                    'container': 'jpg'
                }
            }
            self.title = image['title'] or image['hash']
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
    
def main(args=None):
    args = parse_args(args)
    fetch(args.version)
    
    ax = fig.add_axes((0.45, 0.1, 0.16, 0.8))
bar_data = [2.1, -00.8, 1.1, 2.5, -2.1, -0.5, -2.0, 1.5]
ax.set_ylim(-3, 3)
ax.set_xticks([])
ax.set_yticks([])
ax.bar(np.arange(len(bar_data)), bar_data)
    
        expected = pd.Series([1, 2, inc, 4])
    tm.assert_series_equal(s, expected)

    
    
@pytest.fixture
def ts():
    return tm.makeTimeSeries()
    
        expected = series.groupby(groupers).mean()
    
    
Your class ``TestDtype`` will inherit all the tests defined on
``BaseDtypeTests``. pytest's fixture discover will supply your ``dtype``
wherever the test requires it. You're free to implement additional tests.
    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data