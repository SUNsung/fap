
        
            #: Setting this disables or force-enables the automatic options handling.
    provide_automatic_options = None
    
        app.config.update(SERVER_NAME='localhost:80')
    with app.test_request_context('/', environ_overrides={'SERVER_NAME': 'localhost:80'}):
        pass