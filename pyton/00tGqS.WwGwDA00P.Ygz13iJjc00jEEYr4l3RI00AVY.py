
        
                # One or more credentials not found. Function can't recover from this
        # so it has to raise an error instead of fail silently.
        if not user_id:
            raise MissingCredentialsError('Dimension Data user id not found')
        elif not key:
            raise MissingCredentialsError('Dimension Data key not found')
    
    import traceback
    
        @staticmethod
    def _define_module_argument_spec():
        '''
        Define the argument spec for the ansible module
        :return: argument spec dictionary
        '''
        argument_spec = dict(
            name=dict(required=True),
            location=dict(required=True),
            wait=dict(default=True),
            state=dict(default='present', choices=['present', 'absent']),
        )
        return argument_spec
    
    
def main():
    '''
    The main function.  Instantiates the module and calls process_request.
    :return: none
    '''
    module = AnsibleModule(
        argument_spec=ClcFirewallPolicy._define_module_argument_spec(),
        supports_check_mode=True)
    
        def ensure_loadbalancerpool_present(
            self, lb_id, alias, location, method, persistence, port):
        '''
        Checks to see if a load balancer pool exists and creates one if it does not.
        :param lb_id: The loadbalancer id
        :param alias: The account alias
        :param location: the datacenter the load balancer resides in
        :param method: the load balancing method
        :param persistence: the load balancing persistence type
        :param port: the port that the load balancer will listen on
        :return: (changed, group, pool_id) -
            changed: Boolean whether a change was made
            result: The result from the CLC API call
            pool_id: The string id of the load balancer pool
        '''
        changed = False
        result = port
        if not lb_id:
            return changed, None, None
        pool_id = self._loadbalancerpool_exists(
            alias=alias,
            location=location,
            port=port,
            lb_id=lb_id)
        if not pool_id:
            if not self.module.check_mode:
                result = self.create_loadbalancerpool(
                    alias=alias,
                    location=location,
                    lb_id=lb_id,
                    method=method,
                    persistence=persistence,
                    port=port)
                pool_id = result.get('id')
            changed = True
    
    
    {
    {                 ],
                 'storageGB':17
              },
              'groupId':'086ac1dfe0b6411989e8d1b77c4065f0',
              'id':'test-server',
              'ipaddress':'10.120.45.23',
              'isTemplate':false,
              'links':[
                 {
                    'href':'/v2/servers/wfad/test-server',
                    'id':'test-server',
                    'rel':'self',
                    'verbs':[
                       'GET',
                       'PATCH',
                       'DELETE'
                    ]
                 },
                 {
                    'href':'/v2/groups/wfad/086ac1dfe0b6411989e8d1b77c4065f0',
                    'id':'086ac1dfe0b6411989e8d1b77c4065f0',
                    'rel':'group'
                 },
                 {
                    'href':'/v2/accounts/wfad',
                    'id':'wfad',
                    'rel':'account'
                 },
                 {
                    'href':'/v2/billing/wfad/serverPricing/test-server',
                    'rel':'billing'
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/publicIPAddresses',
                    'rel':'publicIPAddresses',
                    'verbs':[
                       'POST'
                    ]
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/credentials',
                    'rel':'credentials'
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/statistics',
                    'rel':'statistics'
                 },
                 {
                    'href':'/v2/servers/wfad/510ec21ae82d4dc89d28479753bf736a/upcomingScheduledActivities',
                    'rel':'upcomingScheduledActivities'
                 },
                 {
                    'href':'/v2/servers/wfad/510ec21ae82d4dc89d28479753bf736a/scheduledActivities',
                    'rel':'scheduledActivities',
                    'verbs':[
                       'GET',
                       'POST'
                    ]
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/capabilities',
                    'rel':'capabilities'
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/alertPolicies',
                    'rel':'alertPolicyMappings',
                    'verbs':[
                       'POST'
                    ]
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/antiAffinityPolicy',
                    'rel':'antiAffinityPolicyMapping',
                    'verbs':[
                       'PUT',
                       'DELETE'
                    ]
                 },
                 {
                    'href':'/v2/servers/wfad/test-server/cpuAutoscalePolicy',
                    'rel':'cpuAutoscalePolicyMapping',
                    'verbs':[
                       'PUT',
                       'DELETE'
                    ]
                 }
              ],
              'locationId':'UC1',
              'name':'test-server',
              'os':'ubuntu14_64Bit',
              'osType':'Ubuntu 14 64-bit',
              'status':'active',
              'storageType':'standard',
              'type':'standard'
           }
        ]
