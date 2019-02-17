
        
            private_constant :GA_TRACKING
    attr_accessor :session_id
    attr_accessor :client
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            force: true
          })
        end').runner.execute(:test)
    
          it 'cannot have both path and pathspec parameters' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            git_add(path: 'myfile.txt', pathspec: '*.txt')
          end').runner.execute(:test)
        end.to raise_error(FastlaneCore::Interface::FastlaneError)
      end
    end
  end
end

    
          it 'works with select regex when regex is string' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: \'\/AppDelegate\'
            )
          end').runner.execute(:test)
    
            def representation_class
          Representation::DiffNote
        end
    
            def importer_class
          IssueAndLabelLinksImporter
        end
    
            def sidekiq_worker_class
          ImportNoteWorker
        end
    
            # Returns a Hash that can be used to populate `notes.st_diff`, removing
        # the need for requesting Git data for every diff note.
        def diff_hash
          {
            diff: diff_hunk,
            new_path: file_path,
            old_path: file_path,
    }
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
          def inherited(subclass)
        super
        subclass.params = params.deep_dup
        subclass.headers = headers.deep_dup
        subclass.force_gzip = force_gzip
      end
    end
    
            location_badge = at_css('.location-badge')
        if location_badge && doc.last_element_child != location_badge
          doc.last_element_child.after(location_badge)
        end
    
              # Add the help option, which must be on every command.
          opts.on_tail('-h', '--help', 'Print this help') do
            safe_puts(opts.help)
            return nil
          end
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # This method will split the argv given into three parts: the
        # flags to this command, the subcommand, and the flags to the
        # subcommand. For example:
        #
        #     -v status -h -v
        #
        # The above would yield 3 parts:
        #
        #     ['-v']
        #     'status'
        #     ['-h', '-v']
        #
        # These parts are useful because the first is a list of arguments
        # given to the current command, the second is a subcommand, and the
        # third are the commands given to the subcommand.
        #
        # @return [Array] The three parts.
        def split_main_and_subcommand(argv)
          # Initialize return variables
          main_args   = nil
          sub_command = nil
          sub_args    = []
    
            # This contains all the registered host capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :host_capabilities
    
              @registered.each do |plugin|
            result += plugin.components.action_hooks[Plugin::ALL_ACTIONS]
            result += plugin.components.action_hooks[hook_name]
          end
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
          if could_be_property # test for a property
        offset += scanned.length
        property = parse_property(name, res, scanner.rest, :new, line, offset)
        property.name_source_range = ident_range
        property
      else
        res.pop if comment
    
        class << self
      # Returns an error report for an exception in CSS format.
      #
      # @param e [Exception]
      # @param line_offset [Integer] The number of the first line of the Sass template.
      # @return [String] The error report
      # @raise [Exception] `e`, if the
      #   {file:SASS_REFERENCE.md#full_exception-option `:full_exception`} option
      #   is set to false.
      def exception_to_css(e, line_offset = 1)
        header = header_string(e, line_offset)