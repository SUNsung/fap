entries_str = textwrap.indent(''.join(entries), '\t')
atom_template = atom_template.replace('@ENTRIES@', entries_str)
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
    import re
    
                for video_version in json_data.get('video_versions'):
                video_version_url = video_version.get('download_url') or video_version.get('stream_url')
                if not video_version_url:
                    continue
                f = {
                    'url': video_version_url,
                    'width': int_or_none(video_version.get('width')),
                    'height': int_or_none(video_version.get('height')),
                    'abr': int_or_none(video_version.get('audio_bitrate')),
                    'vbr': int_or_none(video_version.get('video_bitrate')),
                }
                bitrate = self._search_regex(r'(\d+)k', video_version_url, 'bitrate', default=None)
                if bitrate:
                    f.update({
                        'format_id': 'http-%s' % bitrate,
                    })
                formats.append(f)
            self._sort_formats(formats)
    
        old_layer = keras.layers.MaxPooling2D((2, 2), padding='valid', dim_ordering='th', name='maxpool2d')
    new_layer = keras.layers.MaxPool2D(pool_size=2, padding='valid', data_format='channels_first', name='maxpool2d')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
    
@keras_test
def test_temporal_classification():
    '''
    Classify temporal sequences of float numbers
    of length 3 into 2 classes using
    single layer of GRU units and softmax applied
    to the last activations of the units
    '''
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=200,
                                                         num_test=20,
                                                         input_shape=(3, 4),
                                                         classification=True,
                                                         num_classes=2)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
    
@keras_test
def test_sequential_regression():
    # start with a basic example of using a Sequential model
    # inside the functional API
    seq = models.Sequential()
    seq.add(layers.Dense(10, input_shape=(10,)))
    
    
def test_elu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.elu(x, 0.5)])
    
        def is_ace(self):
        return True if self._value == 1 else False
    
        def add_user(self, user_id, name, pass_hash):  # ...
    def remove_user(self, user_id):  # ...
    def add_friend_request(self, from_user_id, to_user_id):  # ...
    def approve_friend_request(self, from_user_id, to_user_id):  # ...
    def reject_friend_request(self, from_user_id, to_user_id):  # ...
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
            # subquery + join
        query = '''
            SELECT a.date, b.name FROM
                left_table a
                JOIN (
                  SELECT
                    CAST((b.year) as VARCHAR) date,
                    name
                  FROM right_table
                ) b
                ON a.date = b.date
        '''
        self.assertEquals({'left_table', 'right_table'},
                          self.extract_tables(query))
    
    APP_DIR = os.path.dirname(__file__)
CONFIG_MODULE = os.environ.get('SUPERSET_CONFIG', 'superset.config')
    
    config = app.config
celery_app = utils.get_celery_app(config)
    
        @property
    def column_names(self):
        return sorted([c.column_name for c in self.columns])
    
    from superset import frontend_config
    
        engine = engine_from_config(config.get_section(config.config_ini_section),
                                prefix='sqlalchemy.',
                                poolclass=pool.NullPool)
    
    
def find_constraint_name(upgrade=True):
    cols = {'column_name'} if upgrade else {'datasource_name'}
    return generic_find_constraint_name(
        table='columns', columns=cols, referenced='datasources', db=db)
    
        The style used here is: each file is a <testsuite>; each violation
    will be a <testcase> (always failed) whose 'classname' shall be the tool
    used (e.g., pep8) and 'name' shall be the type of violation and line
    number. Any additional information shall be included as the <failure>
    message.
    
    
class World(object):
    '''A World is the proxy to the app/request state for Features.
    
    
class APIv1LoginController(RedditController):
    
    class AwardsController(RedditController):
    
            return HelpPage(_('help'),
                        content = Embed(content=output),
                        show_sidebar = None).render()
    
    
    def send400(self):
        if 'usable_error_content' in request.environ:
            return request.environ['usable_error_content']
        else:
            res = pages.RedditError(
                title=_('bad request (%(domain)s)') % dict(domain=g.domain),
                message=_('you sent an invalid request'),
                explanation=request.GET.get('explanation'))
            return res.render()
    
    
def update_data():
    return np.array(Image.open('autojump.png'))
    
        ix, iy = event.xdata, event.ydata
    coords = [(ix, iy)]
    print('now = ', coords)
    cor.append(coords)
    
    
def save_debug_screenshot(ts, im, piece_x, piece_y, board_x, board_y):
    '''
    对 debug 图片加上详细的注释
    
    '''
    make_debug_dir(screenshot_backup_dir)
    draw = ImageDraw.Draw(im)
    draw.line((piece_x, piece_y) + (board_x, board_y), fill=2, width=3)
    draw.line((piece_x, 0, piece_x, im.size[1]), fill=(255, 0, 0))
    draw.line((0, piece_y, im.size[0], piece_y), fill=(255, 0, 0))
    draw.line((board_x, 0, board_x, im.size[1]), fill=(0, 0, 255))
    draw.line((0, board_y, im.size[0], board_y), fill=(0, 0, 255))
    draw.ellipse((piece_x - 10, piece_y - 10, piece_x + 10, piece_y + 10), fill=(255, 0, 0))
    draw.ellipse((board_x - 10, board_y - 10, board_x + 10, board_y + 10), fill=(0, 0, 255))
    del draw
    im.save(os.path.join(os.getcwd(), screenshot_backup_dir,
                         '#' + str(ts) + '.png'))
    
        distance = (dst_x - src_x)**2 + (dst_y - src_y)**2 
    distance = (distance ** 0.5) / scale
    print('distance = ', distance)
    jump(distance)
    update = True