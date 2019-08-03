
        
        
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
        def get_cookie_samesite(self, app):
        '''Return ``'Strict'`` or ``'Lax'`` if the cookie should use the
        ``SameSite`` attribute. This currently just returns the value of
        the :data:`SESSION_COOKIE_SAMESITE` setting.
        '''
        return app.config['SESSION_COOKIE_SAMESITE']
    
    
def make_test_environ_builder(*args, **kwargs):
    '''Create a :class:`flask.testing.EnvironBuilder`.
    
        bp.add_app_template_test(is_boolean)
    app.register_blueprint(bp, url_prefix='/py')
    assert 'is_boolean' in app.jinja_env.tests.keys()
    assert app.jinja_env.tests['is_boolean'] == is_boolean
    assert app.jinja_env.tests['is_boolean'](False)
    
            def to_python(self, value):
            return Foo(value)
    
    
@utils.memoize
def get_pkgfile(command):
    ''' Gets the packages that provide the given command using `pkgfile`.
    
        def test_app_alias(self, shell):
        assert 'function fuck' in shell.app_alias('fuck')
        assert 'function FUCK' in shell.app_alias('FUCK')
        assert 'thefuck' in shell.app_alias('fuck')
        assert 'TF_SHELL=fish' in shell.app_alias('fuck')
        assert 'TF_ALIAS=fuck PYTHONIOENCODING' in shell.app_alias('fuck')
        assert 'PYTHONIOENCODING=utf-8 thefuck' in shell.app_alias('fuck')
        assert ARGUMENT_PLACEHOLDER in shell.app_alias('fuck')
    
    
class TestGeneric(object):
    @pytest.fixture
    def shell(self):
        return Generic()
    
    
class UninstallError(PipenvException):
    def __init__(self, package, command, return_values, return_code, **kwargs):
        extra = [
            '{0} {1}'.format(
                crayons.blue('Attempted to run command: '),
                crayons.yellow('$ {0!r}'.format(command), bold=True
            )
        )]
        extra.extend([crayons.blue(line.strip()) for line in return_values.splitlines()])
        if isinstance(package, (tuple, list, set)):
            package = ' '.join(package)
        message = '{0!s} {1!s}...'.format(
            crayons.normal('Failed to uninstall package(s)'),
            crayons.yellow('{0}!s'.format(package), bold=True)
        )
        self.exit_code = return_code
        PipenvException.__init__(self, message=message, extra=extra)
        self.extra = extra
    
    __all__ = [
    DocumentError.__name__,
    SchemaError.__name__,
    TypeDefinition.__name__,
    Validator.__name__,
    'schema_registry',
    'rules_set_registry',
]

    
    # groups
ERROR_GROUP = ErrorDefinition(0x80, None)
MAPPING_SCHEMA = ErrorDefinition(0x81, 'schema')
SEQUENCE_SCHEMA = ErrorDefinition(0x82, 'schema')
# TODO remove KEYSCHEMA AND VALUESCHEMA with next major release
KEYSRULES = KEYSCHEMA = ErrorDefinition(0x83, 'keysrules')
VALUESRULES = VALUESCHEMA = ErrorDefinition(0x84, 'valuesrules')
BAD_ITEMS = ErrorDefinition(0x8F, 'items')
    
            :param schema: The schema-definition to expand.
        :return: The expanded schema-definition.
        '''
    
    from click_completion.core import completion_configuration, get_code, install, shells, resolve_ctx, get_choices, \
    startswith, Shell
from click_completion.lib import get_auto_shell
from click_completion.patch import patch as _patch
    
            :param filename: The pathname to the file to be signed.
        :param signer: The identifier of the signer of the file.
        :param sign_password: The passphrase for the signer's
                              private key used for signing.
        :param keystore: The path to a directory which contains the keys
                         used in verification. If not specified, the
                         instance's ``gpg_home`` attribute is used instead.
        :return: The signing command as a list suitable to be
                 passed to :class:`subprocess.Popen`.
        '''
        cmd = [self.gpg, '--status-fd', '2', '--no-tty']
        if keystore is None:
            keystore = self.gpg_home
        if keystore:
            cmd.extend(['--homedir', keystore])
        if sign_password is not None:
            cmd.extend(['--batch', '--passphrase-fd', '0'])
        td = tempfile.mkdtemp()
        sf = os.path.join(td, os.path.basename(filename) + '.asc')
        cmd.extend(['--detach-sign', '--armor', '--local-user',
                    signer, '--output', sf, filename])
        logger.debug('invoking: %s', ' '.join(cmd))
        return cmd, sf