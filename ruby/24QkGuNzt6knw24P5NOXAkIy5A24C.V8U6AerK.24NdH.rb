
        
              if @launch_event_sent || launch_context.p_hash.nil?
        return
      end
    
          it 'adds logformat param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            logformat: '1'
          )
        end').runner.execute(:test)
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
    full_params = ARGV.shelljoin
    
          command :revoke_expired do |c|
        c.syntax = 'fastlane cert revoke_expired'
        c.description = 'Revoke expired iOS code signing certificates'
    
          describe 'running with fastlane' do
        before do
          allow(FastlaneCore::Helper).to receive(:fastlane_enabled?).and_return(true)
          allow(FastlaneCore::FastlaneFolder).to receive(:path).and_return('./fastlane')
    
        private
    
        def current_url
      context[:url]
    end
    
        attr_reader :filters
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
      describe '#update' do
    it 'marks a notification as read if it gets no other information' do
      note = FactoryGirl.create(:notification)
      expect(Notification).to receive(:where).and_return([note])
      expect(note).to receive(:set_read_state).with(true)
      get :update, params: {id: note.id}, format: :json
    end
    
    module LogStash module PluginManager module PackFetchStrategy
  class Repository
    DEFAULT_PACK_URL = 'https://artifacts.elastic.co/downloads/logstash-plugins'
    PACK_EXTENSION = 'zip'
    
    def ask(message, valid_options)
  if valid_options
    answer = get_stdin('#{message} #{valid_options.to_s.gsub(/'/, '').gsub(/, /,'/')} ') while !valid_options.include?(answer)
  else
    answer = get_stdin(message)
  end
  answer
end
    
    end