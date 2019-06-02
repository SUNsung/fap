
        
                if error is None:
            # the name is available, store it in the database and go to
            # the login page
            db.execute(
                'INSERT INTO user (username, password) VALUES (?, ?)',
                (username, generate_password_hash(password)),
            )
            db.commit()
            return redirect(url_for('auth.login'))
    
    
def test_update(client, auth, app):
    auth.login()
    assert client.get('/1/update').status_code == 200
    client.post('/1/update', data={'title': 'updated', 'body': ''})
    
        assert 'closed' in str(e)
    
        try:
        citext_oids = get_citext_oids(connection.alias)
        array_type = psycopg2.extensions.new_array_type(citext_oids, 'citext[]', psycopg2.STRING)
        psycopg2.extensions.register_type(array_type, None)
    except ProgrammingError:
        # citext is not available on the database.
        #
        # The same comments in the except block of the above call to
        # register_hstore() also apply here.
        pass

    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
    
class SessionStore(SessionBase):
    '''
    Implement database session store.
    '''
    def __init__(self, session_key=None):
        super().__init__(session_key)
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
            return self.__dict__.get(key, None)
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    # Syntax sugar.
_ver = sys.version_info
    
        By default, the pair of `name` and `value` will be set for the domain ''
    and sent on every request (this is sometimes called a 'supercookie').
    '''
    result = {
        'version': 0,
        'name': name,
        'value': value,
        'port': None,
        'domain': '',
        'path': '/',
        'secure': False,
        'expires': None,
        'discard': True,
        'comment': None,
        'comment_url': None,
        'rest': {'HttpOnly': None},
        'rfc2109': False,
    }
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        # find the first valid part of the provided path and treat that as a zip archive
    # assume the rest of the path is the name of a member in the archive
    archive, member = os.path.split(path)
    while archive and not os.path.exists(archive):
        archive, prefix = os.path.split(archive)
        member = '/'.join([prefix, member])
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
        def process_options(self, args, opts):
        try:
            self.settings.setdict(arglist_to_dict(opts.set),
                                  priority='cmdline')
        except ValueError:
            raise UsageError('Invalid -s value, use -s NAME=VALUE', print_help=False)
    
        requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
    from scrapy.commands import ScrapyCommand
from scrapy.http import Request
from scrapy.exceptions import UsageError
from scrapy.utils.datatypes import SequenceExclude
from scrapy.utils.spider import spidercls_for_request, DefaultSpider
    
        def decode(self, value):
        if value != self.resource_type:
            raise jose.DeserializationError(
                'Wrong resource type: {0} instead of {1}'.format(
                    value, self.resource_type))
        return value

    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'acme-python', u'acme-python Documentation',
     author, 'acme-python', 'One line description of project.',
     'Miscellaneous'),
]
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
    
Named Arguments
---------------
    
    # The name of the Pygments (syntax highlighting) style to use.
pygments_style = 'sphinx'
    
       certbot certonly \\
     --dns-digitalocean \\
     --dns-digitalocean-credentials ~/.secrets/certbot/digitalocean.ini \\
     -d example.com