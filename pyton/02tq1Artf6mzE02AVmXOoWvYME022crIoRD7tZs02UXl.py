
        
        
def select_files(files):
    for f in files:
        if re.match(PYFILE, f):
            yield f
        else:
            try:
                with open(f) as f_:
                    first = f_.readline()
                    if first.startswith('#!') and 'python' in first:
                        yield f
            except (IOError, OSError):
                logging.exception('Unable to check-code against %s', f)
    
        def current_subreddit(self):
        site = self.stacked_proxy_safe_get(c, 'site')
        if not site:
            # In non-request code (eg queued jobs), there isn't necessarily a
            # site name (or other request-type data).  In those cases, we don't
            # want to trigger any subreddit-specific code.
            return ''
        return site.name