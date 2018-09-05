
        
        
class BuildHTTPRequestHandler(compat_http_server.BaseHTTPRequestHandler):
    actionDict = {'build': Builder, 'download': Builder}  # They're the same, no more caching.
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    with io.open('update/releases.atom', 'w', encoding='utf-8') as atom_file:
    atom_file.write(atom_template)

    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
    
total_bytes = 0
    
        def test_youtube_playlist_matching(self):
        assertPlaylist = lambda url: self.assertMatch(url, ['youtube:playlist'])
        assertPlaylist('ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('UUBABnxM4Ar9ten8Mdjj1j0Q')  # 585
        assertPlaylist('PL63F0C78739B09958')
        assertPlaylist('https://www.youtube.com/playlist?list=UUBABnxM4Ar9ten8Mdjj1j0Q')
        assertPlaylist('https://www.youtube.com/course?list=ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('https://www.youtube.com/playlist?list=PLwP_SiAcdui0KVebT0mU9Apz359a4ubsC')
        assertPlaylist('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012')  # 668
        self.assertFalse('youtube:playlist' in self.matching_ies('PLtS2H6bU1M'))
        # Top tracks
        assertPlaylist('https://www.youtube.com/playlist?list=MCUS.20142101')
    
    
def skip_internal(app, what, name, obj, skip, options):
    docstring = inspect.getdoc(obj) or ''
    
        if request.method == 'POST':
        title = request.form['title']
        body = request.form['body']
        error = None
    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
        def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
            self.charPositionInLine = None
    
    
class ANTLRStringStream(CharStream):
    '''
    @brief CharStream that pull data from a unicode string.
    
    A pretty quick CharStream that pulls all data from an array
    directly.  Every method call counts in the lexer.
    
    
    def getChannel(self):
        return self.channel
    
    def setChannel(self, channel):
        self.channel = channel
    
    
    
@asyncio.coroutine
def async_setup(hass):
    '''Set up the Hassbian config.'''
    hass.http.register_view(CheckConfigView)
    return True
    
            states = dict(state.attributes)
        metric = '{}.{}'.format(prefix, state.domain)
        tags = ['entity:{}'.format(state.entity_id)]
    
                    else:
                    # If this light didn't happen to be turned on yet so
                    # will all the following then, break.
                    break
    
            devices = {}
        for lease in leases_result:
            match = _LEASES_REGEX.search(lease.decode('utf-8'))
            if match is not None:
                devices[match.group('ip')] = {
                    'ip': match.group('ip'),
                    'mac': match.group('mac').upper(),
                    'timevalid': int(match.group('timevalid'))
                    }
        return devices

    
    REQUIREMENTS = ['pybbox==0.0.5-alpha']
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )