
        
        # TODO: ensure that history changes.

    
    # TODO: ensure that history changes.

    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
        def crawl(self):
        while True:
            page = self.data_store.extract_max_priority_page()
            if page is None:
                break
            if self.data_store.crawled_similar(page.signature):
                self.data_store.reduce_priority_link_to_crawl(page.url)
            else:
                self.crawl_page(page)
            page = self.data_store.extract_max_priority_page()

    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
    try:
    from urllib2 import urlopen
except ImportError:
    from urllib.request import urlopen
    
    def with_thread_pool_executor():
    with ThreadPoolExecutor(10) as executor:
        return list(executor.map(is_prime, PRIMES))
    
    try:
    from StringIO import StringIO
except ImportError:
    from io import StringIO
    
      # Start by looking for a single character match
  # and increase length until no match is found.
  best = 0
  length = 1
  while True:
    pattern = left_string[ -length: ]
    found = right_string.find( pattern )
    if found < 0:
      return best
    length += found
    if left_string[ -length: ] == right_string[ :length ]:
      best = length
      length += 1

    
        The style used here is: each file is a <testsuite>; each violation
    will be a <testcase> (always failed) whose 'classname' shall be the tool
    used (e.g., pep8) and 'name' shall be the type of violation and line
    number. Any additional information shall be included as the <failure>
    message.
    
            # See if the target is already an existing friend.
        # If not, create the friend relationship.
        friend_rel = Account.get_friend(c.user, friend)
        rel_exists = bool(friend_rel)
        if not friend_rel:
            friend_rel = c.user.add_friend(friend)
            response.status = 201
    
        def GET_health(self):
        if os.path.exists('/var/opt/reddit/quiesce'):
            request.environ['usable_error_content'] = 'No thanks, I'm full.'
            abort(503)