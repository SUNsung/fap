
        
            '''
    if not env.stdout_isatty and not args.prettify:
        Stream = partial(
            RawStream,
            chunk_size=RawStream.CHUNK_SIZE_BY_LINE
            if args.stream
            else RawStream.CHUNK_SIZE
        )
    elif args.prettify:
        Stream = partial(
            PrettyStream if args.stream else BufferedPrettyStream,
            env=env,
            conversion=Conversion(),
            formatting=Formatting(
                env=env,
                groups=args.prettify,
                color_scheme=args.style,
                explicit_json=args.json,
            ),
        )
    else:
        Stream = partial(EncodedStream, env=env)
    
    import pytest
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
    
def test_valid_compute_mask():
    model = Sequential()
    model.add(Dense(1, input_dim=2))
    assert model.layers[0].supports_masking is True
    assert model.layers[0].compute_mask([model.input], [0., 1.]) == [0., 1.]
    
    if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    help_ = 'Load h5 model trained weights'
    parser.add_argument('-w', '--weights', help=help_)
    help_ = 'Use mse loss instead of binary cross entropy (default)'
    parser.add_argument('-m',
                        '--mse',
                        help=help_, action='store_true')
    args = parser.parse_args()
    models = (encoder, decoder)
    data = (x_test, y_test)
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
                for t in range(n_frames):
                x_shift = xstart + directionx * t
                y_shift = ystart + directiony * t
                noisy_movies[i, t, x_shift - w: x_shift + w,
                             y_shift - w: y_shift + w, 0] += 1
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
        def test_human_adapter_shall_make_noise(self):
        human = Human()
        human_adapter = Adapter(human, make_noise=human.speak)
        noise = human_adapter.make_noise()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update,\
                patch.object(cls.hex_obs, 'update') as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
        REGISTRY = {}
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    
    
                def on_message(self, message):
                self.write_message(str(len(message)))
    
            # Upgrade header should be present and should be equal to WebSocket
        if self.request.headers.get('Upgrade', '').lower() != 'websocket':
            self.set_status(400)
            log_msg = 'Can \'Upgrade\' only to \'WebSocket\'.'
            self.finish(log_msg)
            gen_log.debug(log_msg)
            return
    
        def test_connection_refused(self):
        cleanup_func, port = refusing_port()
        self.addCleanup(cleanup_func)
        with ExpectLog(gen_log, '.*', required=False):
            with self.assertRaises(socket.error) as cm:
                self.fetch('http://127.0.0.1:%d/' % port, raise_error=True)
    
    
class ApplicationTest(AsyncTestCase):
    def test_listen(self):
        app = Application([])
        server = app.listen(0, address='127.0.0.1')
        server.stop()
    
    # _parseparam and _parse_header are copied and modified from python2.7's cgi.py
# The original 2.7 version of this code did not correctly support some
# combinations of semicolons and double quotes.
# It has also been modified to support valueless parameters as seen in
# websocket extension negotiations, and to support non-ascii values in
# RFC 2231/5987 format.
    
        @gen_test
    def test_http10_no_content_length(self):
        # Regression test for a bug in which can_keep_alive would crash
        # for an HTTP/1.0 (not 1.1) response with no content-length.
        conn = HTTP1Connection(self.client_stream, True)
        self.server_stream.write(b'HTTP/1.0 200 Not Modified\r\n\r\nhello')
        self.server_stream.close()
    
        @skipBefore35
    @gen_test
    def test_async_for(self):
        q = queues.Queue()
        for i in range(5):
            q.put(i)
    
        @property
    def state(self):
        '''Return the state of the device.'''
        if self.pvcoutput is not None:
            return self.pvcoutput.energy_generation
        return None
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/light.zigbee/
'''
import voluptuous as vol
    
        args = parser.parse_args()
    
    
def _get_homehub_data(url):
    '''Return mock homehub data.'''
    return '''
    [
        {
            'mac': 'AA:BB:CC:DD:EE:FF,
            'hostname': 'hostname',
            'ip': '192.168.1.43',
            'ipv6': '',
            'name': 'hostname',
            'activity': '1',
            'os': 'Unknown',
            'device': 'Unknown',
            'time_first_seen': '2016/06/05 11:14:45',
            'time_last_active': '2016/06/06 11:33:08',
            'dhcp_option': '39043T90430T9TGK0EKGE5KGE3K904390K45GK054',
            'port': 'wl0',
            'ipv6_ll': 'fe80::gd67:ghrr:fuud:4332',
            'activity_ip': '1',
            'activity_ipv6_ll': '0',
            'activity_ipv6': '0',
            'device_oui': 'NA',
            'device_serial': 'NA',
            'device_class': 'NA'
        }
    ]
    '''