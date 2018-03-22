
        
                headers.insert(0, request_line)
        headers = '\r\n'.join(headers).strip()
    
    
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
            '''
        return content

    
        def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
        ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
                try:
                slice_id = int(
                    slice_id or json.loads(d.get('form_data')).get('slice_id'))
            except (ValueError, TypeError):
                slice_id = 0
    
            def lookup_database(table):
            return db.session.query(Database).filter_by(
                database_name=table.params_dict['database_name']).one()
        return import_util.import_datasource(
            db.session, i_datasource, lookup_database, lookup_sqlatable,
            import_time)
    
        @property
    def data(self):
        attrs = (
            'metric_name', 'verbose_name', 'description', 'expression',
            'warning_text')
        return {s: getattr(self, s) for s in attrs}

    
        @classmethod
    def query_datasources_by_permissions(cls, session, database, permissions):
        datasource_class = ConnectorRegistry.sources[database.type]
        return (
            session.query(datasource_class)
            .filter_by(database_id=database.id)
            .filter(datasource_class.perm.in_(permissions))
            .all()
        )
    
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
    
            logging.info('Importing %d %s',
                     len(data.get(DRUID_CLUSTERS_KEY, [])),
                     DRUID_CLUSTERS_KEY)
        for datasource in data.get(DRUID_CLUSTERS_KEY, []):
            DruidCluster.import_from_dict(session, datasource, sync=sync)
        session.commit()
    else:
        logging.info('Supplied object is not a dictionary.')

    
    def downgrade():
    constraint = find_constraint_name(False) or 'fk_columns_datasource_name_datasources'
    with op.batch_alter_table('columns',
        naming_convention=naming_convention) as batch_op:
        batch_op.drop_constraint(constraint, type_='foreignkey')
        batch_op.create_foreign_key(
            'fk_columns_column_name_datasources',
            'datasources',
            ['column_name'], ['datasource_name'])

    
    # encoding=utf8  
import sys  
try:
    reload(sys)
except NameError:
    pass
try:
    sys.setdefaultencoding('utf8')
except AttributeError:
    pass
    
    
class UnimplementedNonStandardMethodsTest(SimpleHandlerTestCase):
    # wsgiref.validate complains about unknown methods in a way that makes
    # this test not wsgi_safe.
    class Handler(RequestHandler):
        def other(self):
            # Even though this method exists, it won't get called automatically
            # because it is not in SUPPORTED_METHODS.
            self.write('other')
    
    
def run():
    io_loop = IOLoop(make_current=True)
    app = Application([('/', RootHandler)])
    port = random.randrange(options.min_port, options.max_port)
    app.listen(port, address='127.0.0.1')
    signal.signal(signal.SIGCHLD, handle_sigchld)
    args = ['ab']
    args.extend(['-n', str(options.n)])
    args.extend(['-c', str(options.c)])
    if options.keepalive:
        args.append('-k')
    if options.quiet:
        # just stops the progress messages printed to stderr
        args.append('-q')
    args.append('http://127.0.0.1:%d/' % port)
    subprocess.Popen(args)
    io_loop.start()
    io_loop.close()
    io_loop.clear_current()
    
    
if __name__ == '__main__':
    main()
