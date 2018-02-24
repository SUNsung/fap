
        
            @property
    def encoding(self):
        return self._orig.encoding or 'utf8'
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
            :type status: Status
        :type output: file
        '''
        super(ProgressReporterThread, self).__init__()
        self.status = status
        self.output = output
        self._tick = tick
        self._update_interval = update_interval
        self._spinner_pos = 0
        self._status_line = ''
        self._prev_bytes = 0
        self._prev_time = time()
        self._should_stop = threading.Event()
    
    
class TestClientCert:
    
    
@for_app('tar')
def match(command):
    return ('-C' not in command.script
            and _is_tar_extract(command.script)
            and _tar_file(command.script_parts) is not None)
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    
    
    
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
    
    # revision identifiers, used by Alembic.
revision = '1d2ddd543133'
down_revision = 'd2424a248d63'
    
    slice_user = Table('slice_user', Base.metadata,
    Column('id', Integer, primary_key=True),
    Column('user_id', Integer, ForeignKey('ab_user.id')),
    Column('slice_id', Integer, ForeignKey('slices.id'))
)
    
    from alembic import op
import sqlalchemy as sa
from sqlalchemy_utils.types.encrypted import EncryptedType
    
    
def upgrade():
    # cleanup after: https://github.com/airbnb/superset/pull/1078
    try:
        slices_ibfk_1 = generic_find_constraint_name(
            table='slices', columns={'druid_datasource_id'},
            referenced='datasources', db=db) or 'slices_ibfk_1'
        slices_ibfk_2 = generic_find_constraint_name(
            table='slices', columns={'table_id'},
            referenced='tables', db=db) or 'slices_ibfk_2'
    
    def upgrade():
    op.add_column('logs', sa.Column('dashboard_id', sa.Integer(), nullable=True))
    op.add_column('logs', sa.Column('slice_id', sa.Integer(), nullable=True))
    
    
def downgrade():
    op.drop_column('dashboards', 'json_metadata')

    
    
def upgrade():
    ### commands auto generated by Alembic - please adjust! ###
    op.create_table('clusters',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('cluster_name', sa.String(length=250), nullable=True),
    sa.Column('coordinator_host', sa.String(length=255), nullable=True),
    sa.Column('coordinator_port', sa.Integer(), nullable=True),
    sa.Column('coordinator_endpoint', sa.String(length=255), nullable=True),
    sa.Column('broker_host', sa.String(length=255), nullable=True),
    sa.Column('broker_port', sa.Integer(), nullable=True),
    sa.Column('broker_endpoint', sa.String(length=255), nullable=True),
    sa.Column('metadata_last_refreshed', sa.DateTime(), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id'),
    sa.UniqueConstraint('cluster_name')
    )
    op.create_table('dashboards',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('dashboard_title', sa.String(length=500), nullable=True),
    sa.Column('position_json', sa.Text(), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id')
    )
    op.create_table('dbs',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('database_name', sa.String(length=250), nullable=True),
    sa.Column('sqlalchemy_uri', sa.String(length=1024), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id'),
    sa.UniqueConstraint('database_name')
    )
    op.create_table('datasources',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('datasource_name', sa.String(length=255), nullable=True),
    sa.Column('is_featured', sa.Boolean(), nullable=True),
    sa.Column('is_hidden', sa.Boolean(), nullable=True),
    sa.Column('description', sa.Text(), nullable=True),
    sa.Column('default_endpoint', sa.Text(), nullable=True),
    sa.Column('user_id', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('cluster_name', sa.String(length=250), sa.ForeignKey('clusters.cluster_name'), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id'),
    sa.UniqueConstraint('datasource_name')
    )
    op.create_table('tables',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('table_name', sa.String(length=250), nullable=True),
    sa.Column('main_dttm_col', sa.String(length=250), nullable=True),
    sa.Column('default_endpoint', sa.Text(), nullable=True),
    sa.Column('database_id', sa.Integer(), sa.ForeignKey('dbs.id'), nullable=False),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id'),
    sa.UniqueConstraint('table_name')
    )
    op.create_table('columns',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('datasource_name', sa.String(length=255), nullable=True),
    sa.Column('column_name', sa.String(length=255), nullable=True),
    sa.Column('is_active', sa.Boolean(), nullable=True),
    sa.Column('type', sa.String(length=32), nullable=True),
    sa.Column('groupby', sa.Boolean(), nullable=True),
    sa.Column('count_distinct', sa.Boolean(), nullable=True),
    sa.Column('sum', sa.Boolean(), nullable=True),
    sa.Column('max', sa.Boolean(), nullable=True),
    sa.Column('min', sa.Boolean(), nullable=True),
    sa.Column('filterable', sa.Boolean(), nullable=True),
    sa.Column('description', sa.Text(), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id')
    )
    op.create_table('metrics',
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('metric_name', sa.String(length=512), nullable=True),
    sa.Column('verbose_name', sa.String(length=1024), nullable=True),
    sa.Column('metric_type', sa.String(length=32), nullable=True),
    sa.Column('datasource_name', sa.String(length=255), sa.ForeignKey('datasources.datasource_name'), nullable=True),
    sa.Column('json', sa.Text(), nullable=True),
    sa.Column('description', sa.Text(), nullable=True),
    sa.ForeignKeyConstraint(['datasource_name'], ['datasources.datasource_name'], ),
    sa.PrimaryKeyConstraint('id')
    )
    op.create_table('slices',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('slice_name', sa.String(length=250), nullable=True),
    sa.Column('druid_datasource_id', sa.Integer(), sa.ForeignKey('datasources.id'), nullable=True),
    sa.Column('table_id', sa.Integer(), sa.ForeignKey('tables.id'), nullable=True),
    sa.Column('datasource_type', sa.String(length=200), nullable=True),
    sa.Column('datasource_name', sa.String(length=2000), nullable=True),
    sa.Column('viz_type', sa.String(length=250), nullable=True),
    sa.Column('params', sa.Text(), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id')
    )
    op.create_table('sql_metrics',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('metric_name', sa.String(length=512), nullable=True),
    sa.Column('verbose_name', sa.String(length=1024), nullable=True),
    sa.Column('metric_type', sa.String(length=32), nullable=True),
    sa.Column('table_id', sa.Integer(), sa.ForeignKey('tables.id'), nullable=True),
    sa.Column('expression', sa.Text(), nullable=True),
    sa.Column('description', sa.Text(), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id')
    )
    op.create_table('table_columns',
    sa.Column('created_on', sa.DateTime(), nullable=False),
    sa.Column('changed_on', sa.DateTime(), nullable=False),
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('table_id', sa.Integer(), sa.ForeignKey('tables.id'), nullable=True),
    sa.Column('column_name', sa.String(length=255), nullable=True),
    sa.Column('is_dttm', sa.Boolean(), nullable=True),
    sa.Column('is_active', sa.Boolean(), nullable=True),
    sa.Column('type', sa.String(length=32), nullable=True),
    sa.Column('groupby', sa.Boolean(), nullable=True),
    sa.Column('count_distinct', sa.Boolean(), nullable=True),
    sa.Column('sum', sa.Boolean(), nullable=True),
    sa.Column('max', sa.Boolean(), nullable=True),
    sa.Column('min', sa.Boolean(), nullable=True),
    sa.Column('filterable', sa.Boolean(), nullable=True),
    sa.Column('description', sa.Text(), nullable=True),
    sa.Column('created_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.Column('changed_by_fk', sa.Integer(), sa.ForeignKey('ab_user.id'), nullable=True),
    sa.PrimaryKeyConstraint('id')
    )
    op.create_table('dashboard_slices',
    sa.Column('id', sa.Integer(), nullable=False),
    sa.Column('dashboard_id', sa.Integer(), sa.ForeignKey('dashboards.id'), nullable=True),
    sa.Column('slice_id', sa.Integer(), sa.ForeignKey('slices.id'), nullable=True),
    sa.PrimaryKeyConstraint('id')
    )
    ### end Alembic commands ###
    
    Revision ID: 5a7bad26f2a7
Revises: 4e6a06bad7a8
Create Date: 2015-10-05 10:32:15.850753
    
    '''