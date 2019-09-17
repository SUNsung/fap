
        
                description = self._html_search_regex(
            r'(?s)<div\b[^>]+\bclass=['\']full hidden[^>]+>(.+?)</div>',
            webpage, 'description', fatal=False)
        thumbnail = self._og_search_thumbnail(
            webpage, default=None) or self._html_search_meta(
            'twitter:image:src', webpage, 'thumbnail')
        uploader = self._html_search_regex(
            (r'(?s)<div class=['\']channel-banner.*?<p\b[^>]+\bclass=['\']name[^>]+>(.+?)</p>',
             r'(?s)<p\b[^>]+\bclass=['\']video-author[^>]+>(.+?)</p>'),
            webpage, 'uploader', fatal=False)
    
            try:
            video = self._download_json(
                'https://api.redbull.tv/v3/products/' + video_id,
                video_id, note='Downloading video information',
                headers={'Authorization': token}
            )
        except ExtractorError as e:
            if isinstance(e.cause, compat_HTTPError) and e.cause.code == 404:
                error_message = self._parse_json(
                    e.cause.read().decode(), video_id)['error']
                raise ExtractorError('%s said: %s' % (
                    self.IE_NAME, error_message), expected=True)
            raise
    
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
    
    versions_info['signature'] = signature
with open('update/versions.json', 'w') as versionsf:
    json.dump(versions_info, versionsf, indent=4, sort_keys=True)

    
        with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
    with io.open(lazy_extractors_filename, 'wt', encoding='utf-8') as f:
    f.write(module_src)

    
    
def main():
    parser = optparse.OptionParser(usage='%prog OUTFILE.md')
    options, args = parser.parse_args()
    if len(args) != 1:
        parser.error('Expected an output filename')
    
    ROOT_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
README_FILE = os.path.join(ROOT_DIR, 'README.md')
    
    
def _is_empty(d):
    return not bool(os.listdir(d))
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
    from requests.structures import CaseInsensitiveDict
    
        def __init__(self, orig):
        self._orig = orig
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
        def __call__(
        self,
        request: requests.PreparedRequest
    ) -> requests.PreparedRequest:
        '''
        Override username/password serialization to allow unicode.
    
        def format_body(self, content: str, mime: str) -> str:
        if is_valid_mime(mime):
            for p in self.enabled_plugins:
                content = p.format_body(content, mime)
        return content

    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
            # Changing field 'EventTag.group_id'
        db.alter_column(u'tagstore_eventtag', 'group_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedPositiveIntegerField')())
    
            # Adding model 'Association'
        db.create_table('social_auth_association', (
            ('id', self.gf('django.db.models.fields.AutoField')(primary_key=True)),
            ('server_url', self.gf('django.db.models.fields.CharField')(max_length=ASSOCIATION_SERVER_URL_LENGTH)),
            ('handle', self.gf('django.db.models.fields.CharField')(max_length=ASSOCIATION_HANDLE_LENGTH)),
            ('secret', self.gf('django.db.models.fields.CharField')(max_length=255)),
            ('issued', self.gf('django.db.models.fields.IntegerField')()),
            ('lifetime', self.gf('django.db.models.fields.IntegerField')()),
            ('assoc_type', self.gf('django.db.models.fields.CharField')(max_length=64)),
        ))
        db.send_create_signal('social_auth', ['Association'])
    
        def backwards(self, orm):
        # Adding model 'Nonce'
        db.create_table(u'social_auth_nonce', (
            ('timestamp', self.gf('django.db.models.fields.IntegerField')(db_index=True)),
            ('salt', self.gf('django.db.models.fields.CharField')(max_length=40)),
            ('id', self.gf('django.db.models.fields.AutoField')(primary_key=True)),
            ('server_url', self.gf('django.db.models.fields.CharField')(max_length=255)),
        ))
        db.send_create_signal('social_auth', ['Nonce'])
    
        def backwards(self, orm):
        # Removing unique constraint on 'UserSocialAuth', fields ['provider', 'uid', 'user']
        db.delete_unique(u'social_auth_usersocialauth', ['provider', 'uid', 'user_id'])