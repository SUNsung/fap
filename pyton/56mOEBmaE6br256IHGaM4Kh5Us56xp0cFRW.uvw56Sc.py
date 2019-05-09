
        
        def _make_failed_load_tests(name, exception, suiteClass):
    message = 'Failed to call load_tests:\n%s' % (traceback.format_exc(),)
    return _make_failed_test(
        name, exception, suiteClass, message)
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
        print('-' * 20)
    
    References:
    tensorlayer.layers.Conv2dLayer
'''
import tensorflow as tf
    
        def _build(self, n_input):
        ''''''
        with tf.variable_scope(self.name or 'dense'):
            self.W, self.b = get_wb([n_input, self.n_unit])
    
      {} requires <code>A File Icon</code> package for enhanced<br>support of
  the file-specific icons.
  <br><br>Would you like to install it?<br>
  <br><a href='install'>Install</a> <a href='cancel'>Cancel</a>
</div>
'''.format(THEME_NAME)
    
    
def revert_ui_theme(path):
  set_ui_theme(path)
    
        :param repo_dir: Local directory of newly cloned repo.
    :returns project_template: Relative path to project template.
    '''
    logger.debug('Searching {} for the project template.'.format(repo_dir))
    
    # If false, no index is generated.
#epub_use_index = True
    
            # Carefully delete the created ~/.cookiecutter_replay dir only in
        # certain conditions.
        restore_backup_dir(
            cookiecutter_replay_dir,
            cookiecutter_replay_dir_backup,
            cookiecutter_replay_dir_found
        )
    
    
@pytest.fixture
def replay_file(replay_test_dir, template_name):
    '''Fixture to return a actual file name of the dump.'''
    file_name = '{}.json'.format(template_name)
    return os.path.join(replay_test_dir, file_name)
    
        assert str(err.value) == (
        'A valid repository for '{}' could not be found in the following '
        'locations:\n{}'.format(
            template_path,
            '\n'.join([
                template_path,
                str(tmpdir / 'tests/unknown-repo')
            ]),
        )
    )
