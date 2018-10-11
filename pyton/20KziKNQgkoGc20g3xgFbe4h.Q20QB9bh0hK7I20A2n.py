
        
            def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        try:
            self.model.objects.get(session_key=session_key).delete()
        except self.model.DoesNotExist:
            pass
    
        def _get_session_key(self):
        '''
        Instead of generating a random string, generate a secure url-safe
        base64-encoded string of data as our session key.
        '''
        return signing.dumps(
            self._session, compress=True,
            salt='django.contrib.sessions.backends.signed_cookies',
            serializer=self.serializer,
        )
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
    
def savepoint_rollback(sid, using=None):
    '''
    Roll back the most recent savepoint (if one exists). Do nothing if
    savepoints are not supported.
    '''
    get_connection(using).savepoint_rollback(sid)
    
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='waf', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    try:
    import botocore
except ImportError:
    pass  # handled by AnsibleAWSModule
    
    notes:
  - does not support check mode
    
    EXAMPLES = '''
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['stableinterface'],
                    'supported_by': 'certified'}
    
            try:
            connection.create_scaling_policy(sp)
            policy = connection.get_all_policies(as_group=asg_name, policy_names=[sp_name])[0]
            module.exit_json(changed=True, name=policy.name, arn=policy.policy_arn, as_name=policy.as_name, scaling_adjustment=policy.scaling_adjustment,
                             cooldown=policy.cooldown, adjustment_type=policy.adjustment_type, min_adjustment_step=policy.min_adjustment_step)
        except BotoServerError as e:
            module.fail_json(msg=str(e))
    else:
        policy = scalingPolicies[0]
        changed = False
    
        module = AnsibleAWSModule(
        argument_spec=argument_spec,
        supports_check_mode=True
    )
    
        else:
        # Check that a name and type argument has been supplied if no vgw-id
        if not module.params.get('name') or not module.params.get('type'):
            module.fail_json(msg='A name and type is required when no vgw-id and a status of \'absent\' is suppled')
    
            # Check exist site cert buffer with CA
        certfiles = glob.glob(os.path.join(CertUtil.ca_certdir, '*.crt')) + glob.glob(os.path.join(CertUtil.ca_certdir, '.*.crt'))
        if certfiles:
            filename = random.choice(certfiles)
            with open(filename, 'rb') as fp:
                cert = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, fp.read())
            remove_certs = False
            if not CertUtil.verify_certificate(ca, cert):
                remove_certs = True
            if not remove_certs and CertUtil.cert_publickey:
                context = OpenSSL.SSL.Context(OpenSSL.SSL.TLSv1_METHOD)
                try:
                    context.use_certificate(cert)
                    context.use_privatekey_file(CertUtil.cert_keyfile)
                except OpenSSL.SSL.Error:
                    remove_certs = True
            if remove_certs:
                xlog.info('clean old site certs in XX-Net cert dir')
                any(os.remove(x) for x in certfiles)
    
    
class CheckIp(front_base.check_ip.CheckIp):
    def check_response(self, response):
        server_type = response.headers.get('Server', '')
        self.logger.debug('status:%d', response.status)
        self.logger.debug('Server type:%s', server_type)
    
            self.a = a
        self.b = b
        
    
                try:
                self.mTokens()
                
                if self._state.token is None:
                    self.emit()
                    
                elif self._state.token == SKIP_TOKEN:
                    continue
    
    # The name of an image file (relative to this directory) to place at
# the top of the title page.
#latex_logo = None
    
            # Find all people in the image using a trained classifier model
        # Note: You can pass in either a classifier file name or a classifier model instance
        predictions = predict(full_file_path, model_path='trained_knn_model.clf')
    
    # Find all the faces in the image using the default HOG-based model.
# This method is fairly accurate, but not as accurate as the CNN model and not GPU accelerated.
# See also: find_faces_in_picture_cnn.py
face_locations = face_recognition.face_locations(image)
    
    face_recognition_model = face_recognition_models.face_recognition_model_location()
face_encoder = dlib.face_recognition_model_v1(face_recognition_model)
    
    # This is a demo of running face recognition on live video from your webcam. It's a little more complicated than the
# other example, but it includes some basic performance tweaks to make things run a lot faster:
#   1. Process each video frame at 1/4 resolution (though still display it at full resolution)
#   2. Only detect faces in every other frame of video.