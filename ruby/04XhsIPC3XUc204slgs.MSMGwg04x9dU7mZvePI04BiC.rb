
        
              it 'adds docset_copyright param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_copyright: 'DocSet copyright'
          )
        end').runner.execute(:test)
    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', frameworks: ['myframework', 'myframework2'])
                end').runner.execute(:test)
            end.to raise_error('Frameworks option is available only for 'archive' command.')
          end
        end
      end
    
          it 'works with name and password that contain spaces or `\'`' do
        password = '\'test password\''
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            name: 'test.keychain',
            password: '#{password}',
          })
        end').runner.execute(:test)
    
        os = 'windows'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
    
      protected
    
          if options[:skip_helpers] == true
        @used_helpers = @used_routes
      elsif skip = options[:skip_helpers]
        @used_helpers = self.routes - Array(skip).map(&singularizer)
      else
        @used_helpers = self.routes
      end
    end
  end
end

    
      def gistify_logs(f)
    files = load_logs(f.logs)
    build_time = f.logs.ctime
    timestamp = build_time.strftime('%Y-%m-%d_%H-%M-%S')
    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
          # Chacks whether the `if` node has nested `if` nodes in any of its
      # branches.
      #
      # @note This performs a shallow search.
      #
      # @return [Boolean] whether the `if` node contains nested conditionals
      def nested_conditional?
        node_parts[1..2].compact.each do |branch|
          branch.each_node(:if) do |nested|
            return true unless nested.elsif?
          end
        end
    
          DOUBLE_SPLAT = '**'.freeze