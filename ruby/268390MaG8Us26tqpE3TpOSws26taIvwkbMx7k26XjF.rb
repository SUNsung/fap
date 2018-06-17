  # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
        options[:max_image_size] = 150_000
    options[:container] = '.markdown-body'
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end