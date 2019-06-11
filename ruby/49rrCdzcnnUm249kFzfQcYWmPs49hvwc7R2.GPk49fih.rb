  p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
          private
    
          @email_domain_block = EmailDomainBlock.new(resource_params)
    
      def hub_callback
    params['hub.callback']
  end
    
        head 200
  end
    
      UPDATE_SIGN_IN_HOURS = 24
    
      def create
    @account = unfollow_attempt.try(:target_account)
    
    describe Tmuxinator::Hooks::Project do
  let(:project) { FactoryBot.build(:project) }
    
      s.add_development_dependency 'activesupport', '< 5.0.0' # Please see issue #432
  s.add_development_dependency 'awesome_print', '~> 1.2'
  s.add_development_dependency 'bundler', '>= 1.3'
  s.add_development_dependency 'coveralls', '~> 0.8'
  s.add_development_dependency 'factory_bot', '~> 4.8'
  s.add_development_dependency 'pry', '~> 0.10'
  s.add_development_dependency 'rake', '~> 10.4'
  s.add_development_dependency 'rspec', '~> 3.3'
  s.add_development_dependency 'rubocop', '~> 0.48.1'
  s.add_development_dependency 'simplecov', '~> 0.16'