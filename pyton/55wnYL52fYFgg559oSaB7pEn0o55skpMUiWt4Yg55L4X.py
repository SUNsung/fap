
        
            if module.params.get('max_items') or module.params.get('next_marker'):
        module.fail_json(msg='Cannot specify max_items nor next_marker for query=policy.')
    
            _ports = []
        for port in ports:
            _port = oneandone.client.Port(
                protocol=port['protocol'],
                port=port['port'],
                alert_if=port['alert_if'],
                email_notification=str(port['email_notification']).lower())
            _ports.append(_port)
    
            rule['dest_port'] = str(rule.get('dest_port', 'Any')).lower()
        rule['dest_ip'] = rule.get('dest_ip', 'Any').lower()
        rule['source_port'] = str(rule.get('source_port', 'Any')).lower()
        rule['source_ip'] = rule.get('source_ip', 'Any').lower()
        rule['protocol'] = rule.get('protocol', 'Any').lower()
        rule['policy'] = rule.get('policy', 'allow').lower()
        rule['is_enable'] = rule.get('is_enable', True)
        rule['enable_logging'] = rule.get('enable_logging', False)
        rule['description'] = rule.get('description', 'rule added by Ansible')
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
        MONIT_MAJOR_VERSION, MONIT_MINOR_VERSION = monit_version()
    
    
DOCUMENTATION = '''
---
module: spectrum_device
short_description: Creates/deletes devices in CA Spectrum.
description:
   - This module allows you to create and delete devices in CA Spectrum U(https://www.ca.com/us/products/ca-spectrum.html).
   - Tested on CA Spectrum 9.4.2, 10.1.1 and 10.2.1
version_added: '2.6'
author: 'Renato Orgito (@orgito)'
options:
    device:
        aliases: [ host, name ]
        required: true
        description:
            - IP address of the device.
            - If a hostname is given, it will be resolved to the IP address.
    community:
        description:
            - SNMP community used for device discovery.
            - Required when C(state=present).
    landscape:
        required: true
        description:
            - Landscape handle of the SpectroServer to which add or remove the device.
    state:
        required: false
        description:
            - On C(present) creates the device when it does not exist.
            - On C(absent) removes the device when it exists.
        choices: ['present', 'absent']
        default: 'present'
    url:
        aliases: [ oneclick_url ]
        required: true
        description:
            - HTTP, HTTPS URL of the Oneclick server in the form (http|https)://host.domain[:port]
    url_username:
        aliases: [ oneclick_user ]
        required: true
        description:
            - Oneclick user name.
    url_password:
        aliases: [ oneclick_password ]
        required: true
        description:
            - Oneclick user password.
    use_proxy:
        required: false
        description:
            - if C(no), it will not use a proxy, even if one is defined in an environment
                variable on the target hosts.
        default: 'yes'
        type: bool
    validate_certs:
        required: false
        description:
            - If C(no), SSL certificates will not be validated. This should only be used
                on personally controlled sites using self-signed certificates.
        default: 'yes'
        type: bool
    agentport:
        required: false
        description:
            - UDP port used for SNMP discovery.
        default: 161
notes:
   -  The devices will be created inside the I(Universe) container of the specified landscape.
   -  All the operations will be performed only on the specified landscape.
'''
    
        def test_url_collapse_path(self):
        # verify tail is the last portion and head is the rest on proper urls
        test_vectors = {
            '': '//',
            '..': IndexError,
            '/.//..': IndexError,
            '/': '//',
            '//': '//',
            '/\\': '//\\',
            '/.//': '//',
            'cgi-bin/file1.py': '/cgi-bin/file1.py',
            '/cgi-bin/file1.py': '/cgi-bin/file1.py',
            'a': '//a',
            '/a': '//a',
            '//a': '//a',
            './a': '//a',
            './C:/': '/C:/',
            '/a/b': '/a/b',
            '/a/b/': '/a/b/',
            '/a/b/.': '/a/b/',
            '/a/b/c/..': '/a/b/',
            '/a/b/c/../d': '/a/b/d',
            '/a/b/c/../d/e/../f': '/a/b/d/f',
            '/a/b/c/../d/e/../../f': '/a/b/f',
            '/a/b/c/../d/e/.././././..//f': '/a/b/f',
            '../a/b/c/../d/e/.././././..//f': IndexError,
            '/a/b/c/../d/e/../../../f': '/a/f',
            '/a/b/c/../d/e/../../../../f': '//f',
            '/a/b/c/../d/e/../../../../../f': IndexError,
            '/a/b/c/../d/e/../../../../f/..': '//',
            '/a/b/c/../d/e/../../../../f/../.': '//',
        }
        for path, expected in test_vectors.items():
            if isinstance(expected, type) and issubclass(expected, Exception):
                self.assertRaises(expected,
                                  server._url_collapse_path, path)
            else:
                actual = server._url_collapse_path(path)
                self.assertEqual(expected, actual,
                                 msg='path = %r\nGot:    %r\nWanted: %r' %
                                 (path, actual, expected))
    
    handleSlideshow(dom)

    
    def test():
    NUMBER_OF_PROCESSES = 4
    TASKS1 = [(mul, (i, 7)) for i in range(20)]
    TASKS2 = [(plus, (i, 8)) for i in range(10)]
    
    cur.execute('insert into test(p) values (?)', (p,))
