
        
          def all_groups(current_user)
    groups = []
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end