
collect_ignore = [
    # deprecated or moved modules
    'scrapy/conf.py',
    'scrapy/stats.py',
    'scrapy/project.py',
    'scrapy/utils/decorator.py',
    'scrapy/statscol.py',
    'scrapy/squeue.py',
    'scrapy/log.py',
    'scrapy/dupefilter.py',
    'scrapy/command.py',
    'scrapy/linkextractor.py',
    'scrapy/spider.py',
    
        def adjust_request_args(self, args):
        args['url'] = self.args[0]
        return args
    
        def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
        def move_to_front(self, node):  # ...
    def append_to_front(self, node):  # ...
    def remove_from_tail(self):  # ...
    
    
class UserService(object):
    
            The shuffle/sort step of MapReduce will then do a
        distributed sort on the keys, resulting in:
    
        for f in fs:
        f._waiters.append(waiter)
    
                if result_item.exception:
                work_item.future.set_exception(result_item.exception)
            else:
                work_item.future.set_result(result_item.result)
        # Check whether we should start shutting down.
        executor = executor_reference()
        # No more work items can be added if:
        #   - The interpreter is shutting down OR
        #   - The executor that owns this worker has been collected OR
        #   - The executor that owns this worker has been shutdown.
        if _shutdown or executor is None or executor._shutdown_thread:
            # Since no new work items can be added, it is safe to shutdown
            # this thread if there are no pending work items.
            if not pending_work_items:
                while nb_shutdown_processes[0] < len(processes):
                    shutdown_one_process()
                # If .join() is not called on the created processes then
                # some multiprocessing.Queue methods may deadlock on Mac OS
                # X.
                for p in processes:
                    p.join()
                call_queue.close()
                return
        del executor
    
            for future in as_completed(future_to_url):
            try:
                url_to_content[future_to_url[future]] = future.result()
            except:
                pass
        return url_to_content
    finally:
        executor.shutdown()
    
    # If false, no module index is generated.
#latex_use_modindex = True

    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def backup_screenshot(ts):
    '''
    为了方便失败的时候 debug
    '''
    make_debug_dir(screenshot_backup_dir)
    shutil.copy('{}{}autojump.png'.format(os.getcwd(), path_split),
                os.path.join(os.getcwd(), screenshot_backup_dir,
                             str(ts) + '.png'))
    
    scale = 0.25