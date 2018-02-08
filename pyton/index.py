
        
        
tar_extensions = ('.tar', '.tar.Z', '.tar.bz2', '.tar.gz', '.tar.lz',
                  '.tar.lzma', '.tar.xz', '.taz', '.tb2', '.tbz', '.tbz2',
                  '.tgz', '.tlz', '.txz', '.tz')
    
    
def compute_bench(alpha, n_samples, n_features, precompute):
    lasso_results = []
    lars_lasso_results = []
    
        Parameters
    ----------
    metrics : array-like of callables (1d or 0d)
        The metric functions to time.
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
    
def _get_git_revision():
    try:
        revision = subprocess.check_output(REVISION_CMD.split()).strip()
    except (subprocess.CalledProcessError, OSError):
        print('Failed to execute git to get revision')
        return None
    return revision.decode('utf-8')
    
        if f == os.path.basename(__file__):
        continue
    
        def set_surface(self, surface):
        self.surface = surface
    
    Both kinds of calibration can fix this issue and yield nearly identical
results. This shows that sigmoid calibration can deal with situations where
the calibration curve of the base classifier is sigmoid (e.g., for LinearSVC)
but not where it is transposed-sigmoid (e.g., Gaussian naive Bayes).
'''
print(__doc__)
    
    This example illustrates how sigmoid calibration changes predicted
probabilities for a 3-class classification problem. Illustrated is the
standard 2-simplex, where the three corners correspond to the three classes.
Arrows point from the probability vectors predicted by an uncalibrated
classifier to the probability vectors predicted by the same classifier after
sigmoid calibration on a hold-out validation set. Colors indicate the true
class of an instance (red: class 1, green: class 2, blue: class 3).
    
            X, y = generate_data(n_test, n_features)
        score_clf1 += clf1.score(X, y)
        score_clf2 += clf2.score(X, y)
    
    
def downgrade():
    op.drop_column('tables', 'offset')
    op.drop_column('datasources', 'offset')

    
    
def upgrade():
    op.create_table('logs',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('action', sa.String(length=512), nullable=True),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('json', sa.Text(), nullable=True),
        sa.Column('dttm', sa.DateTime(), nullable=True),
        sa.ForeignKeyConstraint(['user_id'], ['ab_user.id'], ),
        sa.PrimaryKeyConstraint('id')
    )
    
    
def downgrade():
    bind = op.get_bind()
    session = db.Session(bind=bind)
    for slc in session.query(Slice).all():
        if slc.datasource_type == 'druid':
            slc.druid_datasource_id = slc.datasource_id
        if slc.datasource_type == 'table':
            slc.table_id = slc.datasource_id
        session.merge(slc)
        session.commit()
    session.close()
    op.drop_column('slices', 'datasource_id')

    
    
def downgrade():
    op.drop_column('dashboards', 'json_metadata')

    
    from alembic import op
import sqlalchemy as sa
    
    
def upgrade():
    op.create_table('dashboard_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('dashboard_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['dashboard_id'], [u'dashboards.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    op.create_table('slice_user',
        sa.Column('id', sa.Integer(), nullable=False),
        sa.Column('user_id', sa.Integer(), nullable=True),
        sa.Column('slice_id', sa.Integer(), nullable=True),
        sa.ForeignKeyConstraint(['slice_id'], [u'slices.id'], ),
        sa.ForeignKeyConstraint(['user_id'], [u'ab_user.id'], ),
        sa.PrimaryKeyConstraint('id'),
    )
    
    
def downgrade():
    op.drop_column('metrics', 'created_on')
    op.drop_column('metrics', 'created_by_fk')
    op.drop_column('metrics', 'changed_on')
    op.drop_column('metrics', 'changed_by_fk')
    try:
        op.alter_column('url', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('url', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('tables', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('tables', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('table_columns', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('table_columns', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('sql_metrics', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('sql_metrics', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('slices', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('slices', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.drop_constraint(None, 'metrics', type_='foreignkey')
        op.drop_constraint(None, 'metrics', type_='foreignkey')
        op.alter_column('dbs', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('dbs', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('datasources', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('datasources', 'created_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=False)
        op.alter_column('datasources', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('datasources', 'changed_by_fk',
                   existing_type=sa.INTEGER(),
                   nullable=False)
        op.alter_column('dashboards', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('dashboards', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('css_templates', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('css_templates', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('columns', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
        op.alter_column('columns', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=False)
    except:
        pass

    
                elif opt in ('-g', '--gui'):
                # Run using GUI.
                conf['gui'] = True
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
    ttinfo = namedtuple('ttinfo', ['tt_gmtoff', 'tt_isdst', 'tt_abbrind'])
    
        def _scan_once(string, idx):
        try:
            nextchar = string[idx]
        except IndexError:
            raise StopIteration(idx) from None
    
        The DOMBuilder class uses an instance of this class to pass settings to
    the ExpatBuilder class.
    '''
    
        @support.requires_IEEE_754
    def test_negated_imaginary_literal(self):
        z0 = -0j
        z1 = -7j
        z2 = -1e1000j
        # Note: In versions of Python < 3.2, a negated imaginary literal
        # accidentally ended up with real part 0.0 instead of -0.0, thanks to a
        # modification during CST -> AST translation (see issue #9011).  That's
        # fixed in Python 3.2.
        self.assertFloatsAreIdentical(z0.real, -0.0)
        self.assertFloatsAreIdentical(z0.imag, -0.0)
        self.assertFloatsAreIdentical(z1.real, -0.0)
        self.assertFloatsAreIdentical(z1.imag, -7.0)
        self.assertFloatsAreIdentical(z2.real, -0.0)
        self.assertFloatsAreIdentical(z2.imag, -INF)
    
        def _create_infile(self):
        infile = support.TESTFN
        with open(infile, 'w') as fp:
            self.addCleanup(os.remove, infile)
            fp.write(self.data)
        return infile
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 
    
            return user.gold
    
            responder._send_data(modhash=generate_modhash())
        responder._send_data(cookie=user.make_cookie())

    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass
    
    
class HealthController(MinimalController):
    def pre(self):
        pass