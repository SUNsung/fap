
        
        
try:
    if int(pkg_resources.get_distribution('pip').version.split('.')[0]) < 6:
        print('pip older than 6.0 not supported, please upgrade pip with:\n\n'
              '    pip install -U pip')
        sys.exit(-1)
except pkg_resources.DistributionNotFound:
    pass
    
        @pytest.mark.parametrize('key, value', [
        ('TF_OVERRIDDEN_ALIASES', 'cut,git,sed'),  # legacy
        ('THEFUCK_OVERRIDDEN_ALIASES', 'cut,git,sed'),
        ('THEFUCK_OVERRIDDEN_ALIASES', 'cut, git, sed'),
        ('THEFUCK_OVERRIDDEN_ALIASES', ' cut,\tgit,sed\n'),
        ('THEFUCK_OVERRIDDEN_ALIASES', '\ncut,\n\ngit,\tsed\r')])
    def test_get_overridden_aliases(self, shell, os_environ, key, value):
        os_environ[key] = value
        overridden = shell._get_overridden_aliases()
        assert set(overridden) == {'cd', 'cut', 'git', 'grep',
                                   'ls', 'man', 'open', 'sed'}
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {}
    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['tcsh', '--version'], stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').split()[1]

    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
    
@pytest.mark.parametrize('script, output', [
    ('pyenv global', 'system'),
    ('pyenv versions', '  3.7.0\n  3.7.1\n* 3.7.2\n'),
    ('pyenv install --list', '  3.7.0\n  3.7.1\n  3.7.2\n'),
])
def test_not_match(script, output):
    assert not match(Command(script, output=output))
    
    
def save_model_to_weights_file(weights_file, model):
    '''Stash model weights in a dictionary and pickle them to a file. We map
    GPU device scoped names to unscoped names (e.g., 'gpu_0/conv1_w' ->
    'conv1_w').
    '''
    logger.info(
        'Saving parameters and momentum to {}'.format(
            os.path.abspath(weights_file)))
    blobs = {}
    # Save all parameters
    for param in model.params:
        scoped_name = str(param)
        unscoped_name = c2_utils.UnscopeName(scoped_name)
        if unscoped_name not in blobs:
            logger.debug(' {:s} -> {:s}'.format(scoped_name, unscoped_name))
            blobs[unscoped_name] = workspace.FetchBlob(scoped_name)
    # Save momentum
    for param in model.TrainableParams():
        scoped_name = str(param) + '_momentum'
        unscoped_name = c2_utils.UnscopeName(scoped_name)
        if unscoped_name not in blobs:
            logger.debug(' {:s} -> {:s}'.format(scoped_name, unscoped_name))
            blobs[unscoped_name] = workspace.FetchBlob(scoped_name)
    # Save preserved blobs
    for scoped_name in workspace.Blobs():
        if scoped_name.startswith('__preserve__/'):
            unscoped_name = c2_utils.UnscopeName(scoped_name)
            if unscoped_name not in blobs:
                logger.debug(
                    ' {:s} -> {:s} (preserved)'.format(
                        scoped_name, unscoped_name))
                blobs[unscoped_name] = workspace.FetchBlob(scoped_name)
    cfg_yaml = envu.yaml_dump(cfg)
    save_object(dict(blobs=blobs, cfg=cfg_yaml), weights_file)
    
    logger = logging.getLogger(__name__)
    
        version=itchat.__version__,