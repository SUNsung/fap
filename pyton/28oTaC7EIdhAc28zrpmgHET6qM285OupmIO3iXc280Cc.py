
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
            # Insert the include statement to MANIFEST.in if not present
        with open(manifest_path, 'a+') as manifest:
            manifest.seek(0)
            manifest_content = manifest.read()
            if not 'include fastentrypoints.py' in manifest_content:
                manifest.write(('\n' if manifest_content else '')
                               + 'include fastentrypoints.py')
    
    
def test_when_already_configured(usage_tracker_io, shell_pid,
                                 shell, shell_config, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    _change_tracker(usage_tracker_io, 12)
    shell_config.read.return_value = 'eval $(thefuck --alias)'
    main()
    logs.already_configured.assert_called_once()
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
def test_match():
    assert match(Command('sudo apt update', match_output))
    
            start = datetime.now()
        lasso = linear_model.LassoLars()
        lasso.fit(X, Y)
        time_lasso[i] = total_seconds(datetime.now() - start)
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
        for node in doctree.traverse(is_setting_index):
        targetnode = get_setting_target(node)
        assert isinstance(targetnode, nodes.target), 'Next node is not a target'
    
        if settings is None:
        settings = get_project_settings()
        # set EDITOR from environment if available
        try:
            editor = os.environ['EDITOR']
        except KeyError: pass
        else:
            settings['EDITOR'] = editor
    check_deprecated_settings(settings)
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)