'''
    
        def _set_clc_credentials_from_env(self):
        '''
        Set the CLC Credentials on the sdk by reading environment variables
        :return: none
        '''
        env = os.environ
        v2_api_token = env.get('CLC_V2_API_TOKEN', False)
        v2_api_username = env.get('CLC_V2_API_USERNAME', False)
        v2_api_passwd = env.get('CLC_V2_API_PASSWD', False)
        clc_alias = env.get('CLC_ACCT_ALIAS', False)
        api_url = env.get('CLC_V2_API_URL', False)
    
    # Enable all balancer pool members:
- apache2_mod_proxy:
    balancer_vhost: '{{ myloadbalancer_host }}'
  register: result
- apache2_mod_proxy:
    balancer_vhost: '{{ myloadbalancer_host }}'
    member_host: '{{ item.host }}'
    state: present
  with_items: '{{ result.members }}'
    
            issue = {
            'project': project_name,
            'subject': issue_subject,
            'priority': issue_priority,
            'status': issue_status,
            'type': issue_type,
            'severity': issue_severity,
            'description': issue_description,
            'tags': issue_tags,
        }
    
            # Load attributes
        if self.state == 'present':
            self.attrs = self._load_attrs()
    
        if module.check_mode:
        return result
    
    # Sends a push notification to a channel
- pushbullet:
    api_key: ABC123abc123ABC123abc123ABC123ab
    channel: my-awesome-channel
    title: Broadcasting a message to the #my-awesome-channel folks
    
        response, info = post_sendgrid_api(module, username, password,
                                       from_address, to_addresses, subject, body, attachments=attachments,
                                       bcc=bcc, cc=cc, headers=headers, html_body=html_body, api_key=api_key)
    
    PYGHMI_IMP_ERR = None
try:
    from pyghmi.ipmi import command
except ImportError:
    PYGHMI_IMP_ERR = traceback.format_exc()
    command = None
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            repo=dict(required=True),
            user=dict(required=True),
            password=dict(no_log=True),
            token=dict(no_log=True),
            action=dict(
                required=True, choices=['latest_release', 'create_release']),
            tag=dict(type='str'),
            target=dict(type='str'),
            name=dict(type='str'),
            body=dict(type='str'),
            draft=dict(type='bool', default=False),
            prerelease=dict(type='bool', default=False),
        ),
        supports_check_mode=True,
        mutually_exclusive=(('password', 'token'),),
        required_if=[('action', 'create_release', ['tag']),
                     ('action', 'create_release', ['password', 'token'], True)],
    )
    
            # test coding cookie
        for encoding in ('iso-8859-15', 'utf-8'):
            with open(filename, 'w', encoding=encoding) as fp:
                print('# coding: %s' % encoding, file=fp)
                print('print('euro:\u20ac')', file=fp)
            with tokenize_open(filename) as fp:
                self.assertEqual(fp.encoding, encoding)
                self.assertEqual(fp.mode, 'r')
    
        elif 'PyPy' in sys_version:
        # PyPy
        name = 'PyPy'
        match = _pypy_sys_version_parser.match(sys_version)
        if match is None:
            raise ValueError('failed to parse PyPy sys.version: %s' %
                             repr(sys_version))
        version, buildno, builddate, buildtime = match.groups()
        compiler = ''
    
                # Issue #20113: empty list of buffers should not crash
            try:
                size = posix.readv(fd, [])
            except OSError:
                # readv(fd, []) raises OSError(22, 'Invalid argument')
                # on OpenIndiana
                pass
            else:
                self.assertEqual(size, 0)
        finally:
            os.close(fd)
    
        def _getlongresp(self):
        resp = self._getresp()
        list = []; octets = 0
        line, o = self._getline()
        while line != b'.':
            if line.startswith(b'..'):
                o = o-1
                line = line[1:]
            octets = octets + o
            list.append(line)
            line, o = self._getline()
        return resp, list, octets
    
            if _mswindows:
            if preexec_fn is not None:
                raise ValueError('preexec_fn is not supported on Windows '
                                 'platforms')
        else:
            # POSIX
            if pass_fds and not close_fds:
                warnings.warn('pass_fds overriding close_fds.', RuntimeWarning)
                close_fds = True
            if startupinfo is not None:
                raise ValueError('startupinfo is only supported on Windows '
                                 'platforms')
            if creationflags != 0:
                raise ValueError('creationflags is only supported on Windows '
                                 'platforms')
    
        raise_opts = None
    background = False
    redirect_stdout = True
    # In remote_args, %s will be replaced with the requested URL.  %action will
    # be replaced depending on the value of 'new' passed to open.
    # remote_action is used for new=0 (open).  If newwin is not None, it is
    # used for new=1 (open_new).  If newtab is not None, it is used for
    # new=3 (open_new_tab).  After both substitutions are made, any empty
    # strings in the transformed remote_args list will be removed.
    remote_args = ['%action', '%s']
    remote_action = None
    remote_action_newwin = None
    remote_action_newtab = None
    
        def _pprint_dict(self, object, stream, indent, allowance, context, level):
        write = stream.write
        write('{')
        if self._indent_per_level > 1:
            write((self._indent_per_level - 1) * ' ')
        length = len(object)
        if length:
            if self._sort_dicts:
                items = sorted(object.items(), key=_safe_tuple)
            else:
                items = object.items()
            self._format_dict_items(items, stream, indent, allowance + 1,
                                    context, level)
        write('}')
    
        user_options = [
        ('build-base=', 'b',
         'base directory for build library'),
        ('build-purelib=', None,
         'build directory for platform-neutral distributions'),
        ('build-platlib=', None,
         'build directory for platform-specific distributions'),
        ('build-lib=', None,
         'build directory for all distribution (defaults to either ' +
         'build-purelib or build-platlib'),
        ('build-scripts=', None,
         'build directory for scripts'),
        ('build-temp=', 't',
         'temporary build directory'),
        ('plat-name=', 'p',
         'platform name to build for, if supported '
         '(default: %s)' % get_platform()),
        ('compiler=', 'c',
         'specify the compiler type'),
        ('parallel=', 'j',
         'number of parallel build jobs'),
        ('debug', 'g',
         'compile extensions and libraries with debugging information'),
        ('force', 'f',
         'forcibly build everything (ignore file timestamps)'),
        ('executable=', 'e',
         'specify final destination interpreter path (build.py)'),
        ]
    
    def _spawn_posix(cmd, search_path=1, verbose=0, dry_run=0):
    log.info(' '.join(cmd))
    if dry_run:
        return
    executable = cmd[0]
    exec_fn = search_path and os.execvp or os.execv
    env = None
    if sys.platform == 'darwin':
        global _cfg_target, _cfg_target_split
        if _cfg_target is None:
            from distutils import sysconfig
            _cfg_target = sysconfig.get_config_var(
                                  'MACOSX_DEPLOYMENT_TARGET') or ''
            if _cfg_target:
                _cfg_target_split = [int(x) for x in _cfg_target.split('.')]
        if _cfg_target:
            # ensure that the deployment target of build process is not less
            # than that used when the interpreter was built. This ensures
            # extension modules are built with correct compatibility values
            cur_target = os.environ.get('MACOSX_DEPLOYMENT_TARGET', _cfg_target)
            if _cfg_target_split > [int(x) for x in cur_target.split('.')]:
                my_msg = ('$MACOSX_DEPLOYMENT_TARGET mismatch: '
                          'now '%s' but '%s' during configure'
                                % (cur_target, _cfg_target))
                raise DistutilsPlatformError(my_msg)
            env = dict(os.environ,
                       MACOSX_DEPLOYMENT_TARGET=cur_target)
            exec_fn = search_path and os.execvpe or os.execve
    pid = os.fork()
    if pid == 0: # in the child
        try:
            if env is None:
                exec_fn(executable, cmd)
            else:
                exec_fn(executable, cmd, env)
        except OSError as e:
            if not DEBUG:
                cmd = executable
            sys.stderr.write('unable to execute %r: %s\n'
                             % (cmd, e.strerror))
            os._exit(1)
    
    
def mask_rcnn_fcn_head_v0upshare(model, blob_in, dim_in, spatial_scale):
    '''Use a ResNet 'conv5' / 'stage5' head for mask prediction. Weights and
    computation are shared with the conv5 box head. Computation can only be
    shared during training, since inference is cascaded.
    
    
