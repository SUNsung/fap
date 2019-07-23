
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
      # This test covers the following functions: ArrayToDatum, SerializeToString,
  # WriteToFile, ReadFromFile, ParseFromString, DatumToArray.
  def testWriteAndReadToFile(self):
    data = np.array([[[-1.0, 125.0, -2.5], [14.5, 3.5, 0.0]],
                     [[20.0, 0.0, 30.0], [25.5, 36.0, 42.0]]])
    tmpdir = tf.test.get_temp_dir()
    filename = os.path.join(tmpdir, 'test.datum')
    datum_io.WriteToFile(data, filename)
    data_read = datum_io.ReadFromFile(filename)
    self.assertAllEqual(data_read, data)
    
        # Run tested function.
    with tf.Graph().as_default() as g, self.session(graph=g) as sess:
      extractor = feature_aggregation_extractor.ExtractAggregatedRepresentation(
          sess, config)
      rvlad, extra_output = extractor.Extract(features, num_features_per_region)
    
      Args:
    dataset_file_path: Path to dataset file, in .mat format.
    
        Args:
      boxes: BoxList holding N boxes and keypoints to be encoded. Boxes are
        tensors with the shape [N, 4], and keypoints are tensors with the shape
        [N, num_keypoints, 2].
      anchors: BoxList of anchors.
    
      def test_prune_non_overlapping_boxes(self):
    corners1 = tf.constant([[4.0, 3.0, 7.0, 5.0], [5.0, 6.0, 10.0, 7.0]])
    corners2 = tf.constant([[3.0, 4.0, 6.0, 8.0], [14.0, 14.0, 15.0, 15.0],
                            [0.0, 0.0, 20.0, 20.0]])
    boxes1 = box_list.BoxList(corners1)
    boxes2 = box_list.BoxList(corners2)
    minoverlap = 0.5
    
      if eval_config.use_moving_averages:
    variable_averages = tf.train.ExponentialMovingAverage(0.0)
    variables_to_restore = variable_averages.variables_to_restore()
  saver = tf.train.Saver(variables_to_restore)
    
          # Optionally freeze some layers by setting their gradients to be zero.
      if train_config.freeze_variables:
        grads_and_vars = variables_helper.freeze_gradients_matching_regex(
            grads_and_vars, train_config.freeze_variables)
    
        anchors = np.array(
        [[0, 0, 16, 16],
         [0, 16, 16, 32],
         [16, 0, 32, 16],
         [16, 16, 32, 32]], dtype=np.float32)
    rpn_box_encodings = np.zeros(
        (batch_size, anchors.shape[0], BOX_CODE_SIZE), dtype=np.float32)
    # use different numbers for the objectness category to break ties in
    # order of boxes returned by NMS
    rpn_objectness_predictions_with_background = np.array([
        [[-10, 13],
         [10, -10],
         [10, -11],
         [-10, 12]],
        [[10, -10],
         [-10, 13],
         [-10, 12],
         [10, -11]]], dtype=np.float32)
    rpn_features_to_crop = np.ones((batch_size, 8, 8, 10), dtype=np.float32)
    image_shape = (batch_size, 32, 32, 3)
    images = np.zeros(image_shape, dtype=np.float32)
    
    
class TestStreaming(object):
    def test_streaming_with_context(self, app, client):
        @app.route('/')
        def index():
            def generate():
                yield 'Hello '
                yield flask.request.args['name']
                yield '!'
    
        def end_index(self):
        '''
        Return the 1-based index of the last object on this page,
        relative to total objects found (hits).
        '''
        # Special case for the last page because there can be orphans.
        if self.number == self.paginator.num_pages:
            return self.paginator.count
        return self.number * self.paginator.per_page

    
    
def get_view(request):
    'A simple view that expects a GET request, and returns a rendered template'
    t = Template('This is a test. {{ var }} is the value.', name='GET Template')
    c = Context({'var': request.GET.get('var', 42)})
    
        def distance_expr_for_lookup(self, lhs, rhs, **kwargs):
        return super().distance_expr_for_lookup(
            self._normalize_distance_lookup_arg(lhs),
            self._normalize_distance_lookup_arg(rhs),
            **kwargs
        )
    
        def deconstruct(self):
        path, args, kwargs = super().deconstruct()
        if self.fillfactor is not None:
            kwargs['fillfactor'] = self.fillfactor
        return path, args, kwargs
    
        def setUp(self):
        self._cwd = os.getcwd()
        self.work_dir = tempfile.mkdtemp(prefix='i18n_')
        # Resolve symlinks, if any, in test directory paths.
        self.test_dir = os.path.realpath(os.path.join(self.work_dir, self.work_subdir))
        copytree(os.path.join(source_code_dir, self.work_subdir), self.test_dir)
        # Step out of the temporary working tree before removing it to avoid
        # deletion problems on Windows. Cleanup actions registered with
        # addCleanup() are called in reverse so preserve this ordering.
        self.addCleanup(self._rmrf, self.test_dir)
        self.addCleanup(os.chdir, self._cwd)
        os.chdir(self.test_dir)
    
    
class classproperty:
    def __init__(self, method=None):
        self.fget = method
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_F_* routines are relevant here.
class Feature(GDALBase):
    '''
    This class that wraps an OGR Feature, needs to be instantiated
    from a Layer object.
    '''
    destructor = capi.destroy_feature
    
    
# For more information, see the OGR C API source code:
#  https://www.gdal.org/ogr__api_8h.html
#
# The OGR_Fld_* routines are relevant here.
class Field(GDALBase):
    '''
    Wrap an OGR Field. Needs to be instantiated from a Feature object.
    '''
    
        def _set_spatial_filter(self, filter):
        if isinstance(filter, OGRGeometry):
            capi.set_spatial_filter(self.ptr, filter.ptr)
        elif isinstance(filter, (tuple, list)):
            if not len(filter) == 4:
                raise ValueError('Spatial filter list/tuple must have 4 elements.')
            # Map c_double onto params -- if a bad type is passed in it
            # will be caught here.
            xmin, ymin, xmax, ymax = map(c_double, filter)
            capi.set_spatial_filter_rect(self.ptr, xmin, ymin, xmax, ymax)
        elif filter is None:
            capi.set_spatial_filter(self.ptr, None)
        else:
            raise TypeError('Spatial filter must be either an OGRGeometry instance, a 4-tuple, or None.')
    
        def reset_appid(self):
        # called by web_control
        with self.lock:
            self.working_appid_list = list()
            for appid in self.config.GAE_APPIDS:
                if not appid:
                    self.config.GAE_APPIDS.remove(appid)
                    continue
                self.working_appid_list.append(appid)
            self.not_exist_appids = []
            self.out_of_quota_appids = []
        self.last_reset_time = time.time()
    
            if os.getenv('XXNET_NO_MESS_SYSTEM', '0') == '0' :
            CertUtil.import_ca(CertUtil.ca_keyfile)
    
    
    
    
    def beginResync(self):
        '''
        A hook to listen in on the token consumption during error recovery.
        The DebugParser subclasses this to fire events to the listenter.
        '''
    
      # We allow no-spaces around << when used like this: 10<<20, but
  # not otherwise (particularly, not when used as streams)
  #
  # We also allow operators following an opening parenthesis, since
  # those tend to be macros that deal with operators.
  match = Search(r'(operator|[^\s(<])(?:L|UL|LL|ULL|l|ul|ll|ull)?<<([^\s,=<])', line)
  if (match and not (match.group(1).isdigit() and match.group(2).isdigit()) and
      not (match.group(1) == 'operator' and match.group(2) == ';')):
    error(filename, linenum, 'whitespace/operators', 3,
          'Missing spaces around <<')
    
    
def main():
    '''
    >>> from os.path import lexists
    
    Objects in a system communicate through a Mediator instead of directly with each other.
This reduces the dependencies between communicating objects, thereby reducing coupling.
    
    *TL;DR
Enables selecting an algorithm at runtime.
'''
    
        print('rm1: {0}'.format(rm1))
    print('rm2: {0}'.format(rm2))
    
        def build_floor(self):
        raise NotImplementedError
    
        >>> sorted(Jhon.__dict__.items())
    [('_lazy__parents', 'Father and mother'), ('call_count2', 1), ..., ('relatives', 'Many relatives.')]
    
    ### OUTPUT ###
# Inside with: yam
# Outside with: yam
# Inside func: sam
# Outside func: sam

    
                    if channels < self.group:
                    raise ValueError('Input channels should be larger than group size' +
                                     '; Received input channels: ' + str(channels) +
                                     '; Group size: ' + str(self.group))
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face
