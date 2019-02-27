
        
        containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    
def test_get_new_command():
    new_command = get_new_command(Command('sudo apt update', match_output))
    assert new_command == 'sudo apt list --upgradable'
    
    describe-table                           | get-item
list-tables                              | put-item
    
                if desired_template_changes is None:
                desired_template_changes = dict()
    
    
def protocol_to_tuple(protocol):
    return (protocol.get_Tcp(),
            protocol.get_Udp(),
            protocol.get_Icmp(),
            protocol.get_Other(),
            protocol.get_Any())
    
        result['current_rules'] = current_rules
    result['desired_rules'] = desired_rules
    
        def dnszone_find(self, zone_name):
        return self._post_json(
            method='dnszone_find',
            name=zone_name,
            item={'idnsname': zone_name}
        )
    
    
DOCUMENTATION = '''
---
module: ipa_role
author: Thomas Krahn (@Nosmoht)
short_description: Manage FreeIPA role
description:
- Add, modify and delete a role within FreeIPA server using FreeIPA API
options:
  cn:
    description:
    - Role name.
    - Can not be changed as it is the unique identifier.
    required: true
    aliases: ['name']
  description:
    description:
    - A description of this role-group.
  group:
    description:
    - List of group names assign to this role.
    - If an empty list is passed all assigned groups will be unassigned from the role.
    - If option is omitted groups will not be checked or changed.
    - If option is passed all assigned groups that are not passed will be unassigned from the role.
  host:
    description:
    - List of host names to assign.
    - If an empty list is passed all assigned hosts will be unassigned from the role.
    - If option is omitted hosts will not be checked or changed.
    - If option is passed all assigned hosts that are not passed will be unassigned from the role.
  hostgroup:
    description:
    - List of host group names to assign.
    - If an empty list is passed all assigned host groups will be removed from the role.
    - If option is omitted host groups will not be checked or changed.
    - If option is passed all assigned hostgroups that are not passed will be unassigned from the role.
  privilege:
    description:
    - List of privileges granted to the role.
    - If an empty list is passed all assigned privileges will be removed.
    - If option is omitted privileges will not be checked or changed.
    - If option is passed all assigned privileges that are not passed will be removed.
    version_added: '2.4'
  service:
    description:
    - List of service names to assign.
    - If an empty list is passed all assigned services will be removed from the role.
    - If option is omitted services will not be checked or changed.
    - If option is passed all assigned services that are not passed will be removed from the role.
  state:
    description: State to ensure
    default: 'present'
    choices: ['present', 'absent']
  user:
    description:
    - List of user names to assign.
    - If an empty list is passed all assigned users will be removed from the role.
    - If option is omitted users will not be checked or changed.
extends_documentation_fragment: ipa.documentation
version_added: '2.3'
'''
    
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
    
        module.exit_json(changed=False, msg='logs(s) already followed')
    
        # derive the landscape handler from the model handler of the device
    model_landscape = '0x%x' % int(int(model_handle, 16) // 0x100000 * 0x100000)
    
        def __new__(cls, *args):
        '''Construct a PurePath from one or several strings and or existing
        PurePath objects.  The strings and path objects are combined so as
        to yield a canonicalized path, which is incorporated into the
        new PurePath object.
        '''
        if cls is PurePath:
            cls = PureWindowsPath if os.name == 'nt' else PurePosixPath
        return cls._from_parts(args)
    
    
if __name__ == '__main__':
    unittest.main()

    
            testfrexp('frexp(-1)', math.frexp(-1), (-0.5, 1))
        testfrexp('frexp(0)', math.frexp(0), (0, 0))
        testfrexp('frexp(1)', math.frexp(1), (0.5, 1))
        testfrexp('frexp(2)', math.frexp(2), (0.5, 2))
    
            self.assertEqual(a.t(0), 'int')
        self.assertEqual(a.t(''), 'str')
        self.assertEqual(a.t(0.0), 'base')
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    from argparse import ArgumentParser
    
            print('Unordered results using pool.imap_unordered():')
        for x in imap_unordered_it:
            print('\t', x)
        print()
    
                elif opt in ('-l', '--playlist', '--playlists'):
                # Download playlist whenever possible.
                conf['playlist'] = True
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
        def __get__(self, obj, type_):
        if obj is None:
            return self
        val = self.function(obj)
        obj.__dict__[self.function.__name__] = val
        return val
    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    
class TC3:
    def run(self):
        print(u'###### In Test 3 ######')
        time.sleep(SLEEP)
        print(u'Setting up')
        time.sleep(SLEEP)
        print(u'Running test')
        time.sleep(SLEEP)
        print(u'Tearing down')
        time.sleep(SLEEP)
        print(u'Test Finished\n')
    
        def test_subscriber_shall_be_attachable_to_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        cls.assertEqual(len(pro.subscribers), 0)
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)