
        
            def reducer(self, key, values):
        '''Sum values for each key.
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
    
def add_or_delete_heroku_collaborator(module, client):
    user = module.params['user']
    state = module.params['state']
    affected_apps = []
    result_state = False
    
        return FirewallRuleType(IsEnabled=is_enable,
                            Description=description,
                            Policy=policy,
                            Protocols=protocol_to_type(protocol),
                            DestinationPortRange=dest_port,
                            DestinationIp=dest_ip,
                            SourcePortRange=source_port,
                            SourceIp=source_ip,
                            EnableLogging=enable_logging)
    
    EXAMPLES = '''
# Ensure dns zone is present
- ipa_dnszone:
    ipa_host: spider.example.com
    ipa_pass: Passw0rd!
    state: present
    zone_name: example.com
    
    def main():
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover