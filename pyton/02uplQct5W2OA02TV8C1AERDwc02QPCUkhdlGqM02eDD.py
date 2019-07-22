
        
        
def main():
    ''' main entry point for module execution
    '''
    backup_spec = dict(
        filename=dict(),
        dir_path=dict(type='path')
    )
    argument_spec = dict(
        src=dict(type='path'),
    
        def test_action_with_complex_and_complex_args(self):
        m = ModuleArgsParser(dict(action=dict(module='copy', args=dict(src='a', dest='b'))))
        mod, args, to = m.parse()
        self._debug(mod, args, to)
    
            testrole/tasks/main.yml:
        - include: 'include1.yml'
          static: no
    
        wapi = WapiModule(module)
    # to check for vendor specific dhcp option
    ib_spec = check_vendor_specific_dhcp_option(module, ib_spec)
    
    - name: Configure interface in access and trunk mode using aggregate
  junos_l2_interface:
    aggregate:
    - name: ge-0/0/1
      description: test-interface-access
      mode: access
      access_vlan: red
    - name: ge-0/0/2
      description: test-interface-trunk
      mode: trunk
      trunk_vlans:
      - blue
      - green
      native_vlan: 100
    active: True
    state: present
'''
    
        Async friendly.
    '''
    data[msg['key']] = msg['value']
    await store.async_save(data)
    connection.send_message(websocket_api.result_message(
        msg['id'],
    ))
    
        assert 0 == len(calls)
    
        result = await async_setup_component(hass, 'snips', {
        'snips': {
            'feedback_sounds': 'on',
            'probability': 'none',
            'site_ids': 'default'
        },
    })
    assert not result
    
        def test_invalidcalib(self):
        '''Test invalid sensor values.'''
        self.hass.states.set('test.indoortemp', '10',
                             {ATTR_UNIT_OF_MEASUREMENT: TEMP_CELSIUS})
        self.hass.states.set('test.outdoortemp', '10',
                             {ATTR_UNIT_OF_MEASUREMENT: TEMP_CELSIUS})
        self.hass.states.set('test.indoorhumidity', '0',
                             {ATTR_UNIT_OF_MEASUREMENT: '%'})
    
        mock_discover, mock_platform = yield from mock_discovery(hass, discover)
    
      def apply_gradients(self, grads_and_vars, global_step=None, name=None):
    '''See base class.'''
    assignments = []
    for (grad, param) in grads_and_vars:
      if grad is None or param is None:
        continue
    
      @classmethod
  def get_unreachable_ops(cls, graph, outputs):
    '''Finds all of the tensors in graph that are unreachable from outputs.'''
    outputs = cls.flatten_recursive(outputs)
    output_to_op = collections.defaultdict(list)
    op_to_all = collections.defaultdict(list)
    assign_out_to_in = collections.defaultdict(list)
    
        per_example_loss = -tf.reduce_sum(one_hot_labels * log_probs, axis=-1)
    loss = tf.reduce_mean(per_example_loss)
    
      def test_is_whitespace(self):
    self.assertTrue(tokenization._is_whitespace(u' '))
    self.assertTrue(tokenization._is_whitespace(u'\t'))
    self.assertTrue(tokenization._is_whitespace(u'\r'))
    self.assertTrue(tokenization._is_whitespace(u'\n'))
    self.assertTrue(tokenization._is_whitespace(u'\u00A0'))
    
        :param arg1: Description of arg1.
    :type arg1: str.
    :param arg2: Description of arg2.
    :type arg2: bool.
    :returns:  int -- description of the return value.
    :raises: AttributeError, KeyError
    '''
    docstring_info = docstrings.parse(docstring)
    expected_docstring_info = DocstringInfo(
        summary='Docstring summary.',
        description='This is a longer description of the docstring. It spans '
        'across multiple lines.',
        args=[
            ArgInfo(name='arg1', type='str',
                    description='Description of arg1.'),
            ArgInfo(name='arg2', type='bool',
                    description='Description of arg2.'),
        ],
        returns='int -- description of the return value.',
        raises='AttributeError, KeyError',
    )
    self.assertEqual(docstring_info, expected_docstring_info)
    
      fish_source = '''function __fish_using_command
    set cmd (commandline -opc)
    for i in (seq (count $cmd) 1)
        switch $cmd[$i]
        case '-*'
        case '*'
            if [ $cmd[$i] = $argv[1] ]
                return 0
            else
                return 1
            end
        end
    end
    return 1
end
    
    if __name__ == '__main__':
  main()

    
      def testSetParseFnsDefaultsFromFire(self):
    # Fire should use the decorator to know how to parse string arguments.
    self.assertEqual(core.Fire(WithDefaults, command=['example1']), (10, int))
    self.assertEqual(core.Fire(WithDefaults, command=['example1', '10']),
                     (10, float))
    self.assertEqual(core.Fire(WithDefaults, command=['example1', '13']),
                     (13, float))
    self.assertEqual(core.Fire(WithDefaults, command=['example1', '14.0']),
                     (14, float))
    
        return bot_params

    
        piece_x_sum = 0
    piece_x_c = 0
    piece_y_max = 0
    scan_x_border = int(w / 8)  # 扫描棋子时的左右边界
    scan_start_y = 0  # 扫描的起始 y 坐标
    im_pixel = im.load()
    # 以 50px 步长，尝试探测 scan_start_y
    for i in range(int(h / 3), int(h * 2 / 3), 50):
        last_pixel = im_pixel[0, i]
        for j in range(1, w):
            pixel = im_pixel[j, i]
            # 不是纯色的线，则记录 scan_start_y 的值，准备跳出循环
            if pixel[0] != last_pixel[0] or pixel[1] != last_pixel[1] or pixel[2] != last_pixel[2]:
                scan_start_y = i - 50
                break
        if scan_start_y:
            break
    # print('scan_start_y: {}'.format(scan_start_y))
    
    
fig = plt.figure()
pull_screenshot()
img = np.array(Image.open('autojump.png'))
im = plt.imshow(img, animated=True)
    
    # Enable and configure HTTP caching (disabled by default)
# See http://scrapy.readthedocs.org/en/latest/topics/downloader-middleware.html#httpcache-middleware-settings
#HTTPCACHE_ENABLED = True
#HTTPCACHE_EXPIRATION_SECS = 0
#HTTPCACHE_DIR = 'httpcache'
#HTTPCACHE_IGNORE_HTTP_CODES = []
#HTTPCACHE_STORAGE = 'scrapy.extensions.httpcache.FilesystemCacheStorage'

    
    def alter_content(request: HttpRequest, content: bytes) -> bytes:
    first_paragraph_text = get_content_description(content, request)
    return content.replace(request.placeholder_open_graph_description.encode('utf-8'),
                           first_paragraph_text.encode('utf-8'))
    
        user_file = list(request.FILES.values())[0]
    file_size = user_file._get_size()
    if settings.MAX_FILE_UPLOAD_SIZE * 1024 * 1024 < file_size:
        return json_error(_('Uploaded file is larger than the allowed limit of %s MB') % (
            settings.MAX_FILE_UPLOAD_SIZE))
    check_upload_within_quota(user_profile.realm, file_size)