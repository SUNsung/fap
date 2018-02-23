
        
        
def upgrade():
    try:
        constraint = find_constraint_name() or 'fk_columns_column_name_datasources'
        with op.batch_alter_table('columns',
                naming_convention=naming_convention) as batch_op:
            batch_op.drop_constraint(constraint, type_='foreignkey')
            batch_op.create_foreign_key(
                'fk_columns_datasource_name_datasources',
                'datasources',
                ['datasource_name'], ['datasource_name'])
    except:
        logging.warning(
            'Could not find or drop constraint on `columns`')
    
    Revision ID: 430039611635
Revises: d827694c7555
Create Date: 2016-02-10 08:47:28.950891
    
    
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
    
            class SetCookieFalsyFlags(RequestHandler):
            def get(self):
                self.set_cookie('a', '1', secure=True)
                self.set_cookie('b', '1', secure=False)
                self.set_cookie('c', '1', httponly=True)
                self.set_cookie('d', '1', httponly=False)
    
            The name of the argument is provided if known, but may be None
        (e.g. for unnamed groups in the url regex).
        '''
        try:
            return _unicode(value)
        except UnicodeDecodeError:
            raise HTTPError(400, 'Invalid unicode in %s: %r' %
                            (name or 'url', value[:40]))
    
                def data_received(self, data):
                body.append(data)
    
            # It would be better to run the wsgiref server implementation in
        # another thread instead of using our own WSGIContainer, but this
        # fits better in our async testing framework and the wsgiref
        # validator should keep us honest
        return WSGIContainer(validator(WSGIApplication([
            ('/', HelloHandler),
            ('/path/(.*)', PathQuotingHandler),
            ('/typecheck', TypeCheckHandler),
        ])))
    
        def _sock_state_cb(self, fd, readable, writable):
        state = ((IOLoop.READ if readable else 0) |
                 (IOLoop.WRITE if writable else 0))
        if not state:
            self.io_loop.remove_handler(fd)
            del self.fds[fd]
        elif fd in self.fds:
            self.io_loop.update_handler(fd, state)
            self.fds[fd] = state
        else:
            self.io_loop.add_handler(fd, self._handle_events, state)
            self.fds[fd] = state
    
    
def try_close(f):
    # Avoid issue #875 (race condition when using the file in another
    # thread).
    for i in range(10):
        try:
            f.close()
        except IOError:
            # Yield to another thread
            time.sleep(1e-3)
        else:
            break
    # Try a last time and let raise
    f.close()
    
    define('port', default=8888)
define('num_chunks', default=1000)
define('chunk_size', default=2048)
    
        def wait_for_messages(self, cursor=None):
        # Construct a Future to return to our caller.  This allows
        # wait_for_messages to be yielded from a coroutine even though
        # it is not a coroutine itself.  We will set the result of the
        # Future when results are available.
        result_future = Future()
        if cursor:
            new_count = 0
            for msg in reversed(self.cache):
                if msg['id'] == cursor:
                    break
                new_count += 1
            if new_count:
                result_future.set_result(self.cache[-new_count:])
                return result_future
        self.waiters.add(result_future)
        return result_future