
        
                String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    Available hooks:
    
        def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
    # If true, keep warnings as 'system message' paragraphs in the built documents.
#keep_warnings = False
    
        # Check urllib3 for compatibility.
    major, minor, patch = urllib3_version  # noqa: F811
    major, minor, patch = int(major), int(minor), int(patch)
    # urllib3 >= 1.21.1, <= 1.23
    assert major == 1
    assert minor >= 21
    assert minor <= 23
    
        def __init__(self, key, value):
        self.key = key
        self.value = value
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
        def is_face_card(self):
        '''Jack = 11, Queen = 12, King = 13'''
        return True if 10 < self._value <= 13 else False
    
        def __init__(self, person_ids, lookup):
        self.lookup = lookup
        self.person_ids = person_ids
        self.visited_ids = set()
    
            Emit key value pairs of the form:
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer),
            self.mr(mapper=self.mapper_sort,
                    reducer=self.reducer_identity),
        ]
    
        def __init__(self, from_user_id, to_user_id, request_status, timestamp):
        self.from_user_id = from_user_id
        self.to_user_id = to_user_id
        self.request_status = request_status
        self.timestamp = timestamp
    
        if address_family == socket.AF_INET:
        if len(packed_ip) != ctypes.sizeof(addr.ipv4_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv4_addr, packed_ip, 4)
    elif address_family == socket.AF_INET6:
        if len(packed_ip) != ctypes.sizeof(addr.ipv6_addr):
            raise socket.error('packed IP wrong length for inet_ntoa')
        ctypes.memmove(addr.ipv6_addr, packed_ip, 16)
    else:
        raise socket.error('unknown address family')
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
        def extractInformationFromTreeNodeStream(self, nodes):
        from antlr3.tree import Tree, CommonTree
        from antlr3.tokens import CommonToken
        
        self.node = nodes.LT(1)
        adaptor = nodes.adaptor
        payload = adaptor.getToken(self.node)
        if payload is not None:
            self.token = payload
            if payload.line <= 0:
                # imaginary node; no line/pos info; scan backwards
                i = -1
                priorNode = nodes.LT(i)
                while priorNode is not None:
                    priorPayload = adaptor.getToken(priorNode)
                    if priorPayload is not None and priorPayload.line > 0:
                        # we found the most recent real line / pos info
                        self.line = priorPayload.line
                        self.charPositionInLine = priorPayload.charPositionInLine
                        self.approximateLineInfo = True
                        break
                    
                    i -= 1
                    priorNode = nodes.LT(i)
                    
            else: # node created from real token
                self.line = payload.line
                self.charPositionInLine = payload.charPositionInLine
                
        elif isinstance(self.node, Tree):
            self.line = self.node.line
            self.charPositionInLine = self.node.charPositionInLine
            if isinstance(self.node, CommonTree):
                self.token = self.node.token
    
    
    def getLastRewriteTokenIndex(self, programName=DEFAULT_PROGRAM_NAME):
        return self.lastRewriteTokenIndexes.get(programName, -1)
    
    
