
        
            return replace_command(command, pgr, get_pkgfile(pgr))
    
        def test_get_aliases(self, shell):
        assert shell.get_aliases() == {'fish_config': 'fish_config',
                                       'fuck': 'fuck',
                                       'funced': 'funced',
                                       'funcsave': 'funcsave',
                                       'history': 'history',
                                       'll': 'll',
                                       'math': 'math',
                                       'popd': 'popd',
                                       'pushd': 'pushd',
                                       'ruby': 'ruby',
                                       'g': 'git',
                                       'fish_key_reader': '/usr/bin/fish_key_reader',
                                       'alias_with_equal_sign': 'echo'}
        assert shell.get_aliases() == {'func1': 'func1', 'func2': 'func2'}
    
        def test_get_version_error(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = RuntimeError
        with pytest.raises(RuntimeError):
            shell._get_version()
        assert Popen.call_args[0][0] == ['powershell.exe', '$PSVersionTable.PSVersion']

    
        def test_app_alias_variables_correctly_set(self, shell):
        alias = shell.app_alias('fuck')
        assert 'fuck () {' in alias
        assert 'TF_SHELL=zsh' in alias
        assert 'TF_ALIAS=fuck' in alias
        assert 'PYTHONIOENCODING=utf-8' in alias
        assert 'TF_SHELL_ALIASES=$(alias)' in alias
    }
    
        def _parse_alias(self, alias):
        name, value = alias.replace('alias ', '', 1).split('=', 1)
        if value[0] == value[-1] == ''' or value[0] == value[-1] == ''':
            value = value[1:-1]
        return name, value
    
    
def _get_used_executables(command):
    for script in get_valid_history_without_current(command):
        yield script.split(' ')[0]
    
    COMMON_TYPOS = {
    'list': ['versions', 'install --list'],
    'remove': ['uninstall'],
}
    
    
@pytest.mark.parametrize('command, result', [
    (Command('az providers list', misspelled_command), ['az provider list']),
    (Command('az provider lis', misspelled_subcommand), ['az provider list'])
])
def test_get_new_command(command, result):
    assert get_new_command(command) == result

    
    
@sudo_support
def get_new_command(command):
    invalid_operation = command.output.split()[-1]
    operations = _get_operations(command.script_parts[0])
    return replace_command(command, invalid_operation, operations)

    
        # The font size ('10pt', '11pt' or '12pt').
    #'pointsize': '10pt',
    
            # Draw a label with a name below the face
        text_width, text_height = draw.textsize(name)
        draw.rectangle(((left, bottom - text_height - 10), (right, bottom)), fill=(0, 0, 255), outline=(0, 0, 255))
        draw.text((left + 6, bottom - text_height - 5), name, fill=(255, 255, 255, 255))
    
        function_parameters = zip(
        images_to_check,
        itertools.repeat(model),
    )
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
    
    # Display the results
    for (top, right, bottom, left), name in zip(face_locations, face_names):
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
    predictor_68_point_model = face_recognition_models.pose_predictor_model_location()
pose_predictor_68_point = dlib.shape_predictor(predictor_68_point_model)
    
        #Parsing the arguments
    parser = argparse.ArgumentParser()
    parser.add_argument('dir_path', help = 'Path to tldr 'pages' directory')
    parser.add_argument('-c', choices=['solarized-light', 'solarized-dark'], help='Color scheme of the PDF')
    args = parser.parse_args()
    
    loc = args.dir_path
    if args.c == 'solarized-light' or args.c == 'solarized-dark':
        colorscheme = args.c
        
    main(loc, colorscheme)
