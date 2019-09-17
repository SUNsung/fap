
        
            def test_with_filled_cache(self, shelve, fn, key):
        cache_value = {key: {'etag': '0', 'value': 'new-value'}}
        shelve.update(cache_value)
        assert fn() == 'new-value'
        assert shelve == cache_value
    
    setup(name='thefuck',
      version=VERSION,
      description='Magnificent app which corrects your previous console command',
      long_description=long_description,
      author='Vladimir Iakovlev',
      author_email='nvbn.rm@gmail.com',
      url='https://github.com/nvbn/thefuck',
      license='MIT',
      packages=find_packages(exclude=['ez_setup', 'examples',
                                      'tests', 'tests.*', 'release']),
      include_package_data=True,
      zip_safe=False,
      install_requires=install_requires,
      extras_require=extras_require,
      entry_points={'console_scripts': [
          'thefuck = thefuck.entrypoints.main:main',
          'fuck = thefuck.entrypoints.not_configured:main']})

    
        def test_or_(self, shell):
        assert shell.or_('foo', 'bar') == 'foo; or bar'
    
        def test_get_version_error(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = OSError
        with pytest.raises(OSError):
            shell._get_version()
        assert Popen.call_args[0][0] == ['zsh', '-c', 'echo $ZSH_VERSION']

    
        def _get_version(self):
        '''Returns the version of the current shell'''
        proc = Popen(['tcsh', '--version'], stdout=PIPE, stderr=DEVNULL)
        return proc.stdout.read().decode('utf-8').split()[1]

    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
    
@sudo_support
def get_new_command(command):
    old_command = command.script_parts[0]
    
    
@sudo_support
def get_new_command(command):
    invalid_operation = command.output.split()[-1]
    operations = _get_operations(command.script_parts[0])
    return replace_command(command, invalid_operation, operations)

    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
# html_search_language = 'en'
    
    
    builtin_str = str
    bytes = str
    str = unicode
    basestring = basestring
    numeric_types = (int, long, float)
    integer_types = (int, long)
    
        def test_basic_waiting_server(self):
        '''the server waits for the block_server event to be set before closing'''
        block_server = threading.Event()
    
    #   __
#  /__)  _  _     _   _ _/   _
# / (   (- (/ (/ (- _)  /  _)
#          /
    
    
@pytest.mark.parametrize(
    'mapper',
    [
        lambda values, idx: {i: e for e, i in zip(values, idx)},
        lambda values, idx: pd.Series(values, idx),
    ],
)
def test_map_dictlike(idx, mapper):
    
            period_rng = ['2003', '2007', '2006', '2005', '2004']
        rng7 = pd.PeriodIndex(period_rng, freq='A')
        other7 = pd.period_range('1998-01-01', freq='A', periods=8)
        expected7 = pd.PeriodIndex(['2007', '2006'], freq='A')
    
                to_groupby = Index(
                [
                    datetime(2011, 11, 1),
                    datetime(2011, 12, 1),
                    pd.NaT,
                    pd.NaT,
                    datetime(2011, 12, 1),
                    datetime(2011, 11, 1),
                ],
                tz='UTC',
            ).values
    
        def test_tdi_isub_int(self, one):
        rng = timedelta_range('1 days 09:00:00', freq='H', periods=10)
        expected = timedelta_range('1 days 08:00:00', freq='H', periods=10)
        with tm.assert_produces_warning(FutureWarning, check_stacklevel=False):
            # GH#22535
            rng -= one
        tm.assert_index_equal(rng, expected)
    
            with pytest.raises(com.SettingWithCopyError):
            df.loc[2]['D'] = 'foo'