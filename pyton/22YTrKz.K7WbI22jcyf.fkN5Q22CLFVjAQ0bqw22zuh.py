
        
        # -- Options for LaTeX output ---------------------------------------------
    
            query = '''
          SELECT sub.*
              FROM (
                    SELECT *
                      FROM s1.t1
                     WHERE day_of_week = 'Friday'
                   ) sub
          WHERE sub.resolution = 'NONE'
        '''
        self.assertEquals({'s1.t1'}, self.extract_tables(query))
    
    
@manager.command
def update_datasources_cache():
    '''Refresh sqllab datasources cache'''
    from superset.models.core import Database
    for database in db.session.query(Database).all():
        print('Fetching {} datasources ...'.format(database.name))
        try:
            database.all_table_names(force=True)
            database.all_view_names(force=True)
        except Exception as e:
            print('{}'.format(e.message))
    
    appbuilder.add_link(
    'Scan New Datasources',
    label=__('Scan New Datasources'),
    href='/druid/scan_new_datasources/',
    category='Sources',
    category_label=__('Sources'),
    category_icon='fa-database',
    icon='fa-refresh')
appbuilder.add_link(
    'Refresh Druid Metadata',
    label=__('Refresh Druid Metadata'),
    href='/druid/refresh_datasources/',
    category='Sources',
    category_label=__('Sources'),
    category_icon='fa-database',
    icon='fa-cog')
    
            # Fail before adding if the table can't be found
        if not table.database.has_table(table):
            raise Exception(_(
                'Table [{}] could not be found, '
                'please double check your '
                'database connection, schema, and '
                'table name').format(table.name))
    
        This configures the context with just a URL
    and not an Engine, though an Engine is acceptable
    here as well.  By skipping the Engine creation
    we don't even need a DBAPI to be available.
    
    # revision identifiers, used by Alembic.
revision = '1296d28ec131'
down_revision = '6414e83d82b7'
    
    '''
    
    from alembic import op
import sqlalchemy as sa
    
    
if __name__ == '__main__':
    cli()

    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
    ### OUTPUT ###
# request 2 handled in handler 1
# request 5 handled in handler 1
# request 14 handled in handler 2
# request 22 handled in handler 3
# request 18 handled in handler 2
# request 3 handled in handler 1
# end of chain, no handler for 35
# request 27 handled in handler 3
# request 20 handled in handler 2
# ------------------------------
# request 2 handled in coroutine 1
# request 5 handled in coroutine 1
# request 14 handled in coroutine 2
# request 22 handled in coroutine 3
# request 18 handled in coroutine 2
# request 3 handled in coroutine 1
# end of chain, no coroutine for 35
# request 27 handled in coroutine 3
# request 20 handled in coroutine 2
# (0.2369999885559082, 0.16199994087219238)

    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')