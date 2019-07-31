
        
                #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
    
@gen.coroutine
def c1():
    for i in range(10):
        yield c2()
    
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

    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
        # Certain errors (especially 'unclosed resource' errors raised in
    # destructors) go directly to stderr instead of logging. Count
    # anything written by anything but the test runner as an error.
    orig_stderr = sys.stderr
    counting_stderr = CountingStderr(orig_stderr)
    sys.stderr = counting_stderr  # type: ignore
    
    # sys.path handling
# -----------------
#
# If a module is run with 'python -m', the current directory (i.e. '')
# is automatically prepended to sys.path, but not if it is run as
# 'path/to/file.py'.  The processing for '-m' rewrites the former to
# the latter, so subsequent executions won't have the same path as the
# original.
#
# Conversely, when run as path/to/file.py, the directory containing
# file.py gets added to the path, which can cause confusion as imports
# may become relative in spite of the future import.
#
# We address the former problem by reconstructing the original command
# line (Python >= 3.4) or by setting the $PYTHONPATH environment
# variable (Python < 3.4) before re-execution so the new process will
# see the correct path.  We attempt to address the latter problem when
# tornado.autoreload is run as __main__.
    
            async def native_coroutine_with_adapter():
            return await to_asyncio_future(tornado_coroutine())