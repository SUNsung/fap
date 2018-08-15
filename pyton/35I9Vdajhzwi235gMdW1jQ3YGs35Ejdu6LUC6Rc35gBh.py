
        
            @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
    error_msg = None
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    ssl.add_argument(
    '--cert-key',
    default=None,
    type=readable_file_arg,
    help='''
    The private key to use with SSL. Only needed if --cert is given and the
    certificate file does not contain the private key.
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        def __init__(self):
        self._plugins = []
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    INVALID_TOKEN_TYPE = 0
    
            elif isinstance(self.input, TreeNodeStream):
            adaptor = self.input.treeAdaptor
            return adaptor.getType(self.node)
    
        def test_get_name_addr_atom_name(self):
        name_addr = self._test_get_x(parser.get_name_addr,
            'Dinsdale <dinsdale@example.com>',
            'Dinsdale <dinsdale@example.com>',
            'Dinsdale <dinsdale@example.com>',
            [],
            '')
        self.assertEqual(name_addr.token_type, 'name-addr')
        self.assertEqual(name_addr.display_name, 'Dinsdale')
        self.assertEqual(name_addr.local_part, 'dinsdale')
        self.assertEqual(name_addr.domain, 'example.com')
        self.assertIsNone(name_addr.route)
        self.assertEqual(name_addr.addr_spec, 'dinsdale@example.com')
    
    A proactor is a 'notify-on-completion' multiplexer.  Currently a
proactor is only implemented on Windows with IOCP.
'''
    
        def transform_xrange(self, node, results):
        name = results['name']
        name.replace(Name('range', prefix=name.prefix))
        # This prevents the new range call from being wrapped in a list later.
        self.transformed_xranges.add(id(node))
    
            while pending:
            if timeout is None:
                wait_timeout = None
            else:
                wait_timeout = end_time - time.time()
                if wait_timeout < 0:
                    raise TimeoutError(
                            '%d (of %d) futures unfinished' % (
                            len(pending), len(fs)))
    
        Args:
        call_queue: A multiprocessing.Queue of _CallItems that will be read and
            evaluated by the worker.
        result_queue: A multiprocessing.Queue of _ResultItems that will written
            to by the worker.
        shutdown: A multiprocessing.Event that will be set as a signal to the
            worker that it should exit when call_queue is empty.
    '''
    while True:
        call_item = call_queue.get(block=True)
        if call_item is None:
            # Wake up queue management thread
            result_queue.put(None)
            return
        try:
            r = call_item.fn(*call_item.args, **call_item.kwargs)
        except BaseException:
            e = sys.exc_info()[1]
            result_queue.put(_ResultItem(call_item.work_id,
                                         exception=e))
        else:
            result_queue.put(_ResultItem(call_item.work_id,
                                         result=r))
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
        # If not a dictionary or a list, the response is necessarily a
    # scalar: boolean, number, string, etc. In this case, we print
    # it to the user.
    if not isinstance( self._response, ( dict, list ) ):
      return self._HandleBasicResponse()
    
      def BasicResponse_test( self ):
    def _BasicResponseTest( command, response ):
      with patch( 'vim.command' ) as vim_command:
        request = CommandRequest( [ command ] )
        request._response = response
        request.RunPostCommandActionsIfNeeded( 'belowright' )
        vim_command.assert_called_with( 'echo '{0}''.format( response ) )
    
    import face_recognition
import picamera
import numpy as np
    
    for image in TEST_IMAGES:
    size = image.split('-')[1].split('.')[0]
    print('Timings at {}:'.format(size))
    
    app = Flask(__name__)
    
    
def print_result(filename, location):
    top, right, bottom, left = location
    print('{},{},{},{},{}'.format(filename, top, right, bottom, left))
    
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

    
        def test_fd_command_line_interface_cnn_model(self):
        target_string = 'obama.jpg'
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')