
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
    import click
from flask import current_app, g
from flask.cli import with_appcontext
    
    
@pytest.mark.parametrize('path', (
    '/create',
    '/1/update',
    '/1/delete',
))
def test_login_required(client, path):
    response = client.post(path)
    assert response.headers['Location'] == 'http://localhost/auth/login'
    
    import pytest
from flaskr.db import get_db
    
            :param namespace: a configuration namespace
        :param lowercase: a flag indicating if the keys of the resulting
                          dictionary should be lowercase
        :param trim_namespace: a flag indicating if the keys of the resulting
                          dictionary should not include the namespace
    
        while current:
        if any(handler.level <= level for handler in current.handlers):
            return True
    
        If :meth:`open_session` returns ``None`` Flask will call into
    :meth:`make_null_session` to create a session that acts as replacement
    if the session support cannot work because some requirement is not
    fulfilled.  The default :class:`NullSession` class that is created
    will complain that the secret key was not set.
    
            # We attach the view class to the view function for two reasons:
        # first of all it allows us to easily figure out what class-based
        # view this thing came from, secondly it's also used for instantiating
        # the view class so you can actually replace it with something else
        # for testing purposes and debugging.
        view.view_class = cls
        view.__name__ = name
        view.__doc__ = cls.__doc__
        view.__module__ = cls.__module__
        view.methods = cls.methods
        view.provide_automatic_options = cls.provide_automatic_options
        return view
    
    
init_bashrc = u'''echo '
export SHELL=/bin/bash
export PS1='$ '
echo > $HISTFILE
eval $(thefuck --alias {})
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.bashrc'''
    
    
init_zshrc = u'''echo '
export SHELL=/usr/bin/zsh
export HISTFILE=~/.zsh_history
echo > $HISTFILE
export SAVEHIST=100
export HISTSIZE=100
eval $(thefuck --alias {})
setopt INC_APPEND_HISTORY
echo 'instant mode ready: $THEFUCK_INSTANT_MODE'
' > ~/.zshrc'''
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument command: Invalid choice, valid choices are:
    
        # Optional short description. Will be be shown in the help
    # under --auth-type.
    description = None
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        def test_actual_download(self, httpbin_both, httpbin):
        robots_txt = '/robots.txt'
        body = urlopen(httpbin + robots_txt).read().decode()
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--download', httpbin_both.url + robots_txt, env=env)
        assert 'Downloading' in r.stderr
        assert '[K' in r.stderr
        assert 'Done' in r.stderr
        assert body == r
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
def batch_face_locations(images, number_of_times_to_upsample=1, batch_size=128):
    '''
    Returns an 2d array of bounding boxes of human faces in a image using the cnn face detector
    If you are using a GPU, this can give you much faster results since the GPU
    can process batches of images at once. If you aren't using a GPU, you don't need this function.
    
    # Initialize some variables
face_locations = []
face_encodings = []
    
    for face_landmarks in face_landmarks_list:
    
                affected_projects = set()
            for release in releases:
                affected_projects.update(
                    [p for p in release.projects.values_list('slug', flat=True)]
                )
            has_prod = False
            has_staging = False
            has_dev = False
            for p in affected_projects:
                if 'prod' in p:
                    has_prod = True
                elif 'stag' in p or 'stg' in p:
                    has_staging = True
                elif 'dev' in p:
                    has_dev = True
            # assume projects are split by environment if there
            # are at least prod/staging or prod/dev, etc
            projects_split_by_env = len([x for x in [has_prod, has_dev, has_staging] if x]) >= 2
    
            # Adding unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.create_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
            db.start_transaction()
    
        def backwards(self, orm):
        # Removing unique constraint on 'ReleaseHeadCommit', fields ['repository_id', 'release']
        db.delete_unique('sentry_releaseheadcommit', ['repository_id', 'release_id'])