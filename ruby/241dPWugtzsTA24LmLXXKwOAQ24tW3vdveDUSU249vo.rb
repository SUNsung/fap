
        
              should 'support legacy enable_coderay... for now' do
        override = {
          'markdown' => 'kramdown',
          'kramdown' => {
            'enable_coderay' => true,
          },
        }
    
    WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
    
def pathutil_relative
  Pathutil.new(DOC_PATH).relative_path_from(COL_PATH).to_s
end
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          CHARS = {
        :failed    => '\u2718'.red,
        :pending   => '\u203D'.yellow,
        :undefined => '\u2718'.red,
        :passed    => '\u2714'.green,
        :skipped   => '\u203D'.blue,
      }.freeze
    
          # Command to fire the trigger on
      #
      # @return [Symbol]
      attr_reader :command
    
              # Get the JSON that we're going to expose to Chef
          json = @config.json
          json[:run_list] = @config.run_list if @config.run_list &&
            !@config.run_list.empty?
          json = JSON.pretty_generate(json)
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
    module Vagrant
  # This class provides a way to load and access the contents
  # of a Vagrantfile.
  #
  # This class doesn't actually load Vagrantfiles, parse them,
  # merge them, etc. That is the job of {Config::Loader}. This
  # class, on the other hand, has higher-level operations on
  # a loaded Vagrantfile such as looking up the defined machines,
  # loading the configuration of a specific machine/provider combo,
  # etc.
  class Vagrantfile
    # This is the configuration loaded as-is given the loader and
    # keys to #initialize.
    attr_reader :config
    
            # If we're not created, then specify the special ID flag
        if state_id == :not_created
          state_id = Vagrant::MachineState::NOT_CREATED_ID
        end
    
            # Runs a script on a guest
        #
        # @param [Provisioners::Shell::Config] config A Shell provisioner config
        def run(config, on_error, exit_codes)
          if config.inline
            if Vagrant::Util::Platform.windows?
              cmd = config.inline
            else
              cmd = Shellwords.split(config.inline)
            end
    
            expect(described_class.exec(ssh_info)).to eq(nil)
        expect(Vagrant::Util::SafeExec).to have_received(:exec)
          .with(ssh_path, 'vagrant@localhost', '-p', '2222', '-o', 'LogLevel=FATAL', '-o', 'StrictHostKeyChecking=no', '-o', 'UserKnownHostsFile=/dev/null', '-i', ssh_info[:private_key_path][0])
      end
    end
    
      # This returns whether or not 3rd party plugins should and can be loaded.
  #
  # @return [Boolean]
  def self.plugins_enabled?
    !ENV['VAGRANT_NO_PLUGINS']
  end
    
        stub_request(:post, 'https://example.org/inbox').to_return(status: 200)
    stub_request(:post, 'https://example.com/inbox').to_return(status: 200)
    
          before do
        subject.perform
      end
    
            it 'not calls erros.add' do
          expect(errors).not_to have_received(:add).with(:username, any_args)
        end
      end
    end
  end
end

    
          it 'not calls errors.add' do
        expect(errors).not_to have_received(:add).with(attribute, any_args)
      end
    end
  end
end

    
        let(:follow)  { double(account: account, errors: errors) }
    let(:errors)  { double(add: nil) }
    let(:account) { double(nil?: _nil, local?: local, following_count: 0, followers_count: 0) }
    let(:_nil)    { true }
    let(:local)   { false }
    
      describe 'digest' do
    before do
      mention = Fabricate(:mention, account: receiver.account, status: foreign_status)
      Fabricate(:notification, account: receiver.account, activity: mention)
      sender.follow!(receiver.account)
    end
    
          it 'returns http success' do
        expect(response).to have_http_status(200)
      end
    end
    
          # @return [Array<Pathname>] The paths of the dynamic libraries
      #         that come shipped with the Pod.
      #
      def vendored_dynamic_libraries
        vendored_libraries.select do |library|
          dynamic_binary?(library)
        end
      end
    
          def print_issue_full(issue)
        safe_url = URI.escape issue.html_url
        UI.puts ' - #{issue.title}'
        UI.puts '   #{safe_url} [#{issue.state}] [#{issue.comments} comment#{issue.comments == 1 ? '' : 's'}]'
        UI.puts '   #{pretty_date(issue.updated_at)}'
        UI.puts ''
      end
    
        it 'generates a valid Info.plist file' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:ios, '6.0'))
      file = temporary_directory + 'Info.plist'
      generator.save_as(file)
      `plutil -lint #{file}`
      $?.should.be.success
    end if Executable.which('plutil')
    
            # @return [Hash{String=>Symbol}] A hash representing the user build
        #         configurations where each key corresponds to the name of a
        #         configuration and its value to its type (`:debug` or
        #         `:release`).
        #
        attr_reader :build_configurations
    
        #-------------------------------------------------------------------------#
    
    module Pod
  describe Command::Repo::List do
    extend SpecHelper::Command
    extend SpecHelper::TemporaryRepos
    
    module Pod
  module Generator
    module AppTargetHelper
      describe 'creating the import file' do
        describe 'when linting as a framework' do
          it 'creates a swift import' do
            pod_target = stub('PodTarget', :uses_swift? => true, :should_build? => true,
                                           :product_module_name => 'ModuleName', :name => 'ModuleName',
                                           :defines_module? => true, :recursive_dependent_targets => [])
            project = stub('Project', :path => Pathname(Dir.mktmpdir(['CocoaPods-Lint-', '-#{pod_target.name}'])) + 'App.xcodeproj')
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
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
    
        desc 'Bootstrap all the VM's used for this tests'
    task :setup, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
    When /^(?:|I )check '([^']*)'$/ do |field|
  check(field)
end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
        def make
      geometry = GeometryParser.new(geometry_string.strip).make
      geometry || raise(Errors::NotIdentifiedByImageMagickError.new)
    end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end