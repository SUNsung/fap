
        
            def build_page(self, container, category):
        ''' Build a plugin config page '''
        logger.debug('Building plugin config page: '%s'', category)
        plugins = sorted(list(key for key in self.config_dict_gui[category].keys()))
        if any(plugin != category for plugin in plugins):
            page = ttk.Notebook(container)
            page.pack(side=tk.TOP, fill=tk.BOTH, expand=True)
            for plugin in plugins:
                frame = ConfigFrame(page,
                                    self.config_dict_gui[category][plugin],
                                    self.plugin_info[plugin])
                title = plugin[plugin.rfind('.') + 1:]
                title = title.replace('_', ' ').title()
                page.add(frame, text=title)
        else:
            page = ConfigFrame(container,
                               self.config_dict_gui[category][plugins[0]],
                               self.plugin_info[plugins[0]])
    
        def get_queue(self, name, maxsize=0):
        ''' Return a queue from the manager
            If it doesn't exist, create it '''
        logger.debug('QueueManager getting: '%s'', name)
        queue = self.queues.get(name, None)
        if not queue:
            self.add_queue(name, maxsize)
            queue = self.queues[name]
        logger.debug('QueueManager got: '%s'', name)
        return queue
    
    
_HELPTEXT = 'Options for matching the histograms between the source and destination faces'