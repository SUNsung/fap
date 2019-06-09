
        
                def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
              def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
        str = str.dup
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
    group :development do
  cp_gem 'claide',                'CLAide'
  cp_gem 'cocoapods-core',        'Core'
  cp_gem 'cocoapods-deintegrate', 'cocoapods-deintegrate'
  cp_gem 'cocoapods-downloader',  'cocoapods-downloader'
  cp_gem 'cocoapods-plugins',     'cocoapods-plugins'
  cp_gem 'cocoapods-search',      'cocoapods-search'
  cp_gem 'cocoapods-stats',       'cocoapods-stats'
  cp_gem 'cocoapods-trunk',       'cocoapods-trunk'
  cp_gem 'cocoapods-try',         'cocoapods-try'
  cp_gem 'molinillo',             'Molinillo'
  cp_gem 'nanaimo',               'Nanaimo'
  cp_gem 'xcodeproj',             'Xcodeproj'
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
        def exit_because_of_exception(ex)
      if respond_to?(:deploying?) && deploying?
        exit_deploy_because_of_exception(ex)
      else
        super
      end
    end
    
            if Rake::Task.task_defined?('deploy:check')
          before 'deploy:check', '#{scm_name}:check'
        end
    
          def ignored_node?(node)
        # Same object found in array?
        ignored_nodes.any? { |n| n.equal?(node) }
      end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks for unused block arguments.
      #
      # @example
      #
      #   # bad
      #
      #   do_something do |used, unused|
      #     puts used
      #   end
      #
      #   do_something do |bar|
      #     puts :foo
      #   end
      #
      #   define_method(:foo) do |bar|
      #     puts :baz
      #   end
      #
      # @example
      #
      #   #good
      #
      #   do_something do |used, _unused|
      #     puts used
      #   end
      #
      #   do_something do
      #     puts :foo
      #   end
      #
      #   define_method(:foo) do |_bar|
      #     puts :baz
      #   end
      class UnusedBlockArgument < Cop
        include UnusedArgument
    
      context 'hook value is Array' do
    before do
      project.yaml[hook_name] = [
        'echo 'on hook'',
        'echo 'another command here''
      ]
    end
    
      return captured_stdout.string, captured_stderr.string
ensure
  $stdout = orig_stdout
  $stderr = orig_stderr
end