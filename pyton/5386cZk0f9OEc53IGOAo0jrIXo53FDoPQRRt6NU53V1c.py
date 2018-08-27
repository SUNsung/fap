
        
                When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
    
class Crawler(object):
    
    
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
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
     edit-sources - edit the source information file
'''
apt_operations = ['list', 'search', 'show', 'update', 'install', 'remove',
                  'upgrade', 'full-upgrade', 'edit-sources']
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
        DEFAULTS = {
        'default_options': []
    }
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
        It only operates on headers and provides a stronger contrast between
    their names and values than the original one bundled with Pygments
    (:class:`pygments.lexers.text import HttpLexer`), especially when
    Solarized color scheme is used.
    
    
class BaseStream(object):
    '''Base HTTP message output stream class.'''
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        json_kwargs = {}
    if options.pretty:
        json_kwargs.update({'indent': 4, 'sort_keys': True})
    json.dump(inventory, sys.stdout, **json_kwargs)
    
            try:
            cli.parse()
        except:
            pass
    
    filelist = [
    '/etc/oracle-release',
    '/etc/slackware-version',
    '/etc/redhat-release',
    '/etc/vmware-release',
    '/etc/openwrt_release',
    '/etc/system-release',
    '/etc/alpine-release',
    '/etc/release',
    '/etc/arch-release',
    '/etc/os-release',
    '/etc/SuSE-release',
    '/etc/gentoo-release',
    '/etc/os-release',
    '/etc/lsb-release',
    '/etc/altlinux-release',
    '/etc/os-release',
    '/etc/coreos/update.conf',
    '/usr/lib/os-release',
]
    
            # create the playbook executor, which manages running the plays via a task queue manager
        pbex = PlaybookExecutor(playbooks=self.args, inventory=inventory, variable_manager=variable_manager, loader=loader, options=self.options,
                                passwords=passwords)
    
    # Load some images to compare against
known_obama_image = face_recognition.load_image_file('obama.jpg')
known_biden_image = face_recognition.load_image_file('biden.jpg')
    
        # Loop through each person in the training set
    for class_dir in os.listdir(train_dir):
        if not os.path.isdir(os.path.join(train_dir, class_dir)):
            continue
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    import face_recognition
from flask import Flask, jsonify, request, redirect
    
        :param face_image: image to search
    :param face_locations: Optionally provide a list of face locations to check.
    :param model: Optional - which model to use. 'large' (default) or 'small' which only returns 5 points but is faster.
    :return: A list of dicts of face feature locations (eyes, nose, etc)
    '''
    landmarks = _raw_face_landmarks(face_image, face_locations, model)
    landmarks_as_tuples = [[(p.x, p.y) for p in landmark.parts()] for landmark in landmarks]
    
    # Load a second sample picture and learn how to recognize it.
biden_image = face_recognition.load_image_file('biden.jpg')
biden_face_encoding = face_recognition.face_encodings(biden_image)[0]
    
        # Find all the faces and face encodings in the current frame of video
    face_locations = face_recognition.face_locations(output)
    print('Found {} faces in image.'.format(len(face_locations)))
    face_encodings = face_recognition.face_encodings(output, face_locations)
    
    
if __name__ == '__main__':
    main()

    
    # Load the jpg file into a numpy array
image = face_recognition.load_image_file('two_people.jpg')