
        
        
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
            request[KEY_REAL_IP] = ip_address(ip_to_mock)
    
    
def is_code(line, indent_depth = 4):
    '''returns the indent depth, 0 means not code in markup'''
    if line.startswith(' ' * indent_depth):
        return len(line) - len(line.lstrip(' '))
    return 0
    
            #Sorting all filenames in the directory, to maintain the order of the PDF
        allmd.sort()