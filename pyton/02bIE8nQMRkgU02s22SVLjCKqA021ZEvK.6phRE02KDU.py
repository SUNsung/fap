
        
                    location ~ ^/users/(.+\.(?:gif|jpe?g|png))$ {
              alias /data/w3/images/$1;
            }
        '''
        parsed = loads(test)
        self.assertEqual(parsed, [[['if', '($http_user_agent', '~', 'MSIE)'],
            [['rewrite', '^(.*)$', '/msie/$1', 'break']]],
            [['if', '($http_cookie', '~*', ''id=([^;]+)(?:;|$)')'], [['set', '$id', '$1']]],
            [['if', '($request_method', '=', 'POST)'], [['return', '405']]],
            [['if', '($request_method)'],
            [['return', '403']]], [['if', '($args', '~', 'post=140)'],
            [['rewrite', '^', 'http://example.com/']]],
            [['location', '~', '^/users/(.+\\.(?:gif|jpe?g|png))$'],
            [['alias', '/data/w3/images/$1']]]]
        )
    
    import mock
    
    import mock
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update,\
                patch.object(cls.hex_obs, 'update') as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
        class ClassRegistree(BaseRegisteredClass):
    
        def test_dog_eng_localization(self):
        self.assertEqual(self.e.get('dog'), 'dog')
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour, current_time.minute)
        return current_time_formatted
    
        def main_method(self):
        '''will execute either _class_method_1 or _class_method_2
    
        def publishReport(self):
        self._db.update()
        self._reporter.report()
    
    
class NotSpecification(CompositeSpecification):
    _wrapped = Specification()
    
    
class POSTHandler(tornado.web.RequestHandler):
    def post(self):
        for field_name, files in self.request.files.items():
            for info in files:
                filename, content_type = info['filename'], info['content_type']
                body = info['body']
                logging.info('POST '%s' '%s' %d bytes',
                             filename, content_type, len(body))
    
    define('port', default=8888, help='port to listen on')
define('config_file', default='secrets.cfg',
       help='filename for additional configuration')
    
        def on_message(self, message):
        logging.info('got message %r', message)
        parsed = tornado.escape.json_decode(message)
        chat = {
            'id': str(uuid.uuid4()),
            'body': parsed['body'],
        }
        chat['html'] = tornado.escape.to_basestring(
            self.render_string('message.html', message=chat))
    
        PATTERN = '''import_from< 'from' module_name='__future__' 'import' any >'''
    
        Waits until new messages are available before returning anything.
    '''
    async def post(self):
        cursor = self.get_argument('cursor', None)
        messages = global_message_buffer.get_messages_since(cursor)
        while not messages:
            # Save the Future returned here so we can cancel it in
            # on_connection_close.
            self.wait_future = global_message_buffer.cond.wait()
            try:
                await self.wait_future
            except asyncio.CancelledError:
                return
            messages = global_message_buffer.get_messages_since(cursor)
        if self.request.connection.stream.closed():
            return
        self.write(dict(messages=messages))
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
            facebook_api_key=options.facebook_api_key,
            facebook_secret=options.facebook_secret,
            ui_modules={'Post': PostModule},
            debug=True,
            autoescape=None,
        )
        tornado.web.Application.__init__(self, handlers, **settings)
    
    # choose a random port to avoid colliding with TIME_WAIT sockets left over
# from previous runs.
define('min_port', type=int, default=8000)
define('max_port', type=int, default=9000)
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    setup(
    name='tornado',
    version=version,
    packages=['tornado', 'tornado.test', 'tornado.platform'],
    package_data={
        # data files need to be listed both here (which determines what gets
        # installed) and in MANIFEST.in (which determines what gets included
        # in the sdist tarball)
        'tornado.test': [
            'README',
            'csv_translations/fr_FR.csv',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.mo',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.po',
            'options_test.cfg',
            'options_test_types.cfg',
            'options_test_types_str.cfg',
            'static/robots.txt',
            'static/sample.xml',
            'static/sample.xml.gz',
            'static/sample.xml.bz2',
            'static/dir/index.html',
            'static_foo.txt',
            'templates/utf8.html',
            'test.crt',
            'test.key',
        ],
    },
    author='Facebook',
    author_email='python-tornado@googlegroups.com',
    url='http://www.tornadoweb.org/',
    license='http://www.apache.org/licenses/LICENSE-2.0',
    description=('Tornado is a Python web framework and asynchronous networking library,'
                 ' originally developed at FriendFeed.'),
    classifiers=[
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy',
    ],
    **kwargs
)

    
    # This is a demo of running face recognition on a video file and saving the results to a new video file.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
        # Draw a box around the face using the Pillow module
    draw.rectangle(((left, top), (right, bottom)), outline=(0, 0, 255))
    
    setup(
    name='face_recognition',
    version='1.2.2',
    description='Recognize faces from Python or from the command line',
    long_description=readme + '\n\n' + history,
    author='Adam Geitgey',
    author_email='ageitgey@gmail.com',
    url='https://github.com/ageitgey/face_recognition',
    packages=[
        'face_recognition',
    ],
    package_dir={'face_recognition': 'face_recognition'},
    package_data={
        'face_recognition': ['models/*.dat']
    },
    entry_points={
        'console_scripts': [
            'face_recognition=face_recognition.face_recognition_cli:main',
            'face_detection=face_recognition.face_detection_cli:main'
        ]
    },
    install_requires=requirements,
    license='MIT license',
    zip_safe=False,
    keywords='face_recognition',
    classifiers=[
        'Development Status :: 4 - Beta',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 2.6',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
    ],
    test_suite='tests',
    tests_require=test_requirements
)
