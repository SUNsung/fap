
        
            def __init__(self, request):
        exc = request.routing_exception
        buf = ['A request was sent to this URL (%s) but a redirect was '
               'issued automatically by the routing system to '%s'.'
               % (request.url, exc.new_url)]
    
        from site_app import app
    assert app.instance_path == \
        modules_tmpdir.join('var').join('site_app-instance')