def convert_cityscapes_instance_only(
        data_dir, out_dir):
    '''Convert from cityscapes format to COCO instance seg format - polygons'''
    sets = [
        'gtFine_val',
        # 'gtFine_train',
        # 'gtFine_test',
    
    
# YAML load/dump function aliases
yaml_load = yaml.load
yaml_dump = yaml.dump

    
        def minibatch_loader_thread(self):
        '''Load mini-batches and put them onto the mini-batch queue.'''
        with self.coordinator.stop_on_exception():
            while not self.coordinator.should_stop():
                blobs = self.get_next_minibatch()
                # Blobs must be queued in the order specified by
                # self.get_output_names
                ordered_blobs = OrderedDict()
                for key in self.get_output_names():
                    assert blobs[key].dtype in (np.int32, np.float32), \
                        'Blob {} of dtype {} must have dtype of ' \
                        'np.int32 or np.float32'.format(key, blobs[key].dtype)
                    ordered_blobs[key] = blobs[key]
                coordinated_put(
                    self.coordinator, self._minibatch_queue, ordered_blobs
                )
        logger.info('Stopping mini-batch loading thread')
    
    
if __name__ == '__main__':
    opts = parse_args()
    convert(opts.json_file, opts.output_dir)

    
    
if __name__ == '__main__':
    setup_logging(__name__)
    args = parse_args()
    if args.comp_mode:
        cfg.TEST.COMPETITION_MODE = True
    output_dir = os.path.abspath(args.output_dir[0])
    do_reval(args.dataset_name, output_dir, args)

    
        def test_create_sns_message_body_json_structure_without_default_key(self):
        action = {
            'Message': ['{'message': 'abc'}'],
            'MessageStructure': ['json']
        }
        with assert_raises(Exception) as exc:
            sns_listener.create_sns_message_body(self.subscriber, action)
        self.assertEqual(str(exc.exception), 'Unable to find 'default' key in message payload')
    
        if 'Records' not in event:
        return {
            'event': event,
            'context': {
                'invoked_function_arn': context.invoked_function_arn,
                'function_version': context.function_version,
                'function_name': context.function_name
            }
        }
    
    
# This test is not enabled in CI, it is just used for manual
# testing to debug https://github.com/localstack/localstack/issues/213
def run_parallel_download():
    
        def test_delivery_stream_tags(self):
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME)
        self.assertEquals(TEST_TAGS, result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, exclusive_start_tag_key='MyTag')
        self.assertEquals([TEST_TAG_2], result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, limit=1)
        self.assertEquals([TEST_TAG_1], result['Tags'])
        self.assertEquals(True, result['HasMore'])

    
        @classmethod
    def setUpClass(cls):
        cls.lambda_client = aws_stack.connect_to_service('lambda')
        cls.s3_client = aws_stack.connect_to_service('s3')
        cls.sfn_client = aws_stack.connect_to_service('stepfunctions')
    
        def test_untag_resource(self):
        response = testutil.send_dynamodb_request('', action='UntagResource', request_body=json.dumps({
            'ResourceArn': testutil.get_sample_arn('dynamodb', 'table'),
            'TagKeys': ['tagkey1', 'tagkey2']  # Keys to untag
        }))
        assert response.status_code == 200
        assert not response._content  # Empty string if untagging succeeded (mocked for now)