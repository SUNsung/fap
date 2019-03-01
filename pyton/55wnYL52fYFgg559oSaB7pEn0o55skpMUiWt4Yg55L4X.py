
        
            def reducer(self, key, values):
        '''Sum values for each key.
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
def GAN_loss_matrix(dis_predictions):
  '''Computes the cross entropy loss for G.
    
      Args:
    init_savers:  Dictionary of init_savers.  'init_saver_name': init_saver.
    sess:  tf.Session.
  '''
  ## Load Generator weights from MaskGAN checkpoint.
  if FLAGS.maskgan_ckpt:
    print('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    tf.logging.info('Restoring Generator from %s.' % FLAGS.maskgan_ckpt)
    print('Asserting Generator is a seq2seq-variant.')
    tf.logging.info('Asserting Generator is a seq2seq-variant.')
    assert FLAGS.generator_model.startswith('seq2seq')
    init_saver = init_savers['init_saver']
    init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
    faces = fetch_lfw_people(resize=.2, min_faces_per_person=5)
# limit dataset to 5000 people (don't care who they are!)
X = faces.data[:5000]
n_samples, h, w = faces.images.shape
n_features = X.shape[1]
    
        input_file = open(os.path.join(exercise_dir, f))
    output_file = open(os.path.join(skeleton_dir, f), 'w')
    
    plt.axis('tight')
plt.axis('off')
plt.suptitle('Ground truth', size=20)
    
    # histogram
plt.figure(4, figsize=(3, 2.2))
plt.clf()
plt.axes([.01, .01, .98, .98])
plt.hist(X, bins=256, color='.5', edgecolor='.5')
plt.yticks(())
plt.xticks(regular_values)
values = np.sort(values)
for center_1, center_2 in zip(values[:-1], values[1:]):
    plt.axvline(.5 * (center_1 + center_2), color='b')
    
    plt.show()

    
        :param key: name of cli constant
    :return: value of constant for active os
    '''
    return CLI_DEFAULTS[key]
    
        Handles decoding/encoding between RFC3339 strings and aware (not
    naive) `datetime.datetime` objects
    (e.g. ``datetime.datetime.now(pytz.utc)``).
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
            The first argument, FORMAT, is a format string for the
        message to be logged.  If the format string contains
        any % escapes requiring parameters, they should be
        specified as subsequent arguments (it's just like
        printf!).
    
            The method optionally resolves the names relative to a given module.
        '''
        parts = name.split('.')
        error_case, error_message = None, None
        if module is None:
            parts_copy = parts[:]
            while parts_copy:
                try:
                    module_name = '.'.join(parts_copy)
                    module = __import__(module_name)
                    break
                except ImportError:
                    next_attribute = parts_copy.pop()
                    # Last error so we can give it to the user if needed.
                    error_case, error_message = _make_failed_import_test(
                        next_attribute, self.suiteClass)
                    if not parts_copy:
                        # Even the top level import failed: report that error.
                        self.errors.append(error_message)
                        return error_case
            parts = parts[1:]
        obj = module
        for part in parts:
            try:
                parent, obj = obj, getattr(obj, part)
            except AttributeError as e:
                # We can't traverse some part of the name.
                if (getattr(obj, '__path__', None) is not None
                    and error_case is not None):
                    # This is a package (no __path__ per importlib docs), and we
                    # encountered an error importing something. We cannot tell
                    # the difference between package.WrongNameTestClass and
                    # package.wrong_module_name so we just report the
                    # ImportError - it is more informative.
                    self.errors.append(error_message)
                    return error_case
                else:
                    # Otherwise, we signal that an AttributeError has occurred.
                    error_case, error_message = _make_failed_test(
                        part, e, self.suiteClass,
                        'Failed to access attribute:\n%s' % (
                            traceback.format_exc(),))
                    self.errors.append(error_message)
                    return error_case
    
        def list_cases(self):
        support.verbose = False
        support.set_match_tests(self.ns.match_tests)
    
    
SYMBOL_FILE              = support.findfile('symbol.py')
GEN_SYMBOL_FILE          = os.path.join(os.path.dirname(__file__),
                                        '..', '..', 'Tools', 'scripts',
                                        'generate_symbol_py.py')
GRAMMAR_FILE             = os.path.join(os.path.dirname(__file__),
                                        '..', '..', 'Include', 'graminit.h')
TEST_PY_FILE             = 'symbol_test.py'
    
        # Test an invalid call (bpo-34125)
    def test_unbound_method_invalid_args(self):
        kwargs = {}
        def f(p):
            dict.get(print, 42, **kwargs)
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident)])
    
        def test_run_module_bug1764407(self):
        # -m and -i need to play well together
        # Runs the timeit module and checks the __main__
        # namespace has been populated appropriately
        p = spawn_python('-i', '-m', 'timeit', '-n', '1')
        p.stdin.write(b'Timer\n')
        p.stdin.write(b'exit()\n')
        data = kill_python(p)
        self.assertTrue(data.find(b'1 loop') != -1)
        self.assertTrue(data.find(b'__main__.Timer') != -1)
    
    '''Send the contents of a directory as a MIME message.'''
    
    # Now the header items can be accessed as a dictionary, and any non-ASCII will
# be converted to unicode:
print('To:', msg['to'])
print('From:', msg['from'])
print('Subject:', msg['subject'])
    
    
__licence__ = 'BSD (3 clause)'
    
        see(
        dev_id='demo_home_boy',
        host_name='Home Boy',
        gps=[hass.config.latitude - 0.00002, hass.config.longitude + 0.00002],
        gps_accuracy=20,
        battery=53
    )
    
            # Check if the access point is accessible
        response = self._make_request()
        if not response.status_code == 200:
            raise ConnectionError('Cannot connect to Linksys Access Point')
    
    import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOSTS
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import (CONF_API_KEY, CONF_RECIPIENT)
from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
    
                resp = requests.post(CREATE_BROADCAST_URL,
                                 data=json.dumps(broadcast_create_body),
                                 params=payload,
                                 headers={CONTENT_TYPE: CONTENT_TYPE_JSON},
                                 timeout=10)
            _LOGGER.debug('FB Messager broadcast id %s : ', resp.json())
    
                # Check response
            buffer = sock.recv(1024)
            if buffer != b'LANnouncer: OK':
                _LOGGER.error('Error sending data to Lannnouncer: %s',
                              buffer.decode())
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Mycroft notification service.'''
    return MycroftNotificationService(
        hass.data['mycroft'])
    
                    for line in text:
                    if re.match(r'^>', line):
                        line = line[:0] + '####' + line[1:]
                    html = markdown.markdown(line)
                    out.write(html)
                out.write(footer)
    
        # Find which gt ROI each ex ROI has max overlap with:
    # this will be the ex ROI's gt target
    gt_assignment = ex_gt_overlaps.argmax(axis=1)
    gt_rois = rois[gt_inds[gt_assignment], :]
    ex_rois = rois[ex_inds, :]
    # Use class '1' for all boxes if using class_agnostic_bbox_reg
    targets[ex_inds, 0] = (
        1 if cfg.MODEL.CLS_AGNOSTIC_BBOX_REG else labels[ex_inds])
    targets[ex_inds, 1:] = box_utils.bbox_transform_inv(
        ex_rois, gt_rois, cfg.MODEL.BBOX_REG_WEIGHTS)
    return targets
    
    
