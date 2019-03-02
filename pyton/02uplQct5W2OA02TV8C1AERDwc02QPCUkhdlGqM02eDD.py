
        
            def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
    
class LookupService(object):
    
    
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    tensorboard = TensorBoard(batch_size=batch_size,
                          embeddings_freq=1,
                          embeddings_layer_names=['features'],
                          embeddings_metadata='metadata.tsv',
                          embeddings_data=x_test)
    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='regularizer')
    
    
def test_boston_housing():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = boston_housing.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
    
        ```python
    # Consider an array of 5 labels out of a set of 3 classes {0, 1, 2}:
    > labels
    array([0, 2, 1, 2, 0])
    # `to_categorical` converts this into a matrix with as many
    # columns as there are classes. The number of rows
    # stays the same.
    > to_categorical(labels)
    array([[ 1.,  0.,  0.],
           [ 0.,  0.,  1.],
           [ 0.,  1.,  0.],
           [ 0.,  0.,  1.],
           [ 1.,  0.,  0.]], dtype=float32)
    ```
    '''
    
        # Note on using statefulness in RNNs
        You can set RNN layers to be 'stateful', which means that the states
        computed for the samples in one batch will be reused as initial states
        for the samples in the next batch. This assumes a one-to-one mapping
        between samples in different successive batches.
    
        return strings

    
    
class settingslist_node(nodes.General, nodes.Element):
    pass
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
    def _iter_command_classes(module_name):
    # TODO: add `name` attribute to commands and and merge this function with
    # scrapy.utils.spider.iter_spider_classes
    for module in walk_modules(module_name):
        for obj in vars(module).values():
            if inspect.isclass(obj) and \
                    issubclass(obj, ScrapyCommand) and \
                    obj.__module__ == module.__name__ and \
                    not obj == ScrapyCommand:
                yield obj
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
            assertion = (self.min_bound <= occurrences <= self.max_bound)
    
            def __init__(self, method=SSL.SSLv23_METHOD):
            self.method = method
    
            # If no credentials could be found anywhere,
        # consider this an anonymous connection request by default;
        # unless 'anon' was set explicitly (True/False).
        anon = kw.get('anon')
        if anon is None and not aws_access_key_id and not aws_secret_access_key:
            kw['anon'] = True
        self.anon = kw.get('anon')
    
    
    
        @classmethod
    def default_decoder(cls, value):
        try:
            return pyrfc3339.parse(value)
        except ValueError as error:
            raise jose.DeserializationError(error)
    
        # Interesting findings about extended paths:
    # - '\\?\c:\a', '//?/c:\a' and '//?/c:/a' are all supported
    #   but '\\?\c:/a' is not
    # - extended paths are always absolute; 'relative' extended paths will
    #   fail.
    
            '''
        if _is_sunder(key):
            if key not in (
                    '_order_', '_create_pseudo_member_',
                    '_generate_next_value_', '_missing_', '_ignore_',
                    ):
                raise ValueError('_names_ are reserved for future Enum use')
            if key == '_generate_next_value_':
                setattr(self, '_generate_next_value', value)
            elif key == '_ignore_':
                if isinstance(value, str):
                    value = value.replace(',',' ').split()
                else:
                    value = list(value)
                self._ignore = value
                already = set(value) & set(self._member_names)
                if already:
                    raise ValueError('_ignore_ cannot specify already set names: %r' % (already, ))
        elif _is_dunder(key):
            if key == '__order__':
                key = '_order_'
        elif key in self._member_names:
            # descriptor overwriting an enum?
            raise TypeError('Attempted to reuse key: %r' % key)
        elif key in self._ignore:
            pass
        elif not _is_descriptor(value):
            if key in self:
                # enum overwriting a descriptor?
                raise TypeError('%r already defined as: %r' % (key, self[key]))
            if isinstance(value, auto):
                if value.value == _auto_null:
                    value.value = self._generate_next_value(key, 1, len(self._member_names), self._last_values[:])
                value = value.value
            self._member_names.append(key)
            self._last_values.append(value)
        super().__setitem__(key, value)
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
        def testBadArgs(self):
        self.assertRaises(TypeError, BZ2File, 123.456)
        self.assertRaises(ValueError, BZ2File, os.devnull, 'z')
        self.assertRaises(ValueError, BZ2File, os.devnull, 'rx')
        self.assertRaises(ValueError, BZ2File, os.devnull, 'rbt')
        self.assertRaises(ValueError, BZ2File, os.devnull, compresslevel=0)
        self.assertRaises(ValueError, BZ2File, os.devnull, compresslevel=10)
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    from multiprocessing import Process, Queue, current_process, freeze_support