
        
        FORWARD_SLASH = '/'.freeze
    
      next if extensions.empty?
  mimes[mime] = [] if mimes[mime].nil?
  mimes[mime].concat extensions
end
    
    Jekyll::PluginManager.require_from_bundler
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          process(name)
      read_yaml(base, name)
    end
    
          def parse(content)
        measure_time do
          @template = Liquid::Template.parse(content, :line_numbers => true)
        end
    
        # Get or set the safety of this plugin. When called without an argument
    # it returns the safety. When an argument is given, it will set the
    # safety.
    #
    # safe - The Boolean safety (default: nil).
    #
    # Returns the safety Boolean.
    def self.safe(safe = nil)
      unless defined?(@safe) && safe.nil?
        @safe = safe
      end
      @safe || false
    end
    
        # Require all the plugins which are allowed.
    #
    # Returns nothing
    def conscientious_require
      require_theme_deps if site.theme
      require_plugin_files
      require_gems
      deprecation_checks
    end
    
        def logger
      return super unless dry_run?
      @dry_run_logger
    end
    
      def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
      it 'decodes the number of floats requested by the count modifier' do
    array = '\x9a\x999@33\xb3?33\x03A'.unpack(unpack_format(3))
    array.should == [2.9000000953674316, 1.399999976158142, 8.199999809265137]
  end
    
      it 'decodes the number of characters specified by the count modifier' do
    [ ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U1', [0x80]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U2', [0x80, 0x81]],
      ['\xc2\x80\xc2\x81\xc2\x82\xc2\x83', 'U3', [0x80, 0x81, 0x82]]
    ].should be_computed_by(:unpack)
  end
    
        exit_loop = true
    
    See CONTRIBUTING.md for more information.
    
    STDOUT.sync = true if ENV['CP_STDOUT_SYNC'] == 'TRUE'
    
            def listen
          while repl_command = STDIN.gets
            execute_repl_command(repl_command)
          end
        end