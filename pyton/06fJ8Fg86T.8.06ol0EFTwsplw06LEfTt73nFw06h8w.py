
        
        
@deconstructible
class KeysValidator:
    '''A validator designed for HStore to require/restrict keys.'''
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        elif args.form and not args.files:
        # If sending files, `requests` will set
        # the `Content-Type` for us.
        default_headers['Content-Type'] = FORM_CONTENT_TYPE
    return default_headers
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
        CHUNK_SIZE = 1
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    
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

    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
            try:
            response = self.client.delete_rule(Name=self.name)
        except (botocore.exceptions.BotoCoreError, botocore.exceptions.ClientError) as e:
            self.module.fail_json_aws(e, msg='Could not delete rule %s' % self.name)
        self.changed = True
        return response
    
    
def create_snapshot_ansible_module():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            volume_id=dict(),
            description=dict(),
            instance_id=dict(),
            snapshot_id=dict(),
            device_name=dict(),
            wait=dict(type='bool', default=True),
            wait_timeout=dict(type='int', default=0),
            last_snapshot_min_age=dict(type='int', default=0),
            snapshot_tags=dict(type='dict', default=dict()),
            state=dict(choices=['absent', 'present'], default='present'),
        )
    )
    module = AnsibleModule(argument_spec=argument_spec)
    return module
    
    
DOCUMENTATION = '''
---
module: elasticache_snapshot
short_description: Manage cache snapshots in Amazon Elasticache.
description:
  - Manage cache snapshots in Amazon Elasticache.
  - Returns information about the specified snapshot.
version_added: '2.3'
author: 'Sloane Hertel (@s-hertel)'
extends_documentation_fragment:
  - aws
  - ec2
requirements: [ boto3, botocore ]
options:
  name:
    description:
      - The name of the snapshot we want to create, copy, delete
    required: yes
  state:
    description:
      - Actions that will create, destroy, or copy a snapshot.
    choices: ['present', 'absent', 'copy']
  replication_id:
    description:
      - The name of the existing replication group to make the snapshot.
  cluster_id:
    description:
      - The name of an existing cache cluster in the replication group to make the snapshot.
  target:
    description:
      - The name of a snapshot copy
  bucket:
    description:
      - The s3 bucket to which the snapshot is exported
'''
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        module : AnsibleModule object
    oneandone_conn: authenticated oneandone object
    '''
    try:
        monitoring_policy_id = module.params.get('monitoring_policy')
        name = module.params.get('name')
        description = module.params.get('description')
        email = module.params.get('email')
        thresholds = module.params.get('thresholds')
        add_ports = module.params.get('add_ports')
        update_ports = module.params.get('update_ports')
        remove_ports = module.params.get('remove_ports')
        add_processes = module.params.get('add_processes')
        update_processes = module.params.get('update_processes')
        remove_processes = module.params.get('remove_processes')
        add_servers = module.params.get('add_servers')
        remove_servers = module.params.get('remove_servers')
    
    version_added: '2.6'
    
    RETURN = '''# '''
    
        Code is a simple port of what is already in the /scripts directory
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
        difference = predict - actual
    numerator = np.sum(difference) / len(predict) 
    denumerator =  np.sum(actual) / len(predict)
    print(numerator)
    print(denumerator)
    
    
'''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a * b = (a+a) * (b/2) ---- example : 4 * 4 = (4+4) * (4/2) = 8 * 2
* RULE 2 : IF b is ODD, then ---- a * b = a + (a * (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a * b
* Repeat the process till b = 1 OR b = 0, because a*1 = a AND a*0 = 0
*
* As far as the modulo is concerned,
* the fact : (a+b) % c = ((a%c) + (b%c)) % c
* Now apply RULE 1 OR 2, whichever is required.
'''

    
    # Find all the faces in the image using a pre-trained convolutional neural network.
