
        
        
class CallState(Enum):
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
        def extract_url(self, line):
        '''Extract the generated url from the log line.'''
        pass
    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
    data_dim = 5
num_classes = 2
batch_size = 10
    
        s = score_euclidean(data[0], data[1])
    print(s)
    
        Args:
        x(tf.Tensor):
        n_unit_ls(list of int):
        act_fn:
        name(str):
    '''
    # n_layer = len(n_unit_list)
    name = name or 'dense'
    for i, n_unit in enumerate(n_unit_ls):
        x = dense(x, n_unit, act_fn=act_fn, name='{}-{}'.format(name, i))
    
        这里实际上没有用到 J 和 d 这个参数，保留是为了与 `attention_flow()` 的参数兼容
    
        References:
        K.repeat()
        tf.tile()
    '''
    assert x.get_shape().ndims == 2
    x = tf.expand_dims(x, axis=1)  # -> [batch_size, 1, n_input]
    return tf.tile(x, [1, n, 1])  # -> [batch_size, n, n_input]
    
        mat = np.empty(euler.shape[:-1] + (3, 3), dtype=np.float64)
    mat[..., 2, 2] = cj * ck
    mat[..., 2, 1] = sj * sc - cs
    mat[..., 2, 0] = sj * cc + ss
    mat[..., 1, 2] = cj * sk
    mat[..., 1, 1] = sj * ss + cc
    mat[..., 1, 0] = sj * cs - sc
    mat[..., 0, 2] = -sj
    mat[..., 0, 1] = cj * si
    mat[..., 0, 0] = cj * ci
    return mat
    
    
def mocap_set_action(sim, action):
    '''The action controls the robot using mocaps. Specifically, bodies
    on the robot (for example the gripper wrist) is controlled with
    mocap bodies. In this case the action is the desired difference
    in position and orientation (quaternion), in world coordinates,
    of the of the target body. The mocap is positioned relative to
    the target body according to the delta, and the MuJoCo equality
    constraint optimizer tries to center the welded body on the mocap.
    '''
    if sim.model.nmocap > 0:
        action, _ = np.split(action, (sim.model.nmocap * 7, ))
        action = action.reshape(sim.model.nmocap, 7)
    
        def seed(self, seed=None):
        self.np_random, seed = seeding.np_random(seed)
        return [seed]
    
    def update_rollout_dict(spec, rollout_dict):
    '''
    Takes as input the environment spec for which the rollout is to be generated,
    and the existing dictionary of rollouts. Returns True iff the dictionary was
    modified.
    '''
    # Skip platform-dependent
    if should_skip_env_spec_for_tests(spec):
        logger.info('Skipping tests for {}'.format(spec.id))
        return False
    
        def step(self, dt):
        for w in self.wheels:
            # Steer each wheel
            dir = np.sign(w.steer - w.joint.angle)
            val = abs(w.steer - w.joint.angle)
            w.joint.motorSpeed = dir*min(50.0*val, 3.0)