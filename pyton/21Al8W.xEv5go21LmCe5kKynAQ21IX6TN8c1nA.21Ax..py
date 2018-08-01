
        
            @classmethod
    def tearDownClass(self):
        '''
        Remove the temporary directory /test_command and its content.
        '''
        shutil.rmtree('tests/test_command')

    
        def __init__(self, name, action):
        self.name = name
        self.action = action
    
    # Test the generator
count_to_two = lambda: count_to(2)
count_to_five = lambda: count_to(5)
    
        a_transaction = Transaction(True, num_obj)
    try:
        for i in range(3):
            num_obj.increment()
            print(num_obj)
        a_transaction.commit()
        print('-- committed')