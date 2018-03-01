
        
        print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
        # Arguments
        config: dict of the form {'class_name': str, 'config': dict}
        custom_objects: dict mapping class names (or function names)
            of custom (non-Keras) objects to class/functions
    
        def deal_card():
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
    from mrjob.job import MRJob
    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
        def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine
    
        def test_human_adapter_shall_make_noise(self):
        human = Human()
        human_adapter = Adapter(human, make_noise=human.speak)
        noise = human_adapter.make_noise()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
    __author__ = 'Ibrahim Diop <ibrahim@sikilabs.com>'
    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')