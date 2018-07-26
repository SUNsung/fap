
        
                    app.config['IMAGE_STORE_TYPE'] = 'fs'
            app.config['IMAGE_STORE_PATH'] = '/var/app/images'
            app.config['IMAGE_STORE_BASE_URL'] = 'http://img.website.com'
            image_store_config = app.config.get_namespace('IMAGE_STORE_')
    
        When :attr:`~flask.Flask.debug` is enabled, set the logger level to
    :data:`logging.DEBUG` if it is not set.
    
            class CounterAPI(MethodView):
            def get(self):
                return session.get('counter', 0)
    
                if next(lineiter).count('-') != len(match.group(0)):
                continue
    
    
def test_custom_config_class():
    class Config(flask.Config):
        pass
    
    
def test_main_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('main_app.py')
    app.write('import flask\n\napp = flask.Flask('__main__')')
    purge_module('main_app')
    
        app.config.update(SERVER_NAME='localhost:80')
    with app.test_request_context('/', environ_overrides={'SERVER_NAME': 'localhost:80'}):
        pass
    
    from flask._compat import StringIO
    
    
def get_new_command(command):
    dir = shell.quote(_tar_file(command.script_parts)[1])
    return shell.and_('mkdir -p {dir}', '{cmd} -C {dir}') \
        .format(dir=dir, cmd=command.script)