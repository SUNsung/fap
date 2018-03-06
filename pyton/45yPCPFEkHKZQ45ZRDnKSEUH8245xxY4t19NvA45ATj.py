
        
        import pytest
    
    
def init_db():
    '''Initializes the database.'''
    db = get_db()
    with current_app.open_resource('schema.sql', mode='r') as f:
        db.cursor().executescript(f.read())
    db.commit()
    
    
@app.route('/_add_numbers')
def add_numbers():
    '''Add two numbers server side, ridiculous but well...'''
    a = request.args.get('a', 0, type=int)
    b = request.args.get('b', 0, type=int)
    return jsonify(result=a + b)
    
    # Dynamic inventory script which lets you use nodes discovered by Canonical's
# Landscape (http://www.ubuntu.com/management/landscape-features).
#
# Requires the `landscape_api` Python module
# See:
#   - https://landscape.canonical.com/static/doc/api/api-client-package.html
#   - https://landscape.canonical.com/static/doc/api/python-api.html
#
# Environment variables
# ---------------------
#   - `LANDSCAPE_API_URI`
#   - `LANDSCAPE_API_KEY`
#   - `LANDSCAPE_API_SECRET`
#   - `LANDSCAPE_API_SSL_CA_FILE` (optional)
    
    
username = get_config('ANSIBLE_OPENSHIFT_USERNAME', 'default_rhlogin')
password = get_config('ANSIBLE_OPENSHIFT_PASSWORD', 'password')
broker_url = 'https://%s/broker/rest/' % get_config('ANSIBLE_OPENSHIFT_BROKER', 'libra_server')
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
    # Note, sha1 is the only hash algorithm compatible with python2.4 and with
# FIPS-140 mode (as of 11-2014)
try:
    from hashlib import sha1 as sha1
except ImportError:
    from sha import sha as sha1
    
    try:
    import argcomplete
except ImportError:
    argcomplete = None
    
        def test_where_subquery(self):
        query = '''
          SELECT name
            FROM t1
            WHERE regionkey = (SELECT max(regionkey) FROM t2)
        '''
        self.assertEquals({'t1', 't2'}, self.extract_tables(query))
    
        @declared_attr
    def slices(self):
        return relationship(
            'Slice',
            primaryjoin=lambda: and_(
                foreign(Slice.datasource_id) == self.id,
                foreign(Slice.datasource_type) == self.type,
            ),
        )
    
        @classmethod
    def get_all_datasources(cls, session):
        datasources = []
        for source_type in ConnectorRegistry.sources:
            datasources.extend(
                session.query(ConnectorRegistry.sources[source_type]).all())
        return datasources
    
    
appbuilder.add_view_no_menu(TableColumnInlineView)
    
    # Repeat the entire benchmark this many times (on different ports)
# This gives JITs time to warm up, etc.  Pypy needs 3-5 runs at
# --n=15000 for its JIT to reach full effectiveness
define('num_runs', type=int, default=1)