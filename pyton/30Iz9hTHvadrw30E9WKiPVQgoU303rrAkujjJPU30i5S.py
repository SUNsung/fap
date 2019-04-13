
        
                RESULT = ('.' + domain + '\n' in LIST or '\n' + domain + '\n' in LIST)
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
        def test_cmdline_umlauts(self):
        p = subprocess.Popen(
            [sys.executable, 'youtube_dl/__main__.py', encodeArgument('ä'), '--version'],
            cwd=rootDir, stdout=_DEV_NULL, stderr=subprocess.PIPE)
        _, stderr = p.communicate()
        self.assertFalse(stderr)
    
            If `sign` is incorrect, /validate call throws an HTTP 556 error
        '''
        logger = WarningLogger()
        ie = IqiyiIEWithCredentials(FakeYDL({'logger': logger}))
        ie._login()
        self.assertTrue('unable to log in:' in logger.messages[0])
    
        def test_nosubtitles(self):
        self.DL.expect_warning('video doesn\'t have subtitles')
        self.url = 'http://www.ceskatelevize.cz/ivysilani/ivysilani/10441294653-hyde-park-civilizace/214411058091220'
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertFalse(subtitles)
    
        if state == 'absent':
        if not snapshot_id:
            module.fail_json(msg='snapshot_id must be set when state is absent')
        try:
            ec2.delete_snapshot(snapshot_id)
        except boto.exception.BotoServerError as e:
            # exception is raised if snapshot does not exist
            if e.error_code == 'InvalidSnapshot.NotFound':
                module.exit_json(changed=False)
            else:
                module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    monitoring_policy: ansible monitoring policy updated
    remove_ports:
     - port_id
    state: update
    
            rule['original_port'] = str(rule.get('original_port', 'any')).lower()
        rule['original_ip'] = rule.get('original_ip', 'any').lower()
        rule['translated_ip'] = rule.get('translated_ip', 'any').lower()
        rule['translated_port'] = str(rule.get('translated_port', 'any')).lower()
        rule['protocol'] = rule.get('protocol', 'any').lower()
        rule['rule_type'] = rule.get('rule_type', 'DNAT').lower()
    
            rc, out = self._exec([feature_enable_str, self.feature_name])
    
        removed_count = 0
    
    
def send_deploy_event(module, key, revision_id, deployed_by='Ansible', deployed_to=None, repository=None):
    '''Send a deploy event to Stackdriver'''
    deploy_api = 'https://event-gateway.stackdriver.com/v1/deployevent'
    
        # Display the resulting image
    cv2.imshow('Video', frame)
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
        raw_detections_batched = _raw_face_locations_batched(images, number_of_times_to_upsample, batch_size)
    
        # macOS will crash due to a bug in libdispatch if you don't use 'forkserver'
    context = multiprocessing
    if 'forkserver' in multiprocessing.get_all_start_methods():
        context = multiprocessing.get_context('forkserver')
    
            # If you had more than 2 faces, you could make this logic a lot prettier
        # but I kept it simple for the demo
        name = None
        if match[0]:
            name = 'Lin-Manuel Miranda'
        elif match[1]:
            name = 'Alex Lacamoire'
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # This is an example of running face recognition on a single image
# and drawing a box around each person that was identified.
    
            self.assertEqual(len(detected_faces), 1)
        self.assertAlmostEqual(detected_faces[0].rect.top(), 259, delta=25)
        self.assertAlmostEqual(detected_faces[0].rect.bottom(), 552, delta=25)
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    
def search(txt, inverse_index, word_freq=None):
    '''
    
        Args:
        x(tf.Tensor):
        n_unit_ls(list of int):
        act_fn:
        name(str):
    '''
    # n_layer = len(n_unit_list)
    name = name or 'dense'
    for i, n_unit in enumerate(n_unit_ls):
        x = dense(x, n_unit, act_fn=act_fn, name='{}-{}'.format(name, i))
    
        def __call__(self, x):
        '''
        Args:
            x: 注意 x.dtype == float32
        '''
        # x = tf.cast(x, dtype=tf.float32)  # 交给外部处理
        loss_regularization = 0.
        if self.l1:
            loss_regularization += tf.reduce_sum(self.l1 * tf.abs(x))
        if self.l2:
            loss_regularization += tf.reduce_sum(self.l2 * tf.square(x))
        return loss_regularization
    
    References:
    https://www.tensorflow.org/api_guides/python/array_ops
    keras.backend
'''