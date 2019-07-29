
        
                # Broacast anchors over shifts to enumerate all anchors at all positions
        # in the (H, W) grid:
        #   - add A anchors of shape (1, A, 4) to
        #   - K shifts of shape (K, 1, 4) to get
        #   - all shifted anchors of shape (K, A, 4)
        #   - reshape to (K*A, 4) shifted anchors
        num_images = inputs[0].shape[0]
        A = self._num_anchors
        K = shifts.shape[0]
        all_anchors = self._anchors[np.newaxis, :, :] + shifts[:, np.newaxis, :]
        all_anchors = all_anchors.reshape((K * A, 4))
    
        def _run_zero_even_op_gpu(self, X):
        with core.DeviceScope(core.DeviceOption(caffe2_pb2.CUDA, 0)):
            op = core.CreateOperator('ZeroEven', ['X'], ['Y'])
            workspace.FeedBlob('X', X)
        workspace.RunOperatorOnce(op)
        Y = workspace.FetchBlob('Y')
        return Y
    
        boxes, scores, ids = generate_proposals_on_roidb(
        model,
        roidb,
        start_ind=start_ind,
        end_ind=end_ind,
        total_num_images=total_num_images,
        gpu_id=gpu_id,
    )
    
        # Run inference in parallel in subprocesses
    # Outputs will be a list of outputs from each subprocess, where the output
    # of each subprocess is the dictionary saved by test_net().
    outputs = subprocess_utils.process_in_parallel(
        'detection', num_images, binary, output_dir, opts
    )
    
        return cls_boxes

    
        detpath: Path to detections
        detpath.format(classname) should produce the detection results file.
    annopath: Path to annotations
        annopath.format(imagename) should be the xml annotations file.
    imagesetfile: Text file containing the list of images, one image per line.
    classname: Category name (duh)
    cachedir: Directory for caching the annotations
    [ovthresh]: Overlap threshold (default = 0.5)
    [use_07_metric]: Whether to use VOC07's 11 point AP computation
        (default False)
    '''
    # assumes detections are in detpath.format(classname)
    # assumes annotations are in annopath.format(imagename)
    # assumes imagesetfile is a text file with each line an image name
    # cachedir caches the annotations in a pickle file
    
    log = logging.getLogger(__name__)
    
    
def setup_logging(name):
    FORMAT = '%(levelname)s %(filename)s:%(lineno)4d: %(message)s'
    # Manually clear root loggers to prevent any module that may have called
    # logging.basicConfig() from blocking our logging setup
    logging.root.handlers = []
    logging.basicConfig(level=logging.INFO, format=FORMAT, stream=sys.stdout)
    logger = logging.getLogger(name)
    return logger

    
    # Copyright (c) 2017-present, Facebook, Inc.
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##############################################################################
    
        # simulate string
    json = '{'a': 'foo”', 'b': 'bar'}\n{'a': 'foo', 'b': 'bar'}\n'
    result = read_json(json, lines=True)
    expected = DataFrame([['foo\u201d', 'bar'], ['foo', 'bar']], columns=['a', 'b'])
    assert_frame_equal(result, expected)
    
        def dump(self, **kwArgs):
        print('root.data: %s' % self.root.data)
        print('root.children_data: %s' % self.root.children_data)
        if kwArgs.has_key('dump_grad'):
            print('W_grad: %s' % self.W_grad)
            print('b_grad: %s' % self.b_grad)
    
        def calc_delta_k(self, k, activator):
        '''
        根据k+1时刻的delta计算k时刻的delta
        '''
        state = self.state_list[k+1].copy()
        element_wise_op(self.state_list[k+1],
                    activator.backward)
        self.delta_list[k] = np.dot(
            np.dot(self.delta_list[k+1].T, self.W),
            np.diag(state[:,0])).T
    
      # key isn't used, so ignoring it with _ (underscore).
  for _, value in values:
    # unpickle values
    ETE, ETDe = pickle.loads(base64.b64decode(value))
    if sumETE == None:
      # create the I/mu with correct dimensions
      sumETE = numpy.matrix(numpy.eye(ETE.shape[1])/mu)
    sumETE += ETE
    
        def set_multi(self, *a, **kw):
        return
    
            return contextlib.nested(
            patch.object(VByName, 'run', return_value=thing if ret else None),
            patch.object(VModhash, 'run', side_effect=None),
            patch.object(VUser, 'run', side_effect=None),
            patch.object(thing, '_commit', side_effect=None),
            patch.object(Account, '_id', self.id, create=True),
            patch.object(g.events, 'message_event', side_effect=None),
        )
    
        @patch('r2.models.Subreddit.user_subreddits')
    def test_multi_logged_in(self, user_subreddits):
        user_subreddits.return_value = subscriptions
        multi = MultiReddit(path='/user/test/m/multi_test', srs=multi_subreddits)
        srnames = srnames_from_site(self.logged_in, multi)
    
        def test_cropping(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        max_ratio = 0.5
        url = self.provider.resize_image(image, max_ratio=max_ratio)
        crop = URLENCODED_COMMA.join(('faces', 'entropy'))
        self.assertEqual(url,
                ('https://example.com/a.jpg?fit=crop&crop=%s&arh=%s'
                    % (crop, max_ratio)))
    
        def test_pad_round_string(self):
        from r2.lib.tracking import _pad_message, KEY_SIZE
        padded = _pad_message('x' * KEY_SIZE)
        self.assertEquals(len(padded), KEY_SIZE * 2)
        self.assertEquals(padded[KEY_SIZE:], BLOCK_O_PADDING)
    
    
def get_data(file_name):
    data = pandas.read_csv(file_name)
    distance_array = []
    press_time_array = []
    for distance, press_time in zip(data['Distance'], data['Press_time']):
        distance_array.append([float(distance.strip().strip('[]'))])
        press_time_array.append([float(press_time.strip().strip('[]'))])
    return distance_array, press_time_array
    
    
def _get_screen_size():
    '''
    获取手机屏幕大小
    '''
    size_str = adb.get_screen()
    m = re.search(r'(\d+)x(\d+)', size_str)
    if m:
        return '{height}x{width}'.format(height=m.group(2), width=m.group(1))
    return '1920x1080'

    
    
def jumpbot(parser):
 
    if parser.mode == 'manual':
        bot = ManualBot(params=settings.get_bot_params(parser.model))
        bot.run()
    
            self.client = wda.Client()
        self.session = self.client.session()
    
        def action(self):
        self.figure.canvas.mpl_connect('button_press_event', self._onclick)
        ani = animation.FuncAnimation(self.figure, self._update_figure, interval=50, blit=True)
        plt.show()
    
        # 以 50px 步长，尝试探测 scan_start_y
    for i in range(under_game_score_y, h, 50):
        last_pixel = im_pixel[0, i]
        for j in range(1, w):
            pixel = im_pixel[j, i]
    
            Parameters
        ----------
        data : dict
            A dictionary having keys that are valid MIME types (like
            'text/plain' or 'image/svg+xml') and values that are the data for
            that MIME type. The data itself must be a JSON'able data
            structure. Minimally all data should have the 'text/plain' data,
            which can be displayed by all frontends. If more than the plain
            text is given, it is up to the frontend to decide which
            representation to use.
        metadata : dict
            A dictionary for metadata related to the data. This can contain
            arbitrary key, value pairs that frontends can use to interpret
            the data.  Metadata specific to each mime-type can be specified
            in the metadata dict with the same mime-type keys as
            the data itself.
        source : str, deprecated
            Unused.
        transient: dict, keyword-only
            A dictionary for transient data.
            Data in this dictionary should not be persisted as part of saving this output.
            Examples include 'display_id'.
        update: bool, keyword-only, default: False
            If True, only update existing outputs with the same display_id,
            rather than creating a new output.
        '''
    
        # Hack: the 'neutral' colours are not very visible on a dark background on
    # Windows. Since Windows command prompts have a dark background by default, and
    # relatively few users are likely to alter that, we will use the 'Linux' colours,
    # designed for a dark background, as the default on Windows.
    if os.name == 'nt':
        ex_colors.add_scheme(ex_colors['Linux'].copy('Neutral'))
    
        def _on_ipython_dir_changed(self, change):
        ensure_dir_exists(self.ipython_extension_dir)
    
        # The SQLite database
    db = Any()
    @observe('db')
    def _db_changed(self, change):
        '''validate the db, since it can be an Instance of two different types'''
        new = change['new']
        connection_types = (DummyDB,)
        if sqlite3 is not None:
            connection_types = (DummyDB, sqlite3.Connection)
        if not isinstance(new, connection_types):
            msg = '%s.db must be sqlite3 Connection or DummyDB, not %r' % \
                    (self.__class__.__name__, new)
            raise TraitError(msg)
    
    def __init__(self, profile='default', hist_file=u'', **traits):
        '''Create a new history accessor.
        
        Parameters
        ----------
        profile : str
          The name of the profile from which to open history.
        hist_file : str
          Path to an SQLite history database stored by IPython. If specified,
          hist_file overrides profile.
        config : :class:`~traitlets.config.loader.Config`
          Config object. hist_file can also be set through this.
        '''
        # We need a pointer back to the shell for various tasks.
        super(HistoryAccessor, self).__init__(**traits)
        # defer setting hist_file from kwarg until after init,
        # otherwise the default kwarg value would clobber any value
        # set by config
        if hist_file:
            self.hist_file = hist_file
        
        if self.hist_file == u'':
            # No one has set the hist_file, yet.
            self.hist_file = self._get_hist_file_name(profile)
    
    from IPython.utils.encoding import DEFAULT_ENCODING
    
            # all-random (note for auto-testing)
        '''
    
        @magic_arguments.magic_arguments()
    @magic_arguments.argument(
        '--isolated', action='store_true', default=False,
        help='''Annotate the cell as 'isolated'.
