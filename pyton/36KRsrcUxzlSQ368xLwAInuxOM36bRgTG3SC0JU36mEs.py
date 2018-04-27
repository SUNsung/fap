
        
            x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
            np_output_cf = layer_test(layers.Flatten,
                                  kwargs={'data_format':
                                          'channels_first'},
                                  input_data=np_inp_channels_first,
                                  expected_output=np_output_cl)
    test_3d()
    test_4d()
    test_5d()
    
    # build the VGG16 network with our 3 images as input
# the model will be loaded with pre-trained ImageNet weights
model = vgg19.VGG19(input_tensor=input_tensor,
                    weights='imagenet', include_top=False)
print('Model loaded.')
    
    
@pytest.mark.parametrize('tensor_shape', [(100, 100), (1, 2, 3, 4)], ids=['FC', 'CONV'])
def test_identity(tensor_shape):
    if len(tensor_shape) > 2:
        with pytest.raises(ValueError):
            _runner(initializers.identity(), tensor_shape,
                    target_mean=1. / tensor_shape[0], target_max=1.)
    else:
        _runner(initializers.identity(), tensor_shape,
                target_mean=1. / tensor_shape[0], target_max=1.)
    
    - The length and noise (i.e. 'useless' story components) impact the ability for
LSTMs / GRUs to provide the correct answer. Given only the supporting facts,
these RNNs can achieve 100% accuracy on many tasks. Memory networks and neural
networks that use attentional processes can efficiently search through this
noise to find the relevant statements, improving performance substantially.
This becomes especially obvious on QA2 and QA3, both far longer than QA1.
'''
    
        @property
    def is_eager_to_contribute(self):
        return True if self.blackboard.common_state['problems'] > 100 else False
    
        def __init__(self):
        self._active_state = Active(self)  # Unit.Inservice.Active()
        self._standby_state = Standby(self)  # Unit.Inservice.Standby()
        self._suspect_state = Suspect(self)  # Unit.OutOfService.Suspect()
        self._failed_state = Failed(self)  # Unit.OutOfService.Failed()
        self._current_state = self._standby_state
        self.states = {'active': self._active_state,
                       'standby': self._standby_state,
                       'suspect': self._suspect_state,
                       'failed': self._failed_state}
        self.message_types = {'fault trigger': self._current_state.on_fault_trigger,
                              'switchover': self._current_state.on_switchover,
                              'diagnostics passed': self._current_state.on_diagnostics_passed,
                              'diagnostics failed': self._current_state.on_diagnostics_failed,
                              'operator inservice': self._current_state.on_operator_inservice}
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def unsubscribe(self, msg):
        self.provider.unsubscribe(msg, self)
    
        def test_initial_state(self):
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
    
class SuperUserSpecification(CompositeSpecification):