
        
        
@app.route('/_add_numbers')
def add_numbers():
    '''Add two numbers server side, ridiculous but well...'''
    a = request.args.get('a', 0, type=int)
    b = request.args.get('b', 0, type=int)
    return jsonify(result=a + b)
    
    
def test_register(client):
    '''Make sure registering works'''
    rv = register(client, 'user1', 'default')
    assert b'You were successfully registered ' \
           b'and can login now' in rv.data
    rv = register(client, 'user1', 'default')
    assert b'The username is already taken' in rv.data
    rv = register(client, '', 'default')
    assert b'You have to enter a username' in rv.data
    rv = register(client, 'meh', '')
    assert b'You have to enter a password' in rv.data
    rv = register(client, 'meh', 'x', 'y')
    assert b'The two passwords do not match' in rv.data
    rv = register(client, 'meh', 'foo', email='broken')
    assert b'You have to enter a valid email address' in rv.data
    
        engine = 'base'  # str as defined in sqlalchemy.engine.engine
    cursor_execute_kwargs = {}
    time_grains = tuple()
    time_groupby_inline = False
    limit_method = LimitMethod.FETCH_MANY
    time_secondary_columns = False
    inner_joins = True
    
    
class SeparatorViz(MarkupViz):
    
        def pre_add(self, datasource):
        with db.session.no_autoflush:
            query = (
                db.session.query(models.DruidDatasource)
                .filter(models.DruidDatasource.datasource_name ==
                        datasource.datasource_name,
                        models.DruidDatasource.cluster_name ==
                        datasource.cluster.id)
            )
            if db.session.query(query.exists()).scalar():
                raise Exception(get_datasource_exist_error_mgs(
                    datasource.full_name))
    
    
def export_to_dict(session,
                   recursive,
                   back_references,
                   include_defaults):
    '''Exports databases and druid clusters to a dictionary'''
    logging.info('Starting export')
    dbs = session.query(Database)
    databases = [database.export_to_dict(recursive=recursive,
                 include_parent_ref=back_references,
                 include_defaults=include_defaults) for database in dbs]
    logging.info('Exported %d %s', len(databases), DATABASES_KEY)
    cls = session.query(DruidCluster)
    clusters = [cluster.export_to_dict(recursive=recursive,
                include_parent_ref=back_references,
                include_defaults=include_defaults) for cluster in cls]
    logging.info('Exported %d %s', len(clusters), DRUID_CLUSTERS_KEY)
    data = dict()
    if databases:
        data[DATABASES_KEY] = databases
    if clusters:
        data[DRUID_CLUSTERS_KEY] = clusters
    return data
    
    
def cast_form_data(form_data):
    '''Translates old to new form_data'''
    d = {}
    fields = frontend_config.get('controls', {})
    for k, v in form_data.items():
        field_config = fields.get(k, {})
        ft = field_config.get('type')
        if ft == 'CheckboxControl':
            # bug in some urls with dups on bools
            if isinstance(v, list):
                v = 'y' in v
            else:
                v = True if v in ('true', 'y') or v is True else False
        elif v and ft == 'TextControl' and field_config.get('isInt'):
            v = int(v) if v != '' else None
        elif v and ft == 'TextControl' and field_config.get('isFloat'):
            v = float(v) if v != '' else None
        elif v and ft == 'SelectControl':
            if field_config.get('multi'):
                if type(form_data).__name__ == 'ImmutableMultiDict':
                    v = form_data.getlist(k)
                elif not isinstance(v, list):
                    v = [v]
        if d.get('slice_id'):
            d['slice_id'] = int(d['slice_id'])
    
        '''
    url = config.get_main_option('sqlalchemy.url')
    context.configure(url=url)
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')
