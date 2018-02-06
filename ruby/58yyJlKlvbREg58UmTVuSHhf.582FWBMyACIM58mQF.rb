
        
          def can_read?(resource)
    ability_name = resource.class.name.downcase
    ability_name = 'read_#{ability_name}'.to_sym
    
        projects << @user.contributed_projects.visible_to_user(current_user) if current_user
    projects << @user.contributed_projects.public_to_user(current_user)