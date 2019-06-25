
        
            def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    
class TestQueueFromStacks(object):
    
    
def main():
    test = TestStack()
    test.test_end_to_end()
    
            print('Test: remove on a key that already exists')
        hash_table.remove(10)
        assert_equal(hash_table.get(0), 'foo')
        assert_raises(KeyError, hash_table.get, 10)
    
        def __init__(self):
        self.array = []