
        
            elif not RESULT and ('info_dict' in test and 'age_limit' in test['info_dict'] and
                         test['info_dict']['age_limit'] == 18):
        print('\nPotential false negative: {0}'.format(test['name']))
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    entries = []
for v in versions:
    fields = v.split('.')
    year, month, day = map(int, fields[:3])
    faked = 0
    patchlevel = 0
    while True:
        try:
            datetime.date(year, month, day)
        except ValueError:
            day -= 1
            faked += 1
            assert day > 0
            continue
        break
    if len(fields) >= 4:
        try:
            patchlevel = int(fields[3])
        except ValueError:
            patchlevel = 1
    timestamp = '%04d-%02d-%02dT00:%02d:%02dZ' % (year, month, day, faked, patchlevel)
    
    # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
    header = oldreadme[:oldreadme.index('# OPTIONS')]
footer = oldreadme[oldreadme.index('# CONFIGURATION'):]
    
        readme = filter_options(readme)
    
                info_dict = _make_result([f2, f1], extractor='youtube')
            ydl = YDL({'format': 'best/bestvideo'})
            yie = YoutubeIE(ydl)
            yie._sort_formats(info_dict['formats'])
            ydl.process_ie_result(info_dict)
            downloaded = ydl.downloaded_info_dicts[0]
            self.assertEqual(downloaded['format_id'], f1['format_id'])
    
                        if try_num == RETRIES:
                        report_warning('%s failed due to network errors, skipping...' % tname)
                        return
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
        def __repr__(self):
        return '<{0} {1}>'.format(type(self).__name__, str(self))

    
        def iter_body(self):
        # Read the whole body before prettifying it,
        # but bail out immediately if the body is binary.
        converter = None
        body = bytearray()
    
        class Plugin(AuthPlugin):
        auth_type = 'test-require-false-yet-provided'
        auth_require = False
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
    
filenames = list(rst_filenames())
assert filenames
    
            def attempts(unique_on_attempt=0):
            # noinspection PyUnresolvedReferences,PyUnusedLocal
            def exists(filename):
                if exists.attempt == unique_on_attempt:
                    return False
                exists.attempt += 1
                return True
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'
