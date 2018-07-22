
        
            app = flask.Flask(__name__)
    app.config.from_mapping([
        ('SECRET_KEY', 'config'),
        ('TEST_KEY', 'foo')
    ])
    common_object_test(app)
    
    
def test_logger_debug(app):
    app.debug = True
    assert app.logger.level == logging.DEBUG
    assert app.logger.handlers == [default_handler]
    
        rv = flask.render_template_string('{{ get_stuff() }}')
    assert rv == '42'