
        
        
def _ctypes_array(c_type, py_array):
    ar = (c_type * len(py_array))()
    ar[:] = py_array
    return ar
    
        else:
        sys.stdout.write('.')
    sys.stdout.flush()
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
        def test_format_selection_audio_exts(self):
        formats = [
            {'format_id': 'mp3-64', 'ext': 'mp3', 'abr': 64, 'url': 'http://_', 'vcodec': 'none'},
            {'format_id': 'ogg-64', 'ext': 'ogg', 'abr': 64, 'url': 'http://_', 'vcodec': 'none'},
            {'format_id': 'aac-64', 'ext': 'aac', 'abr': 64, 'url': 'http://_', 'vcodec': 'none'},
            {'format_id': 'mp3-32', 'ext': 'mp3', 'abr': 32, 'url': 'http://_', 'vcodec': 'none'},
            {'format_id': 'aac-32', 'ext': 'aac', 'abr': 32, 'url': 'http://_', 'vcodec': 'none'},
        ]
    
        def test_youtube_feeds(self):
        self.assertMatch('https://www.youtube.com/feed/watch_later', ['youtube:watchlater'])
        self.assertMatch('https://www.youtube.com/feed/subscriptions', ['youtube:subscriptions'])
        self.assertMatch('https://www.youtube.com/feed/recommended', ['youtube:recommended'])
        self.assertMatch('https://www.youtube.com/my_favorites', ['youtube:favorites'])
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
        def before_app_request(self, f):
        '''Like :meth:`Flask.before_request`.  Such a function is executed
        before each request, even if outside of a blueprint.
        '''
        self.record_once(lambda s: s.app.before_request_funcs
            .setdefault(None, []).append(f))
        return f
    
    from __future__ import absolute_import
    
            ::
    
            #out = subprocess.check_output(cmd, startupinfo=startupinfo)
        process = subprocess.Popen(cmd, stdout=subprocess.PIPE, startupinfo=startupinfo)
        out, unused_err = process.communicate()
        retcode = process.poll()
        if retcode:
            return out + '\n retcode:%s\n unused_err:%s\n' % (retcode, unused_err)
    except Exception as e:
        out = 'Exception:%r' % e
    
    

    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('biden.jpg')
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    
def print_result(filename, name, distance, show_distance=False):
    if show_distance:
        print('{},{},{}'.format(filename, name, distance))
    else:
        print('{},{}'.format(filename, name))
    
        context['show_on_github_url'] = show_url
    context['edit_on_github_url'] = edit_url
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
    import logging