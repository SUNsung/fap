
        
        import io
import optparse
    
    
class TestSWFInterpreter(unittest.TestCase):
    pass
    
            retval = subprocess.call(args)
        if retval == 0:
            fsize = os.path.getsize(encodeFilename(tmpfilename))
            self.to_screen('\r[%s] %s bytes' % (args[0], fsize))
            self.try_rename(tmpfilename, filename)
            self._hook_progress({
                'downloaded_bytes': fsize,
                'total_bytes': fsize,
                'filename': filename,
                'status': 'finished',
            })
            return True
        else:
            self.to_stderr('\n')
            self.report_error('%s exited with code %d' % (args[0], retval))
            return False

    
            info = page['info']
    
        def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
            if (not line.strip() == '```'):
            if ('???' == no_comment_line or '...' == no_comment_line):
                has_question_marks = True
            linebuffer.append(dedent(line, indent_depth) if not fenced else line)
        try:
            line = read_filehandle.next()
            linenum += 1
        except StopIteration:
            line = ''
            break
    codefile = os.path.join(codedir, '%s%s.cpp' % (name, index))
    if fenced:
        text_filehandle.write('\n')
    
        def replace(self, new_value, args, kwargs):
        # type: (Any, List[Any], Dict[str, Any]) -> Tuple[Any, List[Any], Dict[str, Any]]
        '''Replace the named argument in ``args, kwargs`` with ``new_value``.
    
        def _sock_state_cb(self, fd, readable, writable):
        state = ((IOLoop.READ if readable else 0) |
                 (IOLoop.WRITE if writable else 0))
        if not state:
            self.io_loop.remove_handler(fd)
            del self.fds[fd]
        elif fd in self.fds:
            self.io_loop.update_handler(fd, state)
            self.fds[fd] = state
        else:
            self.io_loop.add_handler(fd, self._handle_events, state)
            self.fds[fd] = state
    
    
class Entry(db.Model):
    '''A single blog entry.'''
    author = db.UserProperty()
    title = db.StringProperty(required=True)
    slug = db.StringProperty(required=True)
    body_source = db.TextProperty(required=True)
    html = db.TextProperty(required=True)
    published = db.DateTimeProperty(auto_now_add=True)
    updated = db.DateTimeProperty(auto_now=True)
    
    from tornado import gen
from tornado.ioloop import IOLoop
from tornado.netutil import Resolver, ThreadedResolver
from tornado.options import parse_command_line, define, options
    
    
class Publisher:
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def test_display_current_time_at_midnight(self):
        '''
        Will almost always fail (despite of right at/after midnight).
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)