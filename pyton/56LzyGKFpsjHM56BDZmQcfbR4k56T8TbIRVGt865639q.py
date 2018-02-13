
        
            @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
def get_exit_status(http_status, follow=False):
    '''Translate HTTP status code to exit status code.'''
    if 300 <= http_status <= 399 and not follow:
        # Redirect
        return ExitStatus.ERROR_HTTP_3XX
    elif 400 <= http_status <= 499:
        # Client Error
        return ExitStatus.ERROR_HTTP_4XX
    elif 500 <= http_status <= 599:
        # Server Error
        return ExitStatus.ERROR_HTTP_5XX
    else:
        return ExitStatus.OK
    
    import requests.auth
    
        exitcode = 0
    
    from six.moves.urllib.parse import urlencode
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
        MOTORCYCLE = 0
    COMPACT = 1
    LARGE = 2
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        ...
    
            if 'note' in notes_json:
            note = notes_json['note'] or ''
            if not rel_exists:
                # If this is a newly created friend relationship,
                # the cache needs to be updated before a note can
                # be applied
                c.user.friend_rels_cache(_update=True)
            c.user.add_friend_note(friend, note)
        rel_view = FriendTableItem(friend_rel)
        return self.api_wrapper(FriendTableItemJsonTemplate().data(rel_view))
    
            To request a new CAPTCHA,
        use [/api/new_captcha](#POST_api_new_captcha).
        '''
        image = captcha.get_image(iden)
        f = StringIO.StringIO()
        image.save(f, 'PNG')
        response.content_type = 'image/png;'
        return f.getvalue()
    

    
                if (error_name == 'IN_TIMEOUT' and
                    not 'usable_error_content' in request.environ):
                timeout_days_remaining = c.user.days_remaining_in_timeout