Isolated cells are rendered inside their own <iframe> tag'''
    )
    @cell_magic
    def html(self, line, cell):
        '''Render the cell as a block of HTML'''
        args = magic_arguments.parse_argstring(self.html, line)
        html = HTML(cell)
        if args.isolated:
            display(html, metadata={'text/html':{'isolated':True}})
        else:
            display(html)
    
            This function is for restarting logging which you've temporarily
        stopped with %logoff. For starting logging for the first time, you
        must use the %logstart function, which allows you to specify an
        optional log filename.'''
    
    
def install_payload_page():
    '''DEPRECATED, use show_in_pager hook
    
    Install this version of page as IPython.core.page.page.
    '''
    warnings.warn('''install_payload_page is deprecated.
    Use `ip.set_hook('show_in_pager, page.as_hook(payloadpage.page))`
    ''')
    from IPython.core import page as corepage
    corepage.page = page

    
    from traitlets.config.configurable import LoggingConfigurable
from IPython.paths import get_ipython_package_dir
from IPython.utils.path import expand_path, ensure_dir_exists
from traitlets import Unicode, Bool, observe
    
        if gui and gui != 'auto':
        # select backend based on requested gui
        backend = backends[gui]
        if gui == 'agg':
            gui = None
    else:
        # We need to read the backend from the original data structure, *not*
        # from mpl.rcParams, since a prior invocation of %matplotlib may have
        # overwritten that.
        # WARNING: this assumes matplotlib 1.1 or newer!!
        backend = matplotlib.rcParamsOrig['backend']
        # In this case, we need to find what the appropriate gui selection call
        # should be for IPython, so we can activate inputhook accordingly
        gui = backend2gui.get(backend, None)