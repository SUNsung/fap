
        
        
filenames = list(rst_filenames())
assert filenames
    
        def format_headers(self, headers):
        '''Return processed `headers`
    
        def __call__(self, r):
        '''
        Override username/password serialization to allow unicode.
    
        def test_verify_no_OK(self, httpbin_secure):
        r = http(httpbin_secure.url + '/get', '--verify=no')
        assert HTTP_OK in r
    
                except ArgumentTypeError as e:
                if self.args.traceback:
                    raise
                self.error(e.args[0])
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'Flaskdoc'
    
    
@bp.route('/')
def show_entries():
    db = get_db()
    cur = db.execute('select title, text from entries order by id desc')
    entries = cur.fetchall()
    return render_template('show_entries.html', entries=entries)
    
    
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
    
    # If true, links to the reST sources are added to the pages.
html_show_sourcelink = False
    
        # 3. Delete empty permission view menues from roles
    roles = sm.get_session.query(sm.role_model).all()
    for role in roles:
        role.permissions = [p for p in role.permissions if p]
    sm.get_session.commit()
    
    
@manager.option(
    '-f', '--datasource-file', default=None, dest='datasource_file',
    help='Specify the the file to export to')
@manager.option(
    '-p', '--print', action='store_true', dest='print_stdout',
    help='Print YAML to stdout')
@manager.option(
    '-b', '--back-references', action='store_true', dest='back_references',
    help='Include parent back references')
@manager.option(
    '-d', '--include-defaults', action='store_true', dest='include_defaults',
    help='Include fields containing defaults')
def export_datasources(print_stdout, datasource_file,
                       back_references, include_defaults):
    '''Export datasources to YAML'''
    data = dict_import_export_util.export_to_dict(
        session=db.session,
        recursive=True,
        back_references=back_references,
        include_defaults=include_defaults)
    if print_stdout or not datasource_file:
        yaml.safe_dump(data, stdout, default_flow_style=False)
    if datasource_file:
        logging.info('Exporting datasources to %s', datasource_file)
        with open(datasource_file, 'w') as data_stream:
            yaml.safe_dump(data, data_stream, default_flow_style=False)
    
    
appbuilder.add_view(
    TableModelView,
    'Tables',
    label=__('Tables'),
    category='Sources',
    category_label=__('Sources'),
    icon='fa-table',
)
    
        @property
    def columns(self):
        '''Provides metadata about columns for data visualization.
    
    import logging
from logging.config import fileConfig
    
    from alembic import op
import sqlalchemy as sa
    
    from alembic import op
import sqlalchemy as sa
    
        print('Done!')
    if failures:
        print('Some downloads have failed:')
        for fail in failures:
            print('> ' + fail)

    
        sqrt_n = int(math.floor(math.sqrt(n)))
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return False
    return True
    
    from ycm.client.base_request import ( BaseRequest, BuildRequestData,
                                      HandleServerException )
    
    
def SyntaxGroupsFromOutput_Basic_test():
  assert_that( syntax_parse._SyntaxGroupsFromOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Statement''' ),
               has_item( 'foogroup' ) )