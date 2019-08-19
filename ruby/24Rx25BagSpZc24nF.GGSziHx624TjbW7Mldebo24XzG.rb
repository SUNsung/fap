
        
          def create_user(attr)
    allowed_keys = %w[
      email strip_exif show_community_spotlight_in_stream language disable_mail auto_follow_back
    ]
    data = convert_keys(archive_hash['user'], allowed_keys)
    # setting getting_started to false as the user doesn't need to see the getting started wizard
    data.merge!(
      username:              attr[:username],
      password:              attr[:password],
      password_confirmation: attr[:password],
      getting_started:       false,
      person:                {
        profile_attributes: profile_attributes
      }
    )
    self.user = User.build(data)
    user.save!
  end
    
      def return_photo_error(message)
    respond_to do |format|
      format.json { render(layout: false, json: {'success' => false, 'error' => message}.to_json) }
      format.html { render(layout: false, json: {'success' => false, 'error' => message}.to_json) }
    end
  end
end

    
        context 'Conversation' do
      let(:participant) { FactoryGirl.create(:person) }
      let(:diaspora_entity) { FactoryGirl.create(:conversation_with_message, participants: [participant]) }
      let(:federation_entity) { described_class.build(diaspora_entity) }
    
      private
    
      def respond_destroy_success
    respond_to do |format|
      format.mobile { redirect_back fallback_location: stream_path }
      format.js { head :no_content }
      format.json { head :no_content }
    end
  end
    
      def contacts_by_type(type)
    order = ['profiles.first_name ASC', 'profiles.last_name ASC', 'profiles.diaspora_handle ASC']
    contacts = case type
      when 'all'
        order.unshift 'receiving DESC'
        current_user.contacts
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'receiving'
        current_user.contacts.receiving
      when 'by_aspect'
        order.unshift 'contact_id IS NOT NULL DESC'
        contacts_by_aspect(@aspect.id)
      else
        raise ArgumentError, 'unknown type #{type}'
      end
    contacts.includes(person: :profile)
            .order(order)
  end
    
      task :print_config_variables do
    puts
    puts '------- Printing current config variables -------'
    env.keys.each do |config_variable_key|
      if is_question?(config_variable_key)
        puts '#{config_variable_key.inspect} => Question (awaits user input on next fetch(#{config_variable_key.inspect}))'
      else
        puts '#{config_variable_key.inspect} => #{fetch(config_variable_key).inspect}'
      end
    end
    
    World(RemoteCommandHelpers)

    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def install_plugin(plugin, load_hooks: true, load_immediately: false)
      installer.install(plugin,
                        load_hooks: load_hooks,
                        load_immediately: load_immediately)
    end
    
        specify 'fetch article id only if :article_id key in hash ' do
      allow(Article).to receive(:find_by)
      described_class.perform_now('Reaction', 456, milestone_service)
      expect(Article).to have_received(:find_by).with(id: 456)
    end
    
    def capture_logging(lvl=Logger::INFO)
  old = Sidekiq.logger
  begin
    out = StringIO.new
    logger = Logger.new(out)
    logger.level = lvl
    Sidekiq.logger = logger
    yield
    out.string
  ensure
    Sidekiq.logger = old
  end
end
    
        def setup
      Sidekiq.redis {|c| c.flushdb }
    end
    
          JoeWorker.perform_in(0.01, 0)
    
        describe 'when the exception does not have a backtrace' do
      it 'does not fail' do
        exception = ExceptionHandlerTestException.new
        assert_nil exception.backtrace
    
        Thank you for installing tmuxinator.
    
        it 'returns the string' do
      expect(project.send('hook_#{hook_name}')).to eq('echo 'on hook'')
    end
  end
    
          # $TMUXINATOR_CONFIG (and create directory) or ''.
      def environment
        environment = ENV['TMUXINATOR_CONFIG']
        return '' if environment.to_s.empty? # variable is unset (nil) or blank
        FileUtils::mkdir_p(environment) unless File.directory?(environment)
        environment
      end
    
      describe '.editor?' do
    context '$EDITOR is set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { 'vim' }
      end