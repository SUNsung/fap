
        
            @property
    def encoding(self):
        return 'utf8'
    
    
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
    
        '''
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    from httpie import __version__
from httpie.compat import is_windows
    
                    if not speed:
                    eta = '-:--:--'
                else:
                    s = int((self.status.total_size - downloaded) / speed)
                    h, s = divmod(s, 60 * 60)
                    m, s = divmod(s, 60)
                    eta = '{0}:{1:0>2}:{2:0>2}'.format(h, m, s)
    
        for node in doctree.traverse(settingslist_node):
        settings_list = nodes.bullet_list()
        settings_list.extend([make_setting_element(d, app, fromdocname)
                              for d in sorted(env.scrapy_all_settings,
                                              key=itemgetter('setting_name'))
                              if fromdocname != d['docname']])
        node.replace_self(settings_list)
    
    # Ignore noisy twisted deprecation warnings
import warnings
warnings.filterwarnings('ignore', category=DeprecationWarning, module='twisted')
del warnings
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
                tested_methods = conman.tested_methods_from_spidercls(spidercls)
            if opts.list:
                for method in tested_methods:
                    contract_reqs[spidercls.name].append(method)
            elif tested_methods:
                self.crawler_process.crawl(spidercls)
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
            general form:
        @returns request(s)/item(s) [min=1 [max]]
    
    
class S3DownloadHandler(object):
    
    image = face_recognition.load_image_file('{}')
'''
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
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
    
                face_names.append(name)
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
            self.assertEqual(
            set(face_landmarks[0].keys()),
            set(['chin', 'left_eyebrow', 'right_eyebrow', 'nose_bridge',
                 'nose_tip', 'left_eye', 'right_eye', 'top_lip',
                 'bottom_lip']))
        self.assertEqual(
            face_landmarks[0]['chin'],
            [(369, 220), (372, 254), (378, 289), (384, 322), (395, 353),
             (414, 382), (437, 407), (464, 424), (495, 428), (527, 420),
             (552, 399), (576, 372), (594, 344), (604, 314), (610, 282),
             (613, 250), (615, 219)])