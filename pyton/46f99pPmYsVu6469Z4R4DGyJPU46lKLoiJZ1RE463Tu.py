
        
        
def test_on_run_after_other_commands(usage_tracker_io, shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.get_history.return_value = ['fuck', 'ls']
    _change_tracker(usage_tracker_io, 12)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
    # TODO: ensure that history changes.

    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument command: Invalid choice, valid choices are:
    
    
output = '''sshfs: OsxfuseRequirement unsatisfied!
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_match(brew_no_available_formula, brew_already_installed,
               brew_install_no_argument):
    assert match(Command('brew install elsticsearch',
                         brew_no_available_formula))
    assert not match(Command('brew install git',
                             brew_already_installed))
    assert not match(Command('brew install', brew_install_no_argument))
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command
