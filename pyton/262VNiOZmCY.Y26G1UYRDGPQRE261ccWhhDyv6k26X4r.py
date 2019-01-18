
        
            def __init__(self, request):
        exc = request.routing_exception
        buf = ['A request was sent to this URL (%s) but a redirect was '
               'issued automatically by the routing system to '%s'.'
               % (request.url, exc.new_url)]
    
            current = current.parent
    
        Implements the WSGI wrappers (request and response).
    
    
def test_app_tearing_down_with_handled_exception_by_app_handler(app, client):
    app.config['PROPAGATE_EXCEPTIONS'] = True
    cleanup_stuff = []
    
        module = AnsibleModule(argument_spec, supports_check_mode=True)
    
    
def main():
    module = AnsibleModule(
        argument_spec=dict(
            path=dict(required=True),
            state=dict(default='present', choices=['present', 'followed', 'absent', 'unfollowed']),
            name=dict(required=False, default=None, type='str'),
            logtype=dict(required=False, default=None, type='str', aliases=['type'])
        ),
        supports_check_mode=True
    )