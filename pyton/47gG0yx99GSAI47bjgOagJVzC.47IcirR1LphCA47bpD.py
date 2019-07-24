
        
            def complete_call(self):
        self.call.state = CallState.COMPLETE
        self.call_center.notify_call_completed(self.call)
    
            Emit key value pairs of the form:
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        {'A':1,'B':4}
    
    
from .pandas_vb_common import setup  # noqa: F401

    
        def time_frame_float_div_by_zero(self):
        self.df / 0
    
    
class TestSudokuValidator(unittest.TestCase):
    '''[summary]
    Test for the file sudoku_validator.py
    
    def remove_dups(head):
    '''
    Time Complexity: O(N)
    Space Complexity: O(N)
    '''
    hashset = set()
    prev = Node()
    while head:
        if head.val in hashset:
            prev.next = head.next
        else:
            hashset.add(head.val)
            prev = head
        head = head.next
    
            with open(os.path.join(data[key]['location'], README_FILENAME), 'wt') as out:
            for line in open(README_TEMPLATE):
                line = line.replace(
                    '@GEN_DATE@', time.strftime('%B %d %Y', time.gmtime())
                )
                line = line.replace('@EXTENSIONS@', extensions_str)
                line = line.replace('@EXTENSIONS_HEADER@', extensions_header)
                line = line.replace(
                    '@NUM_ENTRIES@', '{:,}'.format(data[key]['entries'])
                )
                line = line.replace(
                    '@SUBFOLDER@', os.path.join(data[key]['location'], '')
                )
                line = line.replace('@TOCROWS@', toc_rows)
                line = line.replace('@SOURCEROWS@', source_rows)
                out.write(line)