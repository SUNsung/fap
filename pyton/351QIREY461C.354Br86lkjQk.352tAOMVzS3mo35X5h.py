
        
            elif bump_type == 'patch':
        # Convert 0.67.3 to 0.67.4
        # Convert 0.67.3.b5 to 0.67.3
        # Convert 0.67.3.dev0 to 0.67.3
        to_change['dev'] = None
        to_change['pre'] = None