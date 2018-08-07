
        
              next if path.symlink? || path.directory?
    
      def get_git_info
    git = OpenStruct.new
    git.author = %x{ git config --get user.name  }.strip rescue 'your_username'
    git.email  = %x{ git config --get user.email }.strip rescue 'your_username@example.com'
    git
  end