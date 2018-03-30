
        
        import mock
    
    # If not '', a 'Last updated on:' timestamp is inserted at every page bottom,
# using the given strftime format.
#html_last_updated_fmt = '%b %d, %Y'
    
    if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
        # Implement all methods from IAuthenticator, remembering to add
    # 'self' as first argument, e.g. def prepare(self)...
    
        classifiers = proj_info['classifiers'],
    
    LIMIT = 100
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
        self.title = match1(content, r'<title>([^<]+)</title>')
        s = match1(content, r'P\.s\s*=\s*\'([^\']+)\'')
        scp = match1(content, r'InfoQConstants\.scp\s*=\s*\'([^\']+)\'')
        scs = match1(content, r'InfoQConstants\.scs\s*=\s*\'([^\']+)\'')
        sck = match1(content, r'InfoQConstants\.sck\s*=\s*\'([^\']+)\'')
    
        def prepare(self, **kwargs):
        content = get_content(self.url)