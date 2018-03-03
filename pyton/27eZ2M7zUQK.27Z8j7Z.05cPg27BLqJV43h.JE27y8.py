
        
            # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
        def get_formatters_grouped(self):
        groups = {}
        for group_name, group in groupby(
                self.get_formatters(),
                key=lambda p: getattr(p, 'group_name', 'format')):
            groups[group_name] = list(group)
        return groups
    
    
# -- Options for LaTeX output --------------------------------------------------
    
    
def get_user_id(username):
    '''Convenience method to look up the id for a username.'''
    rv = query_db('select user_id from user where username = ?',
                  [username], one=True)
    return rv[0] if rv else None