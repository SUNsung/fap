
        
            def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
            return {
            'id': flv_id,
            'url': rtmp_url,
            'ext': 'flv',
            'no_resume': True,
            'title': title,
            'description': description,
            'duration': duration,
            'view_count': view_count,
            'comment_count': comment_count,
            'uploader': uploader,
            'upload_date': upload_date,
        }

    
    from .onet import OnetBaseIE
    
                if next(lineiter).count('-') != len(match.group(0)):
                continue
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
            if self._task_class == 'true':
            junit_classname = re.sub(r'\.yml:[0-9]+$', '', task_data.path)
        else:
            junit_classname = task_data.path
    
            self.appid_manager = AppidManager(self.config, logger)
    
    import os
import sys
from .common import *
    
                self.cmd_queue[seq] = data.get_buf()
    
    - tree.RewriteCardinalityException
  - tree.RewriteEarlyExitException
  - tree.RewriteEmptyStreamException
  .
.
    
            self.input.consume()
    
        def test_not_equal(self):
        self.assertFalse(self.addr1 != self.addr2)
        self.assertTrue(self.addr != self.addr1)
    
    import os
import sys
import codecs
import re
    
        def run_loop(self):
        while self.blackboard.common_state['progress'] < 100:
            for expert in self.blackboard.experts:
                if expert.is_eager_to_contribute:
                    expert.contribute()
        return self.blackboard.common_state['contributions']
    
        def setUp(self):
        self.sample_queue = queue.Queue()
        self.sample_queue.put('first')
        self.sample_queue.put('second')
    
        def test_tc2_output(self):
        self.tc2.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc2)
    
        def setDB(self, db):
        self._db = db