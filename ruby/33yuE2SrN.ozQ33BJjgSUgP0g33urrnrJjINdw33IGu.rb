
        
          before do
    # Use a simple client for all data models
    allow(Spaceship::TestFlight::Base).to receive(:client).and_return(mock_client)
    allow(mock_client).to receive(:team_id).and_return('')
  end
    
            all_tvos = devices.map do |device|
          device = device.downcase
          device.include?('apple tv')
        end
        # Return true if all devices are iOS devices
        return true unless all_tvos.include?(false)
    
          def self.find_api_token(params)
        return if params[:gsp_path]
        unless params[:api_token].to_s.length > 0
          Dir['./**/Info.plist'].each do |current|
            result = Actions::GetInfoPlistValueAction.run(path: current, key: 'Fabric')
            next unless result
            next unless result.kind_of?(Hash)
            params[:api_token] ||= result['APIKey']
            UI.verbose('found an APIKey in #{current}')
          end
        end
      end
    
          def extract_filters
        fragments = []
    
      describe '#can_update?' do
    context 'when user can update_group_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_group_member, presenter).and_return(true)
      end
    
            def clear_cache
          # No-op
        end
    
      def output_chronic_duration_attribute(source_attribute)
    value = attributes[source_attribute.to_s]
    ChronicDuration.output(value, format: :short) if value
  end
end

    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    World(RemoteCommandHelpers)

    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def ask(key, default=nil, options={})
      question = Question.new(key, default, options)
      set(key, question)
    end
    
          def response
        return @response if defined? @response
    
          def print_deprecation_warnings_if_applicable
        if using_default_scm?
          warn_add_git_to_capfile unless scm_plugin_installed?
        elsif built_in_scm_name?
          warn_set_scm_is_deprecated
        elsif third_party_scm_name?
          warn_third_party_scm_must_be_upgraded
        end
      end
    
          attr_reader :validators
    
          def untrusted_keys
        keys - @trusted_keys
      end
    
        it 'returns a flare tag if there are 2 flare tags in the list' do
      valid_article = create(:article, tags: %w[ama explainlikeimfive])
      expect(described_class.new(valid_article).tag.name).to eq('explainlikeimfive')
    end
  end
    
      describe 'POST blocks' do
    it 'creates block from input data' do
      post '/blocks', params: {
        block: {
          input_css: '.blue { color: blue;}',
          input_html: 'yo',
          input_javascript: 'alert('hey')'
        }
      }
      expect(Block.all.size).to eq(1)
    end
  end
    
        describe 'When it does not find article from id' do
      it 'does not call the service' do
        allow(Article).to receive(:find_by)
        described_class.perform_now('Reaction', 456, milestone_service)
        expect(milestone_service).not_to have_received(:call)
      end
    end
    
        initialize_with { Tmuxinator::Project.load(file) }
  end
end

    
      subject { instance }
    
      describe 'tmux_new_session_command' do
    let(:command) { '#{executable} new-session -d -s #{session} -n #{window}' }
    let(:executable) { project.tmux }
    let(:session) { project.name }
    let(:window) { project.windows.first.name }
    
        def self.create_connection
      bunny_host = [ 'localhost' ]
    
      def new
    @ip_address = @ip_pool.ip_addresses.build
  end