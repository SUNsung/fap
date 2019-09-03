
        
            @app.route('/hello')
    def hello():
        return 'Hello, World!'
    
    from flask import has_request_context
from flask import url_for
    
            for deferred in self.deferred_functions:
            deferred(state)
    
        The following characters are escaped in strings:
    
            from .debughelpers import explain_template_loading_attempts
    
                resp = app.response_class()
            if not session_interface.is_null_session(sess):
                session_interface.save_session(app, sess, resp)
            headers = resp.get_wsgi_headers(c.request.environ)
            self.cookie_jar.extract_wsgi(c.request.environ, headers)
    
        def create_app(info):
        app = Flask('flaskgroup')
        app.debug = True
        return app
    
    # A shorter title for the navigation bar.  Default is the same as
# html_title.
#html_short_title = None
    
    test_end_to_end = '''
encoding = face_recognition.face_encodings(image)[0]
'''
    
    for i, face_distance in enumerate(face_distances):
    print('The test image has a distance of {:.2} from known image #{}'.format(face_distance, i))
    print('- With a normal cutoff of 0.6, would the test image match the known image? {}'.format(face_distance < 0.6))
    print('- With a very strict cutoff of 0.5, would the test image match the known image? {}'.format(face_distance < 0.5))
    print()

    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
            self.assertEqual(len(detected_faces), 1)
        self.assertAlmostEqual(detected_faces[0][0], 144, delta=25)
        self.assertAlmostEqual(detected_faces[0][1], 608, delta=25)
        self.assertAlmostEqual(detected_faces[0][2], 389, delta=25)
        self.assertAlmostEqual(detected_faces[0][3], 363, delta=25)
    
    # Show the picture
pil_image.show()

    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
    __all__ = ['dailymotion_download']
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
        stream_id_pattern = r'id='html_stream' value='(\w+)''
    stream_id = match1(html, stream_id_pattern)
    
        html = get_content(url)
    uuid_pattern = r''([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})''
    id = r1(r'var vid='([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})'', html)
    if id is None:
        video_pattern = r''vid'\s*:\s*' + uuid_pattern
        id = match1(html, video_pattern)
    assert id, 'can't find video info'
    return ifeng_download_by_id(id, None, output_dir = output_dir, merge = merge, info_only = info_only)
    
    if args.quiet:
    jieba.setLogLevel(60)
if args.pos:
    import jieba.posseg
    posdelim = args.pos
    def cutfunc(sentence, _, HMM=True):
        for w, f in jieba.posseg.cut(sentence, HMM):
            yield w + posdelim + f
else:
    cutfunc = jieba.cut
    
        def __init__(self):
        self.tokenizer = self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.pos_filt = frozenset(('ns', 'n', 'vn', 'v'))
        self.span = 5
    
            x = 0
        buf = ''
        N = len(sentence)
        while x < N:
            y = route[x][1] + 1
            l_word = sentence[x:y]
            if y - x == 1:
                buf += l_word
            else:
                if buf:
                    if len(buf) == 1:
                        yield pair(buf, self.word_tag_tab.get(buf, 'x'))
                    elif not self.tokenizer.FREQ.get(buf):
                        recognized = self.__cut_detail(buf)
                        for t in recognized:
                            yield t
                    else:
                        for elem in buf:
                            yield pair(elem, self.word_tag_tab.get(elem, 'x'))
                    buf = ''
                yield pair(l_word, self.word_tag_tab.get(l_word, 'x'))
            x = y
    
    content = open(file_name, 'rb').read()
    
    import jieba