
        
            def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
    from alembic import op
import sqlalchemy as sa
    
    '''
    
    '''
    
    '''
    
    from alembic import op
from superset import db
from superset.utils import generic_find_constraint_name, table_has_constraint
import logging
import sqlalchemy as sa
from sqlalchemy.dialects import mysql
    
    
def downgrade():
    op.drop_table('slice_user')
    op.drop_table('dashboard_user')

    
    # revision identifiers, used by Alembic.
revision = '55179c7f25c7'
down_revision = '315b3f4da9b0'
    
    # revision identifiers, used by Alembic.
revision = '7e3ddad2a00b'
down_revision = 'b46fa1b0b39e'
    
        def wake(self):
        try:
            self.writer.send(b'x')
        except (IOError, socket.error, ValueError):
            pass
    
            yield write(b'\r\n')
    
        logging.info('Listening on http://localhost:%d' % options.port)
    IOLoop.current().start()
    
    plugins = PluginLoader()
print 'PLUGINS := ' + ' '.join(plugin.name for plugin in plugins
                               if plugin.needs_static_build)
    
                if not c.user.employee:
                c.user.gold_creddits -= months
                c.user._commit()
    
            res = AdminPage(content = AdminAwardGive(award, recipient, desc,
                                                 url, hours),
                        title='give an award').render()
        return res