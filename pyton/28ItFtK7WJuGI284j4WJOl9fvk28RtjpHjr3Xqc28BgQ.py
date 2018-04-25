
        
            # Are checkable fields missing from the test case definition?
    test_info_dict = dict((key, value if not isinstance(value, compat_str) or len(value) < 250 else 'md5:' + md5(value))
                          for key, value in got_dict.items()
                          if value and key in ('id', 'title', 'description', 'uploader', 'upload_date', 'timestamp', 'uploader_id', 'location', 'age_limit'))
    missing_keys = set(test_info_dict.keys()) - set(expected_dict.keys())
    if missing_keys:
        def _repr(v):
            if isinstance(v, compat_str):
                return ''%s'' % v.replace('\\', '\\\\').replace(''', '\\'').replace('\n', '\\n')
            else:
                return repr(v)
        info_dict_str = ''
        if len(missing_keys) != len(expected_dict):
            info_dict_str += ''.join(
                '    %s: %s,\n' % (_repr(k), _repr(v))
                for k, v in test_info_dict.items() if k not in missing_keys)
    
        def test_no_duplicated_ie_names(self):
        name_accu = collections.defaultdict(list)
        for ie in self.ies:
            name_accu[ie.IE_NAME.lower()].append(type(ie).__name__)
        for (ie_name, ie_list) in name_accu.items():
            self.assertEqual(
                len(ie_list), 1,
                'Multiple extractors with the same IE_NAME '%s' (%s)' % (ie_name, ', '.join(ie_list)))
    
            mvp_id = self._search_mvp_id(webpage)
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, seller, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def __init__(self, cards):
        self.cards = cards
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
    def set_extension(environ, ext):
    environ['extension'] = ext
    environ['render_style'], environ['content_type'] = extension_mapping[ext]

    
    api('reltableitem', RelTableItemJsonTemplate)
api('bannedtableitem', BannedTableItemJsonTemplate)
api('mutedtableitem', MutedTableItemJsonTemplate)
api('invitedmodtableitem', InvitedModTableItemJsonTemplate)
api('friendtableitem', FriendTableItemJsonTemplate)
    
        @require_oauth2_scope('read')
    @validate(
        user=VAccountByName('username'),
    )
    @api_doc(
        section=api_section.users,
        uri='/api/v1/user/{username}/trophies',
    )
    def GET_usertrophies(self, user):
        '''Return a list of trophies for the a given user.'''
        return self.api_wrapper(get_usertrophies(user))
    
            template = g.mako_lookup.get_template(template_name)
        return template.render(
            logo_url=static(g.default_header_url),
            retry_after=retry_after,
        )