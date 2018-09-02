
        
        
def check_entry(line_num, segments):
    # START Title
    title = segments[index_title].upper()
    if title.endswith(' API'):
        add_error(line_num, 'Title should not contain 'API'')
    # END Title
    # START Description
    # first character should be capitalized
    char = segments[index_desc][0]
    if char.upper() != char:
        add_error(line_num, 'first character of description is not capitalized')
    # last character should not punctuation
    char = segments[index_desc][-1]
    if char in punctuation:
        add_error(line_num, 'description should not end with {}'.format(char))
    desc_length = len(segments[index_desc])
    if desc_length > 100:
        add_error(line_num, 'description should not exceed 100 characters (currently {})'.format(desc_length))
    # END Description
    # START Auth
    # values should conform to valid options only
    auth = segments[index_auth]
    if auth != 'No' and (not auth.startswith('`') or not auth.endswith('`')):
        add_error(line_num, 'auth value is not enclosed with `backticks`')
    if auth.replace('`', '') not in auth_keys:
        add_error(line_num, '{} is not a valid Auth option'.format(auth))
    # END Auth
    # START HTTPS
    # values should conform to valid options only
    https = segments[index_https]
    if https not in https_keys:
        add_error(line_num, '{} is not a valid HTTPS option'.format(https))
    # END HTTPS
    # START CORS
    # values should conform to valid options only
    cors = segments[index_cors]
    if cors not in cors_keys:
        add_error(line_num, '{} is not a valid CORS option'.format(cors))
    # END CORS
    # START Link
    # url should be wrapped in '[Go!]()' Markdown syntax
    link = segments[index_link]
    if not link.startswith('[Go!](http') or not link.endswith(')'):
        add_error(line_num, 'link syntax should be '[Go!](LINK)'')
    if link in previous_links:
        add_error(line_num, 'duplicate link - entries should only be included in one section')
    else:
        previous_links.append(link)
    # END Link
    
    install_requires = ['psutil', 'colorama', 'six', 'decorator', 'pyte']
extras_require = {':python_version<'3.4'': ['pathlib2'],
                  ':python_version<'3.3'': ['backports.shutil_get_terminal_size'],
                  ':sys_platform=='win32'': ['win_unicode_console']}
    
    
@pytest.fixture(autouse=True)
def shell_config(mocker):
    path_mock = mocker.patch('thefuck.entrypoints.not_configured.Path',
                             new_callable=MagicMock)
    return path_mock.return_value \
        .expanduser.return_value \
        .open.return_value \
        .__enter__.return_value
    
        proc.sendline(u'ehco test')
    
    # TODO: ensure that history changes.

    
    
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
    
      aws help
  aws <command> help
  aws <command> <subcommand> help
aws: error: argument operation: Invalid choice, valid choices are:
    
    
output = '''sshfs: OsxfuseRequirement unsatisfied!
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
        def call(self, inputs):
        inputs -= K.mean(inputs, axis=1, keepdims=True)
        inputs = K.l2_normalize(inputs, axis=1)
        pos = K.relu(inputs)
        neg = K.relu(-inputs)
        return K.concatenate([pos, neg], axis=1)
    
    The test data is embedded using the weights of the final dense layer, just
before the classification head. This embedding can then be visualized using
TensorBoard's Embedding Projector.
'''
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    assert 0 <= test_split < 1
    path = get_file(path,
                    origin='https://s3.amazonaws.com/keras-datasets/boston_housing.npz',
                    file_hash='f553886a1f8d56431e820c5b82552d9d95cfcb96d1e678153f8839538947dff5')
    f = np.load(path)
    x = f['x']
    y = f['y']
    f.close()
    
        with gzip.open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8,
                                offset=16).reshape(len(y_train), 28, 28)
    
            self.kernel_constraint = constraints.get(kernel_constraint)
        self.recurrent_constraint = constraints.get(recurrent_constraint)
        self.bias_constraint = constraints.get(bias_constraint)
    
        plt.legend(['Ridge', 'OLS', 'LassoLars'], loc='upper left')
    plt.axis('tight')
    plt.show()

    
        n_features = 10
    list_n_samples = np.linspace(100, 1000000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, list_n_samples,
                                            [n_features], precompute=True)
    
    The input data is mostly low rank but is a fat infinite tail.
'''
from __future__ import print_function
    
    import time
    
        if path_details['type'] == 'symlink':
        symlinks[name] = json_urlread(path_details['_links']['self'])['target']
    
    
if __name__ == '__main__':