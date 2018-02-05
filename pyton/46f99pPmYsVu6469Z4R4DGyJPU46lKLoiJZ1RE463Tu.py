
        
        errors = []
    
    
root = Root()
factory = Site(root)
reactor.listenTCP(8880, factory)
reactor.run()

    
    # revision identifiers, used by Alembic.
revision = 'b318dfe5fb6c'
down_revision = 'd6db5a5cdb5d'
    
    Revision ID: 315b3f4da9b0
Revises: 1a48a5411020
Create Date: 2015-12-04 11:16:58.226984
    
    
def upgrade():
    bind = op.get_bind()
    op.add_column('slices', sa.Column('datasource_id', sa.Integer()))
    session = db.Session(bind=bind)
    
    # revision identifiers, used by Alembic.
revision = '3c3ffe173e4f'
down_revision = 'ad82a75afd82'
    
    from alembic import op
import sqlalchemy as sa
    
    
    
    
def downgrade():
    op.drop_column('dashboards', 'description')
    op.drop_column('dashboards', 'css')

    
    
def upgrade():
    op.add_column('metrics', sa.Column('changed_by_fk', sa.Integer(), nullable=True))
    op.add_column('metrics', sa.Column('changed_on', sa.DateTime(), nullable=True))
    op.add_column('metrics', sa.Column('created_by_fk', sa.Integer(), nullable=True))
    op.add_column('metrics', sa.Column('created_on', sa.DateTime(), nullable=True))
    try:
        op.alter_column('columns', 'changed_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
        op.alter_column('columns', 'created_on',
                   existing_type=sa.DATETIME(),
                   nullable=True)
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
        op.create_foreign_key(None, 'metrics', 'ab_user', ['changed_by_fk'], ['id'])
        op.create_foreign_key(None, 'metrics', 'ab_user', ['created_by_fk'], ['id'])
    except:
        pass
    
    '''
    
    # revision identifiers, used by Alembic.
revision = '7e3ddad2a00b'
down_revision = 'b46fa1b0b39e'