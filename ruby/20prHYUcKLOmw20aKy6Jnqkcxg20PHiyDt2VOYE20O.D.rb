
        
              case command.method_name
      when 'sh'
        error_callback = proc { |string_value| closure_argument_value = string_value }
        command_param = parameter_map[:command]
        log_param = parameter_map[:log]
        action_return = Fastlane::FastFile.sh(command_param, log: log_param, error_callback: error_callback)
      end
    
          it 'adds docset_fallback_url param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_fallback_url: 'http://docset-fallback-url.com'
          )
        end').runner.execute(:test)
    
          it 'add a cache_builds flag to command if cache_builds is set to true' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              cache_builds: true
            )
          end').runner.execute(:test)
    
            it 'sets up metadata folder in fastlane folder' do
          expect(options[:metadata_path]).to eq('./fastlane/metadata')
        end
      end
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
        def tmux_main_command(command)
      if command
        _send_target(command.shellescape)
      else
        ''
      end
    end
    
        def root
      _yaml_root || _project_root
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
            expect(project.startup_pane).to eq('sample:0.1')
      end
    end
    
      if base_index = options.fetch(:base_index) { 1 }
    standard_options << 'base-index #{base_index}'
  end
    
        def window(i)
      '#{name}:#{i}'
    end
    
      s.post_install_message = %q{
    __________________________________________________________
    ..........................................................
    }