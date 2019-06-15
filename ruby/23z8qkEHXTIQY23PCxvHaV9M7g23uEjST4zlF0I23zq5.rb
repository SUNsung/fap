
        
            render_empty
  end
    
        define_method provider do
      @user = User.find_for_oauth(request.env['omniauth.auth'], current_user)
    
      def available_locales
    I18n.available_locales.reverse
  end
end

    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
    run SinatraStaticServer

    
    
  # Jekyll hook - the generate method is called by jekyll, and generates all of the category pages.
  class GenerateCategories < Generator
    safe true
    priority :low
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end