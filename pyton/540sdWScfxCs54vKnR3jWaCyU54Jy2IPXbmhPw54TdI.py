
        
            def get_serializer_context(self):
        '''
        Extra context provided to the serializer class.
        '''
        return {
            'request': self.request,
            'format': self.format_kwarg,
            'view': self
        }
    
            elif url.endswith('/'):
            # Drop trailing slash off the end and continue to try to
            # resolve more breadcrumbs
            url = url.rstrip('/')
            return breadcrumbs_recursive(url, breadcrumbs_list, prefix, seen)
    
        @property
    def precedence(self):
        '''
        Return a precedence level from 0-3 for the media type given how specific it is.
        '''
        if self.main_type == '*':
            return 0
        elif self.sub_type == '*':
            return 1
        elif not self.params or list(self.params) == ['q']:
            return 2
        return 3
    
        def __str__(self):
        return self.tag