# This method is more accurate than the default HOG model, but it's slower
# unless you have an nvidia GPU and dlib compiled with CUDA extensions. But if you do,
# this will use GPU acceleration and perform well.
# See also: find_faces_in_picture.py
face_locations = face_recognition.face_locations(image, number_of_times_to_upsample=0, model='cnn')
    
    
def detect_faces_in_image(file_stream):
    # Pre-calculated face encoding of Obama generated with face_recognition.face_encodings(img)
    known_face_encoding = [-0.09634063,  0.12095481, -0.00436332, -0.07643753,  0.0080383,
                            0.01902981, -0.07184699, -0.09383309,  0.18518871, -0.09588896,
                            0.23951106,  0.0986533 , -0.22114635, -0.1363683 ,  0.04405268,
                            0.11574756, -0.19899382, -0.09597053, -0.11969153, -0.12277931,
                            0.03416885, -0.00267565,  0.09203379,  0.04713435, -0.12731361,
                           -0.35371891, -0.0503444 , -0.17841317, -0.00310897, -0.09844551,
                           -0.06910533, -0.00503746, -0.18466514, -0.09851682,  0.02903969,
                           -0.02174894,  0.02261871,  0.0032102 ,  0.20312519,  0.02999607,
                           -0.11646006,  0.09432904,  0.02774341,  0.22102901,  0.26725179,
                            0.06896867, -0.00490024, -0.09441824,  0.11115381, -0.22592428,
                            0.06230862,  0.16559327,  0.06232892,  0.03458837,  0.09459756,
                           -0.18777156,  0.00654241,  0.08582542, -0.13578284,  0.0150229 ,
                            0.00670836, -0.08195844, -0.04346499,  0.03347827,  0.20310158,
                            0.09987706, -0.12370517, -0.06683611,  0.12704916, -0.02160804,
                            0.00984683,  0.00766284, -0.18980607, -0.19641446, -0.22800779,
                            0.09010898,  0.39178532,  0.18818057, -0.20875394,  0.03097027,
                           -0.21300618,  0.02532415,  0.07938635,  0.01000703, -0.07719778,
                           -0.12651891, -0.04318593,  0.06219772,  0.09163868,  0.05039065,
                           -0.04922386,  0.21839413, -0.02394437,  0.06173781,  0.0292527 ,
                            0.06160797, -0.15553983, -0.02440624, -0.17509389, -0.0630486 ,
                            0.01428208, -0.03637431,  0.03971229,  0.13983178, -0.23006812,
                            0.04999552,  0.0108454 , -0.03970895,  0.02501768,  0.08157793,
                           -0.03224047, -0.04502571,  0.0556995 , -0.24374914,  0.25514284,
                            0.24795187,  0.04060191,  0.17597422,  0.07966681,  0.01920104,
                           -0.01194376, -0.02300822, -0.17204897, -0.0596558 ,  0.05307484,
                            0.07417042,  0.07126575,  0.00209804]
    
    
def print_result(filename, location):
    top, right, bottom, left = location
    print('{},{},{},{},{}'.format(filename, top, right, bottom, left))
    
            if True in result:
            [print_result(image_to_check, name, distance, show_distance) for is_match, name, distance in zip(result, known_names, distances) if is_match]
        else:
            print_result(image_to_check, 'unknown_person', None, show_distance)
    
            result = runner.invoke(face_recognition_cli.main, args=[image_folder, image_file])
    
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
    
    seg_list = jieba.cut_for_search('小明硕士毕业于中国科学院计算所，后在日本京都大学深造')  # 搜索引擎模式
print(', '.join(seg_list))
    
    if opt.topK is None:
    topK = 10
else:
    topK = int(opt.topK)
    
        def testSetDictionary(self):
        jieba.set_dictionary('foobar.txt')
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test SetDictionary Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test SetDictionary error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testSetDictionary', file=sys.stderr)
    
    t2 = time.time()
tm_cost = t2-t1