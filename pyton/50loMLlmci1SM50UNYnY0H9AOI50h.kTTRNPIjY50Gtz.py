
        
            def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
    from mrjob.job import MRJob
    
    
@pytest.mark.parametrize('path', ('/create', '/1/update', '/1/delete'))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
    
def set_filename_version(filename, version_number, pattern):
    changed = []
    
                elif opt in ('-g', '--gui'):
                # Run using GUI.
                conf['gui'] = True
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        if '_text' in dictified['video'][0]['size'][0]:  #size exists for 1 piece
        video_dict['size'] = sum([int(i['size'][0]['_text']) for i in dictified['video']])
    
        fc2video_download_by_upid(upid, output_dir, merge, info_only)
    
    
site_info = 'huomao.com'
download = huomaotv_download
download_playlist = playlist_not_supported('huomao')

    
        def test_strong_etag_not_match(self):
        computed_etag = ''xyzzy''
        etags = ''xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=200)
    
    
def handle_sigchld(sig, frame):
    IOLoop.current().add_callback_from_signal(IOLoop.current().stop)
    
    define('url', default='ws://localhost:9001')
define('name', default='Tornado')
    
        '''
    
            # Create temporary test application
        os.mkdir(os.path.join(self.path, 'testapp'))
        open(os.path.join(self.path, 'testapp/__init__.py'), 'w').close()
        with open(os.path.join(self.path, 'testapp/__main__.py'), 'w') as f:
            f.write(main)
    
    class IPyAutocall(object):
    ''' Instances of this class are always autocalled
    
    This happens regardless of 'autocall' variable state. Use this to
    develop macro-like mechanisms.
    '''
    _ip = None
    rewrite = True
    def __init__(self, ip=None):
        self._ip = ip
    
    def set_ip(self, ip):
        ''' Will be used to set _ip point to current ipython instance b/f call
        
        Override this method if you don't want this to happen.
        
        '''
        self._ip = ip
    
            Parameters
        ----------
        data : dict
            A dictionary having keys that are valid MIME types (like
            'text/plain' or 'image/svg+xml') and values that are the data for
            that MIME type. The data itself must be a JSON'able data
            structure. Minimally all data should have the 'text/plain' data,
            which can be displayed by all frontends. If more than the plain
            text is given, it is up to the frontend to decide which
            representation to use.
        metadata : dict
            A dictionary for metadata related to the data. This can contain
            arbitrary key, value pairs that frontends can use to interpret
            the data.  Metadata specific to each mime-type can be specified
            in the metadata dict with the same mime-type keys as
            the data itself.
        source : str, deprecated
            Unused.
        transient: dict, keyword-only
            A dictionary for transient data.
            Data in this dictionary should not be persisted as part of saving this output.
            Examples include 'display_id'.
        update: bool, keyword-only, default: False
            If True, only update existing outputs with the same display_id,
            rather than creating a new output.
        '''
    
            - line_ori: unmodified input line from the user. This is not
          necessarily valid Python.
        '''
    
        Instances also serve to decorate command methods.
    '''
    
            # all-random (note for auto-testing)
        '''
    
    #-----------------------------------------------------------------------------
# Imports
#-----------------------------------------------------------------------------
    
            # For brevity
        history_manager = self.shell.history_manager
    
    
def download_file(url):
    local_fname = url.split('/')[-1]
    local_fname = os.path.join('dist', local_fname)
    print(local_fname)
    safe_makedirs('dist')
    r = requests.get(url, stream=True)
    with open(local_fname, 'wb') as f:
        for chunk in r.iter_content(chunk_size=1024):
            if chunk:    # filter out keep-alive new chunks
                f.write(chunk)
    return local_fname
    
            logger.info(
            'Stats will be exported to Cassandra cluster {} ({}) in keyspace {}'.format(
                cluster.metadata.cluster_name, cluster.metadata.all_hosts(), self.keyspace))
    
            # Add a timer to avoid any trigger when Glances is started (issue#732)
        # Action can be triggered after refresh * 2 seconds
        if hasattr(args, 'time'):
            self.start_timer = Timer(args.time * 2)
        else:
            self.start_timer = Timer(3)
    
    How to read the stats
---------------------
    
        The list (Python list) is composed of items (Python dict).
    An item is defined (dict keys):
    *...
    '''
    
    '''Attribute class.'''
    
        def __init__(self, config=None, args=None):
        '''Init the export class.'''
        # Export name (= module name without glances_)
        self.export_name = self.__class__.__module__[len('glances_'):]
        logger.debug('Init export module %s' % self.export_name)
    
        def export(self, name, columns, points):
        '''Write the points to the InfluxDB server.'''
        # Manage prefix
        if self.prefix is not None:
            name = self.prefix + '.' + name
        # Write input to the InfluxDB database
        try:
            self.client.write_points(self._normalize(name, columns, points))
        except Exception as e:
            logger.error('Cannot export {} stats to InfluxDB ({})'.format(name,
                                                                          e))
        else:
            logger.debug('Export {} stats to InfluxDB'.format(name))

    
            # Load the InfluxDB configuration file
        self.export_enable = self.load_conf('opentsdb',
                                            mandatories=['host', 'port'],
                                            options=['prefix', 'tags'])
        if not self.export_enable:
            sys.exit(2)
    
        def export(self, name, columns, points):
        '''Export the stats to the Statsd server.'''
        if name == self.plugins_to_export()[0] and self.buffer != {}:
            # One complete loop have been done
            logger.debug('Export stats ({}) to RESTful endpoint ({})'.format(listkeys(self.buffer),
                                                                             self.client))
            # Export stats
            post(self.client, json=self.buffer, allow_redirects=True)
            # Reset buffer
            self.buffer = {}
    
        final_file.seek(0)  # Write at the top.
    write_data(final_file, '# This hosts file is a merged collection '
                           'of hosts from reputable sources,\n')
    write_data(final_file, '# with a dash of crowd sourcing via Github\n#\n')
    write_data(final_file, '# Date: ' + time.strftime('%d %B %Y %H:%M:%S (%Z)', time.gmtime()) + '\n')