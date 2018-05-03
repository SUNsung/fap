
        
                # In case just a slash was appended we can be extra helpful
        if request.base_url + '/' == exc.new_url.split('?')[0]:
            buf.append('  The URL was defined with a trailing slash so '
                       'Flask will automatically redirect to the URL '
                       'with the trailing slash if it was accessed '
                       'without one.')
    
            if trv is not None:
            return trv
        raise TemplateNotFound(template)
    
            class SecretView(View):
            methods = ['GET']
            decorators = [superuser_required]
    
        flask.got_request_exception.connect(record, app)
    try:
        assert app.test_client().get('/').status_code == 500
        assert len(recorded) == 1
        assert isinstance(recorded[0], ZeroDivisionError)
    finally:
        flask.got_request_exception.disconnect(record, app)
    
        def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.DIRECTOR)
    
        def approve_friend_request(self, from_user_id, to_user_id):
        pass
    
        def __init__(self, cards):
        super(BlackJackHand, self).__init__(cards)
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []