
        
            @staticmethod
    def _define_module_argument_spec():
        '''
        Define the argument spec for the ansible module
        :return: argument spec dictionary
        '''
        argument_spec = dict(
            server_ids=dict(type='list', required=True),
            state=dict(default='present', choices=['present', 'absent']),
            cpu=dict(),
            memory=dict(),
            anti_affinity_policy_id=dict(),
            anti_affinity_policy_name=dict(),
            alert_policy_id=dict(),
            alert_policy_name=dict(),
            wait=dict(type='bool', default=True)
        )
        mutually_exclusive = [
            ['anti_affinity_policy_id', 'anti_affinity_policy_name'],
            ['alert_policy_id', 'alert_policy_name']
        ]
        return {'argument_spec': argument_spec,
                'mutually_exclusive': mutually_exclusive}
    
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
    
        if not module.check_mode:
        if not size and not vsize:
            pool = system.pools.create(name=name, physical_capacity=Capacity('1TB'), virtual_capacity=Capacity('1TB'))
        elif size and not vsize:
            pool = system.pools.create(name=name, physical_capacity=Capacity(size), virtual_capacity=Capacity(size))
        elif not size and vsize:
            pool = system.pools.create(name=name, physical_capacity=Capacity('1TB'), virtual_capacity=Capacity(vsize))
        else:
            pool = system.pools.create(name=name, physical_capacity=Capacity(size), virtual_capacity=Capacity(vsize))
        # Default value of ssd_cache is True. Disable ssd chacing if False
        if not ssd_cache:
            pool.update_ssd_enabled(ssd_cache)
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            config=dict(required=False),
            name=dict(required=True),
            password=dict(required=False, no_log=True),
            state=dict(required=False, choices=['present', 'absent'], default='present'),
            enabled=dict(required=False, type='bool'),
            token=dict(required=False, no_log=True),
            url=dict(required=False, default='http://localhost:8080'),
            user=dict(required=False)
        ),
        mutually_exclusive=[
            ['password', 'token'],
            ['config', 'enabled'],
        ],
        supports_check_mode=True,
    )
    
        merged_items = collections.OrderedDict()
    
                if isinstance(value, list):
                attrs[name] = list(map(to_bytes, value))
            else:
                attrs[name].append(to_bytes(value))
    
        if any(lib_arg is not None for lib_arg in sendgrid_lib_args) and not HAS_SENDGRID:
        reason = 'when using any of the following arguments: ' \
                 'api_key, bcc, cc, headers, from_name, html_body, attachments'
        module.fail_json(msg=missing_required_lib('sendgrid', reason=reason),
                         exception=SENDGRID_IMP_ERR)
    
          <!-- Power cycle server -->
      <configConfMo><inConfig>
        <computeRackUnit dn='sys/rack-unit-1' adminPower='cycle-immediate'/>
      </inConfig></configConfMo>
  delegate_to: localhost
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(required=True),
            port=dict(default=623, type='int'),
            state=dict(required=True, choices=['on', 'off', 'shutdown', 'reset', 'boot']),
            user=dict(required=True, no_log=True),
            password=dict(required=True, no_log=True),
            timeout=dict(default=300, type='int'),
        ),
        supports_check_mode=True,
    )
    
        XXX: This function assumes that archives contain a toplevel directory
    that is has the same name as the basename of the archive. This is
    safe enough for almost anything we use.  Unfortunately, it does not
    work for current Tcl and Tk source releases where the basename of
    the archive ends with '-src' but the uncompressed directory does not.
    For now, just special case Tcl and Tk tar.gz downloads.
    '''
    curdir = os.getcwd()
    try:
        os.chdir(builddir)
        if archiveName.endswith('.tar.gz'):
            retval = os.path.basename(archiveName[:-7])
            if ((retval.startswith('tcl') or retval.startswith('tk'))
                    and retval.endswith('-src')):
                retval = retval[:-4]
            if os.path.exists(retval):
                shutil.rmtree(retval)
            fp = os.popen('tar zxf %s 2>&1'%(shellQuote(archiveName),), 'r')
    
        def test_expressions(self):
        self.check_expr('foo(1)')
        self.check_expr('[1, 2, 3]')
        self.check_expr('[x**3 for x in range(20)]')
        self.check_expr('[x**3 for x in range(20) if x % 3]')
        self.check_expr('[x**3 for x in range(20) if x % 2 if x % 3]')
        self.check_expr('list(x**3 for x in range(20))')
        self.check_expr('list(x**3 for x in range(20) if x % 3)')
        self.check_expr('list(x**3 for x in range(20) if x % 2 if x % 3)')
        self.check_expr('foo(*args)')
        self.check_expr('foo(*args, **kw)')
        self.check_expr('foo(**kw)')
        self.check_expr('foo(key=value)')
        self.check_expr('foo(key=value, *args)')
        self.check_expr('foo(key=value, *args, **kw)')
        self.check_expr('foo(key=value, **kw)')
        self.check_expr('foo(a, b, c, *args)')
        self.check_expr('foo(a, b, c, *args, **kw)')
        self.check_expr('foo(a, b, c, **kw)')
        self.check_expr('foo(a, *args, keyword=23)')
        self.check_expr('foo + bar')
        self.check_expr('foo - bar')
        self.check_expr('foo * bar')
        self.check_expr('foo / bar')
        self.check_expr('foo // bar')
        self.check_expr('(foo := 1)')
        self.check_expr('lambda: 0')
        self.check_expr('lambda x: 0')
        self.check_expr('lambda *y: 0')
        self.check_expr('lambda *y, **z: 0')
        self.check_expr('lambda **z: 0')
        self.check_expr('lambda x, y: 0')
        self.check_expr('lambda foo=bar: 0')
        self.check_expr('lambda foo=bar, spaz=nifty+spit: 0')
        self.check_expr('lambda foo=bar, **z: 0')
        self.check_expr('lambda foo=bar, blaz=blat+2, **z: 0')
        self.check_expr('lambda foo=bar, blaz=blat+2, *y, **z: 0')
        self.check_expr('lambda x, *y, **z: 0')
        self.check_expr('(x for x in range(10))')
        self.check_expr('foo(x for x in range(10))')
        self.check_expr('...')
        self.check_expr('a[...]')
    
        if default is not MISSING and default_factory is not MISSING:
        raise ValueError('cannot specify both default and default_factory')
    return Field(default, default_factory, init, repr, hash, compare,
                 metadata)
    
    
if __name__ == '__main__':
    unittest.main()

    
        @unittest.skipUnless(hasattr(posix, 'preadv'), 'test needs posix.preadv()')
    @unittest.skipUnless(hasattr(posix, 'RWF_HIPRI'), 'test needs posix.RWF_HIPRI')
    def test_preadv_flags(self):
        fd = os.open(support.TESTFN, os.O_RDWR | os.O_CREAT)
        try:
            os.write(fd, b'test1tt2t3t5t6t6t8')
            buf = [bytearray(i) for i in [5, 3, 2]]
            self.assertEqual(posix.preadv(fd, buf, 3, os.RWF_HIPRI), 10)
            self.assertEqual([b't1tt2', b't3t', b'5t'], list(buf))
        except NotImplementedError:
            self.skipTest('preadv2 not available')
        except OSError as inst:
            # Is possible that the macro RWF_HIPRI was defined at compilation time
            # but the option is not supported by the kernel or the runtime libc shared
            # library.
            if inst.errno in {errno.EINVAL, errno.ENOTSUP}:
                raise unittest.SkipTest('RWF_HIPRI is not supported by the current system')
            else:
                raise
        finally:
            os.close(fd)
    
            def abort(self):
            # overridden as we can't pass MSG_OOB flag to sendall()
            line = b'ABOR' + B_CRLF
            self.sock.sendall(line)
            resp = self.getmultiline()
            if resp[:3] not in {'426', '225', '226'}:
                raise error_proto(resp)
            return resp
    
            # Command completion response?
    
                def run():
                with ready_cond:
                    ready.append(None)
                    ready_cond.notify()
                with start_cond:
                    while not started:
                        start_cond.wait()
                loop(start_time, duration * 1.5, end_event, do_yield=False)
    
        This pure Python implementation is not reentrant.
    '''
    # Note: while this pure Python version provides fairness
    # (by using a threading.Semaphore which is itself fair, being based
    #  on threading.Condition), fairness is not part of the API contract.
    # This allows the C version to use a different implementation.
    
        '''
    if iter(data) is data:
        data = list(data)
    n = len(data)
    if n < 1:
        raise StatisticsError('pvariance requires at least one data point')
    T, ss = _ss(data, mu)
    return _convert(ss/n, T)
    
        await common.async_turn_off(hass)
    await hass.async_block_till_done()
    
    
    {
    {
    {            }
        }
    })
    
            # assert temperature estimation
        esttemp = moldind.attributes.get(ATTR_CRITICAL_TEMP)
        assert esttemp
        assert esttemp > 14.9
        assert esttemp < 15.1
    
        assert mock_discover.called
    assert mock_discover.call_count == 1
    assert not mock_platform.called
    mock_discover.assert_called_with(
        hass, SERVICE_NO_PLATFORM, SERVICE_INFO,
        SERVICE_NO_PLATFORM_COMPONENT, BASE_CONFIG)
    
                msg = DIFFERENT_FREQ.format(
                cls=type(self).__name__, own_freq=self.freqstr, other_freq=other.freqstr
            )
            raise IncompatibleFrequency(msg)
        elif is_integer(other):
            # integer is passed to .shift via
            # _add_datetimelike_methods basically
            # but ufunc may pass integer to _add_delta
            return other
    
        def test_use_net_from_service(self):
        container_name = 'test_aaa_1'
        self.mock_client.containers.return_value = [
            {
                'Name': container_name,
                'Names': [container_name],
                'Id': container_name,
                'Image': 'busybox:latest'
            }
        ]
        project = Project.from_config(
            name='test',
            client=self.mock_client,
            config_data=Config(
                version=V2_0,
                services=[
                    {
                        'name': 'aaa',
                        'image': 'busybox:latest'
                    },
                    {
                        'name': 'test',
                        'image': 'busybox:latest',
                        'network_mode': 'service:aaa'
                    },
                ],
                networks=None,
                volumes=None,
                secrets=None,
                configs=None,
            ),
        )
    
    from .errors import StreamParseError
from .timeparse import MULTIPLIERS
from .timeparse import timeparse
    
        def test_project_name_with_empty_environment_var(self):
        base_dir = 'tests/fixtures/simple-composefile'
        with mock.patch.dict(os.environ):
            os.environ['COMPOSE_PROJECT_NAME'] = ''
            project_name = get_project_name(base_dir)
        assert 'simple-composefile' == project_name
    
    
@ddt
class EnvironmentTest(DockerClientTestCase):
    @classmethod
    def setUpClass(cls):
        super(EnvironmentTest, cls).setUpClass()
        cls.compose_file = tempfile.NamedTemporaryFile(mode='w+b')
        cls.compose_file.write(bytes('''version: '3.2'
services:
  svc:
    image: busybox:latest
    environment:
      TEST_VARIABLE: ${TEST_VARIABLE}''', encoding='utf-8'))
        cls.compose_file.flush()
    
    
def build_no_log_generator(container, log_args):
    '''Return a generator that prints a warning about logs and waits for
    container to exit.
    '''
    yield 'WARNING: no logs are available with the '{}' log driver\n'.format(
        container.log_driver)
    
        for name, service in data.items():
        warn_for_links(name, service)
        warn_for_external_links(name, service)
        rewrite_net(service, service_names)
        rewrite_build(service)
        rewrite_logging(service)
        rewrite_volumes_from(service, service_names)
    
            assert not mock_log.warn.called
        assert (
            [mount['Destination'] for mount in new_container.get('Mounts')] ==
            ['/data']
        )
        assert new_container.get_mount('/data')['Source'] != host_path