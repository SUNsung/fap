
        
        from youtube_dl.extractor import (
    FacebookIE,
    gen_extractors,
    YoutubeIE,
)
    
        def test_socks4a(self):
        self.assertTrue(isinstance(self._get_ip('socks4a'), compat_str))
    
    
for testfile in os.listdir(TEST_DIR):
    _make_testfunc(testfile)
    
    try:
    from .lazy_extractors import *
    from .lazy_extractors import _ALL_CLASSES
    _LAZY_LOADER = True
except ImportError:
    _LAZY_LOADER = False
    from .extractors import *
    
        def _real_extract(self, url):
        # URLs end with [uploader name]/[uploader title]
        # this title is whatever the user types in, and is rarely
        # the proper song title.  Real metadata is in the api response
        album_url_tag = self._match_id(url)
        result = {'_type': 'playlist', 'entries': []}
        # There is no one endpoint for album metadata - instead it is included/repeated in each song's metadata
        # Therefore we don't know how many songs the album has and must infi-loop until failure
        for track_no in itertools.count():
            # Get song's metadata
            api_response = self._download_json(
                'http://www.audiomack.com/api/music/url/album/%s/%d?extended=1&_=%d'
                % (album_url_tag, track_no, time.time()), album_url_tag,
                note='Querying song information (%d)' % (track_no + 1))
    
        def take_call(self, call):
        '''Assume the employee will always successfully take the call.'''
        self.call = call
        self.call.employee = self
        self.call.state = CallState.IN_PROGRESS
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}  # key: query, value: node
        self.linked_list = LinkedList()
    
    
class Message(object):
    
        def __init__(self, license_plate):
        super(Motorcycle, self).__init__(VehicleSize.MOTORCYCLE, license_plate, spot_size=1)
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, seller, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
    
if __name__ == '__main__':
    HitCounts.run()

    
    # revision identifiers, used by Alembic.
revision = '12d55656cbca'
down_revision = '55179c7f25c7'
    
    # revision identifiers, used by Alembic.
revision = '1a48a5411020'
down_revision = '289ce07647b'
    
    
def downgrade():
    op.drop_column('logs', 'dt')

    
    slice_user = Table('slice_user', Base.metadata,
    Column('id', Integer, primary_key=True),
    Column('user_id', Integer, ForeignKey('ab_user.id')),
    Column('slice_id', Integer, ForeignKey('slices.id'))
)
    
    
def upgrade():
    op.add_column(
        'dbs',
        sa.Column(
            'password',
            EncryptedType(sa.String(1024)),
        nullable=True))
    
    def upgrade():
    op.add_column('datasources', sa.Column('offset', sa.Integer(), nullable=True))
    op.add_column('tables', sa.Column('offset', sa.Integer(), nullable=True))
    
    Revision ID: 315b3f4da9b0
Revises: 1a48a5411020
Create Date: 2015-12-04 11:16:58.226984
    
    Base = declarative_base()
    
    
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