@section tokenstrees Tokens and Trees
    
    URLS = ['http://www.google.com/',
        'http://www.apple.com/',
        'http://www.ibm.com',
        'http://www.thisurlprobablydoesnotexist.com',
        'http://www.slashdot.org/',
        'http://www.python.org/',
        'http://www.bing.com/',
        'http://www.facebook.com/',
        'http://www.yahoo.com/',
        'http://www.youtube.com/',
        'http://www.blogger.com/']
    
    # -- General configuration -----------------------------------------------------
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    https://en.wikipedia.org/wiki/Blackboard_system
'''
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update,\
                patch.object(cls.hex_obs, 'update') as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
    
if __name__ == '__main__':
    main()
    
        def test_items_recoil(self):
        with ObjectPool(self.sample_queue, True) as pool:
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        def test_bear_greek_localization(self):
        self.assertEqual(self.g.get('bear'), 'bear')

    
    
class TestRunnerFacilities(unittest.TestCase):
    
    class ParameterInjectionTest(unittest.TestCase):
    
    class TimeDisplay(object):
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def __init__(self, param):
        self.x1 = 'x1'
        self.x2 = 'x2'
        # simple test to validate param value
        if param in self._instance_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
            # and can also be undone at will
        for cmd in reversed(command_stack):
            cmd.undo()
    finally:
        os.unlink('foo.txt')
    
    ### OUTPUT ###
# Counting to two...
# one two
# Counting to five...
# one two three four five

    
        def add_handler(self, fd, handler, events):
        fd, fileobj = self.split_fd(fd)
        if fd in self.handlers:
            raise ValueError('fd %s added twice' % fd)
        self.handlers[fd] = (fileobj, stack_context.wrap(handler))
        if events & IOLoop.READ:
            self.asyncio_loop.add_reader(
                fd, self._handle_events, fd, IOLoop.READ)
            self.readers.add(fd)
        if events & IOLoop.WRITE:
            self.asyncio_loop.add_writer(
                fd, self._handle_events, fd, IOLoop.WRITE)
            self.writers.add(fd)
    
            def sync_func(self_event, other_event):
            self_event.set()
            other_event.wait()
            return self_event
    
            if opcode == 0x1:
            # UTF-8 data
            self._message_bytes_in += len(data)
            try:
                decoded = data.decode('utf-8')
            except UnicodeDecodeError:
                self._abort()
                return
            return self._run_callback(self.handler.on_message, decoded)
        elif opcode == 0x2:
            # Binary data
            self._message_bytes_in += len(data)
            return self._run_callback(self.handler.on_message, data)
        elif opcode == 0x8:
            # Close
            self.client_terminated = True
            if len(data) >= 2:
                self.handler.close_code = struct.unpack('>H', data[:2])[0]
            if len(data) > 2:
                self.handler.close_reason = to_unicode(data[2:])
            # Echo the received close code, if any (RFC 6455 section 5.5.1).
            self.close(self.handler.close_code)
        elif opcode == 0x9:
            # Ping
            try:
                self._write_frame(True, 0xA, data)
            except StreamClosedError:
                self._abort()
            self._run_callback(self.handler.on_ping, data)
        elif opcode == 0xA:
            # Pong
            self.last_pong = IOLoop.current().time()
            return self._run_callback(self.handler.on_pong, data)
        else:
            self._abort()
    
        def listen(self, port, address='', **kwargs):
        '''Starts an HTTP server for this application on the given port.
    
    
class HTTP100ContinueTestCase(AsyncHTTPTestCase):
    def respond_100(self, request):
        self.http1 = request.version.startswith('HTTP/1.')
        if not self.http1:
            request.connection.write_headers(ResponseStartLine('', 200, 'OK'),
                                             HTTPHeaders())
            request.connection.finish()
            return
        self.request = request
        fut = self.request.connection.stream.write(
            b'HTTP/1.1 100 CONTINUE\r\n\r\n')
        fut.add_done_callback(self.respond_200)
    
            add_accept_handler(listener, accept_callback)
        self.client_stream = IOStream(socket.socket())
        self.addCleanup(self.client_stream.close)
        yield [self.client_stream.connect(('127.0.0.1', port)),
               event.wait()]
        self.io_loop.remove_handler(listener)
        listener.close()
    
        @gen_test
    def test_task_done_delay(self):
        # Verify it is task_done(), not get(), that unblocks join().
        q = self.queue_class()
        q.put_nowait(0)
        join = q.join()
        self.assertFalse(join.done())
        yield q.get()
        self.assertFalse(join.done())
        yield gen.moment
        self.assertFalse(join.done())
        q.task_done()
        self.assertTrue(join.done())
    
    from homeassistant.setup import setup_component
import homeassistant.components.splunk as splunk
from homeassistant.const import STATE_ON, STATE_OFF, EVENT_STATE_CHANGED
from homeassistant.helpers import state as state_helper
import homeassistant.util.dt as dt_util
    
        hass.services.register(DOMAIN, SERVICE_VOLUME_MUTE,
                           lambda service:
                           keyboard.tap_key(keyboard.volume_mute_key),
                           schema=TAP_KEY_SCHEMA)
    
        def test_from_event_to_delete_state(self):
        '''Test converting deleting state event to db state.'''
        event = ha.Event(EVENT_STATE_CHANGED, {
            'entity_id': 'sensor.temperature',
            'old_state': ha.State('sensor.temperature', '18'),
            'new_state': None,
        })
        db_state = States.from_event(event)