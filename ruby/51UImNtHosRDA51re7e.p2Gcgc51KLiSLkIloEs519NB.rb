
        
        Dir.glob('rake/**.rake').each { |f| import f }
    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    #
    
              # WebSockets requests will have a Connection: Upgrade header
          if parser.http_method != 'GET' || parser.upgrade?
            super
          elsif parser.request_url =~ %r!^\/livereload.js!
            headers = [
              'HTTP/1.1 200 OK',
              'Content-Type: application/javascript',
              'Content-Length: #{reload_size}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
    
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
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
          #{GitHub::ALL_SCOPES_URL}
        #{Utils::Shell.set_variable_in_profile('HOMEBREW_GITHUB_API_TOKEN', 'your_token_here')}
    
      def prepend(*paths)
    @paths = parse(*paths, *@paths)
    self
  end
    
      # log-levels from the diaspora.yml for SQL and federation debug-logging
  Logging.logger[ActionView::Base].level = Rails.env.development? ? :debug : :warn
  Logging.logger[ActiveRecord::Base].level = AppConfig.environment.logging.debug.sql? ? :debug : :info
  Logging.logger[DiasporaFederation::Salmon::MagicEnvelope].level =
    AppConfig.environment.logging.debug.federation? ? :debug : :info
    
    When /^I fill out the password reset form with '([^']*)' and '([^']*)'$/ do |new_pass,confirm_pass|
  fill_password_reset_form(new_pass, confirm_pass)
end
    
    World(NavigationHelpers)

    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
          expect(Notification.find(note.id).unread).to eq(true)
    end
  end
    
        it 'does not redirect if there is a valid invite token' do
      code = InvitationCode.create(user: bob)
      get :new, params: {invite: {token: code.token}}
      expect(response).not_to be_redirect
    end