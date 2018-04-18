
        
                Notice that ')' is not included, because b would have to have
        been called from a different context in rule a for ')' to be
        included.
    
        @classmethod
    def setUpClass(cls):
        ''' Class scope setup. '''
        cls.p = Proxy()
    
        def notify(self, msg):
        self.msg_queue.append(msg)
    
        '''def test_object(queue):
           queue_object = QueueObject(queue, True)
           print('Inside func: {}'.format(queue_object.object))'''
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
        def test_tc3_output(self):
        self.tc3.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc3)
    
    *TL;DR80
Traverses a container and accesses the container's elements.
'''