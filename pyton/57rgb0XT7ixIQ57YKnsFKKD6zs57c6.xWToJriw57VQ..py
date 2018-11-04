
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    
def build_completion(opt_parser):
    commands = []
    
    password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    if __name__ == '__main__':
    main()

    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
    
    compat_print('total downloads traffic: %s' % format_size(total_bytes))

    
    import os
from os.path import dirname as dirn
import sys
    
    from test.helper import try_rm
    
        def test_facebook_matching(self):
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/Shiniknoh#!/photo.php?v=10153317450565268'))
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/cindyweather?fref=ts#!/photo.php?v=10152183998945793'))
    
    from .search import SearchVector, SearchVectorExact, SearchVectorField
    
        def create_model_instance(self, data):
        '''
        Return a new instance of the session model object, which represents the
        current session state. Intended to be used for saving the session data
        to the database.
        '''
        return self.model(
            session_key=self._get_or_create_session_key(),
            session_data=self.encode(data),
            expire_date=self.get_expiry_date(),
        )
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
        def allow_relation(self, obj1, obj2, **hints):
        for router in self.routers:
            try:
                method = router.allow_relation
            except AttributeError:
                # If the router doesn't have a method, skip to the next one.
                pass
            else:
                allow = method(obj1, obj2, **hints)
                if allow is not None:
                    return allow
        return obj1._state.db == obj2._state.db
    
        @classmethod
    def default_encoder(cls, value):
        return pyrfc3339.generate(value)
    
    # The reST default role (used for this markup: `text`) to use for all
# documents.
default_role = 'py:obj'
    
    
DIRECTORY_URL = 'https://acme-staging.api.letsencrypt.org/directory'
BITS = 2048  # minimum for Boulder
DOMAIN = 'example1.com'  # example.com is ignored by Boulder
    
        :ivar str save_notes: Human-readable configuration change notes
    :ivar reverter: saves and reverts checkpoints
    :type reverter: :class:`certbot.reverter.Reverter`
    
    MANAGED_COMMENT = 'DO NOT REMOVE - Managed by Certbot'
MANAGED_COMMENT_ID = MANAGED_COMMENT+', VirtualHost id: {0}'
'''Managed by Certbot comments and the VirtualHost identification template'''

    
        def __str__(self):
        return (
            'File: {filename}\n'
            'Vhost path: {vhpath}\n'
            'Addresses: {addrs}\n'
            'Name: {name}\n'
            'Aliases: {aliases}\n'
            'TLS Enabled: {tls}\n'
            'Site Enabled: {active}\n'
            'mod_macro Vhost: {modmacro}'.format(
                filename=self.filep,
                vhpath=self.path,
                addrs=', '.join(str(addr) for addr in self.addrs),
                name=self.name if self.name is not None else '',
                aliases=', '.join(name for name in self.aliases),
                tls='Yes' if self.ssl else 'No',
                active='Yes' if self.enabled else 'No',
                modmacro='Yes' if self.modmacro else 'No'))
    
            self.vh_truth = util.get_vh_truth(
            self.temp_dir, 'debian_apache_2_4/multiple_vhosts')
    
        :param train_dir: directory that contains a sub-directory for each known person, with its name.
    
        :param faces: List of face encodings to compare
    :param face_to_compare: A face encoding to compare against
    :return: A numpy ndarray with the distance for each face in the same order as the 'faces' array
    '''
    if len(face_encodings) == 0:
        return np.empty((0))
    
    
def process_images_in_process_pool(images_to_check, number_of_cpus, model):
    if number_of_cpus == -1:
        processes = None
    else:
        processes = number_of_cpus
    
            # Draw a label with a name below the face
        cv2.rectangle(frame, (left, bottom - 35), (right, bottom), (0, 0, 255), cv2.FILLED)
        font = cv2.FONT_HERSHEY_DUPLEX
        cv2.putText(frame, name, (left + 6, bottom - 6), font, 1.0, (255, 255, 255), 1)
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # Create a PIL imagedraw object so we can draw on the picture
pil_image = Image.fromarray(image)
d = ImageDraw.Draw(pil_image)
    
        face_found = False
    is_obama = False