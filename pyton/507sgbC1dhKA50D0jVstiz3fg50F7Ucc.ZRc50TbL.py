
        
        
@pytest.mark.usefixtures('no_memoize', 'os_environ_pathsep')
@pytest.mark.parametrize('path, pathsep', [
    ('/foo:/bar:/baz:/foo/bar', ':'),
    (r'C:\\foo;C:\\bar;C:\\baz;C:\\foo\\bar', ';')])
def test_get_all_executables_pathsep(path, pathsep):
    with patch('thefuck.utils.Path') as Path_mock:
        get_all_executables()
        Path_mock.assert_has_calls([call(p) for p in path.split(pathsep)], True)
    
        @pytest.mark.parametrize('side_effect, expected_info, warn', [
        ([u'3.5.9'], u'Generic Shell 3.5.9', False),
        ([OSError], u'Generic Shell', True),
    ])
    def test_info(self, side_effect, expected_info, warn, shell, mocker):
        warn_mock = mocker.patch('thefuck.shells.generic.warn')
        shell._get_version = mocker.Mock(side_effect=side_effect)
        assert shell.info() == expected_info
        assert warn_mock.called is warn
        assert shell._get_version.called

    
        def _get_history_line(self, command_script):
        return u'- cmd: {}\n   when: {}\n'.format(command_script, int(time()))
    
    
@for_app('pyenv')
def match(command):
    return 'pyenv: no such command' in command.output
    
    The most similar choice to 'lis' is:
    list
'''
    
    
@eager
def _parse_apt_get_and_cache_operations(help_text_lines):
    is_commands_list = False
    for line in help_text_lines:
        line = line.decode().strip()
        if is_commands_list:
            if not line:
                return
    
    import numpy as np
    
        # simulate file handle
    json = '{'a': 'foo”', 'b': 'bar'}\n{'a': 'foo', 'b': 'bar'}\n'
    json = StringIO(json)
    result = read_json(json, lines=True)
    expected = DataFrame([['foo\u201d', 'bar'], ['foo', 'bar']], columns=['a', 'b'])
    assert_frame_equal(result, expected)
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
        def finish_tree(self, tree, filename):
        if self.found_future_import:
            return
        if not isinstance(tree, pytree.Node):
            # Empty files (usually __init__.py) show up as a single Leaf
            # instead of a Node, so leave them alone
            return
        first_stmt = tree.children[0]
        if is_docstring(first_stmt):
            # Skip a line and add the import after the docstring
            tree.insert_child(1, Newline())
            pos = 2
        elif first_stmt.prefix:
            # No docstring, but an initial comment (perhaps a #! line).
            # Transfer the initial comment to a new blank line.
            newline = Newline()
            newline.prefix = first_stmt.prefix
            first_stmt.prefix = ''
            tree.insert_child(0, newline)
            pos = 1
        else:
            # No comments or docstring, just insert at the start
            pos = 0
        tree.insert_child(pos, self.new_future_import(None))
        tree.insert_child(pos + 1, Newline())  # terminates the import stmt

    
    
class OpenCoroutineHandler(TestWebSocketHandler):
    def initialize(self, test, **kwargs):
        super(OpenCoroutineHandler, self).initialize(**kwargs)
        self.test = test
        self.open_finished = False
    
    
def _check_file(modify_times: Dict[str, float], path: str) -> None:
    try:
        modified = os.stat(path).st_mtime
    except Exception:
        return
    if path not in modify_times:
        modify_times[path] = modified
        return
    if modify_times[path] != modified:
        gen_log.info('%s modified; restarting server', path)
        _reload()
    
        def add_callback_from_signal(
        self, callback: Callable, *args: Any, **kwargs: Any
    ) -> None:
        try:
            self.asyncio_loop.call_soon_threadsafe(
                self._run_callback, functools.partial(callback, *args, **kwargs)
            )
        except RuntimeError:
            pass
    
    
def _is_punctuation(char):
  '''Checks whether `chars` is a punctuation character.'''
  cp = ord(char)
  # We treat all non-letter/number ASCII as punctuation.
  # Characters such as '^', '$', and '`' are not in the Unicode
  # Punctuation class but we treat them as punctuation anyways, for
  # consistency.
  if ((cp >= 33 and cp <= 47) or (cp >= 58 and cp <= 64) or
      (cp >= 91 and cp <= 96) or (cp >= 123 and cp <= 126)):
    return True
  cat = unicodedata.category(char)
  if cat.startswith('P'):
    return True
  return False

    
          # Only the last two dimensions are relevant (`seq_length` and `width`), so
      # we broadcast among the first dimensions, which is typically just
      # the batch size.
      position_broadcast_shape = []
      for _ in range(num_dims - 2):
        position_broadcast_shape.append(1)
      position_broadcast_shape.extend([seq_length, width])
      position_embeddings = tf.reshape(position_embeddings,
                                       position_broadcast_shape)
      output += position_embeddings