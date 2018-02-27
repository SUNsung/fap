
        
            params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
            return {
            '_type': 'playlist',
            'id': playlist_id,
            'title': title,
            'description': description,
            'entries': entries,
        }

    
                stream_url_hds = json_data.get('stream_url_hds')
            if stream_url_hds:
                formats.extend(self._extract_f4m_formats(
                    stream_url_hds + '?hdcore=3.4.0',
                    video_id, f4m_id='hds', fatal=False))
    
        def _real_extract(self, url):
        # URLs end with [uploader name]/[uploader title]
        # this title is whatever the user types in, and is rarely
        # the proper song title.  Real metadata is in the api response
        album_url_tag = self._match_id(url)
        result = {'_type': 'playlist', 'entries': []}
        # There is no one endpoint for album metadata - instead it is included/repeated in each song's metadata
        # Therefore we don't know how many songs the album has and must infi-loop until failure
        for track_no in itertools.count():
            # Get song's metadata
            api_response = self._download_json(
                'http://www.audiomack.com/api/music/url/album/%s/%d?extended=1&_=%d'
                % (album_url_tag, track_no, time.time()), album_url_tag,
                note='Querying song information (%d)' % (track_no + 1))
    
    
@bp.route('/add', methods=['POST'])
def add_entry():
    if not session.get('logged_in'):
        abort(401)
    db = get_db()
    db.execute('insert into entries (title, text) values (?, ?)',
               [request.form['title'], request.form['text']])
    db.commit()
    flash('New entry was successfully posted')
    return redirect(url_for('flaskr.show_entries'))
    
    
@app.route('/')
def index():
    return render_template('index.html')
    
    
# add some filters to jinja
app.jinja_env.filters['datetimeformat'] = format_datetime
app.jinja_env.filters['gravatar'] = gravatar_url

    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def __repr__(self):
        return '<PreparedRequest [%s]>' % (self.method)
    
    # Syntax sugar.
_ver = sys.version_info
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
    DOCUMENTATION = '''
---
inventory: openshift
short_description: Openshift gears external inventory script
description:
  - Generates inventory of Openshift gears using the REST interface
  - this permit to reuse playbook to setup an Openshift gear
version_added: None
author: Michael Scherer
'''
    
    
def print_list():
    data = get_serf_members_data()
    nodes = get_nodes(data)
    groups = get_groups(data)
    meta = get_meta(data)
    inventory_data = {_key: nodes, '_meta': meta}
    inventory_data.update(groups)
    print(json.dumps(inventory_data))
    
    import os
    
    # Note, sha1 is the only hash algorithm compatible with python2.4 and with
# FIPS-140 mode (as of 11-2014)
try:
    from hashlib import sha1 as sha1
except ImportError:
    from sha import sha as sha1
    
        args = parser.parse_args()
    
        name = None  # can be a Column or a property pointing to one
    
        @classmethod
    def get_eager_datasource(cls, session, datasource_type, datasource_id):
        '''Returns datasource with columns and metrics.'''
        datasource_class = ConnectorRegistry.sources[datasource_type]
        return (
            session.query(datasource_class)
            .options(
                subqueryload(datasource_class.columns),
                subqueryload(datasource_class.metrics),
            )
            .filter_by(id=datasource_id)
            .one()
        )
    
        add_columns = [
        'verbose_name', 'coordinator_host', 'coordinator_port',
        'coordinator_endpoint', 'broker_host', 'broker_port',
        'broker_endpoint', 'cache_timeout', 'cluster_name',
    ]
    edit_columns = add_columns
    list_columns = ['cluster_name', 'metadata_last_refreshed']
    search_columns = ('cluster_name',)
    label_columns = {
        'cluster_name': _('Cluster'),
        'coordinator_host': _('Coordinator Host'),
        'coordinator_port': _('Coordinator Port'),
        'coordinator_endpoint': _('Coordinator Endpoint'),
        'broker_host': _('Broker Host'),
        'broker_port': _('Broker Port'),
        'broker_endpoint': _('Broker Endpoint'),
    }
    
        @classmethod
    def select_star(cls, my_db, table_name, schema=None, limit=100,
                    show_cols=False, indent=True, latest_partition=True):
        fields = '*'
        cols = []
        if show_cols or latest_partition:
            cols = my_db.get_table(table_name, schema=schema).columns
    
    
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
    
            d[k] = v
    if 'filters' not in d:
        d = cast_filter_data(d)
    for k in list(d.keys()):
        if k not in FORM_DATA_KEY_WHITELIST:
            del d[k]
    return d

    
    from .theplatform import theplatform_download_by_pid
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
    
class APIv1LoginController(RedditController):
    
        @require_oauth2_scope('identity')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/trophies',
    )
    def GET_trophies(self):
        '''Return a list of trophies for the current user.'''
        return self.api_wrapper(get_usertrophies(c.oauth_user))
    
            An iden is given as the `captcha` field with a `BAD_CAPTCHA`
        error, you should use this endpoint if you get a
        `BAD_CAPTCHA` error response.
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()