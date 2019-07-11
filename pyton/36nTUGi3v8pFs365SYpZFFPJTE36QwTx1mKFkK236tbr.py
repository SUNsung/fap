
        
                if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id) VALUES (?, ?, ?)',
                (title, body, g.user['id']),
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
        def is_null_session(self, obj):
        '''Checks if a given object is a null session.  Null sessions are
        not asked to be saved.
    
        def __str__(self):
        return self.tag(wrap_label=True)
    
    
class DjangoTemplates(EngineMixin, BaseRenderer):
    '''
    Load Django templates from the built-in widget templates in
    django/forms/templates and from apps' 'templates' directory.
    '''
    backend = DjangoTemplates
    
        :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
    
def __meters_to_miles(meters: float) -> float:
    '''Convert meters to miles.'''
    return meters * 0.000621371