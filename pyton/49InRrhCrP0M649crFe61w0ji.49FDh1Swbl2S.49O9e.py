
        
        
def main(unused_argv):
  # Run the exporter.
  export(FLAGS.master_spec, FLAGS.params_path, FLAGS.export_path,
         FLAGS.export_moving_averages, FLAGS.build_runtime_graph)
  tf.logging.info('Export complete.')
    
        try:
      with open(FLAGS.expected_file) as expected:
        content_expected = expected.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.expected_file, e.strerror))
    
    
_EXPECTED_CONTEXT = r'''
input { name: 'word-map' Part { file_pattern: '/tmp/word-map' } }
input { name: 'tag-map' Part { file_pattern: '/tmp/tag-map' } }
input { name: 'tag-to-category' Part { file_pattern: '/tmp/tag-to-category' } }
input { name: 'lcword-map' Part { file_pattern: '/tmp/lcword-map' } }
input { name: 'category-map' Part { file_pattern: '/tmp/category-map' } }
input { name: 'char-map' Part { file_pattern: '/tmp/char-map' } }
input { name: 'char-ngram-map' Part { file_pattern: '/tmp/char-ngram-map' } }
input { name: 'label-map' Part { file_pattern: '/tmp/label-map' } }
input { name: 'prefix-table' Part { file_pattern: '/tmp/prefix-table' } }
input { name: 'suffix-table' Part { file_pattern: '/tmp/suffix-table' } }
input { name: 'known-word-map' Part { file_pattern: '/tmp/known-word-map' } }
'''
    
    
if __name__ == '__main__':
    main()

    
        def _handle_events(self, fd, events):
        fileobj, handler_func = self.handlers[fd]
        handler_func(fileobj, events)
    
            async def worker(worker_id):
            await sem.acquire()
            try:
                print('Worker %d is working' % worker_id)
                await use_some_resource()
            finally:
                print('Worker %d is done' % worker_id)
                sem.release()
    
    try:
    import tornado.websocket  # noqa
    from tornado.util import _websocket_mask_python
except ImportError:
    # The unittest module presents misleading errors on ImportError
    # (it acts as if websocket_test could not be found, hiding the underlying
    # error).  If we get an ImportError here (which could happen due to
    # TORNADO_EXTENSION=1), print some extra information before failing.
    traceback.print_exc()
    raise
    
            If a socket with the given name already exists, it will be deleted.
        If any other file with that name exists, an exception will be
        raised.
    
                    # If @asynchronous is used with @gen.coroutine, (but
                # not @gen.engine), we can automatically finish the
                # request when the future resolves.  Additionally,
                # the Future will swallow any exceptions so we need
                # to throw them back out to the stack context to finish
                # the request.
                def future_complete(f):
                    f.result()
                    if not self._finished:
                        self.finish()
                IOLoop.current().add_future(result, future_complete)
                # Once we have done this, hide the Future from our
                # caller (i.e. RequestHandler._when_complete), which
                # would otherwise set up its own callback and
                # exception handler (resulting in exceptions being
                # logged twice).
                return None
            return result
    return wrapper
    
    
class TestIOStreamStartTLS(AsyncTestCase):
    def setUp(self):
        try:
            super(TestIOStreamStartTLS, self).setUp()
            self.listener, self.port = bind_unused_port()
            self.server_stream = None
            self.server_accepted = Future()
            netutil.add_accept_handler(self.listener, self.accept)
            self.client_stream = IOStream(socket.socket())
            self.io_loop.add_future(self.client_stream.connect(
                ('127.0.0.1', self.port)), self.stop)
            self.wait()
            self.io_loop.add_future(self.server_accepted, self.stop)
            self.wait()
        except Exception as e:
            print(e)
            raise
    
        Return the main content-type and a dictionary of options.
    
            namespace = exec_test(globals(), locals(), '''
        async def f():
            results = []
            async for i in q:
                results.append(i)
                if i == 4:
                    return results
        ''')
        results = yield namespace['f']()
        self.assertEqual(results, list(range(5)))