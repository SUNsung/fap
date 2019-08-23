
        
        
def save_config(module, result):
    result['changed'] = True
    if not module.check_mode:
        command = {'command': 'save config', 'prompt': 'Are you sure you want to save', 'answer': 'y'}
        run_commands(module, command)
    else:
        module.warn('Skipping command `save config` due to check_mode.  Configuration not copied to '
                    'non-volatile storage')
    
        mutually_exclusive = [('lines', 'src'),
                          ('parents', 'src')]
    
            self.assertIsInstance(lsblk_uuids, dict)
        self.assertIn(b'/dev/loop9', lsblk_uuids)
        self.assertIn(b'/dev/sda1', lsblk_uuids)
        self.assertEqual(lsblk_uuids[b'/dev/sda1'], b'32caaec3-ef40-4691-a3b6-438c3f9bc1c0')
    
                                if middle.startswith(''') and not middle.endswith('''):
                                match = True
                            elif middle.startswith(''') and not middle.endswith('''):
                                match = True
    
    
    {
    {
    {            return True
        else:
            self.failed = True
            self.message = err.strip()
            raise HomebrewCaskException(self.message)
    # /_upgrade_all -------------------------- }}}
    
    
DOCUMENTATION = '''
---
module: nios_network
version_added: '2.5'
author: 'Peter Sprygada (@privateip)'
short_description: Configure Infoblox NIOS network object
description:
  - Adds and/or removes instances of network objects from
    Infoblox NIOS servers.  This module manages NIOS C(network) objects
    using the Infoblox WAPI interface over REST.
  - Supports both IPV4 and IPV6 internet protocols
requirements:
  - infoblox-client
extends_documentation_fragment: nios
options:
  network:
    description:
      - Specifies the network to add or remove from the system.  The value
        should use CIDR notation.
    required: true
    aliases:
      - name
      - cidr
  network_view:
    description:
      - Configures the name of the network view to associate with this
        configured instance.
    required: true
    default: default
  options:
    description:
      - Configures the set of DHCP options to be included as part of
        the configured network instance.  This argument accepts a list
        of values (see suboptions).  When configuring suboptions at
        least one of C(name) or C(num) must be specified.
    suboptions:
      name:
        description:
          - The name of the DHCP option to configure. The standard options are
            C(router), C(router-templates), C(domain-name-servers), C(domain-name),
            C(broadcast-address), C(broadcast-address-offset), C(dhcp-lease-time),
            and C(dhcp6.name-servers).
      num:
        description:
          - The number of the DHCP option to configure
      value:
        description:
          - The value of the DHCP option specified by C(name)
        required: true
      use_option:
        description:
          - Only applies to a subset of options (see NIOS API documentation)
        type: bool
        default: 'yes'
      vendor_class:
        description:
          - The name of the space this DHCP option is associated to
        default: DHCP
  extattrs:
    description:
      - Allows for the configuration of Extensible Attributes on the
        instance of the object.  This argument accepts a set of key / value
        pairs for configuration.
  comment:
    description:
      - Configures a text string comment to be associated with the instance
        of this object.  The provided text string will be configured on the
        object instance.
  container:
    description:
      - If set to true it'll create the network container to be added or removed
        from the system.
    type: bool
    version_added: '2.8'
  state:
    description:
      - Configures the intended state of the instance of the object on
        the NIOS server.  When this value is set to C(present), the object
        is configured on the device and when this value is set to C(absent)
        the value is removed (if necessary) from the device.
    default: present
    choices:
      - present
      - absent
'''
    
    
class TestNxosConfigModule(TestNxosModule):
    
    RETURN = r'''
account_disabled:
  description: Whether the user is disabled.
  returned: user exists
  type: bool
  sample: false
account_locked:
  description: Whether the user is locked.
  returned: user exists
  type: bool
  sample: false
description:
  description: The description set for the user.
  returned: user exists
  type: str
  sample: Username for test
fullname:
  description: The full name set for the user.
  returned: user exists
  type: str
  sample: Test Username
groups:
  description: A list of groups and their ADSI path the user is a member of.
  returned: user exists
  type: list
  sample: [
    {
      'name': 'Administrators',
      'path': 'WinNT://WORKGROUP/USER-PC/Administrators'
    }
  ]
name:
  description: The name of the user
  returned: always
  type: str
  sample: username
password_expired:
  description: Whether the password is expired.
  returned: user exists
  type: bool
  sample: false
password_never_expires:
  description: Whether the password is set to never expire.
  returned: user exists
  type: bool
  sample: true
path:
  description: The ADSI path for the user.
  returned: user exists
  type: str
  sample: 'WinNT://WORKGROUP/USER-PC/username'
sid:
  description: The SID for the user.
  returned: user exists
  type: str
  sample: S-1-5-21-3322259488-2828151810-3939402796-1001
user_cannot_change_password:
  description: Whether the user can change their own password.
  returned: user exists
  type: bool
  sample: false
'''

    
    DOCUMENTATION = r'''
---
module: win_user_profile
version_added: '2.8'
short_description: Manages the Windows user profiles.
description:
- Used to create or remove user profiles on a Windows host.
- This can be used to create a profile before a user logs on or delete a
  profile when removing a user account.
- A profile can be created for both a local or domain account.
options:
  name:
    description:
    - Specifies the base name for the profile path.
    - When I(state) is C(present) this is used to create the profile for
      I(username) at a specific path within the profile directory.
    - This cannot be used to specify a path outside of the profile directory
      but rather it specifies a folder(s) within this directory.
    - If a profile for another user already exists at the same path, then a 3
      digit incremental number is appended by Windows automatically.
    - When I(state) is C(absent) and I(username) is not set, then the module
      will remove all profiles that point to the profile path derived by this
      value.
    - This is useful if the account no longer exists but the profile still
      remains.
    type: str
  remove_multiple:
    description:
    - When I(state) is C(absent) and the value for I(name) matches multiple
      profiles the module will fail.
    - Set this value to C(yes) to force the module to delete all the profiles
      found.
    default: no
    type: bool
  state:
    description:
    - Will ensure the profile exists when set to C(present).
    - When creating a profile the I(username) option must be set to a valid
      account.
    - Will remove the profile(s) when set to C(absent).
    - When removing a profile either I(username) must be set to a valid
      account, or I(name) is set to the profile's base name.
    default: present
    choices:
    - absent
    - present
    type: str
  username:
    description:
    - The account name of security identifier (SID) for the profile.
    - This must be set when I(state) is C(present) and must be a valid account
      or the SID of a valid account.
    - When I(state) is C(absent) then this must still be a valid account number
      but the SID can be a deleted user's SID.
seealso:
- module: win_user
- module: win_domain_user
author:
- Jordan Borean (@jborean93)
'''
    
    
runtime_version_str = __version__
runtime_version = version_str_to_tuple(runtime_version_str)
    
    ##
# imaginary tree navigation type; traverse 'get child' link
DOWN = 2
##
#imaginary tree navigation type; finish with a child list
UP = 3
    
    
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
        #Required strings to create intermediate HTML files
    header = '<html><head><link rel=stylesheet type=text/css href=' + colorscheme + '.css></head><body>\n'
    footer = '</body></html>'
    title_content = '<h1 class=titlemain>tldr pages</h1><h4 class=titlesub>Simplified and community driven man pages</h4></body></html>'
    
        def __init__(self, successor=None):
        self.successor = successor
    
        start, end = 10, 20
    
    
# Test the generator
count_to_two = lambda: count_to(2)
count_to_five = lambda: count_to(5)
    
    *TL;DR
Encapsulates how a set of objects interact.
'''
    
    '''
Implementation of the state pattern
    
    
class Cat(object):
    def speak(self):
        return 'meow'
    
        def __init__(self):
        self.__dict__ = self.__shared_state
        self.state = 'Init'
    
    if args.quiet:
    jieba.setLogLevel(60)
if args.pos:
    import jieba.posseg
    posdelim = args.pos
    def cutfunc(sentence, _, HMM=True):
        for w, f in jieba.posseg.cut(sentence, HMM):
            yield w + posdelim + f
else:
    cutfunc = jieba.cut
    
    file_name = args[0]
    
    parser = OptionParser(USAGE)
parser.add_option('-k',dest='topK')
opt, args = parser.parse_args()
    
    print('speed %s bytes/second' % (len(content)/tm_cost))
    
        # List additional groups of dependencies here
    extras_require={},
)

    
    
class TestMergeSort(object):
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -10]
        assert_equal(func(data), sorted(data))
    
    
class TestStack(object):
    
    
    '''
    def __init__(self, nS, nA, P, isd):
        self.P = P
        self.isd = isd
        self.lastaction = None # for rendering
        self.nS = nS
        self.nA = nA
    
        def _viewer_setup(self):
        body_id = self.sim.model.body_name2id('robot0:palm')
        lookat = self.sim.data.body_xpos[body_id]
        for idx, value in enumerate(lookat):
            self.viewer.cam.lookat[idx] = value
        self.viewer.cam.distance = 0.5
        self.viewer.cam.azimuth = 55.
        self.viewer.cam.elevation = -25.
    
        Ideally an agent will be able to recognise the 'scent' of a higher reward and
    increase the rate in which is guesses in that direction until the reward reaches
    its maximum
    '''
    def __init__(self):
        self.range = 1000  # +/- value the randomly select number can be between
        self.bounds = 2000  # Action space bounds
    
        def __init__(self):
        self.viewer = None
        high = np.array([1.0, 1.0, 1.0, 1.0, self.MAX_VEL_1, self.MAX_VEL_2])
        low = -high
        self.observation_space = spaces.Box(low=low, high=high, dtype=np.float32)
        self.action_space = spaces.Discrete(3)
        self.state = None
        self.seed()
    
            '''
        nvec: vector of counts of each categorical variable
        '''
        assert (np.array(nvec) > 0).all(), 'nvec (counts) have to be positive'
        self.nvec = np.asarray(nvec, dtype=np.int64)
    
        def render(self, mode='human'):
        assert mode in ['human', 'state_pixels', 'rgb_array']
        if self.viewer is None:
            from gym.envs.classic_control import rendering
            self.viewer = rendering.Viewer(WINDOW_W, WINDOW_H)
            self.score_label = pyglet.text.Label('0000', font_size=36,
                x=20, y=WINDOW_H*2.5/40.00, anchor_x='left', anchor_y='center',
                color=(255,255,255,255))
            self.transform = rendering.Transform()