
        
        
MOD_SSL_CONF_DEST = 'options-ssl-nginx.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    # If true, show page references after internal links.
#latex_show_pagerefs = False
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    # looks that flickr won't return urls for all sizes
# we required in 'extras field without a acceptable header
dummy_header = {
    'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0'
}
def get_content_headered(url):
    return get_content(url, dummy_header)
    
        print_info(site_info, title, 'm3u8', float('inf'))
    
        def show_sec(course_id, chap_id):
        ep = 'http://www.icourses.cn/jpk/getSectionNode.action?courseId={}&characId={}&mod=2'
        req = post_content(ep.format(course_id, chap_id), post_data={})
        return req
    
    # Custom sidebar templates, maps document names to template names.
#html_sidebars = {}
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    # Load some sample pictures and learn how to recognize them.
lmm_image = face_recognition.load_image_file('lin-manuel-miranda.png')
lmm_face_encoding = face_recognition.face_encodings(lmm_image)[0]
    
        # Display the resulting image
    cv2.imshow('Video', frame)
    
    # Create arrays of known face encodings and their names
known_face_encodings = [
    obama_face_encoding,
    biden_face_encoding
]
known_face_names = [
    'Barack Obama',
    'Joe Biden'
]
    
            batched_detected_faces = api.batch_face_locations(images, number_of_times_to_upsample=0)
    
        # 获得所有人脸的位置以及它们的编码
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    
def get_w(shape,
          w_initializer=truncated_normal,
          w_regularizer=l2_regularizer,
          name=None):
    name = name or 'W'
    W = tf.get_variable(name, shape, dtype=tf_float, initializer=w_initializer,
                        regularizer=w_regularizer)
    return W