
        
        signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
    # General information about the project.
project = u'youtube-dl'
copyright = u'2014, Ricardo Garcia Gonzalez'
    
        def test_subtitles_in_page(self):
        self.url = 'http://www.democracynow.org/2015/7/3/this_flag_comes_down_today_bree'
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertEqual(set(subtitles.keys()), set(['en']))
        self.assertEqual(md5(subtitles['en']), 'acaca989e24a9e45a6719c9b3d60815c')
    
        # Raises
        ValueError: in case of invalid `label_mode`.
    '''
    if label_mode not in ['fine', 'coarse']:
        raise ValueError('`label_mode` must be one of `'fine'`, `'coarse'`.')
    
        with gzip.open(paths[0], 'rb') as lbpath:
        y_train = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
    Denoising is one of the classic applications of autoencoders.
The denoising process removes unwanted noise that corrupted the
true signal.
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
def deserialize(name, custom_objects=None):
    return deserialize_keras_object(name,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='loss function')
    
            headers.insert(0, request_line)
        headers = '\r\n'.join(headers).strip()
    
    
class Conversion(object):
    
    
def get_stream_type(env, args):
    '''Pick the right stream type based on `env` and `args`.
    Wrap it in a partial with the type-specific args so that
    we don't need to think what stream we are dealing with.
    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_request_body_from_file_by_path(self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG)
        assert HTTP_OK in r
        assert FILE_CONTENT in r, r
        assert ''Content-Type': 'text/plain'' in r
    
    
class LookupDict(dict):
    '''Dictionary lookup object.'''
    
            self.host = host
        self.port = port
        self.requests_to_handle = requests_to_handle
    
    # ---------
# Specifics
# ---------
    
    import sys
    
            with server as address:
            sock1 = socket.socket()
            sock2 = socket.socket()
    
        def __getstate__(self):
        # Consume everything; accessing the content attribute makes
        # sure the content has been fully read.
        if not self._content_consumed:
            self.content
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    firewall_policy: ansible-firewall-policy-updated
    remove_rules:
     - rule_id #1
     - rule_id #2
     - ...
    wait: true
    wait_timeout: 500
    state: update
    
                # the cluster
            if host.CLUSTER_ID != self.get_parameter('cluster_id'):
                if one.cluster.addhost(self.get_parameter('cluster_id'), host.ID):
                    result['changed'] = True
                else:
                    self.fail(msg='failed to update the host cluster')
    
    
def protocol_to_type(protocol):
    try:
        protocols = ProtocolsType()
        setattr(protocols, protocol, True)
        return protocols
    except AttributeError:
        raise VcaError('The value in protocol is not valid')
    
        def role_mod(self, name, item):
        return self._post_json(method='role_mod', name=name, item=item)
    
    
if __name__ == '__main__':
    main()

    
    
class Icinga2FeatureHelper:
    def __init__(self, module):
        self.module = module
        self._icinga2 = module.get_bin_path('icinga2', True)
        self.feature_name = self.module.params['name']
        self.state = self.module.params['state']
    
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
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
            html = get_content(api_url)
        self.tree = ET.ElementTree(ET.fromstring(html))
    
    from ..common import *
    
        def prepare(self, **kwargs):
        if re.search(r'imgur\.com/a/', self.url):
            # album
            content = get_content(self.url)
            album = match1(content, r'album\s*:\s*({.*}),') or \
                    match1(content, r'image\s*:\s*({.*}),')
            album = json.loads(album)
            count = album['album_images']['count']
            images = album['album_images']['images']
            ext = images[0]['ext']
            self.streams = {
                'original': {
                    'src': ['http://i.imgur.com/%s%s' % (i['hash'], ext)
                            for i in images],
                    'size': sum([i['size'] for i in images]),
                    'container': ext[1:]
                },
                'thumbnail': {
                    'src': ['http://i.imgur.com/%ss%s' % (i['hash'], '.jpg')
                            for i in images],
                    'container': 'jpg'
                }
            }
            self.title = album['title']
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]