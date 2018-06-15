
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
        @skipBefore35
    @gen_test
    def test_native_coroutine(self):
        ws = yield self.ws_connect('/native')
        # Send both messages immediately, coroutine must process one at a time.
        yield ws.write_message('hello1')
        yield ws.write_message('hello2')
        res = yield ws.read_message()
        self.assertEqual(res, 'hello1')
        res = yield ws.read_message()
        self.assertEqual(res, 'hello2')
    
        @gen_test
    def test_pipe_iostream_big_write(self):
        rs, ws = yield self.make_iostream_pair()
    
        def test_undecorated_generator_with_skip(self):
        class Test(AsyncTestCase):
            @unittest.skip('don't run this')
            def test_gen(self):
                yield
        test = Test('test_gen')
        result = unittest.TestResult()
        test.run(result)
        self.assertEqual(len(result.errors), 0)
        self.assertEqual(len(result.skipped), 1)
    
    `tornado.options.options` is a singleton instance of `OptionParser`, and
the top-level functions in this module (`define`, `parse_command_line`, etc)
simply call methods on it.  You may create additional `OptionParser`
instances to define isolated sets of options, such as for subcommands.
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
    '''
http://web.archive.org/web/20120309135549/http://dpip.testingperspective.com/?p=28
    
        def toggle_amfm(self):
        print(u'Switching to AM')
        self.radio.state = self.radio.amstate