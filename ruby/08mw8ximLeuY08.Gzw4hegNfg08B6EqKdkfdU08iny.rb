
        
              it 'adds warnings param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            warnings: '--warn-missing-output-path --warn-missing-company-id --warn-undocumented-object'
          )
        end').runner.execute(:test)
    
          it 'can be set to multiple the platforms' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'iOS,Mac'
            )
          end').runner.execute(:test)
    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path[0]} #{path[1]}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: #{path})
          end').runner.execute(:test)
        end
      end
    
          it 'works with both select and exclude regex' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              select_regex: /\.*m/,
              exclude_regex: /Test/
            )
          end').runner.execute(:test)
    
          context 'when specify quiet option' do
        it 'adds quiet option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              quiet: true
            )
          end').runner.execute(:test)
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
          # Returns true if the given object has already been imported, false
      # otherwise.
      #
      # object - The object to check.
      def already_imported?(object)
        id = id_for_already_imported_cache(object)
    
              new(hash)
        end
    
        def clean_path(path)
      path = path.gsub %r{[!;:]}, '-'
      path = path.gsub %r{\+}, '_plus_'
      path
    end
  end
end

    
    module Docs
  class PageDb
    attr_reader :pages
    
            self.base_url.scheme = effective_base_url.scheme
        self.base_url.host = effective_base_url.host
        self.base_url.path = effective_base_url.path
        super
      ensure
        self.base_url.scheme = original_scheme
        self.base_url.host = original_host
        self.base_url.path = original_path
      end
    end
    
            css('th h3').each do |node|
          node.name = 'span'
        end
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
            # Remove examples
        css('.runnable-example').each do |node|
          node.parent.remove
        end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
        puts('Updating #{filtered_plugins.collect(&:name).join(', ')}') unless filtered_plugins.empty?
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    begin
  # Use mime/types/columnar if available, for reduced memory usage
  require 'mime/types/columnar'
rescue LoadError
  require 'mime/types'
end
    
      it 'should wait for title to disappear', requires: [:js] do
    @session.click_link('Change title')
    expect do
      @session.assert_no_title('with_js', wait: 3)
    end.not_to raise_error
  end