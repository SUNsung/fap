
        
            Args:
        x(tf.Tensor):
        kernel_size(int or list of int):
        out_channels(int):
        act_fn(function):
        strides(int or list of int):
        padding(str):
        name(str):
        reuse(bool):
    
    
class Dense(object):
    '''全连接层的类实现，方便 reuse'''
    
    
def get_params_dict():
    '''以字典形式获取所有 trainable 参数'''
    param_dict = dict()
    for var in tf.trainable_variables():
        param_dict[var.name] = {'shape': list(map(int, var.shape)),
                                'number': int(reduce(mul, var.shape, 1))}
    return param_dict
    
        This environment is described in section 6.1 of:
    A Bayesian Framework for Reinforcement Learning by Malcolm Strens (2000)
    http://ceit.aut.ac.ir/~shiry/lecture/machine-learning/papers/BRL-2000.pdf
    '''
    def __init__(self, n=5, slip=0.2, small=2, large=10):
        self.n = n
        self.slip = slip  # probability of 'slipping' an action
        self.small = small  # payout for 'backwards' action
        self.large = large  # payout at end of chain for 'forwards' action
        self.state = 0  # Start at beginning of the chain
        self.action_space = spaces.Discrete(2)
        self.observation_space = spaces.Discrete(self.n)
        self.seed()
    
        def test_reversed_addition_3rows(self):
        env = alg.reversed_addition.ReversedAdditionEnv(base=3, rows=3)
        input_expected = [
            ([[1,1,0],[0,1,1]], [2, 2]),
            ([[1,1,2],[0,1,1]], [1,0,1]),
        ]
        for (input_grid, expected_target) in input_expected:
            self.assertEqual(env.target_from_input_data(input_grid), expected_target)
    
        def draw(self, viewer, draw_particles=True):
        if draw_particles:
            for p in self.particles:
                viewer.draw_polyline(p.poly, color=p.color, linewidth=5)
        for obj in self.drawlist:
            for f in obj.fixtures:
                trans = f.body.transform
                path = [trans*v for v in f.shape.vertices]
                viewer.draw_polygon(path, color=obj.color)
                if 'phase' not in obj.__dict__: continue
                a1 = obj.phase
                a2 = obj.phase + 1.2  # radians
                s1 = math.sin(a1)
                s2 = math.sin(a2)
                c1 = math.cos(a1)
                c2 = math.cos(a2)
                if s1>0 and s2>0: continue
                if s1>0: c1 = np.sign(c1)
                if s2>0: c2 = np.sign(c2)
                white_poly = [
                    (-WHEEL_W*SIZE, +WHEEL_R*c1*SIZE), (+WHEEL_W*SIZE, +WHEEL_R*c1*SIZE),
                    (+WHEEL_W*SIZE, +WHEEL_R*c2*SIZE), (-WHEEL_W*SIZE, +WHEEL_R*c2*SIZE)
                    ]
                viewer.draw_polygon([trans*v for v in white_poly], color=WHEEL_WHITE)