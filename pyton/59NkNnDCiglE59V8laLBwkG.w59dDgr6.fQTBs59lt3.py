
        
            def score(self):
        min_over = sys.MAXSIZE
        max_under = -sys.MAXSIZE
        for score in self.possible_scores():
            if self.BLACKJACK < score < min_over:
                min_over = score
            elif max_under < score <= self.BLACKJACK:
                max_under = score
        return max_under if max_under != -sys.MAXSIZE else min_over
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
        def mapper_sort(self, key, value):
        '''Construct key to ensure proper sorting.
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
        def test_command_line_interface_tolerance(self):
        target_string = 'obama.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')
    
    # Show the picture
pil_image.show()

    
    pil_image = Image.fromarray(image)
for face_landmarks in face_landmarks_list:
    d = ImageDraw.Draw(pil_image, 'RGBA')
    
    
# Many subprocess use to process frames.
def process(worker_id, read_frame_list, write_frame_list):
    known_face_encodings = Global.known_face_encodings
    known_face_names = Global.known_face_names
    while not Global.is_exit:
    
        entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
        # Get options and arguments.
    try:
        opts, args = getopt.getopt(sys.argv[1:], _short_options, _options)
    except getopt.GetoptError as e:
        log.wtf('''
    [Fatal] {}.
    Try '{} --help' for more options.'''.format(e, script_name))
    
        else:
        titles = re.findall(r''name':'([^']*)'', html)
        real_urls = [re.sub('\\\\/', '/', i) for i in re.findall(r''rawUrl':'([^']*)'', html)]
    
            coeff = [0, 0, 0, 0]
        for num_pair in no_dup:
            idx = int(num_pair[-1])
            val = int(num_pair[:-1], 16)
            coeff[idx] = val
    
        stream_types = [
        {'id': 'original'},
        {'id': 'thumbnail'},
    ]
    
    from ..common import *
from ..extractor import VideoExtractor
    
        def forwards(self, orm):
        # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
        def forwards(self, orm):
        # Removing unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.delete_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key_id', 'value_id'])
    
    from datetime import timedelta
from django.db.models import Max
from django.utils import timezone
    
            return self.nodelist_true.render(context)

    
        v0upshare design: conv5, convT 2x2.
    '''
    # Since box and mask head are shared, these must match
    assert cfg.MRCNN.ROI_XFORM_RESOLUTION == cfg.FAST_RCNN.ROI_XFORM_RESOLUTION
    
    
def _add_class_assignments(roidb):
    '''Compute object category assignment for each box associated with each
    roidb entry.
    '''
    for entry in roidb:
        gt_overlaps = entry['gt_overlaps'].toarray()
        # max overlap with gt over classes (columns)
        max_overlaps = gt_overlaps.max(axis=1)
        # gt class that had the max overlap
        max_classes = gt_overlaps.argmax(axis=1)
        entry['max_classes'] = max_classes
        entry['max_overlaps'] = max_overlaps
        # sanity checks
        # if max overlap is 0, the class must be background (class 0)
        zero_inds = np.where(max_overlaps == 0)[0]
        assert all(max_classes[zero_inds] == 0)
        # if max overlap > 0, the class must be a fg class (not class 0)
        nonzero_inds = np.where(max_overlaps > 0)[0]
        assert all(max_classes[nonzero_inds] != 0)
    
            if i % 10 == 0:  # Reduce log file size
            ave_total_time = np.sum([t.average_time for t in timers.values()])
            eta_seconds = ave_total_time * (num_images - i - 1)
            eta = str(datetime.timedelta(seconds=int(eta_seconds)))
            det_time = (
                timers['im_detect_bbox'].average_time +
                timers['im_detect_mask'].average_time +
                timers['im_detect_keypoints'].average_time
            )
            misc_time = (
                timers['misc_bbox'].average_time +
                timers['misc_mask'].average_time +
                timers['misc_keypoints'].average_time
            )
            logger.info(
                (
                    'im_detect: range [{:d}, {:d}] of {:d}: '
                    '{:d}/{:d} {:.3f}s + {:.3f}s (eta: {})'
                ).format(
                    start_ind + 1, end_ind, total_num_images, start_ind + i + 1,
                    start_ind + num_images, det_time, misc_time, eta
                )
            )
    
        with open(os.path.join(args.out_dir, fname + '.pb'), 'wb') as f:
        f.write(all_net.Proto().SerializeToString())
    with open(os.path.join(args.out_dir, fname + '.pbtxt'), 'wb') as f:
        f.write(str(all_net.Proto()))
    with open(os.path.join(args.out_dir, fname + '_init.pb'), 'wb') as f:
        f.write(all_init_net.Proto().SerializeToString())
    
            basename = os.path.splitext(os.path.basename(im_name))[0]
        txtname = os.path.join(output_dir, basename + 'pred.txt')
        with open(txtname, 'w') as fid_txt:
            if i % 10 == 0:
                logger.info('i: {}: {}'.format(i, basename))
            for j in range(1, len(all_segms)):
                clss = json_dataset.classes[j]
                clss_id = cityscapes_eval.name2label[clss].id
                segms = all_segms[j][i]
                boxes = all_boxes[j][i]
                if segms == []:
                    continue
                masks = mask_util.decode(segms)
    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
    
def forward_event_to_target_stream(record, stream_name):
    kinesis = aws_stack.connect_to_service('kinesis')
    kinesis.put_record(StreamName=stream_name, Data=record['Data'], PartitionKey=record['PartitionKey'])

    
            expected_result = {'AliasArn': lambda_api.func_arn(self.FUNCTION_NAME) + ':' + self.ALIAS_NAME,
                           'FunctionVersion': '1', 'Description': '', 'Name': self.ALIAS_NAME}
        self.assertDictEqual(expected_result, result)
    
            response = ssm_client.describe_parameters()
    
      @classmethod
  def flatten_recursive(cls, item):
    '''Flattens (potentially nested) a tuple/dictionary/list to a list.'''
    output = []
    if isinstance(item, list):
      output.extend(item)
    elif isinstance(item, tuple):
      output.extend(list(item))
    elif isinstance(item, dict):
      for (_, v) in six.iteritems(item):
        output.append(v)
    else:
      return [item]