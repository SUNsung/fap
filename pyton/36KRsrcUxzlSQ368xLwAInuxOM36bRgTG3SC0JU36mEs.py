
        
        import rsa
import json
from binascii import hexlify
    
            def _find_spec(key):
            m = re.search(
                r'(?m)^//\s*%s:\s*(.*?)\n' % re.escape(key), as_content)
            if not m:
                raise ValueError('Cannot find %s in %s' % (key, testfile))
            return json.loads(m.group(1))
    
            self._debug_cmd(args)
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
            video_url = self._html_search_regex(r'video_url\s*:\s*'([^']+)'', webpage, 'video URL')
    
    # encoding=utf8  
import sys  
    
            :arg rules: a list of `Rule` instances or tuples of `Rule`
            constructor arguments.
        '''
        self.rules = []  # type: typing.List[Rule]
        if rules:
            self.add_rules(rules)
    
        def test_static_invalid_range(self):
        response = self.get_and_head('/static/robots.txt', headers={
            'Range': 'asdf'})
        self.assertEqual(response.code, 200)
    
            This class method may be overridden by subclasses.  Note that its
        signature is different from other overridable class methods
        (no ``settings`` argument); this is deliberate to ensure that
        ``abspath`` is able to stand on its own as a cache key.
    
    
class PriorityQueueJoinTest(QueueJoinTest):
    queue_class = queues.PriorityQueue
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    def initialize(self):
        self.io_loop = IOLoop.current()
        self.channel = pycares.Channel(sock_state_cb=self._sock_state_cb)
        self.fds = {}
    
            @gen.coroutine
        def main():
            # Start consumer without waiting (since it never finishes).
            IOLoop.current().spawn_callback(consumer)
            yield producer()     # Wait for producer to put all tasks.
            yield q.join()       # Wait for consumer to finish all tasks.
            print('Done')
    
    
class ArchiveHandler(BaseHandler):
    def get(self):
        entries = self.db.query('SELECT * FROM entries ORDER BY published '
                                'DESC')
        self.render('archive.html', entries=entries)