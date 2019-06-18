
        
        secret_msg = b'Secret message goes here'
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
                        if not split_option[-1].startswith('-'):  # metavar
                        option = ' '.join(split_option[:-1] + ['*%s*' % split_option[-1]])
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def test_module_exec(self):
        if sys.version_info >= (2, 7):  # Python 2.6 doesn't support package execution
            subprocess.check_call([sys.executable, '-m', 'youtube_dl', '--version'], cwd=rootDir, stdout=_DEV_NULL)
    
                    m = re.search(r'(?<=\s)u[\''](?!\)|,|$)', code)
                if m is not None:
                    self.assertTrue(
                        m is None,
                        'u present in %s, around %s' % (
                            fn, code[m.start() - 10:m.end() + 10]))
    
        def setUp(self):
        from acme.errors import MissingNonce
        self.response = mock.MagicMock(headers={})
        self.response.request.method = 'FOO'
        self.error = MissingNonce(self.response)
    
        def test_select_no_input(self):
        self.assertFalse(select_vhost_multiple([]))
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'certbot-compatibility-test',
     u'certbot-compatibility-test Documentation',
     author, 'certbot-compatibility-test',
     'One line description of project.', 'Miscellaneous'),
]
    
    ========================================  =====================================
``--dns-cloudflare-credentials``          Cloudflare credentials_ INI file.
                                          (Required)
``--dns-cloudflare-propagation-seconds``  The number of seconds to wait for DNS
                                          to propagate before asking the ACME
                                          server to verify the DNS record.
                                          (Default: 10)
