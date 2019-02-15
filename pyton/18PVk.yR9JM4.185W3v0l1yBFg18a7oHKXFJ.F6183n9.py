bp = Blueprint('auth', __name__, url_prefix='/auth')
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        # test that successful registration redirects to the login page
    response = client.post(
        '/auth/register', data={'username': 'a', 'password': 'a'}
    )
    assert 'http://localhost/auth/login' == response.headers['Location']
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
    
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
    MOD_SSL_CONF_SRC = pkg_resources.resource_filename(
    'certbot_nginx', 'options-ssl-nginx.conf')
'''Path to the nginx mod_ssl config file found in the Certbot
distribution.'''
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
            # Check to make sure challenge config path is included in apache config
        self.assertEqual(
            len(self.sni.configurator.parser.find_dir(
                'Include', self.sni.challenge_conf)), 1)
        self.assertEqual(len(responses), 1)
        self.assertEqual(responses[0], response)