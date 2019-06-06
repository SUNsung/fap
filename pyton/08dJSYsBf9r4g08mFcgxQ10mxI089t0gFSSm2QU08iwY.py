
        
            for idx, (loader, srcobj, triple) in enumerate(attempts):
        if isinstance(srcobj, Flask):
            src_info = 'application '%s'' % srcobj.import_name
        elif isinstance(srcobj, Blueprint):
            src_info = 'blueprint '%s' (%s)' % (srcobj.name, srcobj.import_name)
        else:
            src_info = repr(srcobj)
    
        def get(self):
        if len(self.config.GAE_APPIDS):
            if len(self.working_appid_list) == 0:
                time_to_reset = 600 - (time.time() - self.last_reset_time)
                if time_to_reset > 0:
                    self.logger.warn('all appid out of quota, wait %d seconds to reset', time_to_reset)
                    time.sleep(time_to_reset)
                    return None
                else:
                    self.logger.warn('reset appid')
                    self.reset_appid()
    
    MIN_TOKEN_TYPE = UP+1
	
INVALID_TOKEN_TYPE = 0
    
            The recognizer attempts to recover from single missing
        symbols. But, actions might refer to that missing symbol.
        For example, x=ID {f($x);}. The action clearly assumes
        that there has been an identifier matched previously and that
        $x points at that token. If that token is missing, but
        the next token in the stream is what we want we assume that
        this token is missing and we keep going. Because we
        have to return some token to replace the missing token,
        we have to conjure one up. This method gives the user control
        over the tokens returned for missing tokens. Mostly,
        you will want to create something special for identifier
        tokens. For literals such as '{' and ',', the default
        action in the parser or tree parser works. It simply creates
        a CommonToken of the appropriate type. The text will be the token.
        If you change what tokens must be created by the lexer,
        override this method to create the appropriate tokens.
        '''
    }
    
        Since the operations are done lazily at toString-time, operations do not
    screw up the token index values.  That is, an insert operation at token
    index i does not change the index values for tokens i+1..n-1.
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key', 'value'])
    
            # Changing field 'TagKey.environment_id'
        db.alter_column(u'tagstore_tagkey', 'environment_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')(default=0))
    
    from sentry.utils.safe import safe_execute
from sentry.tasks.base import instrumented_task
    
    from datetime import timedelta
from django.utils import timezone
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def _write_voc_results_files(json_dataset, all_boxes, salt):
    filenames = []
    image_set_path = voc_info(json_dataset)['image_set_path']
    assert os.path.exists(image_set_path), \
        'Image set path does not exist: {}'.format(image_set_path)
    with open(image_set_path, 'r') as f:
        image_index = [x.strip() for x in f.readlines()]
    # Sanity check that order of images in json dataset matches order in the
    # image set
    roidb = json_dataset.get_roidb()
    for i, entry in enumerate(roidb):
        index = os.path.splitext(os.path.split(entry['image'])[1])[0]
        assert index == image_index[i]
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        logger.info('Writing VOC results for: {}'.format(cls))
        filename = _get_voc_results_file_template(json_dataset,
                                                  salt).format(cls)
        filenames.append(filename)
        assert len(all_boxes[cls_ind]) == len(image_index)
        with open(filename, 'wt') as f:
            for im_ind, index in enumerate(image_index):
                dets = all_boxes[cls_ind][im_ind]
                if type(dets) == list:
                    assert len(dets) == 0, \
                        'dets should be numpy.ndarray or empty list'
                    continue
                # the VOCdevkit expects 1-based indices
                for k in range(dets.shape[0]):
                    f.write('{:s} {:.3f} {:.1f} {:.1f} {:.1f} {:.1f}\n'.
                            format(index, dets[k, -1],
                                   dets[k, 0] + 1, dets[k, 1] + 1,
                                   dets[k, 2] + 1, dets[k, 3] + 1))
    return filenames
    
        # For other levels add top-down and lateral connections
    for i in range(num_backbone_stages - 1):
        add_topdown_lateral_module(
            model,
            output_blobs[i],             # top-down blob
            lateral_input_blobs[i + 1],  # lateral blob
            output_blobs[i + 1],         # next output blob
            fpn_dim,                     # output dimension
            fpn_dim_lateral[i + 1]       # lateral input dimension
        )
    
    default_encoding = sys.getfilesystemencoding()
    
        def set_new_path(self, new_idf_path):
        if self.path != new_idf_path:
            self.path = new_idf_path
            content = open(new_idf_path, 'rb').read().decode('utf-8')
            self.idf_freq = {}
            for line in content.splitlines():
                word, freq = line.strip().split(' ')
                self.idf_freq[word] = float(freq)
            self.median_idf = sorted(
                self.idf_freq.values())[len(self.idf_freq) // 2]
    
    if sys.platform.startswith('java'):
    start_P, trans_P, emit_P = load_model()
else:
    from .prob_start import P as start_P
    from .prob_trans import P as trans_P
    from .prob_emit import P as emit_P
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
    if opt.withWeight is None:
    withWeight = False
else:
    if int(opt.withWeight) is 1:
        withWeight = True
    else:
        withWeight = False
    
    count_vect = CountVectorizer()
docs = []
    
    url = sys.argv[1]
content = open(url,'rb').read()
t1 = time.time()
words = '/ '.join(jieba.cut(content))
    
            for item_id in items.keys():
            item = table.get_item(Key={PARTITION_KEY: item_id})['Item']
            # need to fix up the JSON and convert str to unicode for Python 2
            item1 = json_safe(item)
            item2 = json_safe(items[item_id])
            assert item1 == item2
    
        dynamodb = aws_stack.connect_to_resource('dynamodb')
    # create table with stream forwarding config
    aws_stack.create_dynamodb_table(TEST_TABLE_NAME, partition_key=PARTITION_KEY)
    table = dynamodb.Table(TEST_TABLE_NAME)
    
        :rtype: str
    :return: A command that will run the MultiLangDaemon with your
             properties and custom paths and java.
    '''
    return '{java} -cp {cp} {daemon} {props}'.format(
        java=java,
        cp=get_kcl_classpath(properties, paths),
        daemon=multi_lang_daemon_class,
        # Just need the basename becasue the path is added to the classpath
        props=os.path.basename(properties))
    
    def dimension_lambda(kwargs):
    func_name = kwargs.get('func_name')
    if not func_name:
        func_name = kwargs.get('func_arn').split(':function:')[1].split(':')[0]
    return [{
        'Name': 'FunctionName',
        'Value': func_name
    }]
    
    THIS_FOLDER = os.path.dirname(os.path.realpath(__file__))
TEST_TEMPLATE_1 = os.path.join(THIS_FOLDER, 'templates', 'template1.yaml')
TEST_TEMPLATE_2 = os.path.join(THIS_FOLDER, 'templates', 'template2.yaml')