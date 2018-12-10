
        
            def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
        # @import 'file.less' to '#{target_path}file;'
    def replace_file_imports(less, target_path = '')
      less.gsub %r([@\$]import ['|']([\w\-/]+).less['|'];),
                %Q(@import '#{target_path}\\1';)
    end
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      # Enable Rack::Cache to put a simple HTTP cache in front of your application
  # Add `rack-cache` to your Gemfile before enabling this.
  # For large-scale production use, consider using a caching reverse proxy like nginx, varnish or squid.
  # config.action_dispatch.rack_cache = true
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
    Given /^I add this snippet to the User model:$/ do |snippet|
  file_name = 'app/models/user.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') { |f| f << content.sub(/end\Z/, '#{snippet}\nend') }
  end
end
    
        alias :empty? :empty_file?