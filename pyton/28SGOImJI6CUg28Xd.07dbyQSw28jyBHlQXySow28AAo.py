
        
        
enabled_by_default, _ = archlinux_env()

    
        @pytest.fixture(autouse=True)
    def shell_aliases(self):
        os.environ['TF_SHELL_ALIASES'] = (
            'alias fuck=\'eval $(thefuck $(fc -ln -1))\'\n'
            'alias l=\'ls -CF\'\n'
            'alias la=\'ls -A\'\n'
            'alias ll=\'ls -alF\'')
    
        def test_app_alias_alter_history(self, settings, shell):
        settings.alter_history = True
        assert 'builtin history delete' in shell.app_alias('FUCK')
        assert 'builtin history merge' in shell.app_alias('FUCK')
        settings.alter_history = False
        assert 'builtin history delete' not in shell.app_alias('FUCK')
        assert 'builtin history merge' not in shell.app_alias('FUCK')
    
        def get_builtin_commands(self):
        '''Returns shells builtin commands.'''
        return ['alias', 'bg', 'bind', 'break', 'builtin', 'case', 'cd',
                'command', 'compgen', 'complete', 'continue', 'declare',
                'dirs', 'disown', 'echo', 'enable', 'eval', 'exec', 'exit',
                'export', 'fc', 'fg', 'getopts', 'hash', 'help', 'history',
                'if', 'jobs', 'kill', 'let', 'local', 'logout', 'popd',
                'printf', 'pushd', 'pwd', 'read', 'readonly', 'return', 'set',
                'shift', 'shopt', 'source', 'suspend', 'test', 'times', 'trap',
                'type', 'typeset', 'ulimit', 'umask', 'unalias', 'unset',
                'until', 'wait', 'while']
    
        def app_alias(self, alias_name):
        return ('alias {0} 'setenv TF_SHELL tcsh && setenv TF_ALIAS {0} && '
                'set fucked_cmd=`history -h 2 | head -n 1` && '
                'eval `thefuck ${{fucked_cmd}}`'').format(alias_name)
    
    
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
    
    
@eager
def _parse_apt_get_and_cache_operations(help_text_lines):
    is_commands_list = False
    for line in help_text_lines:
        line = line.decode().strip()
        if is_commands_list:
            if not line:
                return
    
        def _group_exists(self, group_name, parent_name):
        '''
        Check to see if a group exists
        :param group_name: string - the group to check
        :param parent_name: string - the parent of group_name
        :return: boolean - whether the group exists
        '''
        result = False
        if group_name in self.group_dict:
            (group, parent) = self.group_dict[group_name]
            if parent_name is None or parent_name == parent.name:
                result = True
        return result
    
        def process_request(self):
        '''
        Execute the main code path, and handle the request
        :return: none
        '''
        changed = False
        result_lb = None
        loadbalancer_name = self.module.params.get('name')
        loadbalancer_alias = self.module.params.get('alias')
        loadbalancer_location = self.module.params.get('location')
        loadbalancer_description = self.module.params.get('description')
        loadbalancer_port = self.module.params.get('port')
        loadbalancer_method = self.module.params.get('method')
        loadbalancer_persistence = self.module.params.get('persistence')
        loadbalancer_nodes = self.module.params.get('nodes')
        loadbalancer_status = self.module.params.get('status')
        state = self.module.params.get('state')
    
            :arg dict resource: Resource to delete.
        :arg str method: Function of the OneView client that will be called for resource deletion.
            Usually delete or remove.
        :return: A dictionary with the expected arguments for the AnsibleModule.exit_json
        '''
        if resource:
            getattr(self.resource_client, method)(resource)
    
        module.exit_json(changed=(action is not None))
    
    MATRIX_IMP_ERR = None
try:
    from matrix_client.client import MatrixClient
except ImportError:
    MATRIX_IMP_ERR = traceback.format_exc()
    matrix_found = False
else:
    matrix_found = True
    
        server = ''
    if probe_server:
        server = ' and the best server is %s.' % best_server(probe_nat=probe_nat)
    else:
        new_pteredor()
    
        if __hostsdeny__ and netloc.endswith(__hostsdeny__):
        start_response('403 Forbidden', [('Content-Type', 'text/html')])
        yield message_html('403 Hosts Deny', 'Hosts Deny(%r)' % netloc, detail='共用appid因为资源有限，限制观看视频和文件下载等消耗资源过多的访问，请使用自己的appid <a href=' https://github.com/XX-net/XX-Net/wiki/Register-Google-appid' target='_blank'>帮助</a> ')
        raise StopIteration
    
    
class ConfigFrame(ttk.Frame):  # pylint: disable=too-many-ancestors
    ''' Config Frame - Holds the Options for config '''
    
        @property
    def multipass_factor(self):
        ''' Multipass Factor
            For multiple passes the kernel must be scaled down. This value is
            different for box filter and gaussian '''
        factor = dict(gaussian=0.8,
                      normalized=0.5)
        return factor[self.blur_type]
    
            mask = BlurMask(self.config['type'],
                        mask,
                        self.config['radius'],
                        self.config['passes']).blurred
        logger.debug('Built box mask. Shape: %s', mask.shape)
        return mask
    
    
_DEFAULTS = {
    'format': {
        'default': 'png',
        'info': 'Image format to use:'
                '\n\t bmp: Windows bitmap'
                '\n\t jpg: JPEG format'
                '\n\t jp2: JPEG 2000 format'
                '\n\t png: Portable Network Graphics'
                '\n\t ppm: Portable Pixmap Format',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['bmp', 'jpg', 'jp2', 'png', 'ppm'],
        'gui_radio': True,
        'fixed': True,
    },
    'draw_transparent': {
        'default': False,
        'info': 'Place the swapped face on a transparent layer rather than the original frame.'
                '\nNB: This is only compatible with images saved in png format. If an '
                'incompatible format is selected then the image will be saved as a png.',
        'datatype': bool,
        'rounding': None,
        'min_max': None,
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'jpg_quality': {
        'default': 75,
        'info': '[jpg only] Set the jpg quality. 1 is worst 95 is best. Higher quality leads '
                'to larger file sizes.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 95),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'png_compress_level': {
        'default': 3,
        'info': '[png only] ZLIB compression level, 1 gives best speed, 9 gives best '
                'compression, 0 gives no compression at all.',
        'datatype': int,
        'rounding': 1,
        'min_max': (0, 9),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        Defaults files should be named <plugin_name>_defaults.py
    Any items placed into this file will automatically get added to the relevant config .ini files
    within the faceswap/config folder.
    
    
_HELPTEXT = 'DFL H128 Model (Adapted from https://github.com/iperov/DeepFaceLab)'
    
            Args:
            model_path (string): path to the environments XML file
            n_substeps (int): number of substeps the simulation runs on every call to step
            gripper_extra_height (float): additional height above the table when positioning the gripper
            block_gripper (boolean): whether or not the gripper is blocked (i.e. not movable) or not
            has_object (boolean): whether or not the environment has an object
            target_in_the_air (boolean): whether or not the target should be in the air above the table or on the table surface
            target_offset (float or array with 3 elements): offset of the target
            obj_range (float): range of a uniform distribution for sampling initial object positions
            target_range (float): range of a uniform distribution for sampling a target
            distance_threshold (float): the threshold after which a goal is considered achieved
            initial_qpos (dict): a dictionary of joint names and values that define the initial configuration
            reward_type ('sparse' or 'dense'): the reward type, i.e. sparse or dense
        '''
        self.gripper_extra_height = gripper_extra_height
        self.block_gripper = block_gripper
        self.has_object = has_object
        self.target_in_the_air = target_in_the_air
        self.target_offset = target_offset
        self.obj_range = obj_range
        self.target_range = target_range
        self.distance_threshold = distance_threshold
        self.reward_type = reward_type
    
        The board is a 4x12 matrix, with (using Numpy matrix indexing):
        [3, 0] as the start at bottom-left
        [3, 11] as the goal at bottom-right
        [3, 1..10] as the cliff at bottom-center
    
        def to_jsonable(self, sample_n):
        return [sample.tolist() for sample in sample_n]
    
    class MemorizeDigits(gym.Env):
    metadata = {
        'render.modes': ['human', 'rgb_array'],
        'video.frames_per_second' : 60,
        'video.res_w' : FIELD_W,
        'video.res_h' : FIELD_H,
    }
    
        def remove(self):
        if self.external:
            log.info('Volume %s is external, skipping', self.true_name)
            return
        log.info('Removing volume %s', self.true_name)
        return self.client.remove_volume(self.true_name)
    
        def __str__(self):
        return self.msg
    
        if config is None:
        raise ScriptError('Failed to parse .pypirc file')
    
            self.assertTrue(
            sudoku_validator.valid_solution_set(
                [
                    [5, 3, 4, 6, 7, 8, 9, 1, 2],
                    [6, 7, 2, 1, 9, 5, 3, 4, 8],
                    [1, 9, 8, 3, 4, 2, 5, 6, 7],
                    [8, 5, 9, 7, 6, 1, 4, 2, 3],
                    [4, 2, 6, 8, 5, 3, 7, 9, 1],
                    [7, 1, 3, 9, 2, 4, 8, 5, 6],
                    [9, 6, 1, 5, 3, 7, 2, 8, 4],
                    [2, 8, 7, 4, 1, 9, 6, 3, 5],
                    [3, 4, 5, 2, 8, 6, 1, 7, 9]
                ]))
    
        def _split_child(self, parent: Node, child_index: int):
        new_right_child = Node()
        half_max = self.max_number_of_keys // 2
        child = parent.children[child_index]
        middle_key = child.keys[half_max]
        new_right_child.keys = child.keys[half_max + 1:]
        child.keys = child.keys[:half_max]
        # child is left child of parent after splitting
    
            position *= 10
    return arr
    