def _get_voc_results_file_template(json_dataset, salt):
    info = voc_info(json_dataset)
    year = info['year']
    image_set = info['image_set']
    devkit_path = info['devkit_path']
    # VOCdevkit/results/VOC2007/Main/<comp_id>_det_test_aeroplane.txt
    filename = 'comp4' + salt + '_det_' + image_set + '_{:s}.txt'
    return os.path.join(devkit_path, 'results', 'VOC' + year, 'Main', filename)
    
        dim = 64
    p = model.Conv(data, 'conv1', 3, dim, 7, pad=3, stride=2, no_bias=1)
    p = model.AffineChannel(p, 'res_conv1_bn', dim=dim, inplace=True)
    p = model.Relu(p, p)
    p = model.MaxPool(p, 'pool1', kernel=3, pad=1, stride=2)
    return p, dim
    
    
# ---------------------------------------------------------------------------- #
# Fast R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
        # Create new roi blobs for each FPN level
    # (See: modeling.FPN.add_multilevel_roi_blobs which is similar but annoying
    # to generalize to support this particular case.)
    rois_idx_order = np.empty((0, ))
    for output_idx, lvl in enumerate(range(lvl_min, lvl_max + 1)):
        idx_lvl = np.where(lvls == lvl)[0]
        blob_roi_level = rois[idx_lvl, :]
        outputs[output_idx + 1].reshape(blob_roi_level.shape)
        outputs[output_idx + 1].data[...] = blob_roi_level
        rois_idx_order = np.concatenate((rois_idx_order, idx_lvl))
    rois_idx_restore = np.argsort(rois_idx_order)
    blob_utils.py_op_copy_blob(rois_idx_restore.astype(np.int32), outputs[-1])
