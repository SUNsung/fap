
        
        *TL;DR
Encapsulates how a set of objects interact.
'''
    
    *References:
https://fkromer.github.io/python-pattern-references/design/#singleton
    
    '''
*What is this pattern about?
The Adapter pattern provides a different interface for a class. We can
think about it as a cable adapter that allows you to charge a phone
somewhere that has outlets in a different shape. Following this idea,
the Adapter pattern is useful to integrate classes that couldn't be
integrated due to their incompatible interfaces.
    
        Note that for open file and socket handles it is generally
    preferable to set the ``FD_CLOEXEC`` flag (using `fcntl` or
    ``tornado.platform.auto.set_close_exec``) instead
    of using a reload hook to close them.
    '''
    _reload_hooks.append(fn)
    
        .. deprecated:: 5.0
    
        def _sock_state_cb(self, fd: int, readable: bool, writable: bool) -> None:
        state = (IOLoop.READ if readable else 0) | (IOLoop.WRITE if writable else 0)
        if not state:
            self.io_loop.remove_handler(fd)
            del self.fds[fd]
        elif fd in self.fds:
            self.io_loop.update_handler(fd, state)
            self.fds[fd] = state
        else:
            self.io_loop.add_handler(fd, self._handle_events, state)
            self.fds[fd] = state
    
    
class GeneratorClientTest(ClientTestMixin, AsyncTestCase):
    client_class = GeneratorCapClient