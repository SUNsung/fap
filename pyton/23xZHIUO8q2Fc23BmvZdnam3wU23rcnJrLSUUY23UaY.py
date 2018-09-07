
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
    
@classmethod
def get_args(cls, dist, header=None):
    '''
    Yield write_script() argument tuples for a distribution's
    console_scripts and gui_scripts entry points.
    '''
    if header is None:
        header = cls.get_header()
    spec = str(dist.as_requirement())
    for type_ in 'console', 'gui':
        group = type_ + '_scripts'
        for name, ep in dist.get_entry_map(group).items():
            # ensure_safe_name
            if re.search(r'[\\/]', name):
                raise ValueError('Path separators not allowed in script names')
            script_text = TEMPLATE.format(
                          ep.module_name, ep.attrs[0], '.'.join(ep.attrs),
                          spec, group, name)
            args = cls._get_script_args(type_, name, header, script_text)
            for res in args:
                yield res
    
    
@pytest.fixture(autouse=True)
def functional(request):
    if request.node.get_marker('functional') \
            and not request.config.getoption('enable_functional'):
        pytest.skip('functional tests are disabled')
    
    
def select_command_with_arrows(proc, TIMEOUT):
    '''Ensures that command can be selected with arrow keys.'''
    _set_confirmation(proc, True)
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
        assert get_new_command(command) == new_command

    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
        For example, ``headers['content-encoding']`` will return the
    value of a ``'Content-Encoding'`` response header, regardless
    of how the header name was originally stored.
    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
            # Make headers case-insensitive.
        response.headers = CaseInsensitiveDict(getattr(resp, 'headers', {}))
    
        def stop(self):
        print('then stop')
    
        def update(self):
        for msg in self.msg_queue:
            for sub in self.subscribers.get(msg, []):
                sub.run(msg)
        self.msg_queue = []
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' %
              (self.stations[self.pos], self.name))
    
    # Execute them
for template in templates:
    template()
    
    ### OUTPUT ###
# We have a lovely Cat
# It says meow
# 
# We have a lovely Dog
# It says woof
# ====================
# We have a lovely Cat
# It says meow
# ====================
# We have a lovely Cat
# It says meow
# ====================

    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
            path.append(start)
        if start == end:
            return path
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_path(node, end, path[:])
                if newpath:
                    return newpath
    
    
class Suspect(OutOfService):