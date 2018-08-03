
        
          def testNoTrainSteps(self):
    '''Edge case, 1 target, only pretrain.'''
    generated_schedule = trainer_lib.generate_target_per_step_schedule([10],
                                                                       [0])
    expected_schedule = [0] * 10
    self.assertEqual(generated_schedule, expected_schedule)
    
        base = 'src/sentry/locale'
    for locale in os.listdir(base):
        fn = os.path.join(base, locale, 'LC_MESSAGES', 'django.po')
        if not os.path.isfile(fn):
            continue