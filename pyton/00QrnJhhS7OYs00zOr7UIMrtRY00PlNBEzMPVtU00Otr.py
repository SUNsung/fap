
        
            def __init__(self):
        self.name = 'pgcrypto'
    
        def __eq__(self, other):
        return (
            isinstance(other, self.__class__) and
            self.keys == other.keys and
            self.messages == other.messages and
            self.strict == other.strict
        )
    
        def delete(self, session_key=None):
        if session_key is None:
            if self.session_key is None:
                return
            session_key = self.session_key
        self._cache.delete(self.cache_key_prefix + session_key)
    
    
def test_preprocess_input():
    # Test image batch with float and int image input
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int32')
    assert utils.preprocess_input(x).shape == x.shape
    assert utils.preprocess_input(xint).shape == xint.shape
    
    
def test_objective_shapes_2d():
    y_a = K.variable(np.random.random((6, 7)))
    y_b = K.variable(np.random.random((6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (6,)
    
    model = Sequential()
model.add(Conv2D(32, kernel_size=(3, 3),
                 activation='relu',
                 input_shape=input_shape))
model.add(Conv2D(64, (3, 3), activation='relu'))
model.add(MaxPooling2D(pool_size=(2, 2)))
model.add(Dropout(0.25))
model.add(Flatten())
model.add(Dense(128, activation='relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes, activation='softmax'))
    
    
def mean_squared_logarithmic_error(y_true, y_pred):
    first_log = K.log(K.clip(y_pred, K.epsilon(), None) + 1.)
    second_log = K.log(K.clip(y_true, K.epsilon(), None) + 1.)
    return K.mean(K.square(first_log - second_log), axis=-1)
    
        logger.info('Generating rollout for {}'.format(spec.id))
    
        # You can set the level to logger.DEBUG or logger.WARN if you
    # want to change the amount of output.
    logger.set_level(logger.INFO)
    
        def test_reversed_addition_3rows(self):
        env = alg.reversed_addition.ReversedAdditionEnv(base=3, rows=3)
        input_expected = [
            ([[1,1,0],[0,1,1]], [2, 2]),
            ([[1,1,2],[0,1,1]], [1,0,1]),
        ]
        for (input_grid, expected_target) in input_expected:
            self.assertEqual(env.target_from_input_data(input_grid), expected_target)