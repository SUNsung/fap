
        
                display_user_error!(e, error_info)
      else
        # Pass the error instead of a message so that the inspector can do extra work to simplify the query
        show_github_issues(e) if should_show_github_issues
    
          it 'sets the project directory to other and the toolchain to Swift_2_3' do
        result = Fastlane::FastFile.new.parse('lane :test do
          carthage(toolchain: 'com.apple.dt.toolchain.Swift_2_3', project_directory: 'other')
        end').runner.execute(:test)
    
            def importer_class
          DiffNoteImporter
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
          # Returns true if the given object has already been imported, false
      # otherwise.
      #
      # object - The object to check.
      def already_imported?(object)
        id = id_for_already_imported_cache(object)
    
            # Builds an issue from a GitHub API response.
        #
        # issue - An instance of `Sawyer::Resource` containing the issue
        #         details.
        def self.from_api_response(issue)
          user =
            if issue.user
              Representation::User.from_api_response(issue.user)
            end
    
            attr_reader :attributes
    
    describe 'Kernel#test' do
  before :all do
    @file = File.dirname(__FILE__) + '/fixtures/classes.rb'
    @dir = File.dirname(__FILE__) + '/fixtures'
  end
    
    describe 'Kernel.throw' do
  it 'transfers control to the end of the active catch block waiting for symbol' do
    catch(:blah) do
      :value
      throw :blah
      fail('throw didn't transfer the control')
    end.should be_nil
  end
    
      it 'hooks assignments to a global variable' do
    captured = nil
    
      desc 'Run sass-spec tests against the local code.'
  task :spec do
    require 'yaml'
    sass_spec_options = YAML.load_file(scope('test/sass-spec.yml'))
    enabled = sass_spec_options.delete(:enabled)
    unless enabled
      puts 'SassSpec tests are disabled.'
      next
    end
    if ruby_version_at_least?('1.9.2')
      old_load_path = $:.dup
      begin
        $:.unshift(File.join(File.dirname(__FILE__), 'lib'))
        begin
          require 'sass_spec'
        rescue LoadError
          puts 'You probably forgot to run: bundle exec rake'
          raise
        end
        default_options = {
          :spec_directory => SassSpec::SPEC_DIR,
          :engine_adapter => SassEngineAdapter.new,
          :generate => false,
          :tap => false,
          :skip => false,
          :verbose => false,
          :filter => '',
          :limit => -1,
          :unexpected_pass => false,
          :nuke => false,
        }
        SassSpec::Runner.new(default_options.merge(sass_spec_options)).run || exit(1)
      ensure
        $:.replace(old_load_path)
      end
    else
      'Skipping sass-spec on ruby versions less than 1.9.2'
    end
  end
end
    
          # Returns the path to a file for the given key.
      #
      # @param key [String]
      # @return [String] The path to the cache file.
      def path_to(key)
        key = key.gsub(/[<>:\\|?*%]/) {|c| '%%%03d' % c.ord}
        File.join(cache_location, key)
      end
    end
  end
end

    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end