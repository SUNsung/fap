
        
                self.config.redirect = None
        self.config.hsts = True
        with mock.patch('certbot.client.logger') as mock_logger:
            self.client.enhance_config([self.domain], None)
        self.assertEqual(mock_logger.warning.call_count, 1)
        self.client.installer.enhance.assert_not_called()
        mock_enhancements.ask.assert_not_called()
    
    
def certbot_test(certbot_args, directory_url, http_01_port, tls_alpn_01_port,
                 config_dir, workspace, force_renew=True):
    '''
    Invoke the certbot executable available in PATH in a test context for the given args.
    The test context consists in running certbot in debug mode, with various flags suitable
    for tests (eg. no ssl check, customizable ACME challenge ports and config directory ...).
    This command captures stdout and returns it to the caller.
    :param list certbot_args: the arguments to pass to the certbot executable
    :param str directory_url: URL of the ACME directory server to use
    :param int http_01_port: port for the HTTP-01 challenges
    :param int tls_alpn_01_port: port for the TLS-ALPN-01 challenges
    :param str config_dir: certbot configuration directory to use
    :param str workspace: certbot current directory to use
    :param bool force_renew: set False to not force renew existing certificates (default: True)
    :return: stdout as string
    :rtype: str
    '''
    command, env = _prepare_args_env(certbot_args, directory_url, http_01_port, tls_alpn_01_port,
                                     config_dir, workspace, force_renew)
    
    
class PipenvFileError(FileError):
    formatted_message = '{0} {{0}} {{1}}'.format(
        crayons.red('ERROR:', bold=True)
    )
    
    
        more_reqs = []  # type: List[InstallRequirement]
    
        @property
    def allow_unknown(self):
        ''' If ``True`` unknown fields that are not defined in the schema will
            be ignored. If a mapping with a validation schema is given, any
            undefined field will be validated against its rules.
            Also see :ref:`allowing-the-unknown`.
            Type: :class:`bool` or any :term:`mapping` '''
        return self._config.get('allow_unknown', False)
    
            networking_config = self.build_default_networking_config()
        if networking_config:
            container_options['networking_config'] = networking_config
    
    
def is_url(build_path):
    return build_path.startswith(DOCKER_VALID_URL_PREFIXES)
    
            self._set_legacy_flag()
        try:
            data = self.inspect(legacy=self.legacy)
            check_remote_network_config(data, self)
        except NotFound:
            driver_name = 'the default driver'
            if self.driver:
                driver_name = 'driver '{}''.format(self.driver)
    
        def legacy_repr(self):
        return self.as_volume_spec().repr()
    
        @property
    def image(self):
        return self.dictionary['Image']
    
        def test_project_name_with_explicit_project_name(self):
        name = 'explicit-project-name'
        project_name = get_project_name(None, project_name=name)
        assert 'explicit-project-name' == project_name
    
    COMPOSEFILE_V1 = ComposeVersion('1')
COMPOSEFILE_V2_0 = ComposeVersion('2.0')
COMPOSEFILE_V2_1 = ComposeVersion('2.1')
COMPOSEFILE_V2_2 = ComposeVersion('2.2')
COMPOSEFILE_V2_3 = ComposeVersion('2.3')
COMPOSEFILE_V2_4 = ComposeVersion('2.4')