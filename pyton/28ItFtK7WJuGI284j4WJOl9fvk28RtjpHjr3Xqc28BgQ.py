
        
        # Components that match a numeric or alphanumeric begin:end or begin:end:step
# range expression inside square brackets.
    
            # in some cases, we may have pre-read the data and then
        # passed it to the load() call for YAML, in which case we
        # want to override the default datasource (which would be
        # '<string>') to the actual filename we read in
        datasource = self._ansible_file_name or node.start_mark.name