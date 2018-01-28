# revision identifiers, used by Alembic.
revision = '12d55656cbca'
down_revision = '55179c7f25c7'
    
    '''
    
    
def downgrade():
    op.drop_column('dbs', 'password')

    
    Revision ID: 2929af7925ed
Revises: 1e2841a4128
Create Date: 2015-10-19 20:54:00.565633
    
    def upgrade():
    op.add_column('logs', sa.Column('dashboard_id', sa.Integer(), nullable=True))
    op.add_column('logs', sa.Column('slice_id', sa.Integer(), nullable=True))
    
    # revision identifiers, used by Alembic.
revision = '43df8de3a5f4'
down_revision = '7dbf98566af7'