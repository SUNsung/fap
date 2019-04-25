
        
            with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))
    
            :param name: the optional name of the test, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_test(f, name=name)
            return f
        return decorator
    
        .. versionadded:: 0.2
    '''
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
            if 'obj' not in kwargs:
            kwargs['obj'] = ScriptInfo(create_app=lambda: self.app)
    
        @property
    def is_json(self):
        '''Check if the mimetype indicates JSON data, either
        :mimetype:`application/json` or :mimetype:`application/*+json`.
    
    
class OutOfData(UnpackException):
    pass
    
        return df