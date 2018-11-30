
        
            # Then we call the sorting method
    sort_blocks()
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.lookup.get(query)
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
            new_node = Node(results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
    
def build_completion(opt_parser):
    commands = []
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
        def assertMatch(self, url, ie_list):
        self.assertEqual(self.matching_ies(url), ie_list)
    
    
@pytest.fixture(autouse=True)
def settings(request):
    def _reset_settings():
        conf.settings.clear()
        conf.settings.update(const.DEFAULT_SETTINGS)
    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
        print(' - Face locations: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_locate_faces.format(image), test_locate_faces)))
    print(' - Face landmarks: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_face_landmarks.format(image), test_face_landmarks)))
    print(' - Encode face (inc. landmarks): {:.4f}s ({:.2f} fps)'.format(*run_test(setup_encode_face.format(image), test_encode_face)))
    print(' - End-to-end: {:.4f}s ({:.2f} fps)'.format(*run_test(setup_end_to_end.format(image), test_end_to_end)))
    print()

    
        # Make the eyebrows into a nightmare
    d.polygon(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 128))
    d.polygon(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 128))
    d.line(face_landmarks['left_eyebrow'], fill=(68, 54, 39, 150), width=5)
    d.line(face_landmarks['right_eyebrow'], fill=(68, 54, 39, 150), width=5)
    
    import face_recognition
from flask import Flask, jsonify, request, redirect
    
        # Draw a box around the face using the Pillow module
    draw.rectangle(((left, top), (right, bottom)), outline=(0, 0, 255))
    
        def test_command_line_interface_big_image(self):
        target_string = 'obama3.jpg,obama'
        runner = CliRunner()
        image_folder = os.path.join(os.path.dirname(__file__), 'test_images')
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama3.jpg')