
        
            creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
    
def _remove_firewall_rule(module, oneandone_conn, firewall_id, rule_id):
    '''
    Removes a rule from a firewall policy.
    '''
    try:
        if module.check_mode:
            rule = oneandone_conn.get_firewall_policy_rule(
                firewall_id=firewall_id,
                rule_id=rule_id)
            if rule:
                return True
            return False
    
        gateway = vca.get_gateway(vdc_name, gateway_name)
    if not gateway:
        module.fail_json(msg='Not able to find the gateway %s, please check '
                             'the gateway_name param' % gateway_name)
    
        module = AnsibleModule(
        argument_spec=dict(
            cluster=dict(default='localhost'),
            port=dict(default='5433'),
            db=dict(default=None),
            login_user=dict(default='dbadmin'),
            login_password=dict(default=None, no_log=True),
        ), supports_check_mode=True)
    
        role = module.params['role']
    assigned_roles = []
    if module.params['assigned_roles']:
        assigned_roles = module.params['assigned_roles'].split(',')
        assigned_roles = filter(None, assigned_roles)
    state = module.params['state']
    db = ''
    if module.params['db']:
        db = module.params['db']
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['stableinterface'],
                    'supported_by': 'core'}
    
    
DOCUMENTATION = '''
---
module: airbrake_deployment
version_added: '1.2'
author: 'Bruce Pennypacker (@bpennypacker)'
short_description: Notify airbrake about app deployments
description:
   - Notify airbrake about app deployments (see http://help.airbrake.io/kb/api-2/deploy-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The airbrake environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
    required: false
  repo:
    description:
      - URL of the project repository
    required: false
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
    required: false
  url:
    description:
      - Optional URL to submit the notification to. Use to send notifications to Airbrake-compliant tools like Errbit.
    required: false
    default: 'https://airbrake.io/deploys.txt'
    version_added: '1.5'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    required: false
    default: 'yes'
    type: bool
    
            if not query_log_status(module, le_path, log):
            module.fail_json(msg='failed to follow '%s': %s' % (log, err.strip()))
    
        if running and state == 'stopped':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('stop')
        if status in ['not monitored'] or 'stop pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not stopped' % name, status=status)
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
        # --- backwards compatibility for scrapy.conf.settings singleton ---
    if settings is None and 'scrapy.conf' in sys.modules:
        from scrapy import conf
        if hasattr(conf, 'settings'):
            settings = conf.settings
    # ------------------------------------------------------------------
    
    from scrapy.commands import ScrapyCommand
from scrapy.settings import BaseSettings
    
    from . import Contract
    
            # kept for old-style HTTP/1.0 downloader context twisted calls,
        # e.g. connectSSL()
        def getContext(self, hostname=None, port=None):
            return self.getCertificateOptions().getContext()
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
    print('I found {} face(s) in this photograph.'.format(len(face_locations)))
    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
    
def face_distance(face_encodings, face_to_compare):
    '''
    Given a list of face encodings, compare them to a known face encoding and get a euclidean distance
    for each comparison face. The distance tells you how similar the faces are.
    
        process_this_frame = not process_this_frame
    
        def test_cnn_face_locations(self):
        img = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        detected_faces = api.face_locations(img, model='cnn')
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    ax = fig.add_axes((0.45, 0.1, 0.16, 0.8))
bar_data = [2.1, -00.8, 1.1, 2.5, -2.1, -0.5, -2.0, 1.5]
ax.set_ylim(-3, 3)
ax.set_xticks([])
ax.set_yticks([])
ax.bar(np.arange(len(bar_data)), bar_data)
    
            for prop, val in list(props.items()):
            if val == 'inherit':
                val = inherited.get(prop, 'initial')
            if val == 'initial':
                val = self.INITIAL_STYLE.get(prop)
    
        See :class:`Packer` for options.
    '''
    return Packer(**kwargs).pack(o)