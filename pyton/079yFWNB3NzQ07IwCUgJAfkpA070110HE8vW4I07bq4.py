    def step(self, action):
        bet_in_dollars = min(action/100.0, self.wealth)
    
        def _render_callback(self):
        # Visualize target.
        sites_offset = (self.sim.data.site_xpos - self.sim.model.site_pos).copy()
        site_id = self.sim.model.site_name2id('target0')
        self.sim.model.site_pos[site_id] = self.goal - sites_offset[0]
        self.sim.forward()
    
        def viewer_setup(self):
        self.viewer.cam.trackbodyid = 1
        self.viewer.cam.distance = self.model.stat.extent * 1.0
        self.viewer.cam.lookat[2] = 0.8925
        self.viewer.cam.elevation = -20

    
        def step(self, action):
        assert self.action_space.contains(action)
    
        metadata = {'render.modes': ['human', 'ansi']}
    # Only 'promote' the length of generated input strings if the worst of the
    # last n episodes was no more than this far from the maximum reward
    MIN_REWARD_SHORTFALL_FOR_PROMOTION = -1.0
    
            if self.viewer is None:
            self.viewer = rendering.Viewer(500,500)
            bound = self.LINK_LENGTH_1 + self.LINK_LENGTH_2 + 0.2  # 2.2 for default
            self.viewer.set_bounds(-bound,bound,-bound,bound)
    
            # Calculate frame size from the largest frames.
        # Add some padding since we'll get cut off otherwise.
        height = max([frame.count(six.b('\n')) for frame in self.frames]) + 1
        width = max([max([len(line) for line in frame.split(six.b('\n'))]) for frame in self.frames]) + 2
    
    class CubeCrashScreenBecomesBlack(CubeCrash):
    use_shaped_reward = False
    use_black_screen = True
    
    flags.DEFINE_string('input_file', None,
                    'Input raw text file (or comma-separated list of files).')
    
    # http://stackoverflow.com/questions/19782975/convert-rgb-color-to-the-nearest-color-in-palette-web-safe-color
    
        palette = PALETTES[palette_number]
    palette_reverse = _reverse_palette(palette_number)
    def _process_text(text):
        text = text.group()[1:-1]
        factor = 1
        if text.startswith('-'):
            text = text[1:]
            factor = -1
        stripped = text.lstrip('0123456789')
        return (text, stripped, factor)
    
        Here `srv` is the user under which the cheat.sh server was running
    '''
    
        def is_found(self, topic):
        return False

    
        def _get_page(self, topic, request_options=None):
        '''
        Find answer for the `topic` question.
        '''
    
    def _save_cheatsheet(topic_name, cheatsheet):
    '''
    Save posted cheat sheet `cheatsheet` with `topic_name`
    in the spool directory
    '''
    
    It should be implemented on the adapter basis:
    
    def parse_cmdline(args):
    '''
    Parses command line arguments and returns
    query and request_options
    '''
    
        def setUp(self):
        super(RedditControllerTestCase, self).setUp()
        from r2.models import Link, Subreddit, Account
        # unfortunately, these classes' _type attrs are used as import
        # side effects for some controllers, and need to be set for things
        # to work properly
        for i, _cls in enumerate((Link, Subreddit, Account)):
            if not hasattr(_cls, '_type_id'):
                self.autopatch(_cls, '_type_id', i + 1000, create=True)
            if not hasattr(_cls, '_type_name'):
                self.autopatch(
                    _cls, '_type_name', _cls.__name__.lower(),
                    create=True)
        # The same is true for _by_name on Subreddit and Account
        self.subreddit_by_name = self.autopatch(Subreddit, '_by_name')
        self.account_by_name = self.autopatch(Account, '_by_name')
    
        def test_percent_loggedin(self):
        num_users = 2000
        users = []
        for i in xrange(num_users):
            users.append(MockAccount(name=str(i), _fullname='t2_%s' % str(i)))
    
        def test_ftue_nocreate(self):
        request = MagicMock()
        context = MagicMock()
        request.cookies = {}
        loid = LoId.load(request, context, create=False)
        self.assertFalse(loid.new)
        self.assertFalse(loid.serializable)
        loid.save()
        self.assertFalse(bool(context.cookies.add.called))
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def test_pad_round_string(self):
        from r2.lib.tracking import _pad_message, KEY_SIZE
        padded = _pad_message('x' * KEY_SIZE)
        self.assertEquals(len(padded), KEY_SIZE * 2)
        self.assertEquals(padded[KEY_SIZE:], BLOCK_O_PADDING)