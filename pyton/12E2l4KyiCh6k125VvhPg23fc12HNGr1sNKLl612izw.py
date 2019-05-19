
        
            @cached_property
    def model(self):
        return self.get_model_class()
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
    # The name of an image file (within the static path) to use as favicon
# of the docs.  This file should be a Windows icon file (.ico) being
# 16x16 or 32x32 pixels large.
#html_favicon = None
    
        # Display the results
    for top, right, bottom, left in face_locations:
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
            img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama_partial_face2.jpg'))
        detected_faces = api.face_locations(img)
    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
        # Global variables
    Global = Manager().Namespace()
    Global.buff_num = 1
    Global.read_num = 1
    Global.write_num = 1
    Global.frame_delay = 0
    Global.is_exit = False
    read_frame_list = Manager().dict()
    write_frame_list = Manager().dict()
    
        # Or instead, use the known face with the smallest distance to the new face
    face_distances = face_recognition.face_distance(known_face_encodings, face_encoding)
    best_match_index = np.argmin(face_distances)
    if matches[best_match_index]:
        name = known_face_names[best_match_index]
    
        :rtype: str
    :return: A java class path that will allow your properties to be
             found and the MultiLangDaemon and its deps and
        any custom paths you provided.
    '''
    # First make all the user provided paths absolute
    paths = [os.path.abspath(p) for p in paths]
    # We add our paths after the user provided paths because this permits users to
    # potentially inject stuff before our paths (otherwise our stuff would always
    # take precedence).
    paths.append(get_kcl_jar_path())
    if properties:
        # Add the dir that the props file is in
        dir_of_file = get_dir_of_file(properties)
        paths.append(dir_of_file)
    # add path of custom java code
    dir_name = os.path.dirname(os.path.realpath(__file__))
    paths.append(os.path.realpath(os.path.join(dir_name, 'java')))
    paths.insert(0, os.path.realpath(os.path.join(dir_name, '..', '..',
            'infra', 'amazon-kinesis-client', 'aws-java-sdk-sts.jar')))
    return ':'.join([p for p in paths if p != ''])
    
    
def receive_assert_delete(queue_url, assertions, sqs_client=None, required_subject=None):
    if not sqs_client:
        sqs_client = aws_stack.connect_to_service('sqs')
    
            expanded1 = multipart_content.expand_multipart_filename(data1, headers)
        self.assertIsNot(expanded1, data1, 'Should have changed content of data with filename to interpolate')
        self.assertIn(b'uploads/20170826T181315.679087009Z/upload/pixel.png', expanded1,
            'Should see the interpolated filename')
    
        def reset(self):
        self.state = 0
        return self.state

    
    class UnregisteredEnv(Unregistered):
    '''Raised when the user requests an env from the registry that does
    not actually exist.
    '''
    pass
    
        if modified:
        logger.info('Writing new rollout file to {}'.format(ROLLOUT_FILE))
        with open(ROLLOUT_FILE, 'w') as outfile:
            json.dump(rollout_dict, outfile, indent=2, sort_keys=True)
    else:
        logger.info('No modifications needed.')
    
    if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=None)
    parser.add_argument('env_id', nargs='?', default='CartPole-v0', help='Select the environment to run')
    args = parser.parse_args()
    
        def paint(self, x1, y1, x2, y2, c1, c2=None, bg1=None, bg2=None, angle=None, angle_bg=None):
        '''
        Paint rectangle (x1,y1) (x2,y2) with foreground color c1 and background bg1 if specified.
        If spefied colors c2/bg2, rectangle is painted with linear gradient (inclined under angle).
        '''
    
        def _is_block_separator(self, before, now, after):
        if (re.match(r'\s*$', before)
                and re.match(r';\s*', now)
                and re.match(r';;;;;;+', after)):
            block_name = re.sub(r';\s*', '', now)
            block_name = '_'.join([x.strip(',&:') for x in  block_name.strip(', ').split()])
            return block_name
        return None
    
        return answer
