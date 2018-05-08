
        
        with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
        return sorted(
        filter(lambda ie: ie.is_suitable(age_limit), gen_extractors()),
        key=lambda ie: ie.IE_NAME.lower())
    
            webpage = self._download_webpage(url, video_id)
    
        if app.debug and logger.level == logging.NOTSET:
        logger.setLevel(logging.DEBUG)
    
        :param source: the source code of the template to be
                   rendered
    :param context: the variables that should be available in the
                    context of the template.
    '''
    ctx = _app_ctx_stack.top
    ctx.app.update_template_context(context)
    return _render(ctx.app.jinja_env.from_string(source),
                   context, ctx.app)

    
    
def common_object_test(app):
    assert app.secret_key == 'config'
    assert app.config['TEST_KEY'] == 'foo'
    assert 'TestConfig' not in app.config
    
        flask.before_render_template.connect(record, app)
    try:
        rv = app.test_client().get('/')
        assert len(recorded) == 1
        template, context = recorded[0]
        assert template.name == 'simple_template.html'
        assert context['whiskey'] == 43
        assert rv.data == b'<h1>43</h1>'
    finally:
        flask.before_render_template.disconnect(record, app)
    
            for q_str in repr(q), str(q):
            self.assertTrue(q_str.startswith('<Queue'))
            self.assertIn('maxsize=1', q_str)
            self.assertIn('getters[1]', q_str)
            self.assertNotIn('putters', q_str)
            self.assertNotIn('tasks', q_str)
    
        For use on platforms that don't have os.pipe() (or where pipes cannot
    be passed to select()), but do have sockets.  This includes Windows
    and Jython.
    '''
    def __init__(self):
        from .auto import set_close_exec
        # Based on Zope select_trigger.py:
        # https://github.com/zopefoundation/Zope/blob/master/src/ZServer/medusa/thread/select_trigger.py
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')
