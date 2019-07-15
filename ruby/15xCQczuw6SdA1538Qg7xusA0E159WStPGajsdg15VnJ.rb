
        
              def self.delegate_to(klass)
        self.type_klass = klass
      end
    
          # Resets reset password token and send reset password instructions by email.
      # Returns the token sent in the e-mail.
      def send_reset_password_instructions
        token = set_reset_password_token
        send_reset_password_instructions_notification(token)
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
    RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
        context 'on my own post' do
      it 'succeeds' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        post :create, params: like_hash, format: :json
        expect(response.code).to eq('201')
      end
    end
    
      describe '#index' do
    context 'with a private post' do
      before do
        @alices_aspect = alice.aspects.where(name: 'generic').first
        @post = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
      end
    
              expect(gon['preloads'][:mentioned_person][:name]).to eq(alice.person.name)
          expect(gon['preloads'][:mentioned_person][:handle]).to eq(alice.person.diaspora_handle)
        end
      end
    end
    
      def prefix_from_bin(bin_name)
    unless (path = `which #{bin_name}`.strip).empty?
      File.dirname(File.dirname(path))
    end
  end
    
          def markdown_podfile
        UI::ErrorReport.markdown_podfile
      end
    
          # @todo some of the following methods can probably move to one of the
      #       subclasses.
    
            def initialize(argv)
          @use_regex = argv.flag?('regex')
          @show_all = argv.flag?('show-all')
          @query = argv.shift_argument
          @query = @query.gsub('.podspec', '') unless @query.nil?
          super
        end
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end