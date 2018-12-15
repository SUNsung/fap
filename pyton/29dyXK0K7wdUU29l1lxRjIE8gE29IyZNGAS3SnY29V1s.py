
def test_when_cant_configure_automatically(shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=False)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.mark.parametrize('script, output', [
    ('vim', invalid_operation('vim')),
    ('apt-get', '')])
def test_not_match(script, output):
    assert not match(Command(script, output))
    
    no_match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Get:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease [89.2 kB]
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Get:4 http://security.ubuntu.com/ubuntu zesty-security InRelease [89.2 kB]
Hit:5 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Hit:6 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:7 https://download.docker.com/linux/ubuntu zesty InRelease
Get:8 http://us.archive.ubuntu.com/ubuntu zesty-updates/main i386 Packages [232 kB]
Get:9 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 Packages [235 kB]
Get:10 http://us.archive.ubuntu.com/ubuntu zesty-updates/main amd64 DEP-11 Metadata [55.2 kB]
Get:11 http://us.archive.ubuntu.com/ubuntu zesty-updates/main DEP-11 64x64 Icons [32.3 kB]
Get:12 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 Packages [156 kB]
Get:13 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe i386 Packages [156 kB]
Get:14 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe amd64 DEP-11 Metadata [175 kB]
Get:15 http://us.archive.ubuntu.com/ubuntu zesty-updates/universe DEP-11 64x64 Icons [253 kB]
Get:16 http://us.archive.ubuntu.com/ubuntu zesty-updates/multiverse amd64 DEP-11 Metadata [5,840 B]
Get:17 http://us.archive.ubuntu.com/ubuntu zesty-backports/universe amd64 DEP-11 Metadata [4,588 B]
Get:18 http://security.ubuntu.com/ubuntu zesty-security/main amd64 DEP-11 Metadata [12.7 kB]
Get:19 http://security.ubuntu.com/ubuntu zesty-security/main DEP-11 64x64 Icons [17.6 kB]
Get:20 http://security.ubuntu.com/ubuntu zesty-security/universe amd64 DEP-11 Metadata [21.6 kB]
Get:21 http://security.ubuntu.com/ubuntu zesty-security/universe DEP-11 64x64 Icons [47.7 kB]
Get:22 http://security.ubuntu.com/ubuntu zesty-security/multiverse amd64 DEP-11 Metadata [208 B]
Fetched 1,673 kB in 0s (1,716 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
All packages are up to date.
'''
    
    \tDid you mean `build`?
'''
    
      * glmnet-python
  * scikit-learn (of course)
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
    The input data is mostly low rank but is a fat infinite tail.
'''
from __future__ import print_function
    
        for i, kk in enumerate(krange):
        print('k = %i (%i out of %i)' % (kk, i + 1, len(krange)))
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=kk,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
        print('Benchmarks')
    print('===========================')
    
    from __future__ import print_function
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
        def test_exception_propagation(self):
        def f(p):
            1/0
        def g(p):
            try: f(p)
            finally: p.add_event('falling through')
        f_ident = ident(f)
        g_ident = ident(g)
        self.check_events(g, [(1, 'call', g_ident),
                              (2, 'call', f_ident),
                              (2, 'return', f_ident),
                              (1, 'falling through', g_ident),
                              (1, 'return', g_ident),
                              ])
    
    # If we want to print a preview of the message content, we can extract whatever
# the least formatted payload is and print the first three lines.  Of course,
# if the message has no plain text part printing the first three lines of html
# is probably useless, but this is just a conceptual example.
simplest = msg.get_body(preferencelist=('plain', 'html'))
print()
print(''.join(simplest.get_content().splitlines(keepends=True)[:3]))
    
    
if __name__ == '__main__':
    main()

    
            it = pool.imap(f, list(range(10)))
        for i in range(10):
            try:
                x = next(it)
            except ZeroDivisionError:
                if i == 5:
                    pass
            except StopIteration:
                break
            else:
                if i == 5:
                    raise AssertionError('expected ZeroDivisionError')
    
    con = sqlite3.connect(':memory:')
con.isolation_level = None
cur = con.cursor()