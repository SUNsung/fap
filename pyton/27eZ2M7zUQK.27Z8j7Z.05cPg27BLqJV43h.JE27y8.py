
        
            def load_config(self):
        '''Returns the next config directory to be tested'''
        shutil.rmtree(self.le_config.work_dir, ignore_errors=True)
        backup = os.path.join(self.le_config.work_dir, constants.BACKUP_DIR)
        os.makedirs(backup)
        return self._configs.pop()
    
    # If false, no module index is generated.
#html_domain_indices = True
    
        # Implement all methods from IInstaller, remembering to add
    # 'self' as first argument, e.g. def get_all_names(self)...
