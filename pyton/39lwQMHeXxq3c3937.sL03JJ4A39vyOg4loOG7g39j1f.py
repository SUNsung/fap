
        
            def from_spider(self, spider, results):
        requests = []
        for method in self.tested_methods_from_spidercls(type(spider)):
            bound_method = spider.__getattribute__(method)
            requests.append(self.from_method(bound_method, results))
    
    
class Vehicle(metaclass=ABCMeta):
    
        def remove_link_to_crawl(self, url):
        '''Remove the given link from `links_to_crawl`.'''
        pass
    
        @property
    def value(self):
        if self.is_ace() == 1:
            return 1
        elif self.is_face_card():
            return 10
        else:
            return self._value
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def __init__(self):
        self.lookup = {}  # key: person_id, value: person_server
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
        def test_tc1_output(self):
        self.tc1.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc1)
    
    
class ConcreteHandler1(Handler):
    
        def tearDown(self):
        if not self._bProblem:
            print('Tearing down')
            time.sleep(0.1)
            self._tm.publishReport()
        else:
            print('Test not executed. No tear down required.')
    
        a_transaction = Transaction(True, num_obj)
    try:
        for i in range(3):
            num_obj.increment()
            print(num_obj)
        a_transaction.commit()
        print('-- committed')
    
        def update(self, subject):
        print(u'DecimalViewer: Subject %s has data %d' %
              (subject.name, subject.data))
    
    
class User(object):