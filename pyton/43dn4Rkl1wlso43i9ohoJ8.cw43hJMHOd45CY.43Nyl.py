
        
            def run_tests(self):
        import pytest
        sys.exit(pytest.main(self.test_args))
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME + SEP_CREDENTIALS + PASSWORD,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
    
class TestDownloadUtils:
    def test_Content_Range_parsing(self):
        parse = parse_content_range
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def ensure_rule_absent(client, module):
    rule_id = get_rule_by_name(client, module, module.params['name'])
    in_use_web_acls = find_rule_in_web_acls(client, module, rule_id)
    if in_use_web_acls:
        web_acl_names = ', '.join(in_use_web_acls)
        module.fail_json(msg='Rule %s is in use by Web ACL(s) %s' %
                         (module.params['name'], web_acl_names))
    if rule_id:
        remove_rule_conditions(client, module, rule_id)
        try:
            return True, run_func_with_change_token_backoff(client, module, {'RuleId': rule_id}, client.delete_rule, wait=True)
        except (botocore.exceptions.ClientError, botocore.exceptions.BotoCoreError) as e:
            module.fail_json_aws(e, msg='Could not delete rule')
    return False, {}
    
    requirements:
  - boto3 >= 1.0.0
  - python >= 2.6
    
    '''
    
        desc_log_group = describe_log_group(client=logs,
                                        log_group_name=module.params['log_group_name'],
                                        module=module)
    final_log_group_snake = []
    
        return matched_asgs
    
        interface_info = {'id': interface.id,
                      'subnet_id': interface.subnet_id,
                      'vpc_id': interface.vpc_id,
                      'description': interface.description,
                      'owner_id': interface.owner_id,
                      'status': interface.status,
                      'mac_address': interface.mac_address,
                      'private_ip_address': interface.private_ip_address,
                      'source_dest_check': interface.source_dest_check,
                      'groups': dict((group.id, group.name) for group in interface.groups),
                      'private_ip_addresses': private_addresses
                      }
    
    
DOCUMENTATION = '''
---
module: ec2_lc_find
short_description: Find AWS Autoscaling Launch Configurations
description:
  - Returns list of matching Launch Configurations for a given name, along with other useful information
  - Results can be sorted and sliced
  - It depends on boto
  - Based on the work by Tom Bamford (https://github.com/tombamford)
    
    # Create a snapshot only if the most recent one is older than 1 hour
- local_action:
    module: ec2_snapshot
    volume_id: vol-abcdef12
    last_snapshot_min_age: 60
'''
    
        # Set volume detach flag
    if instance == 'None' or instance == '':
        instance = None
        detach_vol_flag = True
    else:
        detach_vol_flag = False
    
            print('Training %s ... ' % name, end='')
        t0 = time()
        clf.fit(X_train, y_train)
        train_time[name] = time() - t0
        t0 = time()
        y_pred = clf.predict(X_test)
        test_time[name] = time() - t0
        accuracy[name] = accuracy_score(y_test, y_pred)
        print('done')
    
        n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
    
METRICS = {
    'f1': partial(f1_score, average='micro'),
    'f1-by-sample': partial(f1_score, average='samples'),
    'accuracy': accuracy_score,
    'hamming': hamming_loss,
    'jaccard': jaccard_similarity_score,
}
    
        max_it = len(samples_range) * len(features_range)
    for i_s, n_samples in enumerate(samples_range):
        for i_f, n_features in enumerate(features_range):
            it += 1
            n_informative = n_features / 10
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            # dataset_kwargs = {
            #     'n_train_samples': n_samples,
            #     'n_test_samples': 2,
            #     'n_features': n_features,
            #     'n_informative': n_informative,
            #     'effective_rank': min(n_samples, n_features) / 10,
            #     #'effective_rank': None,
            #     'bias': 0.0,
            # }
            dataset_kwargs = {
                'n_samples': 1,
                'n_components': n_features,
                'n_features': n_samples,
                'n_nonzero_coefs': n_informative,
                'random_state': 0
            }
            print('n_samples: %d' % n_samples)
            print('n_features: %d' % n_features)
            y, X, _ = make_sparse_coded_signal(**dataset_kwargs)
            X = np.asfortranarray(X)
    
    import time
    
    from scipy.sparse.csr import csr_matrix
import numpy as np
from sklearn.linear_model.stochastic_gradient import SGDRegressor
from sklearn.metrics import r2_score
    
            for filename in os.listdir(firefox_path):
            if filename.endswith('.default') and os.path.isdir(os.path.join(firefox_path, filename)):
                config_path = os.path.join(firefox_path, filename)
                #xlog.debug('Got Firefox path: %s', config_path)
                return config_path
    
        if len(sys.argv) > 1:
        ip = sys.argv[1]
    else:
        ip = '46.134.208.94'
        ip = '2001:ee0:3203:a::12'
        print('Usage: check_ip.py [ip] [top_domain] [wait_time=0]')
    print('test ip:%s' % ip)
    
        def get(self):
        n = random.randint(2, 3)
        ws = []
        for i in range(0, n):
            w = self.slice.get()
            ws.append(w)
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
            self.decisionNumber = decisionNumber
    
    
    def mismatchIsMissingToken(self, input, follow):
        if follow is None:
            # we have no information about the follow; we can only consume
            # a single token and hope for the best
            return False
        
        # compute what can follow this grammar element reference
        if EOR_TOKEN_TYPE in follow:
            if len(self._state.following) > 0:
                # remove EOR if we're not the start symbol
                follow = follow - set([EOR_TOKEN_TYPE])
    
    
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    from acme import test_util
    
        :returns: Dict of Define:Value pairs
    :rtype: `dict`
    
    # If true, links to the reST sources are added to the pages.
#html_show_sourcelink = True
    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
    
def compare_faces(known_face_encodings, face_encoding_to_check, tolerance=0.6):
    '''
    Compare a list of face encodings against a candidate encoding to see if they match.
    
        # Resize frame of video to 1/4 size for faster face recognition processing
    small_frame = cv2.resize(frame, (0, 0), fx=0.25, fy=0.25)
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
            # Now let's list all the faces we found in all 128 frames
        for frame_number_in_batch, face_locations in enumerate(batch_of_face_locations):
            number_of_faces_in_frame = len(face_locations)
    
        # Scale down image if it's giant so things run a little faster
    if max(unknown_image.shape) > 1600:
        pil_img = PIL.Image.fromarray(unknown_image)
        pil_img.thumbnail((1600, 1600), PIL.Image.LANCZOS)
        unknown_image = np.array(pil_img)
    
        def test_fd_command_line_interface_hog_model(self):
        target_string = 'obama.jpg'
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')