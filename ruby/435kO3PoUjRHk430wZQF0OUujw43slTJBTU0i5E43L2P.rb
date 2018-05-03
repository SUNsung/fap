
        
          def all_projects(current_user)
    projects = []
    
      context 'expands plain buttons' do
    it 'finds selectors' do
      list = @buttons_list.join(', ')
      ruleset = 'content: #{list};'
    
      context 'called with auto' do
    it 'applies to auto to height' do
      rule = 'height: auto; width: 100px;'