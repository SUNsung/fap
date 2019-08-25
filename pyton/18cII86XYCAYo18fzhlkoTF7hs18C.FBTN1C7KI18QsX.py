
        
            # - Produce data on 4 worker processes, consume on main process:
    #   - Each worker process runs OWN copy of generator
    #   - BUT on Windows, `multiprocessing` won't marshall generators across
    #     process boundaries -> make sure `fit_generator()` raises ValueError
    #     exception and does not attempt to run the generator.
    if os.name == 'nt':
        with pytest.raises(ValueError):
            model.fit_generator(custom_generator(),
                                steps_per_epoch=STEPS_PER_EPOCH,
                                epochs=1,
                                verbose=1,
                                validation_steps=None,
                                max_queue_size=10,
                                workers=WORKERS,
                                use_multiprocessing=True)
    else:
        model.fit_generator(custom_generator(),
                            steps_per_epoch=STEPS_PER_EPOCH,
                            epochs=1,
                            verbose=1,
                            validation_steps=None,
                            max_queue_size=10,
                            workers=WORKERS,
                            use_multiprocessing=True)
    
            if self.inputs:
            self._init_graph_network(self.inputs,
                                     self.outputs,
                                     name=self.name)
            self.built = True
    
            params = self._canonical_to_params(
            weights=[
                self.kernel_r,
                self.kernel_z,
                self.kernel_h,
                self.recurrent_kernel_r,
                self.recurrent_kernel_z,
                self.recurrent_kernel_h,
            ],
            biases=[
                self.bias_r_i,
                self.bias_z_i,
                self.bias_h_i,
                self.bias_r,
                self.bias_z,
                self.bias_h,
            ],
        )
        outputs, h = self._cudnn_gru(
            inputs,
            input_h=input_h,
            params=params,
            is_training=True)
    
        def _remove_publicip_from_server(self, server):
        result = None
        try:
            for ip_address in server.PublicIPs().public_ips:
                result = ip_address.Delete()
        except CLCException as ex:
            self.module.fail_json(msg='Failed to remove public ip from the server : {0}. {1}'.format(
                server.id, ex.response_text
            ))
        return result
    
    EXAMPLES = '''
- name: Create a new Linode.
  linode_v4:
    label: new-linode
    type: g6-nanode-1
    region: eu-west
    image: linode/debian9
    root_pass: passw0rd
    authorized_keys:
      - 'ssh-rsa ...'
    state: present
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    # Add a user to a password file suitable for use by libpam-pwdfile
- htpasswd:
    path: /etc/mail/passwords
    name: alex
    password: oedu2eGh
    crypt_scheme: md5_crypt
'''
    
            if matching_issue_list_len == 0:
            # The issue does not exist in the project
            if state == 'present':
                # This implies a change
                changed = True
                if not check_mode:
                    # Create the issue
                    new_issue = project.add_issue(issue_subject, priority_id, status_id, type_id, severity_id, tags=issue_tags, description=issue_description)
                    if issue_attachment:
                        new_issue.attach(issue_attachment, description=issue_attachment_description)
                        issue['attachment'] = issue_attachment
                        issue['attachment_description'] = issue_attachment_description
                return (True, changed, 'Issue created', issue)
    
        # make sure we are in a given room and return a room object for it
    room = client.join_room(module.params['room_id'])
    # send an html formatted messages
    room.send_html(module.params['msg_html'], module.params['msg_plain'])
    
    # Update (sync) all of the installed overlays.
- layman:
    name: ALL
    state: updated
    
         (View in source code to see train_dir example tree structure)
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    for face_location in face_locations:
    
        # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1
    
            # empty numpy list
        faces_to_compare = np.array([])
    
    # Predict all the faces in the test image using the trained classifier
print('Found:')
for i in range(no):
    test_image_enc = face_recognition.face_encodings(test_image)[i]
    name = clf.predict([test_image_enc])
    print(*name)

    
    
def relu(x):
    '''ReLU
    `o = max(0., x)`
    '''
    return tf.nn.relu(x)
    
                       <option_name> should always be lower text.
                   <metadata> dictionary requirements are listed below.
    
        The following keys are expected for the _DEFAULTS <metadata> dict:
        datatype:  [required] A python type class. This limits the type of data that can be
                   provided in the .ini file and ensures that the value is returned in the
                   correct type to faceswap. Valid datatypes are: <class 'int'>, <class 'float'>,
                   <class 'str'>, <class 'bool'>.
        default:   [required] The default value for this option.
        info:      [required] A string describing what this option does.
        choices:   [optional] If this option's datatype is of <class 'str'> then valid
                   selections can be defined here. This validates the option and also enables
                   a combobox / radio option in the GUI.
        gui_radio: [optional] If <choices> are defined, this indicates that the GUI should use
                   radio buttons rather than a combobox to display this option.
        min_max:   [partial] For <class 'int'> and <class 'float'> datatypes this is required
                   otherwise it is ignored. Should be a tuple of min and max accepted values.
                   This is used for controlling the GUI slider range. Values are not enforced.
        rounding:  [partial] For <class 'int'> and <class 'float'> datatypes this is
                   required otherwise it is ignored. Used for the GUI slider. For floats, this
                   is the number of decimal places to display. For ints this is the step size.
        fixed:     [optional] [train only]. Training configurations are fixed when the model is
                   created, and then reloaded from the state file. Marking an item as fixed=False
                   indicates that this value can be changed for existing models, and will override
                   the value saved in the state file with the updated value in config. If not
                   provided this will default to True.
'''
    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face

    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
    
class Writer(Output):
    ''' Images output writer using cv2 '''
    def __init__(self, output_folder, **kwargs):
        super().__init__(output_folder, **kwargs)
        self.extension = '.{}'.format(self.config['format'])
        self.check_transparency_format()
        self.args = self.get_save_args()
    
        def pre_encode(self, image):
        logger.trace('Pre-encoding image')
        fmt = self.format_dict.get(self.config['format'], None)
        fmt = self.config['format'].upper() if fmt is None else fmt
        encoded = BytesIO()
        rgb = [2, 1, 0]
        if image.shape[2] == 4:
            rgb.append(3)
        out_image = Image.fromarray(image[..., rgb])
        out_image.save(encoded, fmt, **self.kwargs)
        encoded.seek(0)
        return encoded
    
                    if y_delta:
                    y_1 = mouse_y - tip_delta[1] - height
    
    Licensed under Creative Commons Attribution License.
https://creativecommons.org/licenses/by-nc/4.0/
'''