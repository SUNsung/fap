
        
                Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        See https://github.com/requests/requests/issues/3772.
    '''
    text_200_chal = (b'HTTP/1.1 200 OK\r\n'
                     b'Content-Length: 0\r\n'
                     b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                     b', opaque='372825293d1c26955496c80ed6426e9e', '
                     b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
            form_data = {
            'viz_type': 'table',
            'granularity': 'one+day',
            'druid_time_origin': '',
            'since': '7+days+ago',
            'until': 'now',
            'row_limit': 5000,
            'include_search': 'false',
            'metrics': ['count'],
            'groupby': ['dim1', 'dim2d'],
            'force': 'true',
        }
        # two groupby
        url = ('/superset/explore_json/druid/{}/'.format(datasource_id))
        resp = self.get_json_resp(url, {'form_data': json.dumps(form_data)})
        self.assertEqual('Canada', resp['data']['records'][0]['dim1'])
    
    # If true, keep warnings as 'system message' paragraphs in the built documents.
#keep_warnings = False
    
        def test_select_in_expression(self):
        query = 'SELECT f1, (SELECT count(1) FROM t2) FROM t1'
        self.assertEquals({'t1', 't2'}, self.extract_tables(query))
    
        sources = {}
    
        for c in i_datasource.columns:
        new_c = c.copy()
        new_c.table_id = datasource.id
        logging.info('Importing column {} from the datasource: {}'.format(
            new_c.to_json(), i_datasource.full_name))
        imported_c = i_datasource.column_class.import_obj(new_c)
        if (imported_c.column_name not in
                [c.column_name for c in datasource.columns]):
            datasource.columns.append(imported_c)
    session.flush()
    return datasource.id
    
        '''
    
    # revision identifiers, used by Alembic.
revision = '18e88e1cc004'
down_revision = '430039611635'
    
    from alembic import op
import sqlalchemy as sa
    
        packages = find_packages('src'),
    package_dir = {'' : 'src'},
    
    
    {
def extract_json_data(url, **params):
    url = construct_url(url, **params)
    html = get_content(url, headers=fake_headers)
    json_string = match1(html, r'app.page\['board'\] = (.*?});')
    json_data = json.loads(json_string)
    return json_data
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    from ..common import *
    
        # mgid%3Auma%3Avideo%3Amtv81.com%3A897974
    vid = match1(html, r'getTheVideo\('(.*?)'')
    xml = parseString(
        get_content('http://intl.esperanto.mtvi.com/www/xml/media/mediaGen.jhtml?uri={}&flashPlayer=LNX%2013,0,0,206&geo=CN&sid=123456'.format(vid)))
    
        with open('README.md') as readme:
        readme_html = mistune.markdown(readme.read())
        readme_soup = BeautifulSoup.BeautifulSoup(readme_html, 'html.parser')