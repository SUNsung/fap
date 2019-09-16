
        
            initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
              if @config['syntax_highlighter']
            return @highlighter = @config[
              'syntax_highlighter'
            ]
          end
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
            expect(FileStore::BaseStore.new.get_path_for_upload(upload))
          .to eq('original/1X/4170ac2a2782a1516fe9e13d7322ae482c1bd594.png')
      end
    end
  end
    
        @s3_client.stub_responses(:get_object, -> (context) do
      check_context(context)
    
          text.gsub!(/`[a-z_]+`/) do |m|
        if scope.is_staff?
          setting = m[1..-2]
          '<a href=\'#{settings_url}#{setting}\'>#{setting.gsub('_', ' ')}</a>'
        else
          m.gsub('_', ' ')
        end
      end
    end
    
    describe 'S3Helper' do
  let(:client) { Aws::S3::Client.new(stub_responses: true) }
    
      def diff_hash(new_hash, old)
    changes = []
    deletions = []
    
    end

    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
      end
end
    
            if uri 
          path = remove_domain_from_uri(uri)
          path = add_fragment_back_to_path(uri, path)
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
    module Devise
  module Models
    # Rememberable manages generating and clearing token for remembering the user
    # from a saved cookie. Rememberable also has utility methods for dealing
    # with serializing the user into the cookie and back from the cookie, trying
    # to lookup the record based on the saved information.
    # You probably wouldn't use rememberable methods directly, they are used
    # mostly internally for handling the remember token.
    #
    # == Options
    #
    # Rememberable adds the following options in devise_for:
    #
    #   * +remember_for+: the time you want the user will be remembered without
    #     asking for credentials. After this time the user will be blocked and
    #     will have to enter their credentials again. This configuration is also
    #     used to calculate the expires time for the cookie created to remember
    #     the user. By default remember_for is 2.weeks.
    #
    #   * +extend_remember_period+: if true, extends the user's remember period
    #     when remembered via cookie. False by default.
    #
    #   * +rememberable_options+: configuration options passed to the created cookie.
    #
    # == Examples
    #
    #   User.find(1).remember_me!  # regenerating the token
    #   User.find(1).forget_me!    # clearing the token
    #
    #   # generating info to put into cookies
    #   User.serialize_into_cookie(user)
    #
    #   # lookup the user based on the incoming cookie information
    #   User.serialize_from_cookie(cookie_string)
    module Rememberable
      extend ActiveSupport::Concern
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
          # Throw an exception if the layout couldn't be found.
      else
        raise <<-ERR
    
    module Jekyll
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
          !(sessions !~ /^#{unescaped_name}:/)
    end
    
        def initialize(index, project, tab, *commands)
      @commands = commands
      @index = index
      @project = project
      @tab = tab
    end
    
        context 'and there is a local project config' do
      include_context :local_project_setup
    
      describe '.editor?' do
    context '$EDITOR is set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { 'vim' }
      end