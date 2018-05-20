
        
                if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    
def human(report):
    '''Convert the report to a list of human useful lines.'''
    updated = []
    for toolname, violations in report.iteritems():
        updated.append(toolname)
        updated.extend('%(file)s:%(line)s %(violation)s' % v
                       for v in violations)
        updated.append('')
    return updated
    
    def is_api(subtype = ''):
    return c.render_style and c.render_style.startswith(api_type(subtype))
    
            # tell reddit_base to redirect to the appropriate subreddit for
        # a legacy CNAME
        if not is_subdomain(domain, g.domain):
            environ['legacy-cname'] = domain
            return self.app(environ, start_response)
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        user=VAccountByName('username'),
        months=VInt('months', min=1, max=36),
        timeout=VNotInTimeout(),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/give/{username}',
    )
    def POST_give(self, user, months, timeout):
        self._gift_using_creddits(
            recipient=user,
            months=months,
            proxying_for=request.POST.get('proxying_for'),
        )

    
        def GET_promohealth(self):
        response.content_type = 'application/json'
        return json.dumps(promote.health_check())