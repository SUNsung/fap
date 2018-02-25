
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
    
def get_stream_type(env, args):
    '''Pick the right stream type based on `env` and `args`.
    Wrap it in a partial with the type-specific args so that
    we don't need to think what stream we are dealing with.
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
            :param progress_file: Where to report download progress.
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
def downgrade():
    op.drop_column('columns', 'verbose_name')

    
    
def upgrade():
    try:
        op.alter_column(
            'clusters', 'changed_on',
            existing_type=sa.DATETIME(),
            nullable=True)
        op.alter_column(
            'clusters', 'created_on',
            existing_type=sa.DATETIME(), nullable=True)
        op.drop_constraint(None, 'columns', type_='foreignkey')
        op.drop_constraint(None, 'columns', type_='foreignkey')
        op.drop_column('columns', 'created_on')
        op.drop_column('columns', 'created_by_fk')
        op.drop_column('columns', 'changed_on')
        op.drop_column('columns', 'changed_by_fk')
        op.alter_column('css_templates', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('css_templates', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dashboards', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dashboards', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.create_unique_constraint(None, 'dashboards', ['slug'])
        op.alter_column('datasources', 'changed_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=True)
        op.alter_column('datasources', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('datasources', 'created_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=True)
        op.alter_column('datasources', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dbs', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('dbs', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('slices', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('slices', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('sql_metrics', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('sql_metrics', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('table_columns', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('table_columns', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('tables', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('tables', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('url', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('url', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        ### end Alembic commands ###
    except:
        pass
    
    '''
    
        try:
        # wasn't created for some databases in the migration b4456560d4f3
        if not table_has_constraint('tables', '_customer_location_uc', db):
            with op.batch_alter_table('tables') as batch_op:
                batch_op.create_unique_constraint(
                    '_customer_location_uc',
                    ['database_id', 'schema', 'table_name'])
                batch_op.drop_index('table_name')
    except Exception as e:
        logging.warning(str(e))
    
    
def upgrade():
    op.add_column('tables', sa.Column('sql', sa.Text(), nullable=True))
    
        @support.cpython_only
    @support.bigmemtest(sys.maxsize + 500, memuse=2/15, dry_run=False)
    def test_huge_rshift_of_huge(self, size):
        huge = ((1 << 500) + 11) << sys.maxsize
        self.assertEqual(huge >> (sys.maxsize + 1), (1 << 499) + 5)
        self.assertEqual(huge >> (sys.maxsize + 1000), 0)
    
        For this base class, accept any non-blank string.
    '''
    def __init__(self, parent, title, message, *, text0='', used_names={},
                 _htest=False, _utest=False):
        '''Create popup, do not return until tk widget destroyed.
    
        def test_pickle(self):
        morsel_a = cookies.Morsel()
        morsel_a.set('foo', 'bar', 'baz')
        morsel_a.update({
            'version': 2,
            'comment': 'foo',
        })
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            with self.subTest(proto=proto):
                morsel_b = pickle.loads(pickle.dumps(morsel_a, proto))
                self.assertIsInstance(morsel_b, cookies.Morsel)
                self.assertEqual(morsel_b, morsel_a)
                self.assertEqual(str(morsel_b), str(morsel_a))
    
        def dump(self, stream, start=None, end=None):
        for j, (trans, i) in enumerate(zip(self.transitions, self.type_indices)):
            utc = datetime.utcfromtimestamp(trans)
            tti = self.ttis[i]
            lmt = datetime.utcfromtimestamp(trans + tti.tt_gmtoff)
            abbrind = tti.tt_abbrind
            abbr = self.abbrs[abbrind:self.abbrs.find(0, abbrind)].decode()
            if j > 0:
                prev_tti = self.ttis[self.type_indices[j - 1]]
                shift = ' %+g' % ((tti.tt_gmtoff - prev_tti.tt_gmtoff) / 3600)
            else:
                shift = ''
            print('%s UTC = %s %-5s isdst=%d' % (utc, lmt, abbr, tti[1]) + shift, file=stream)
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
        def _lookup(self, key=None):
        '''Return (start, stop) or raise KeyError.'''
        if self._toc is None:
            self._generate_toc()
        if key is not None:
            try:
                return self._toc[key]
            except KeyError:
                raise KeyError('No message with key: %s' % key) from None
    
        def post(self, data):
        '''Process a POST command.  Arguments:
        - data: bytes object, iterable or file containing the article
        Returns:
        - resp: server response if successful'''
        return self._post('POST', data)
    
    if __name__ == '__main__':
    test_main()

    
        def test_comparison(self):
        test_ranges = [range(0), range(0, -1), range(1, 1, 3),
                       range(1), range(5, 6), range(5, 6, 2),
                       range(5, 7, 2), range(2), range(0, 4, 2),
                       range(0, 5, 2), range(0, 6, 2)]
        test_tuples = list(map(tuple, test_ranges))
    
            self.assertEqual(x[:], a.tolist()[1:])
        with self.assertRaises(ValueError):
            c_int.from_buffer(a, -1)
        with self.assertRaises(ValueError):
            (c_int * 16).from_buffer(a, sizeof(c_int))
        with self.assertRaises(ValueError):
            (c_int * 1).from_buffer(a, 16 * sizeof(c_int))
    
        def get_screen(self):
        process = os.popen(self.adb_path + ' shell wm size')
        output = process.read()
        return output
    
    
def open_accordant_config():
    '''
    调用配置文件
    '''
    screen_size = _get_screen_size()
    config_file = '{path}/config/{screen_size}/config.json'.format(
        path=sys.path[0],
        screen_size=screen_size
    )
    
    def set_button_position(im):
    '''
    将 swipe 设置为 `再来一局` 按钮的位置
    '''
    global swipe_x1, swipe_y1, swipe_x2, swipe_y2
    w, h = im.size
    left = int(w / 2)
    top = int(1584 * (h / 1920.0))
    left = int(random.uniform(left - 100, left + 100))
    top = int(random.uniform(top - 100, top + 100))  # 随机防 ban
    after_top = int(random.uniform(top - 100, top + 100))
    after_left = int(random.uniform(left - 100, left + 100))
    swipe_x1, swipe_y1, swipe_x2, swipe_y2 = left, top, after_left, after_top