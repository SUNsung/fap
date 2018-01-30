
        
            @value.setter
    @abstractmethod
    def value(self, other):
        pass
    
    
class Transaction(object):
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
        def is_admin(self, user):
        if not user or not hasattr(user, 'name'):
            return False
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        target=VByName('fullname'),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/gild/{fullname}',
    )
    def POST_gild(self, target):
        if not isinstance(target, (Comment, Link)):
            err = RedditError('NO_THING_ID')
            self.on_validation_error(err)
    
        def _login(self, responder, user, rem=None):
        '''Login the user.
    
        def GET_faq(self):
        if c.default_sr:
            return self.redirect('/help/faq')
        else:
            return self.renderurl('/help/faqs/' + c.site.name)
