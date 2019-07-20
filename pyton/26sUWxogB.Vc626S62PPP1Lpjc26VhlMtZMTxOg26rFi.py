
        
            flag_methods = [
        ctl_common.define_ctl_flags,
        lambda: imagenet_main.define_imagenet_flags()
    ]
    
        super(TransformerEstimatorBenchmark, self).__init__(
        output_dir=output_dir,
        default_flags=default_flags,
        flag_methods=flag_methods)
    
      if inter_op:
    flags.DEFINE_integer(
        name='inter_op_parallelism_threads', short_name='inter', default=0,
        help=help_wrap('Number of inter_op_parallelism_threads to use for CPU. '
                       'See TensorFlow config.proto for details.')
    )
    
    flags.DEFINE_integer('log_steps', 10,
                     'Display logging information at every log_steps.')
    
    
if __name__ == '__main__':
  tf.app.run()

    
    # Extensions.
_DELF_EXTENSION = '.delf'
_IMAGE_EXTENSION = '.jpg'
    
        if words is None:
        words = url
    
        if blueprint is not None and seems_fishy:
        info.append(
            '  The template was looked up from an endpoint that '
            'belongs to the blueprint '%s'.' % blueprint
        )
        info.append('  Maybe you did not place a template in the right folder?')
        info.append('  See http://flask.pocoo.org/docs/blueprints/#templates')
    
    
def detect_encoding(data):
    '''Detect which UTF codec was used to encode the given bytes.
    
        def to_json(self, value):
        return text_type(value.__html__())
    
        def create_app(info):
        raise Exception('oh no')
        return Flask('flaskgroup')
    
        class Test(Base):
        SECRET_KEY = 'config'
    
    
def test_prefix_package_paths(
    limit_loader, modules_tmpdir, modules_tmpdir_prefix, purge_module, site_packages
):
    app = site_packages.mkdir('site_package')
    init = app.join('__init__.py')
    init.write('import flask\napp = flask.Flask(__name__)')
    purge_module('site_package')
    
    from ansible.module_utils.network.nos.nos import run_commands, get_config, load_config
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.network.common.config import NetworkConfig, dumps
    
                if Sentinel == Sentinel():
                print('Sentinel value')
        '''
        return cls

    
        @patch('ansible.module_utils.facts.hardware.linux.LinuxHardware._mtab_entries', return_value=MTAB_ENTRIES)
    @patch('ansible.module_utils.facts.hardware.linux.LinuxHardware._find_bind_mounts', return_value=BIND_MOUNTS)
    @patch('ansible.module_utils.facts.hardware.linux.LinuxHardware._lsblk_uuid', return_value=LSBLK_UUIDS)
    @patch('ansible.module_utils.facts.hardware.linux.get_mount_size', side_effect=mock_get_mount_size)
    @patch('ansible.module_utils.facts.hardware.linux.LinuxHardware._udevadm_uuid', return_value=UDEVADM_UUID)
    def test_get_mount_facts(self,
                             mock_get_mount_size,
                             mock_lsblk_uuid,
                             mock_find_bind_mounts,
                             mock_mtab_entries,
                             mock_udevadm_uuid):
        module = Mock()
        # Returns a LinuxHardware-ish
        lh = linux.LinuxHardware(module=module, load_on_init=False)
    
    
class AnsibleFailJson(Exception):
    '''Exception class to be raised by module.fail_json and caught by the test case'''
    pass
    
        result = wapi.run(network_type, ib_spec)
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    
    
@section Exceptions
    
    # In an action, a lexer rule can set token to this SKIP_TOKEN and ANTLR
# will avoid creating a token for this symbol and try to fetch another.
SKIP_TOKEN = CommonToken(type=INVALID_TOKEN_TYPE)
    
    
def score_euclidean(a, b):
    '''计算两个点之间的欧式距离'''
    s = np.sqrt(np.sum(np.power(a - b, 2)))
    return s
    
                with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    '''
    n_input = int(x.get_shape()[-1])
    if n_step is None:
        n_step = int(x.get_shape()[-2])  # 这种写法，不兼容 keras.layers.LSTM，此时需要手工传入 n_step
    
        with tf.variable_scope(name or 'attention_flow', reuse=reuse):
        h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])  # [N, T, J, d]
        u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])  # [N, T, J, d]
        hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
        h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
        W_s = get_w([3 * d, 1])  # [3d, 1]