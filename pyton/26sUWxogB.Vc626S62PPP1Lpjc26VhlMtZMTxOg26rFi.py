
        
        
@bp.route('/login', methods=('GET', 'POST'))
def login():
    '''Log in a registered user by adding the user id to the session.'''
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        db = get_db()
        error = None
        user = db.execute(
            'SELECT * FROM user WHERE username = ?', (username,)
        ).fetchone()
    
    
@pytest.fixture
def auth(client):
    return AuthActions(client)

    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
    
def test_update(client, auth, app):
    auth.login()
    assert client.get('/1/update').status_code == 200
    client.post('/1/update', data={'title': 'updated', 'body': ''})
    
        def fake_init_db():
        Recorder.called = True
    
        def __init__(self, request, key):
        form_matches = request.form.getlist(key)
        buf = ['You tried to access the file '%s' in the request.files '
               'dictionary but it does not exist.  The mimetype for the request '
               'is '%s' instead of 'multipart/form-data' which means that no '
               'file contents were transmitted.  To fix this error you should '
               'provide enctype='multipart/form-data' in your form.' %
               (key, request.mimetype)]
        if form_matches:
            buf.append('\n\nThe browser instead transmitted some file names. '
                       'This was submitted: %s' % ', '.join(''%s'' % x
                            for x in form_matches))
        self.msg = ''.join(buf)
    
    
#: Log messages to :func:`~flask.logging.wsgi_errors_stream` with the format
#: ``[%(asctime)s] %(levelname)s in %(module)s: %(message)s``.
default_handler = logging.StreamHandler(wsgi_errors_stream)
default_handler.setFormatter(logging.Formatter(
    '[%(asctime)s] %(levelname)s in %(module)s: %(message)s'
))
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        with open(filename) as f:
        contents = re.sub(
            r'^(\s*%s\s*=\s*')(.+?)(')' % pattern,
            inject_version, f.read(),
            flags=re.DOTALL | re.MULTILINE
        )
    
            def __getattr__(self, name):
            if name in ('archive', 'get_filename'):
                msg = 'Mocking a loader which does not have `%s.`' % name
                raise AttributeError(msg)
            return getattr(self.loader, name)
    
    from ..utils.data_utils import get_file
import numpy as np
    
    This script loads the s2s.h5 model saved by lstm_seq2seq.py and generates
sequences from it.  It assumes that no changes have been made (for example:
latent_dim is unchanged, and the input data and model architecture are unchanged).
    
        return {function_name: camel_dict_to_snake_dict(lambda_facts)}
    
    - name: Delete instance (and all databases)
- gcspanner:
    instance_id: '{{ instance_id }}'
    configuration: '{{ configuration }}'
    state: absent
    force_instance_delete: yes
'''
    
    # TODO: Documentation on valid state transitions is required to properly implement all valid cases
# TODO: To be coherent with CLI this module should also provide 'flush' functionality
    
    
if __name__ == '__main__':
    main()

    
        rc, out, err = module.run_command(cmd)
    if rc != 0:
        result.update(dict(
            cmd=cmd,
            rc=rc,
            stderr=err,
            stdout=out,
        ))
        shutil.rmtree(tmp_dir)
    
        module_hbacrule = get_hbacrule_dict(description=module.params['description'],
                                        hostcategory=hostcategory,
                                        ipaenabledflag=ipaenabledflag,
                                        servicecategory=servicecategory,
                                        sourcehostcategory=sourcehostcategory,
                                        usercategory=usercategory)
    ipa_hbacrule = client.hbacrule_find(name=name)
    
    # Ensure role is absent
- ipa_role:
    name: dba
    state: absent
    ipa_host: ipa.example.com
    ipa_user: admin
    ipa_pass: topsecret
'''
    
    
DOCUMENTATION = '''
---
module: group_by
short_description: Create Ansible groups based on facts
description:
  - Use facts to create ad-hoc groups that can be used later in a playbook.
  - This module is also supported for Windows targets.
version_added: '0.9'
options:
  key:
    description:
    - The variables whose values will be used as groups
    required: true
  parents:
    description:
    - The list of the parent groups
    required: false
    default: 'all'
    version_added: '2.4'
author: 'Jeroen Hoekx (@jhoekx)'
notes:
  - Spaces in group names are converted to dashes '-'.
  - This module is also supported for Windows targets.
'''
    
    def main():
    
        def parse(parts):
        if is_version_higher_than_5_18():
            return parse_current(parts)
        else:
            return parse_older_versions(parts)
    
            _LOGGER.info('Request successful')
        return True

    
            devices = {}
        for device in request.json()['status']:
            try:
                devices[device['Key']] = {
                    'ip': device['IPAddress'],
                    'mac': device['PhysAddress'],
                    'host': device['Name'],
                    'status': device['Active']
                    }
            except (KeyError, requests.exceptions.RequestException):
                pass
        return devices

    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.tado/
'''
import logging
from datetime import timedelta
from collections import namedtuple
    
    
def clean_socket_close(sock):
    '''Close a socket connection and logs its closure.'''
    _LOGGER.info('UPNP responder shutting down.')
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.All(cv.ensure_list, [vol.Schema({
        vol.Required(CONF_FOLDER): cv.isdir,
        vol.Optional(CONF_PATTERNS, default=[DEFAULT_PATTERN]):
            vol.All(cv.ensure_list, [cv.string]),
    })])
}, extra=vol.ALLOW_EXTRA)
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
        :param model_save_path: (optional) path to save model on disk
    :param n_neighbors: (optional) number of neighbors to weigh in classification. Chosen automatically if not specified
    :param knn_algo: (optional) underlying data structure to support knn.default is ball_tree
    :param verbose: verbosity of training
    :return: returns knn classifier that was trained on the given data.
    '''
    X = []
    y = []
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
    al_image = face_recognition.load_image_file('alex-lacamoire.png')
al_face_encoding = face_recognition.face_encodings(al_image)[0]
    
    # Display the resulting image
pil_image.show()
    
    
if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)