========================================  =====================================
    
    def clean_text(text, replacements = {':': '_', ' ': '_', '/': '_', '.': '', ''': ''}):
    for key, rep in replacements.items():
        text = text.replace(key, rep)
    return text    
    
    from __future__ import absolute_import
    
            # Deleting model 'GroupTagKey'
        db.delete_table(u'tagstore_grouptagkey')
    
        def backwards(self, orm):
        # Adding model 'TagKey'
        db.create_table(u'tagstore_tagkey', (
            ('status', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('key', self.gf('django.db.models.fields.CharField')(max_length=32)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
        ))
        db.send_create_signal('tagstore', ['TagKey'])
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
    from datetime import timedelta
from django.utils import timezone
    
        if partition is None:
        lock_key = 'buffer:process_pending'
    else:
        lock_key = 'buffer:process_pending:%d' % partition
    
    from sentry.app import locks
from sentry.models import ScheduledJob
from sentry.tasks.base import instrumented_task
    
        # Perform mask detection on the horizontally flipped image
    if cfg.TEST.MASK_AUG.H_FLIP:
        masks_hf = im_detect_mask_hflip(
            model, im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE, boxes
        )
        masks_ts.append(masks_hf)
    
        # Get IoU overlap between each ex ROI and gt ROI
    ex_gt_overlaps = box_utils.bbox_overlaps(
        rois[ex_inds, :].astype(dtype=np.float32, copy=False),
        rois[gt_inds, :].astype(dtype=np.float32, copy=False))
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        for i in range(cfg.KRCNN.NUM_STACKED_CONVS):
        current = model.Conv(
            current,
            'conv_fcn' + str(i + 1),
            dim_in,
            hidden_dim,
            kernel_size,
            stride=1,
            pad=pad_size,
            weight_init=(cfg.KRCNN.CONV_INIT, {'std': 0.01}),
            bias_init=('ConstantFill', {'value': 0.})
        )
        current = model.Relu(current, current)
        dim_in = hidden_dim
    
    
def faster_rcnn(model):
    logger.warn(
        'Deprecated: use `MODEL.TYPE: generalized_rcnn` with '
        '`MODEL.FASTER_RCNN: True`'
    )
    return generalized_rcnn(model)
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
    return loss_gradients
    
        # Broacast anchors over shifts to enumerate all anchors at all positions
    # in the (H, W) grid:
    #   - add A cell anchors of shape (1, A, 4) to
    #   - K shifts of shape (K, 1, 4) to get
    #   - all shifted anchors of shape (K, A, 4)
    #   - reshape to (K*A, 4) shifted anchors
    A = num_cell_anchors
    K = shifts.shape[0]
    field_of_anchors = (
        cell_anchors.reshape((1, A, 4)) +
        shifts.reshape((1, K, 4)).transpose((1, 0, 2))
    )
    field_of_anchors = field_of_anchors.reshape((K * A, 4))
    foa = FieldOfAnchors(
        field_of_anchors=field_of_anchors.astype(np.float32),
        num_cell_anchors=num_cell_anchors,
        stride=stride,
        field_size=field_size,
        octave=octave,
        aspect=aspect
    )
    _threadlocal_foa.cache[cache_key] = foa
    return foa
    
    
def add_retinanet_blobs(blobs, im_scales, roidb, image_width, image_height):
    '''Add RetinaNet blobs.'''
    # RetinaNet is applied to many feature levels, as in the FPN paper
    k_max, k_min = cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.RPN_MIN_LEVEL
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    num_aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    aspect_ratios = cfg.RETINANET.ASPECT_RATIOS
    anchor_scale = cfg.RETINANET.ANCHOR_SCALE
    
        def get_config(self):
        config = {
            'axis': self.axis,
            'epsilon': self.epsilon,
            'center': self.center,
            'scale': self.scale,
            'beta_initializer': initializers.serialize(self.beta_initializer),
            'gamma_initializer': initializers.serialize(self.gamma_initializer),
            'beta_regularizer': regularizers.serialize(self.beta_regularizer),
            'gamma_regularizer': regularizers.serialize(self.gamma_regularizer),
            'beta_constraint': constraints.serialize(self.beta_constraint),
            'gamma_constraint': constraints.serialize(self.gamma_constraint)
        }
        base_config = super(InstanceNormalization, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))
    
        def build_autoencoders(self):
        ''' Initialize Dfaker model '''
        logger.debug('Initializing model')
        inputs = [Input(shape=self.input_shape, name='face')]
        if self.config.get('mask_type', None):
            mask_shape = (self.input_shape[0] * 2, self.input_shape[1] * 2, 1)
            inputs.append(Input(shape=mask_shape, name='mask'))
    
        def process(self):
        ''' Builds the GUI '''
        self.root.build_gui(self.args.debug)
        self.root.mainloop()

    
        def progress_set_mode(self, mode):
        ''' Set the progress bar mode '''
        self.pbar.config(mode=mode)
        if mode == 'indeterminate':
            self.pbar.config(maximum=100)
            self.pbar.start()
        else:
            self.pbar.stop()
            self.pbar.config(maximum=1000)
    
        def build_options(self):
        ''' Get the commands that belong to each category '''
        for category in self.categories:
            logger.debug('Building '%s'', category)
            src = ToolsCli if category == 'tools' else cli
            mod_classes = self.get_cli_classes(src)
            self.commands[category] = self.sort_commands(category, mod_classes)
            self.opts.update(self.extract_options(src, mod_classes))
            logger.debug('Built '%s'', category)
    
        def generate_command(self, *args):
        ''' Generate the command line arguments and output '''
        if not self.tk_vars['generate'].get():
            return
        category, command = self.tk_vars['generate'].get().split(',')
        args = self.build_args(category, command=command, generate=True)
        self.tk_vars['consoleclear'].set(True)
        logger.debug(' '.join(args))
        print(' '.join(args))
        self.tk_vars['generate'].set(None)
    
            top_right = var_x[:, 1, -1, :]+var_x[:, 0, -2, :]
        inner_right = tf.unstack(var_x[:, 2:, -1, :]+var_x[:, :-2, -2, :], axis=1)
        bot_right = var_x[:, -1, -1, :]+var_x[:, -2, -2, :]
        x_right = [top_right] + inner_right + [bot_right]
        x_right = tf.stack(x_right, axis=1)
    
            if padding.upper() == 'VALID':
            out_rows = math.ceil((i_shape[1] - patch_row_eff + 1.) / float(strides[1]))
            out_cols = math.ceil((i_shape[2] - patch_col_eff + 1.) / float(strides[2]))
            pad_top = 0
            pad_left = 0
        else:
            out_rows = math.ceil(i_shape[1] / float(strides[1]))
            out_cols = math.ceil(i_shape[2] / float(strides[2]))
            pad_top = max(0, ((out_rows - 1) * strides[1] + patch_row_eff - i_shape[1]) // 2)
            pad_left = max(0, ((out_cols - 1) * strides[2] + patch_col_eff - i_shape[2]) // 2)
            # we simply assume padding right == padding left + 1 (same for top/down).
            # This might lead to us padding more as we would need but that won't matter.
            # TF tries to split padding between both sides so pad_left +1 should keep us on the
            # safe side.
            images = K.spatial_2d_padding(images, ((pad_top, pad_top+1), (pad_left, pad_left+1)))
    
        def update_plot(self, initiate=True):
        ''' Update the plot with incoming data '''
        logger.trace('Updating plot')
        if initiate:
            logger.debug('Initializing plot')
            self.lines = list()
            self.ax1.clear()
            self.axes_labels_set()
            logger.debug('Initialized plot')
    
            Returns:
        -------
        transfer: NumPy array
            OpenCV image (w, h, 3) NumPy array (uint8)
        '''
        clip = self.config.get('clip', True)
        preserve_paper = self.config.get('preserve_paper', True)
    
    import cv2
import numpy as np
from ._base import Adjustment