
        
                subheading = video.get('subheading')
        if subheading:
            title += ' - %s' % subheading
    
            asset_types = []
        subtitles = {}
        formats = []
        last_e = None
        for item in items_data.findall('.//item'):
            asset_type = xpath_text(item, 'assetType')
            if not asset_type or asset_type in asset_types or 'HLS_FPS' in asset_type or 'DASH_CENC' in asset_type:
                continue
            asset_types.append(asset_type)
            query = {
                'mbr': 'true',
                'assetTypes': asset_type,
            }
            if asset_type.startswith('HLS') or asset_type in ('OnceURL', 'StreamPack'):
                query['formats'] = 'MPEG4,M3U'
            elif asset_type in ('RTMP', 'WIFI', '3G'):
                query['formats'] = 'MPEG4,FLV'
            try:
                tp_formats, tp_subtitles = self._extract_theplatform_smil(
                    update_url_query(tp_release_url, query), content_id,
                    'Downloading %s SMIL data' % asset_type)
            except ExtractorError as e:
                last_e = e
                continue
            formats.extend(tp_formats)
            subtitles = self._merge_subtitles(subtitles, tp_subtitles)
        if last_e and not formats:
            raise last_e
        self._sort_formats(formats)
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    import io
import optparse
    
    with io.open(lazy_extractors_filename, 'wt', encoding='utf-8') as f:
    f.write(module_src)

    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
    __Note on specifying the initial state of RNNs__
    
        assert np.array_equal(before, after)
    
        # Returns
        String, the current default float type.
    
        def _ensure_group_is_present(
            self,
            group_name,
            parent_name,
            group_description):
        '''
        Checks to see if a server group exists, creates it if it doesn't.
        :param group_name: the name of the group to validate/create
        :param parent_name: the name of the parent group for group_name
        :param group_description: a short description of the server group (used when creating)
        :return: (changed, group) -
            changed:  Boolean- whether a change was made,
            group:  A clc group object for the group
        '''
        if not self.root_group:
            raise AssertionError('Implementation Error: Root Group not set')
        parent = parent_name if parent_name is not None else self.root_group.name
        description = group_description
        changed = False
        group = group_name
    
        def ensure_loadbalancerpool_absent(self, alias, location, name, port):
        '''
        Checks to see if a load balancer pool exists and deletes it if it does
        :param alias: The account alias
        :param location: the datacenter the load balancer resides in
        :param name: the name of the load balancer
        :param port: the port that the load balancer listens on
        :return: (changed, result) -
            changed: Boolean whether a change was made
            result: The result from the CLC API call
        '''
        changed = False
        result = None
        lb_exists = self._loadbalancer_exists(name=name)
        if lb_exists:
            lb_id = self._get_loadbalancer_id(name=name)
            pool_id = self._loadbalancerpool_exists(
                alias=alias,
                location=location,
                port=port,
                lb_id=lb_id)
            if pool_id:
                changed = True
                if not self.module.check_mode:
                    result = self.delete_loadbalancerpool(
                        alias=alias,
                        location=location,
                        lb_id=lb_id,
                        pool_id=pool_id)
            else:
                result = 'Pool doesn't exist'
        else:
            result = 'LB Doesn't Exist'
        return changed, result
    
        if not module.check_mode:
        if not size and not vsize:
            pool = system.pools.create(name=name, physical_capacity=Capacity('1TB'), virtual_capacity=Capacity('1TB'))
        elif size and not vsize:
            pool = system.pools.create(name=name, physical_capacity=Capacity(size), virtual_capacity=Capacity(size))
        elif not size and vsize:
            pool = system.pools.create(name=name, physical_capacity=Capacity('1TB'), virtual_capacity=Capacity(vsize))
        else:
            pool = system.pools.create(name=name, physical_capacity=Capacity(size), virtual_capacity=Capacity(vsize))
        # Default value of ssd_cache is True. Disable ssd chacing if False
        if not ssd_cache:
            pool.update_ssd_enabled(ssd_cache)
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    - name: Set a record and ensure that this is the only one
  netcup_dns:
    api_key: '...'
    api_password: '...'
    customer_id: '...'
    name: 'demo'
    domain: 'example.com'
    type: 'AAAA'
    value: '::1'
    solo: true
'''
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(required=True),
            port=dict(default=623, type='int'),
            user=dict(required=True, no_log=True),
            password=dict(required=True, no_log=True),
            state=dict(default='present', choices=['present', 'absent']),
            bootdev=dict(required=True, choices=['network', 'hd', 'floppy', 'safe', 'optical', 'setup', 'default']),
            persistent=dict(default=False, type='bool'),
            uefiboot=dict(default=False, type='bool')
        ),
        supports_check_mode=True,
    )
    
            html = get_content(api_url)
        self.tree = ET.ElementTree(ET.fromstring(html))
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
        elif 'subject' in url:
        titles = re.findall(r'data-title='([^']*)'>', html)
        song_id = re.findall(r'<li class='song-item' id='([^']*)'', html)
        song_ssid = re.findall(r'data-ssid='([^']*)'', html)
        get_song_url = 'http://music.douban.com/j/songlist/get_song_url'
    
        @classmethod
    def funshion_decrypt_str(cls, a_str, coeff):
        # r'.{27}0' pattern, untested
        if len(a_str) == 28 and a_str[-1] == '0':
            data_bytes = base64.b64decode(a_str[:27] + '=')
            clear = cls.funshion_decrypt(data_bytes, coeff)
            return binascii.hexlify(clear.encode('utf8')).upper()
    
        m3u8_url = get_m3u8_url(stream_id)
    
            self._built = False
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
    
class ClientTestCommon(test_util.ConfigTestCase):
    '''Common base class for certbot.client.Client tests.'''
    
    Use of this plugin requires a configuration file containing the target DNS
server and optional port that supports RFC 2136 Dynamic Updates, the name
of the TSIG key, the TSIG key secret itself and the algorithm used if it's
different to HMAC-MD5.
    
    
def _prepare_args_env(certbot_args, directory_url, http_01_port, tls_alpn_01_port,
                      config_dir, workspace, force_renew):
    new_environ = os.environ.copy()
    new_environ['TMPDIR'] = workspace