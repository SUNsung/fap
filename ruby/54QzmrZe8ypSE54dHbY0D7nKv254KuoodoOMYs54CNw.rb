
        
              html_filters.push 'bootstrap/entries_v4', 'bootstrap/clean_html_v4'
    
        version '1.4' do
      self.release = '1.4.5'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
          # This gets the value of the block with the given key.
      def get(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$\r?\n?(.*?)\r?\n?^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        match  = regexp.match(@value)
        return nil if !match
        match[1]
      end
    
              if argv.length == 2
            # @deprecated
            @env.ui.warn('WARNING: The second argument to `vagrant box remove`')
            @env.ui.warn('is deprecated. Please use the --provider flag. This')
            @env.ui.warn('feature will stop working in the next version.')
            options[:provider] = argv[1]
          end
    
      module DSL
    def env(*settings)
      @env ||= BuildEnvironment.new
      @env.merge(settings)
    end
  end
end
    
          def warn_for_unknown_directives(directives)
        unknown_keys = directives.keys - ORDERED_DIRECTIVES
        return if unknown_keys.empty?
        opoo %Q(Unknown arguments to #{stanza} -- #{unknown_keys.inspect}. Running 'brew update; brew cleanup; brew cask cleanup' will likely fix it.)
      end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
        outpath = file.gsub('.gz', '')
    tgz = Zlib::GzipReader.new(File.open(file))
    begin
      File.open(outpath, 'w') do |out|
        IO::copy_stream(tgz, out)
      end
      File.unlink(file)
    rescue
      File.unlink(outpath) if File.file?(outpath)
     raise
    end
    tgz.close
  end
    
          def create_worker_test
        template_file = File.join(
            'test/workers',
            class_path,
            '#{file_name}_worker_test.rb'
        )
        template 'worker_test.rb.erb', template_file
      end
    
      end
end
