
        
            '''
    is_windows = is_windows
    config_dir = DEFAULT_CONFIG_DIR
    stdin = sys.stdin
    stdin_isatty = stdin.isatty()
    stdin_encoding = None
    stdout = sys.stdout
    stdout_isatty = stdout.isatty()
    stdout_encoding = None
    stderr = sys.stderr
    stderr_isatty = stderr.isatty()
    colors = 256
    if not is_windows:
        if curses:
            try:
                curses.setupterm()
                colors = curses.tigetnum('colors')
            except curses.error:
                pass
    else:
        # noinspection PyUnresolvedReferences
        import colorama.initialise
        stdout = colorama.initialise.wrap_stream(
            stdout, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        stderr = colorama.initialise.wrap_stream(
            stderr, convert=None, strip=None,
            autoreset=True, wrap=True
        )
        del colorama
    
        '''
    name = 'HTTP'
    aliases = ['http']
    filenames = ['*.http']
    tokens = {
        'root': [
            # Request-Line
            (r'([A-Z]+)( +)([^ ]+)( +)(HTTP)(/)(\d+\.\d+)',
             pygments.lexer.bygroups(
                 pygments.token.Name.Function,
                 pygments.token.Text,
                 pygments.token.Name.Namespace,
                 pygments.token.Text,
                 pygments.token.Keyword.Reserved,
                 pygments.token.Operator,
                 pygments.token.Number
             )),
            # Response Status-Line
            (r'(HTTP)(/)(\d+\.\d+)( +)(\d{3})( +)(.+)',
             pygments.lexer.bygroups(
                 pygments.token.Keyword.Reserved,  # 'HTTP'
                 pygments.token.Operator,  # '/'
                 pygments.token.Number,  # Version
                 pygments.token.Text,
                 pygments.token.Number,  # Status code
                 pygments.token.Text,
                 pygments.token.Name.Exception,  # Reason
             )),
            # Header
            (r'(.*?)( *)(:)( *)(.+)', pygments.lexer.bygroups(
                pygments.token.Name.Attribute,  # Name
                pygments.token.Text,
                pygments.token.Operator,  # Colon
                pygments.token.Text,
                pygments.token.String  # Value
            ))
        ]
    }
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
def repr_dict_nice(d):
    def prepare_dict(d):
        for k, v in d.items():
            if isinstance(v, dict):
                v = dict(prepare_dict(v))
            elif isinstance(v, bytes):
                v = v.decode('utf8')
            elif not isinstance(v, (int, str)):
                v = repr(v)
            yield k, v
    return json.dumps(
        dict(prepare_dict(d)),
        indent=4, sort_keys=True,
    )
    
        def test_POST_form_auto_Content_Type(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/x-www-form-urlencoded' in r
    
    
def test_when_successfully_configured(usage_tracker_io, shell_pid,
                                      shell, shell_config, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    _change_tracker(usage_tracker_io, 12)
    shell_config.read.return_value = ''
    main()
    shell_config.write.assert_any_call('eval $(thefuck --alias)')
    logs.configured_successfully.assert_called_once()

    
        assert proc.expect([TIMEOUT, u'test'])
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    You can download from:
  https://osxfuse.github.io/
Error: An unsatisfied requirement failed this build.'''
    
    
no_such_subcommand_old = '''No such subcommand
    
        :param key: name of cli constant
    :return: value of constant for active os
    '''
    return CLI_DEFAULTS[key]
    
        def __hash__(self):
        # Python 3 requires explicit overridden for __hash__ if __eq__ or
        # __cmp__ is overridden. See https://bugs.python.org/issue2235
        return super(Addr, self).__hash__()
    
    from certbot_apache.tests import util
    
        'exclude_files' allows to specify a regular expression to be matched against
    a file name. If the expression matches, the file is skipped and not run
    through the linter.
    
    # Get the face encodings for the known images
obama_face_encoding = face_recognition.face_encodings(known_obama_image)[0]
biden_face_encoding = face_recognition.face_encodings(known_biden_image)[0]
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
        pool = context.Pool(processes=processes)
    
    setup(
    name='face_recognition',
    version='1.2.3',
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
