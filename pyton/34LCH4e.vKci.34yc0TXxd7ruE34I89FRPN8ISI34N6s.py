
        
        
def get_stream_type(env, args):
    '''Pick the right stream type based on `env` and `args`.
    Wrap it in a partial with the type-specific args so that
    we don't need to think what stream we are dealing with.
    
    import requests.auth
    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
    
def test_auth_plugin_require_auth_false_and_auth_provided(httpbin):
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def test_unicode_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['json'] == {'test': UNICODE}
    
    import pytest
    
        def test_file_display(self):
        for handler in (self.dialog.idle_credits,
                        self.dialog.idle_readme,
                        self.dialog.idle_news):
            self.error.message = ''
            self.view.called = False
            with self.subTest(handler=handler):
                handler()
                self.assertEqual(self.error.message, '')
                self.assertEqual(self.view.called, True)
    
        def testSeekPostEndTwiceMultiStream(self):
        self.createTempFile(streams=5)
        with BZ2File(self.filename) as bz2f:
            bz2f.seek(150000)
            bz2f.seek(150000)
            self.assertEqual(bz2f.tell(), len(self.TEXT) * 5)
            self.assertEqual(bz2f.read(), b'')
    
        :param X_img_path: path to image to be recognized
    :param knn_clf: (optional) a knn classifier object. if not specified, model_save_path must be specified.
    :param model_path: (optional) path to a pickled knn classifier. if not specified, model_save_path must be knn_clf.
    :param distance_threshold: (optional) distance threshold for face classification. the larger it is, the more chance
           of mis-classifying an unknown person as a known one.
    :return: a list of names and face locations for the recognized faces in the image: [(name, bounding box), ...].
        For faces of unrecognized persons, the name 'unknown' will be returned.
    '''
    if not os.path.isfile(X_img_path) or os.path.splitext(X_img_path)[1][1:] not in ALLOWED_EXTENSIONS:
        raise Exception('Invalid image path: {}'.format(X_img_path))
    
            if file.filename == '':
            return redirect(request.url)
    
    
@click.command()
@click.argument('known_people_folder')
@click.argument('image_to_check')
@click.option('--cpus', default=1, help='number of CPU cores to use in parallel (can speed up processing lots of images). -1 means 'use all in system'')
@click.option('--tolerance', default=0.6, help='Tolerance for face comparisons. Default is 0.6. Lower this if you get multiple matches for the same person.')
@click.option('--show-distance', default=False, type=bool, help='Output face distance. Useful for tweaking tolerance setting.')
def main(known_people_folder, image_to_check, cpus, tolerance, show_distance):
    known_names, known_face_encodings = scan_known_people(known_people_folder)
    
    test_requirements = [
    'tox',
    'flake8==2.6.0'
]
    
            if file.filename == '':
            return redirect(request.url)
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
            if version.is_devrelease:
            to_change['dev'] = None
            to_change['pre'] = ('b', 0)
    
        with patch.object(hass.loop, 'stop'):
        yield from hass.async_stop()
    assert len(calls) == 1
    
        def each_child(self) -> Iterable['_Node']:
        return self.chunks
    
        def test_twitter_show_user(self):
        response = self.fetch('/twitter/client/show_user?name=somebody')
        response.rethrow()
        self.assertEqual(
            json_decode(response.body), {'name': 'Somebody', 'screen_name': 'somebody'}
        )
    
            field = [self.field[i] for i in range(y1, y2+1)]
        field = [line[x1:x2+1] for line in field]
    
        def _get_page(self, topic, request_options=None):
        cmd = ['/usr/local/bin/cheat', topic]
        proc = Popen(cmd, stdout=PIPE, stderr=PIPE)
        answer = proc.communicate()[0].decode('utf-8')
        return answer
    
    Exports:
    format_text(text, config=None, highlighter=None):
    
            sources_to_merge = ['tldr', 'cheat', 'cheat.sheets', 'learnxiny', 'rosetta']
        if not skip_dirs:
            sources_to_merge.append('cheat.sheets dir')
        if not skip_internal:
            sources_to_merge.append('internal')
    
    def put(key, value):
    '''
    Save `value` with `key`, and serialize it if needed
    '''