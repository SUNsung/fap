
        
        
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
        with open('supportedsites.html', 'w', encoding='utf-8') as sitesf:
        sitesf.write(template)
    
        def test_parse_f4m_formats(self):
        _TEST_CASES = [
            (
                # https://github.com/rg3/youtube-dl/issues/14660
                'custom_base_url',
                'http://api.new.livestream.com/accounts/6115179/events/6764928/videos/144884262.f4m',
                [{
                    'manifest_url': 'http://api.new.livestream.com/accounts/6115179/events/6764928/videos/144884262.f4m',
                    'ext': 'flv',
                    'format_id': '2148',
                    'protocol': 'f4m',
                    'tbr': 2148,
                    'width': 1280,
                    'height': 720,
                }]
            ),
        ]
    
            class SimplePP(PostProcessor):
            def run(self, info):
                with open(audiofile, 'wt') as f:
                    f.write('EXAMPLE')
                return [info['filepath']], info
    
        def test_yahoo_https(self):
        # https://github.com/rg3/youtube-dl/issues/2701
        self.assertMatch(
            'https://screen.yahoo.com/smartwatches-latest-wearable-gadgets-163745379-cbs.html',
            ['Yahoo'])
    
    # This is the native style provided by the terminal emulator color scheme
PRESET_STYLE = 'preset'
AVAILABLE_STYLES.add(PRESET_STYLE)
    
    
def write_stream_with_colors_win_py3(stream, outfile, flush):
    '''Like `write`, but colorized chunks are written as text
    directly to `outfile` to ensure it gets processed by colorama.
    Applies only to Windows with Python 3 and colorized terminal output.
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
tests_require = [
    # Pytest needs to come last.
    # https://bitbucket.org/pypa/setuptools/issue/196/
    'pytest-httpbin',
    'pytest',
    'mock',
]
    
        @pytest.mark.parametrize('header, expected_filename', [
        ('attachment; filename=hello-WORLD_123.txt', 'hello-WORLD_123.txt'),
        ('attachment; filename='.hello-WORLD_123.txt'', 'hello-WORLD_123.txt'),
        ('attachment; filename='white space.txt'', 'white space.txt'),
        (r'attachment; filename='\'quotes\'.txt'', ''quotes'.txt'),
        ('attachment; filename=/etc/hosts', 'hosts'),
        ('attachment; filename=', None)
    ])
    def test_Content_Disposition_parsing(self, header, expected_filename):
        assert filename_from_content_disposition(header) == expected_filename
    
    
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
      * dynamodb
'''
    
    test_encode_face = '''
encoding = face_recognition.face_encodings(image, known_face_locations=face_locations)[0]
'''
    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
        # If no valid image file was uploaded, show the file upload form:
    return '''
    <!doctype html>
    <title>Is this a picture of Obama?</title>
    <h1>Upload a picture and see if it's a picture of Obama!</h1>
    <form method='POST' enctype='multipart/form-data'>
      <input type='file' name='file'>
      <input type='submit' value='Upload'>
    </form>
    '''
    
            if len(encodings) == 0:
            click.echo('WARNING: No faces found in {}. Ignoring file.'.format(file))
        else:
            known_names.append(basename)
            known_face_encodings.append(encodings[0])