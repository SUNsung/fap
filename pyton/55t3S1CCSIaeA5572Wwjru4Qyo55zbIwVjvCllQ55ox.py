
        
            def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def delete(self):
        try:
            os.unlink(self.path)
        except OSError as e:
            if e.errno != errno.ENOENT:
                raise
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(required=True, type='str'),
            state=dict(required=True, type='str', choices=['present', 'absent', 'copy']),
            replication_id=dict(type='str'),
            cluster_id=dict(type='str'),
            target=dict(type='str'),
            bucket=dict(type='str'),
        )
    )
    
    EXAMPLES = '''
# Add or change a subnet group
- elasticache_subnet_group:
    state: present
    name: norwegian-blue
    description: My Fancy Ex Parrot Subnet Group
    subnets:
      - subnet-aaaaaaaa
      - subnet-bbbbbbbb
    
    - oneandone_moitoring_policy:
    auth_token: oneandone_private_api_key
    state: absent
    name: ansible monitoring policy
    
            elif desired_state == 'offline':
            if current_state == HOST_ABSENT:
                self.fail(msg='absent host cannot be placed in offline state')
            elif current_state in [HOST_STATES.MONITORED, HOST_STATES.DISABLED]:
                if one.host.status(host.ID, HOST_STATUS.OFFLINE):
                    self.wait_for_host_state(host, [HOST_STATES.OFFLINE])
                    result['changed'] = True
                else:
                    self.fail(msg='could not set host offline')
            elif current_state in [HOST_STATES.OFFLINE]:
                pass
            else:
                self.fail(msg='unknown host state %s, cowardly refusing to change state to offline' % current_state_name)
    
            if privilege is not None:
            changed = client.modify_if_diff(name, ipa_role.get('memberof_privilege', []), privilege,
                                            client.role_add_privilege,
                                            client.role_remove_privilege) or changed
        if service is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_service', []), service,
                                            client.role_add_service,
                                            client.role_remove_service) or changed
        if user is not None:
            changed = client.modify_if_diff(name, ipa_role.get('member_user', []), user,
                                            client.role_add_user,
                                            client.role_remove_user) or changed
    
        def is_version_higher_than_5_18():
        return (MONIT_MAJOR_VERSION, MONIT_MINOR_VERSION) > (5, 18)
    
    # A regex that matches standard linkcheck output lines
line_re = re.compile(u'(.*)\:\d+\:\s\[(.*)\]\s(?:(.*)\sto\s(.*)|(.*))')
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        def run(self, args, opts):
        if len(args) != 1 or not is_url(args[0]):
            raise UsageError()
        cb = lambda x: self._print_response(x, opts)
        request = Request(args[0], callback=cb, dont_filter=True)
        # by default, let the framework handle redirects,
        # i.e. command handles all codes expect 3xx
        if not opts.no_redirect:
            request.meta['handle_httpstatus_list'] = SequenceExclude(range(300, 400))
        else:
            request.meta['handle_httpstatus_all'] = True
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
            def _identityVerifyingInfoCallback(self, connection, where, ret):
            if where & SSL_CB_HANDSHAKE_START:
                set_tlsext_host_name(connection, self._hostnameBytes)
            elif where & SSL_CB_HANDSHAKE_DONE:
                try:
                    verifyHostname(connection, self._hostnameASCII)
                except verification_errors as e:
                    logger.warning(
                        'Remote certificate is not valid for hostname '{}'; {}'.format(
                            self._hostnameASCII, e))
    
            # set Content-Length based len of body
        if self.body is not None:
            self.headers['Content-Length'] = len(self.body)
            # just in case a broken http/1.1 decides to keep connection alive
            self.headers.setdefault('Connection', 'close')
        # Content-Length must be specified in POST method even with no body
        elif self.method == b'POST':
            self.headers['Content-Length'] = 0
    
        By default this will get the strings from the blns.txt file
    
        def makeSocket(self):
        '''
        The factory method of SocketHandler is here overridden to create
        a UDP socket (SOCK_DGRAM).
        '''
        if self.port is None:
            family = socket.AF_UNIX
        else:
            family = socket.AF_INET
        s = socket.socket(family, socket.SOCK_DGRAM)
        return s
    
        If the resource does not already exist on its own on the file system,
    a temporary file will be created. If the file was created, the file
    will be deleted upon exiting the context manager (no exception is
    raised if the file was deleted prior to the context manager
    exiting).
    '''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        try:
            yield Path(reader.resource_path(resource))
            return
        except FileNotFoundError:
            pass
    else:
        _check_location(package)
    # Fall-through for both the lack of resource_path() *and* if
    # resource_path() raises FileNotFoundError.
    package_directory = Path(package.__spec__.origin).parent
    file_path = package_directory / resource
    if file_path.exists():
        yield file_path
    else:
        with open_binary(package, resource) as fp:
            data = fp.read()
        # Not using tempfile.NamedTemporaryFile as it leads to deeper 'try'
        # blocks due to the need to close the temporary file to work on
        # Windows properly.
        fd, raw_path = tempfile.mkstemp()
        try:
            os.write(fd, data)
            os.close(fd)
            yield Path(raw_path)
        finally:
            try:
                os.remove(raw_path)
            except FileNotFoundError:
                pass
    
        def testContextProtocol(self):
        f = None
        with BZ2File(self.filename, 'wb') as f:
            f.write(b'xxx')
        f = BZ2File(self.filename, 'rb')
        f.close()
        try:
            with f:
                pass
        except ValueError:
            pass
        else:
            self.fail('__enter__ on a closed file didn't raise an exception')
        try:
            with BZ2File(self.filename, 'wb') as f:
                1/0
        except ZeroDivisionError:
            pass
        else:
            self.fail('1/0 didn't raise an exception')
    
    [1] http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718
    
    # Now the header items can be accessed as a dictionary, and any non-ASCII will
# be converted to unicode:
print('To:', msg['to'])
print('From:', msg['from'])
print('Subject:', msg['subject'])
    
            try:
            print(list(pool.imap(f, list(range(10)))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from list(pool.imap())')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
    con.close()

    
    cur.execute('insert into test(p) values (?)', (p,))
cur.execute('select p as 'p [point]' from test')
print('with column names:', cur.fetchone()[0])
cur.close()
con.close()

    
    DB_FILE = 'mydb'
    
        if unit_1 == LENGTH_MILES:
        meters = __miles_to_meters(value)
    elif unit_1 == LENGTH_FEET:
        meters = __feet_to_meters(value)
    elif unit_1 == LENGTH_KILOMETERS:
        meters = __kilometers_to_meters(value)
    
    
def bump_version(version, bump_type):
    '''Return a new version given a current version and action.'''
    to_change = {}
    
    def clean_pdf_link(link):
    if 'arxiv' in link:
        link = link.replace('abs', 'pdf')   
        if not(link.endswith('.pdf')):
            link = '.'.join((link, 'pdf'))