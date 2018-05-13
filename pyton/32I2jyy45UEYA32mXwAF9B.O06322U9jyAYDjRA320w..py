
        
        from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
            # extract title
        self.title = match1(content,
                            r'<meta property='og:description' name='og:description' content='([^']+)'')