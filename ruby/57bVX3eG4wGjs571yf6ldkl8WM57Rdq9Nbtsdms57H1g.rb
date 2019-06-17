
        
            self.last_flush = Time.now.utc
    
          if period_type == :all
        DB.exec <<~SQL
          UPDATE user_stats s
          SET likes_given         = d.likes_given,
              likes_received      = d.likes_received,
              topic_count         = d.topic_count,
              post_count          = d.post_count
    
    class ContentSecurityPolicy
  class Default
    attr_reader :directives
    
          SiteSetting.content_security_policy_collect_reports = false
      report_uri = parse(policy)['report-uri']
      expect(report_uri).to eq(nil)
    end
  end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
          def inherited(subclass)
        super
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
      # Version of your assets, change this if you want to expire all your assets.
  config.assets.version = '1.0'
    
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
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
          it 'should not create the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).not_to exist
        expect(response.code).to eq('403')
      end
    end
  end
    
              expect(gon['preloads'][:mentioned_person][:name]).to eq(alice.person.name)
          expect(gon['preloads'][:mentioned_person][:handle]).to eq(alice.person.diaspora_handle)
        end
      end
    end
    
            self.arguments = [
          CLAide::Argument.new('NAME', false),
        ]
    
      subject { instance }
    
        context '$SHELL is not set' do
      before do
        allow(ENV).to receive(:[]).with('SHELL') { nil }
      end
    
        context 'nested collections' do
      let(:command1) { 'cd /tmp/' }
      let(:command2) { 'ls' }