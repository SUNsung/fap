
        
                request_line = '{method} {path}{query} HTTP/1.1'.format(
            method=self._orig.method,
            path=url.path or '/',
            query='?' + url.query if url.query else ''
        )
    
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
    
        msg = Message('Content-Disposition: %s' % content_disposition)
    filename = msg.get_filename()
    if filename:
        # Basic sanitation.
        filename = os.path.basename(filename).lstrip('.').strip()
        if filename:
            return filename
    
    from httpie.plugins.base import AuthPlugin
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
        Assumes `from __future__ import division`.
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        def __setitem__(self, key, value):
        # Use the lowercased key for lookups, but store the actual
        # key alongside the value.
        self._store[key.lower()] = (key, value)
    
        ...what? Basically, expose the parsed HTTP headers from the server response
    the way `cookielib` expects to see them.
    '''
    
                    low_conn = conn._get_conn(timeout=DEFAULT_POOL_TIMEOUT)
    
    
def _parse_content_type_header(header):
    '''Returns content type and parameters from given header
    
    # run scipy-based optimization (L-BFGS) over the pixels of the generated image
# so as to minimize the neural style loss
x = preprocess_image(base_image_path)
    
        assert success_result == 1
    partial_result = K.eval(
        metrics.sparse_top_k_categorical_accuracy(y_true, y_pred, k=2))
    
        # test lambda with output_mask lambda
    input_a = layers.Input(shape=input_shapes[0][1:])
    input_b = layers.Input(shape=input_shapes[1][1:])
    a = layers.Masking()(input_a)
    b = layers.Masking()(input_b)
    merged = legacy_layers.merge(
        [a, b], mode=lambda tup: K.concatenate([tup[0], tup[1]], axis=1),
        output_shape=lambda tup: (tup[0][0], tup[0][1] + tup[1][1]) + tup[0][2:],
        output_mask=lambda tup: K.concatenate([tup[0], tup[1]]))
    model = models.Model([input_a, input_b], merged)
    expected_output_shape = model.compute_output_shape(input_shapes)
    actual_output_shape = model.predict(inputs).shape
    assert expected_output_shape == actual_output_shape
    
    scale = 0.25
    
    
def backup_screenshot(ts):
    '''
    为了方便失败的时候 debug
    '''
    if not os.path.isdir(screenshot_backup_dir):
        os.mkdir(screenshot_backup_dir)
    shutil.copy('1.png', '{}{}.png'.format(screenshot_backup_dir, ts))
    
    
def main():
    '''
    主函数
    '''
    op = yes_or_no('请确保手机打开了 ADB 并连接了电脑，'
                   '然后打开跳一跳并【开始游戏】后再用本程序，确定开始？')
    if not op:
        print('bye')
        return
    print('程序版本号：{}'.format(VERSION))
    debug.dump_device_info()
    screenshot.check_screenshot()