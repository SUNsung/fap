
        
            group.remove(moderator)
    group.save
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
            def username_and_email
          @username_and_email ||= begin
            username  = get_info(:username).presence || get_info(:nickname).presence
            email     = get_info(:email).presence
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
          def inherited(subclass)
        super
        subclass.base_url = base_url
        subclass.dir = dir
      end
    end
    
            css('pre[language]').each do |node|
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip
          node['data-language'] = 'html' if node.content.start_with?('<')
          node.remove_attribute('language')
          node.remove_attribute('format')
        end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
      it 'returns true when passed ?e if the argument is a file' do
    Kernel.test(?e, @file).should == true
  end
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
      release = Rake.application.top_level_tasks.include?('release') || File.exist?(scope('EDGE_GEM_VERSION'))
  if Sass.version[:rev] && !release
    File.open(scope('REVISION'), 'w') { |f| f.puts Sass.version[:rev] }
  elsif release
    File.open(scope('REVISION'), 'w') { |f| f.puts '(release)' }
  else
    File.open(scope('REVISION'), 'w') { |f| f.puts '(unknown)' }
  end
end
    
      # The global load paths for Sass files. This is meant for plugins and
  # libraries to register the paths to their Sass stylesheets to that they may
  # be `@imported`. This load path is used by every instance of {Sass::Engine}.
  # They are lower-precedence than any load paths passed in via the
  # {file:SASS_REFERENCE.md#load_paths-option `:load_paths` option}.
  #
  # If the `SASS_PATH` environment variable is set,
  # the initial value of `load_paths` will be initialized based on that.
  # The variable should be a colon-separated list of path names
  # (semicolon-separated on Windows).
  #
  # Note that files on the global load path are never compiled to CSS
  # themselves, even if they aren't partials. They exist only to be imported.
  #
  # @example
  #   Sass.load_paths << File.dirname(__FILE__ + '/sass')
  # @return [Array<String, Pathname, Sass::Importers::Base>]
  def self.load_paths
    @load_paths ||= if ENV['SASS_PATH']
                      ENV['SASS_PATH'].split(Sass::Util.windows? ? ';' : ':')
                    else
                      []
                    end
  end
    
        def common_options(opts)
      opts.separator ''
      opts.separator 'Common Options:'
    
          def eql?(other)
        !other.nil? && other.respond_to?(:root) && root.eql?(other.root)
      end
    
    Given(/^a custom task to generate a file$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/database.rake')
end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
          def call
        ask_question
        value_or_default
      end
    
          # Register a validation rule for the given key.
      def validate(key, &validator)
        vs = (validators[key] || [])
        vs << validator
        validators[key] = vs
      end
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
        def patch!
      # Patch to prevent Bundler to save a .bundle/config file in the root
      # of the application
      ::Bundler::Settings.module_exec do
        def set_key(key, value, hash, file)
          key = key_for(key)
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
              it 'fails when installing a non logstash plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install  bundler')
            expect(command).not_to install_successfully
          end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end
