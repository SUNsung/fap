
        
            The response code line has the form
    
    
# Is a path a directory?
# This follows symbolic links, so both islink() and isdir()
# can be true for the same path on systems that support symlinks
def isdir(s):
    '''Return true if the pathname refers to an existing directory.'''
    try:
        st = os.stat(s)
    except (OSError, ValueError):
        return False
    return stat.S_ISDIR(st.st_mode)
    
        Directories are *not* resources.
    '''
    package = _get_package(package)
    _normalize_path(name)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.is_resource(name)
    try:
        package_contents = set(contents(package))
    except (NotADirectoryError, FileNotFoundError):
        return False
    if name not in package_contents:
        return False
    # Just because the given file_name lives as an entry in the package's
    # contents doesn't necessarily mean it's a resource.  Directories are not
    # resources, so let's try to find out if it's a directory or not.
    path = Path(package.__spec__.origin).parent / name
    return path.is_file()
    
    dom = xml.dom.minidom.parseString(document)
    
            print('Testing IMapIterator.next() with timeout:', end=' ')
        it = pool.imap(calculatestar, TASKS)
        while 1:
            sys.stdout.flush()
            try:
                sys.stdout.write('\n\t%s' % it.next(0.02))
            except StopIteration:
                break
            except multiprocessing.TimeoutError:
                sys.stdout.write('.')
        print()
        print()
    
    print('Enter your SQL commands to execute in sqlite3.')
print('Enter a blank line to exit.')
    
    
if __name__ == '__main__':
    main()
    
        # TODO: It would be better if we had unit tests for each
    # method in addition to the following end-to-end test
    def test_end_to_end(self):
        print('Test: Empty stack')
        stack = Stack()
        assert_equal(stack.peek(), None)
        assert_equal(stack.pop(), None)
    
    		elif current.rightChild is None:
			if current is self.root:
				self.root = current.leftChild
			elif isLeft:
				parent.leftChild = current.leftChild
			else:
				parent.rightChild = current.leftChild
    
    	def test_insert_traversals (self):
		myTree = BinaryTree()
		myTree2 = BinaryTree()
		for num in [50, 30, 70, 10, 40, 60, 80, 7, 25, 38]:
			myTree.insert(num)
		[myTree2.insert(num) for num in range (1, 100, 10)]
    
        def extract_min(self):
        if not self.array:
            return None
        minimum = sys.maxsize
        for index, node in enumerate(self.array):
            if node.key < minimum:
                minimum = node.key
                minimum_index = index
        return self.array.pop(minimum_index)
    
        def configure(self, updated):
        # We're already streaming - stop the previous stream and restart
        if 'save_stream_filter' in updated:
            if ctx.options.save_stream_filter:
                self.filt = flowfilter.parse(ctx.options.save_stream_filter)
                if not self.filt:
                    raise exceptions.OptionsError(
                        'Invalid filter specification: %s' % ctx.options.save_stream_filter
                    )
            else:
                self.filt = None
        if 'save_stream_file' in updated or 'save_stream_filter' in updated:
            if self.stream:
                self.done()
            if ctx.options.save_stream_file:
                self.start_stream_to_path(ctx.options.save_stream_file, self.filt)
    
    from mitmproxy.net.http import http1
from mitmproxy import exceptions
from mitmproxy import ctx
from mitmproxy.utils import human
    
        def configure(self, updated):
        # FIXME: We're doing this because our proxy core is terminally confused
        # at the moment. Ideally, we should be able to check if we're in
        # reverse proxy mode at the HTTP layer, so that scripts can put the
        # proxy in reverse proxy mode for specific requests.
        if 'upstream_auth' in updated:
            if ctx.options.upstream_auth is None:
                self.auth = None
            else:
                self.auth = parse_upstream_auth(ctx.options.upstream_auth)
    
        def add(self, path: str, func: typing.Callable):
        self.commands[path] = Command(self, path, func)
    
    from mitmproxy import certs
from mitmproxy import exceptions
from mitmproxy import stateobject
from mitmproxy.net import tcp
from mitmproxy.net import tls
from mitmproxy.utils import human
from mitmproxy.utils import strutils
    
    
class Reply:
    '''
    Messages sent through a channel are decorated with a 'reply' attribute. This
    object is used to respond to the message through the return channel.
    '''
    def __init__(self, obj):
        self.obj = obj
        # Spawn an event loop in the current thread
        self.q = queue.Queue()