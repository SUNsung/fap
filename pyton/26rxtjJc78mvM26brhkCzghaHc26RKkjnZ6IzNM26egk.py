
        
            def test_when_etag_changed(self, shelve, fn, key):
        shelve.update({key: {'etag': '-1', 'value': 'old-value'}})
        assert fn() == 'test'
        assert shelve == {key: {'etag': '0', 'value': 'test'}}
    
    
def match(command):
    return (command.script_parts
            and (command.script_parts[0] in ('pacman', 'yay', 'yaourt')
                 or command.script_parts[0:2] == ['sudo', 'pacman'])
            and 'error: target not found:' in command.output)
    
        def test_how_to_configure_when_config_not_found(self, shell,
                                                    config_exists):
        config_exists.return_value = False
        assert not shell.how_to_configure().can_configure_automatically
    
    
@pytest.mark.parametrize('script, pyenv_cmd, result', [
    ('pyenv globe', 'globe', 'pyenv global'),
    ('pyenv intall 3.8.0', 'intall', 'pyenv install 3.8.0'),
    ('pyenv list', 'list', 'pyenv install --list'),
    ('pyenv remove 3.8.0', 'remove', 'pyenv uninstall 3.8.0'),
])
def test_get_new_command(script, pyenv_cmd, output, result):
    assert result in get_new_command(Command(script, output))

    
    The most similar choice to 'lis' is:
    list
'''
    
    # Run training
model.compile(optimizer='adam', loss='categorical_crossentropy')
model.fit([encoder_input_data, decoder_input_data], decoder_target_data,
          batch_size=batch_size,
          epochs=epochs,
          validation_split=0.2)
# Save model
model.save('cnn_s2s.h5')
    
        # build the discriminator
    print('Discriminator model:')
    discriminator = build_discriminator()
    discriminator.compile(
        optimizer=Adam(lr=adam_lr, beta_1=adam_beta_1),
        loss=['binary_crossentropy', 'sparse_categorical_crossentropy']
    )
    discriminator.summary()
    
    - __return_sequences__: Boolean. Whether to return the last output
    in the output sequence, or the full sequence.
- __return_state__: Boolean. Whether to return the last state
    in addition to the output.
- __go_backwards__: Boolean (default False).
    If True, process the input sequence backwards and return the
    reversed sequence.
- __stateful__: Boolean (default False). If True, the last state
    for each sample at index i in a batch will be used as initial
    state for the sample of index i in the following batch.
- __unroll__: Boolean (default False).
    If True, the network will be unrolled,
    else a symbolic loop will be used.
    Unrolling can speed-up a RNN,
    although it tends to be more memory-intensive.
    Unrolling is only suitable for short sequences.
- __input_dim__: dimensionality of the input (integer).
    This argument (or alternatively,
    the keyword argument `input_shape`)
    is required when using this layer as the first layer in a model.
- __input_length__: Length of input sequences, to be specified
    when it is constant.
    This argument is required if you are going to connect
    `Flatten` then `Dense` layers upstream
    (without it, the shape of the dense outputs cannot be computed).
    Note that if the recurrent layer is not the first layer
    in your model, you would need to specify the input length
    at the level of the first layer
    (e.g. via the `input_shape` argument)
    
            with np.load('data_threads.npz') as arr:
            while True:
                batch_index = np.random.randint(0, n_samples - batch_size)
                start = batch_index
                end = start + batch_size
                X = arr['data'][start: end]
                y = arr['labels'][start: end]
                yield X, y
    
            if self.stateful:
            updates = []
            for i in range(len(states)):
                updates.append((self.states[i], states[i]))
            self.add_update(updates, inputs)
    
            if (
            response_dest_account_alias and str(response_dest_account_alias) != str(request_dest_account_alias)) or (
            response_enabled != request_enabled) or (
            response_source and response_source != request_source) or (
                response_dest and response_dest != request_dest) or (
                    response_ports and response_ports != request_ports):
            changed = True
        return changed
    
    RETURN = '''
server_ids:
    description: The list of server ids that are changed
    returned: success
    type: list
    sample:
        [
            'UC1TEST-SVR01',
            'UC1TEST-SVR02'
        ]
'''
    
    
if __name__ == '__main__':
    main()

    
            # Checks all keys in first dict against the second dict
        for key in resource1:
            if key not in resource2:
                if resource1[key] is not None:
                    # Inexistent key is equivalent to exist with value None
                    self.module.log(self.MSG_DIFF_AT_KEY.format(key) + debug_resources)
                    return False
            # If both values are null, empty or False it will be considered equal.
            elif not resource1[key] and not resource2[key]:
                continue
            elif isinstance(resource1[key], Mapping):
                # recursive call
                if not self.compare(resource1[key], resource2[key]):
                    self.module.log(self.MSG_DIFF_AT_KEY.format(key) + debug_resources)
                    return False
            elif isinstance(resource1[key], list):
                # change comparison function to compare_list
                if not self.compare_list(resource1[key], resource2[key]):
                    self.module.log(self.MSG_DIFF_AT_KEY.format(key) + debug_resources)
                    return False
            elif _standardize_value(resource1[key]) != _standardize_value(resource2[key]):
                self.module.log(self.MSG_DIFF_AT_KEY.format(key) + debug_resources)
                return False
    
    RETURN = '''
modlist:
  description: list of modified parameters
  returned: success
  type: list
  sample: '[[2, 'olcRootDN', ['cn=root,dc=example,dc=com']]]'
'''
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
    __all__ = ['dailymotion_download']
    
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
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)