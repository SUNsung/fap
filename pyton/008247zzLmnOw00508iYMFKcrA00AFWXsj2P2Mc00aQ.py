
        
        from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
          self._work_queue.put( w )
      self._adjust_thread_count()
      return f
  submit.__doc__ = _base.Executor.submit.__doc__
    
        def test_first_completed_some_already_completed(self):
        future1 = self.executor.submit(time.sleep, 1.5)