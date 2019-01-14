
        
        
def test_on_first_run_from_current_shell(usage_tracker_io, shell_pid,
                                         shell, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    main()
    _assert_tracker_updated(usage_tracker_io, 12)
    logs.how_to_configure_alias.assert_called_once()
    
        assert proc.expect([TIMEOUT, u'Aborted'])
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    
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
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)