
        
        
from xlog import getLogger
xlog = getLogger('gae_proxy')
from config import config
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
    def upgrade():
    op.add_column('table_columns', sa.Column('expression', sa.Text(), nullable=True))
    
    Revision ID: 2591d77e9831
Revises: 12d55656cbca
Create Date: 2015-12-15 17:02:45.128709
    
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
    
    Revision ID: 430039611635
Revises: d827694c7555
Create Date: 2016-02-10 08:47:28.950891