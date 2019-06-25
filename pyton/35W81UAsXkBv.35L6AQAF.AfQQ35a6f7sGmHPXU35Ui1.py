
        
        
class User(object):
    
    
class DefaultCategories(Enum):
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
        requires_project = False
    
    
def _parsed_url_args(parsed):
    # Assume parsed is urlparse-d from Request.url,
    # which was passed via safe_url_string and is ascii-only.
    b = lambda s: to_bytes(s, encoding='ascii')
    path = urlunparse(('', '', parsed.path or '/', parsed.params, parsed.query, ''))
    path = b(path)
    host = b(parsed.hostname)
    port = parsed.port
    scheme = b(parsed.scheme)
    netloc = b(parsed.netloc)
    if port is None:
        port = 443 if scheme == b'https' else 80
    return scheme, netloc, host, port, path
    
            # scrapy already handles #! links properly
        ajax_crawl_request = request.replace(url=request.url+'#!')
        logger.debug('Downloading AJAX crawlable %(ajax_crawl_request)s instead of %(request)s',
                     {'ajax_crawl_request': ajax_crawl_request, 'request': request},
                     extra={'spider': spider})
    
        def test_login(self):
        with self.mock_login():
            res = self.do_login()
            self.assert_success(res)
    
        @patch('r2.lib.authorize.interaction.Bid._new')
    def test_auth_freebie_transaction(self, _new):
        '''Test auth_freebie_transaction'''
        link = Mock(spec=Link)
        link._id = 99
        amount = 100
        campaign_id = 99
    
            self.amqp.assert_event_item(
            {
                'event_type': 'ss.report',
                'event_topic': 'report_events',
                'payload': {
                    'process_notes': 'CUSTOM',
                    'target_fullname': target._fullname,
                    'target_name': target.name,
                    'target_title': target.title,
                    'target_type': 'self',
                    'target_author_id': target.author_slow._id,
                    'target_author_name': target.author_slow.name,
                    'target_id': target._id,
                    'target_age_seconds': target._age.total_seconds(),
                    'target_created_ts': self.created_ts_mock,
                    'domain': request.host,
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'referrer_url': request.headers.get(),
                    'user_id': context.user._id,
                    'user_name': context.user.name,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'referrer_domain': self.domain_mock(),
                    'geoip_country': context.location,
                    'obfuscated_data': {
                        'client_ip': request.ip,
                        'client_ipv4_24': '1.2.3',
                        'client_ipv4_16': '1.2',
                    }
                }
            }
        )
    
    
    {                    'request_url': request.fullpath,
                    'domain': request.host,
                    'geoip_country': context.location,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'referrer_domain': self.domain_mock(),
                    'referrer_url': request.headers.get(),
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'obfuscated_data': {
                        'client_ip': request.ip,
                    }
                },
            )
        )
    
        def test_parse_addr(self):
        self.assertEquals(
            ('1:2', 3), stats.StatsdConnection._parse_addr('1:2:3'))