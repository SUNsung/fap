
        
              def uninstall_trash(*paths, **options)
        return if paths.empty?
    
      def create_gist(files, description)
    url = 'https://api.github.com/gists'
    data = { 'public' => !create_private?, 'files' => files, 'description' => description }
    scopes = GitHub::CREATE_GIST_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
            raise ArgumentError, '#{self.class.command_name} does not take arguments.'
      end
    
      def which(cmd)
    super(cmd, PATH.new(ORIGINAL_PATHS))
  end
    
          # Find a bottle built for a previous version of macOS.
      def find_older_compatible_tag(tag)
        begin
          tag_version = MacOS::Version.from_symbol(tag)
        rescue ArgumentError
          return
        end
    
        # @return [String] the ruby version string bundler uses to craft its gem path
    def gem_ruby_version
      RbConfig::CONFIG['ruby_version']
    end