
        
        
def login_required(view):
    '''View decorator that redirects anonymous users to the login page.'''
    @functools.wraps(view)
    def wrapped_view(**kwargs):
        if g.user is None:
            return redirect(url_for('auth.login'))
    
        if db is not None:
        db.close()
    
        with client:
        auth.logout()
        assert 'user_id' not in session

    
            :param name: the optional name of the filter, otherwise the
                     function name will be used.
        '''
        def register_template(state):
            state.app.jinja_env.filters[name or f.__name__] = f
        self.record_once(register_template)
    
    import os
from warnings import warn
    
    
def _find_app():
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return top.app
    
    
class TagTuple(JSONTag):
    __slots__ = ()
    key = ' t'
    
        def get_json(self, force=False, silent=False, cache=True):
        '''Parse and return the data as JSON. If the mimetype does not
        indicate JSON (:mimetype:`application/json`, see
        :meth:`is_json`), this returns ``None`` unless ``force`` is
        true. If parsing fails, :meth:`on_json_loading_failed` is called
        and its return value is used as the return value.
    
    
@pytest.fixture(autouse=True)
def catch_deprecation_warnings(recwarn):
    yield
    gc.collect()
    assert not recwarn.list, '\n'.join(str(w.message) for w in recwarn.list)

    
        def fetch_aws_state(self):
        '''Retrieves rule and target state from AWS'''
        aws_state = {
            'rule': {},
            'targets': [],
            'changed': self.rule.changed
        }
        rule_description = self.rule.describe()
        if not rule_description:
            return aws_state
    
            last_snapshot_min_age = last_snapshot_min_age * 60  # Convert to seconds
        snapshot = _get_most_recent_snapshot(current_snapshots,
                                             max_snapshot_age_secs=last_snapshot_min_age)
    try:
        # Create a new snapshot if we didn't find an existing one to use
        if snapshot is None:
            snapshot = ec2.create_snapshot(volume_id, description=description)
            changed = True
        if wait:
            if not _create_with_wait(snapshot, wait_timeout):
                module.fail_json(msg='Timed out while creating snapshot.')
        if snapshot_tags:
            for k, v in snapshot_tags.items():
                snapshot.add_tag(k, v)
    except boto.exception.BotoServerError as e:
        module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
        for (index, rule) in enumerate(desired_rules):
        try:
            if rule != current_rules[index]:
                updates.append((index, rule))
        except IndexError:
            additions.append(rule)
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        # Send the data to bigpanda
    data = json.dumps(body)
    headers = {'Authorization': 'Bearer %s' % token, 'Content-Type': 'application/json'}
    try:
        response, info = fetch_url(module, request_url, data=data, headers=headers)
        if info['status'] == 200:
            module.exit_json(changed=True, **deployment)
        else:
            module.fail_json(msg=json.dumps(info))
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
                if re.search('already enabled', out) is None:
                change_applied = True
        else:
            if rc == 0:
                change_applied = True
            # RC is not 0 for this already disabled feature, handle it as no change applied
            elif re.search('Cannot disable feature '%s'. Target file .* does not exist' % self.feature_name, out):
                change_applied = False
            else:
                self.module.fail_json(msg='Failed to disable feature. Command returns %s' % out)
    
        elif state == 'restarted':
        if module.check_mode:
            module.exit_json(changed=True)
        status = run_command('restart')
        if status in ['initializing', 'running'] or 'restart pending' in status:
            module.exit_json(changed=True, name=name, state=state)
        module.fail_json(msg='%s process not restarted' % name, status=status)
    
        if len(sys.argv) > 1:
        ip = sys.argv[1]
    else:
        ip = '46.134.208.94'
        ip = '2001:ee0:3203:a::12'
        print('Usage: check_ip.py [ip] [top_domain] [wait_time=0]')
    print('test ip:%s' % ip)
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
        def test_no_leading_slash(self):
        # http://bugs.python.org/issue2254
        res = self.request('cgi-bin/file1.py')
        self.assertEqual(
            (b'Hello World' + self.linesep, 'text/html', HTTPStatus.OK),
            (res.read(), res.getheader('Content-type'), res.status))
    
            readline = self.get_readline((b'\xef\xbb\xbfprint(something)\n',))
        encoding, consumed_lines = detect_encoding(readline)
        self.assertEqual(encoding, 'utf-8-sig')
        self.assertEqual(consumed_lines, [b'print(something)\n'])
    
    
# Is a path a directory?
# This follows symbolic links, so both islink() and isdir()
# can be true for the same path on systems that support symlinks
def isdir(s):
    '''Return true if the pathname refers to an existing directory.'''
    try:
        st = os.stat(s)
    except (OSError, ValueError):
        return False
    return stat.S_ISDIR(st.st_mode)
    
    def noop(x):
    pass
    
    
if __name__ == '__main__':
    freeze_support()
    test()

    
    test_encode_face = '''
encoding = face_recognition.face_encodings(image, known_face_locations=face_locations)[0]
'''
    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        pool.starmap(test_image, function_parameters)
    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_frame = frame[:, :, ::-1]
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]