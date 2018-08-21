
        
            def find_local(username)
      find_remote(username, nil)
    end
    
    def codepoints_to_filename(codepoints)
  codepoints.downcase.gsub(/\A[0]+/, '').tr(' ', '-')
end
    
    res = ''
doc = Hpricot(File.open(input))
doc.search('//form').each do |form|
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end