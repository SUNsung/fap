
        
            def update_views(self):
        '''Update stats views.'''
        # Call the father's method
        super(Plugin, self).update_views()
    
            logger.debug('{} action {} for {} ({}) with stats {}'.format(
            'Repeat' if repeat else 'Run',
            commands, stat_name, criticity, mustache_dict))
    
            # cached_time is the minimum time interval between stats updates
        # since last update is passed (will retrieve old cached info instead)
        self.timer_cpu = Timer(0)
        self.timer_percpu = Timer(0)
        self.cached_time = cached_time
    
            If 'event' is a 'new one', add it at the beginning of the list.
        If 'event' is not a 'new one', update the list .
        If event < peak_time then the alert is not set.
        '''
        proc_list = proc_list or glances_processes.getlist()
    
        def __init__(self, config=None, args=None):
        '''Init the Kafka export IF.'''
        super(Export, self).__init__(config=config, args=args)