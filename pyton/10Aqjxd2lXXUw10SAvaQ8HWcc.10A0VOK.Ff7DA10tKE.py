
        
        # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
            if file.filename == '':
            return redirect(request.url)
    
    # Open video file
video_capture = cv2.VideoCapture('short_hamilton_clip.mp4')
    
        :param img: An image (as a numpy array)
    :param number_of_times_to_upsample: How many times to upsample the image looking for faces. Higher numbers find smaller faces.
    :param model: Which face detection model to use. 'hog' is less accurate but faster on CPUs. 'cnn' is a more accurate
                  deep-learning model which is GPU/CUDA accelerated (if available). The default is 'hog'.
    :return: A list of tuples of found face locations in css (top, right, bottom, left) order
    '''
    if model == 'cnn':
        return [_trim_css_to_bounds(_rect_to_css(face.rect), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, 'cnn')]
    else:
        return [_trim_css_to_bounds(_rect_to_css(face), img.shape) for face in _raw_face_locations(img, number_of_times_to_upsample, model)]
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    from timeit import Timer
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
    
def all():
    return unittest.defaultTestLoader.loadTestsFromNames(TEST_MODULES)
    
        def test_oauth10_get_user(self):
        response = self.fetch(
            '/oauth10/client/login?oauth_token=zxcv',
            headers={'Cookie': '_oauth_request_token=enhjdg==|MTIzNA=='},
        )
        response.rethrow()
        parsed = json_decode(response.body)
        self.assertEqual(parsed['email'], 'foo@example.com')
        self.assertEqual(parsed['access_token'], dict(key='uiop', secret='5678'))
    
    
class ClientTestMixin(object):
    def setUp(self):
        super(ClientTestMixin, self).setUp()  # type: ignore
        self.server = CapServer()
        sock, port = bind_unused_port()
        self.server.add_sockets([sock])
        self.client = self.client_class(port=port)
    
        def get_ucp_test_image_tag(self, tag=None):
        return '{image}:{tag}'.format(
            image=COMPOSE_TESTS_IMAGE_BASE_NAME,
            tag=tag or self.version
        )
    
        def find_release(self, version):
        print('Retrieving release draft for {}'.format(version))
        releases = self.gh_repo.get_releases()
        for release in releases:
            if release.tag_name == version and release.title == version:
                return release
        return None
    
        @property
    def stop_signal(self):
        return self.get('Config.StopSignal')
    
        if 'id' in event:
        write_to_stream('%s: ' % event['id'], stream)
    
            if event['id'] in thread_map:
            if thread_map[event['id']].is_alive():
                continue
            # Container was stopped and started, we need a new thread
            thread_map.pop(event['id'], None)
    
        def __init__(self, volumes):
        self.volumes = volumes
    
    
class Save:
    def __init__(self):
        self.stream = None
        self.filt = None
        self.active_flows: typing.Set[flow.Flow] = set()
    
    
class SetHeaders:
    def __init__(self):
        self.lst = []
    
        def response(self, flow: http.HTTPFlow):
        if self.flt:
            for name, (value, attrs) in flow.response.cookies.items(multi=True):
                # FIXME: We now know that Cookie.py screws up some cookies with
                # valid RFC 822/1123 datetime specifications for expiry. Sigh.
                dom_port_path = ckey(attrs, flow)
    
    
class ServerConnection(tcp.TCPClient, stateobject.StateObject):
    '''
    A server connection
    
    		page.addToken(0x05, 'LinkId')
		page.addToken(0x06, 'DisplayName')
		page.addToken(0x07, 'IsFolder')
		page.addToken(0x08, 'CreationDate')
		page.addToken(0x09, 'LastModifiedDate')
		page.addToken(0x0A, 'IsHidden')
		page.addToken(0x0B, 'ContentLength')
		page.addToken(0x0C, 'ContentType')
		self.codePages.append(page)
		# endregion
    
        def __init__(self, wbxmlBytes):
    
            # find candidate events that are of the same topic as the provided
        # error.
        for data, _ in queue:
            data = data.copy()
            # and do they have a timestamp, uuid, and payload?
            assert data.pop('event_ts', None) is not None, \
                'event_ts is missing'
            assert data.pop('uuid', None) is not None, 'uuid is missing'
            # there is some variability, but this should at least be present
            assert 'event_topic' in data, 'event_topic is missing'
    
        def test_no_body_signing_register(self):
        res = self.do_login(
            headers={
                signing.SIGNATURE_BODY_HEADER: None,
            },
            expect_errors=True,
        )
        self.assert_403_response(res, 'signing.body.invalid.invalid_format')
    
            # Scenario: call raises AuthorizeNetException
        _request.make_request.side_effect = AuthorizeNetException('')
        return_value = delete_payment_profile(self.customer_id,
                                              self.payment_profile_id)
        self.assertFalse(return_value)
    
    
    {                    'request_url': request.fullpath,
                    'domain': request.host,
                    'geoip_country': context.location,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'referrer_domain': self.domain_mock(),
                    'referrer_url': request.headers.get(),
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'obfuscated_data': {
                        'client_ip': request.ip,
                    }
                },
            )
        )
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'http://s3.amazonaws.com/a.jpg')

    
        def test_expired_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        platform = 'test'
        version = 1
        header = '1:%s:%s:0:deadbeef' % (platform, version)
        self.assert_invalid(
            body,
            header=header,
            error=signing.ERRORS.EXPIRED_TOKEN,
            global_version=1,
            platform=platform,
            version=version,
            has_mac=True,
        )

    
        def test_padding_roundtrip(self):
        from r2.lib.tracking import _unpad_message, _pad_message
        tested = _unpad_message(_pad_message(MESSAGE))
        self.assertEquals(MESSAGE, tested)
    
        def test_weird_protocols(self):
        self.assertIsNotSafeRedditUrl(
            'javascript://%s/%%0d%%0aalert(1)' % g.domain
        )
        self.assertIsNotSafeRedditUrl('hackery:whatever')