cur.execute('select p from test')
print('with declared types:', cur.fetchone()[0])
cur.close()
con.close()
    
    latex_elements = {
    # The paper size ('letterpaper' or 'a4paper').
    #'papersize': 'letterpaper',
    }
    
        # Display the results
    for top, right, bottom, left in face_locations:
        # Scale back up face locations since the frame we detected in was scaled to 1/4 size
        top *= 4
        right *= 4
        bottom *= 4
        left *= 4
    
        pool.starmap(test_image, function_parameters)
    
        def test_compare_faces(self):
        img_a1 = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg'))
        img_a2 = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama2.jpg'))
        img_a3 = api.load_image_file(os.path.join(os.path.dirname(__file__), 'test_images', 'obama3.jpg'))
    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    
def _raw_face_landmarks(face_image, face_locations=None, model='large'):
    if face_locations is None:
        face_locations = _raw_face_locations(face_image)
    else:
        face_locations = [_css_to_rect(face_location) for face_location in face_locations]
    
    # Load a sample picture and learn how to recognize it.
obama_image = face_recognition.load_image_file('obama.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
    # Load an image with an unknown face
unknown_image = face_recognition.load_image_file('two_people.jpg')
    
    
# Get next worker's id
def next_id(current_id):
    if current_id == worker_num:
        return 1
    else:
        return current_id + 1
    
    # Predict all the faces in the test image using the trained classifier
print('Found: \n')
for i in range(no):
    test_image_enc = face_recognition.face_encodings(test_image)[i]
    name = clf.predict([test_image_enc])
    print(*name)

    
    
if __name__ == '__main__':
    ''''''
    # _test()
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')
    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()
    
        output_directory = 'pdfs' if results.directory is None else results.directory
    
                filter_out=True: Remove faces that match in the hashlist
            filter_out=False: Remove faces that are not in the hashlist
        '''
        hashset = set(hashlist)
        for filename, frame in self.data.items():
            for idx, face in reversed(list(enumerate(frame))):
                if ((filter_out and face.get('hash', None) in hashset) or
                        (not filter_out and face.get('hash', None) not in hashset)):
                    logger.verbose('Filtering out face: (filename: %s, index: %s)', filename, idx)
                    del frame[idx]
                else:
                    logger.trace('Not filtering out face: (filename: %s, index: %s)',
                                 filename, idx)
    
            for side in ('a', 'b'):
            decoder = self.networks['decoder_{}'.format(side)].network
            output = decoder(self.networks['encoder'].network(inputs[0]))
            autoencoder = KerasModel(inputs, output)
            self.add_predictor(side, autoencoder)
        logger.debug('Initialized model')
    
    
class Model(ModelBase):
    ''' Improved Autoeencoder Model '''
    def __init__(self, *args, **kwargs):
        logger.debug('Initializing %s: (args: %s, kwargs: %s',
                     self.__class__.__name__, args, kwargs)
        kwargs['input_shape'] = (64, 64, 3)
        kwargs['encoder_dim'] = 1024
        super().__init__(*args, **kwargs)
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def set_control(self, option):
        ''' Set the control and filesystem browser to use for each option '''
        sysbrowser = None
        action = option.get('action', None)
        action_option = option.get('action_option', None)
        filetypes = option.get('filetypes', None)
        ctl = ttk.Entry
        if action in (cli.FullPaths,
                      cli.DirFullPaths,
                      cli.FileFullPaths,
                      cli.FilesFullPaths,
                      cli.DirOrFileFullPaths,
                      cli.SaveFileFullPaths,
                      cli.ContextFullPaths):
            sysbrowser, filetypes = self.set_sysbrowser(action,
                                                        filetypes,
                                                        action_option)
        elif option.get('min_max', None):
            ctl = ttk.Scale
        elif option.get('action', '') == cli.Radio:
            ctl = ttk.Radiobutton
        elif option.get('choices', '') != '':
            ctl = ttk.Combobox
        elif option.get('action', '') == 'store_true':
            ctl = ttk.Checkbutton
        return ctl, sysbrowser, filetypes, action_option
    
    
class ImagePatches(plaidml.tile.Operation):
    '''
    Compatible to tensorflow.extract_image_patches.
    Extract patches from images and put them in the 'depth' output dimension.
    Args:
        images: A tensor with a shape of [batch, rows, cols, depth]
        ksizes: The size of the oatches with a shape of [1, patch_rows, patch_cols, 1]
        strides: How far the center of two patches are in the image with a shape
                    of [1, stride_rows, stride_cols, 1]
        rates: How far two consecutive pixel are in the input. Equivalent to dilation.
                Expect shape of [1, rate_rows, rate_cols, 1]
        padding: A string of 'VALID' or 'SAME' defining padding.
    '''
    def __init__(self, images, ksizes, strides, rates=(1, 1, 1, 1), padding='VALID', name=None):
        i_shape = images.shape.dims
        patch_row_eff = ksizes[1] + ((ksizes[1] - 1) * (rates[1] - 1))
        patch_col_eff = ksizes[2] + ((ksizes[2] - 1) * (rates[2] - 1))
    
    
class Alignments():
    ''' Perform tasks relating to alignments file '''
    def __init__(self, arguments):
        logger.debug('Initializing %s: (arguments: '%s'', self.__class__.__name__, arguments)
        self.args = arguments
        set_system_verbosity(self.args.loglevel)
        self.alignments = self.load_alignments()
        logger.debug('Initialized %s', self.__class__.__name__)