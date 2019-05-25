
        
            def initialize
      @async = !Rails.env.test?
      @queue = Queue.new
      @mutex = Mutex.new
      @paused = false
      @thread = nil
      @reactor = nil
      @timeout = DEFAULT_TIMEOUT
    end
    
      def self.period_types
    @types ||= Enum.new(all: 1,
                        yearly: 2,
                        monthly: 3,
                        weekly: 4,
                        daily: 5,
                        quarterly: 6)
  end
    
        private
    
              # options
          p.css('li[#{DATA_PREFIX}option-id]').each do |o|
            option_id = o.attributes[DATA_PREFIX + 'option-id'].value.to_s
            poll['options'] << { 'id' => option_id, 'html' => o.inner_html.strip }
          end
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
        # Determines the defined data type of this ConfigItem
    def data_type
      if @data_type.kind_of?(Symbol)
        nil
      elsif @data_type
        @data_type
      else
        (@is_string ? String : nil)
      end
    end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
    MESSAGE
  end
    
      before_action :authenticate_user!
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
            # Recreate the user based on the stored cookie
        def serialize_from_cookie(*args)
          id, token, generated_at = *args
    
        def root
      _yaml_root || _project_root
    end
    
            expect(project.startup_window).to eq('sample:8')
      end
    end
  end
    
          def default
        '#{directory}/default.yml'
      end
    
        context 'and there is no local project config' do
      context 'when no args are supplied' do
        it 'should call ::start' do
          expect(cli).to receive(:start).with([])
          subject
        end
      end
    
        def attach?
      yaml_attach = if yaml['attach'].nil?
                      true
                    else
                      yaml['attach']
                    end
      attach = force_attach || !force_detach && yaml_attach
      attach
    end
    
          # Store the result ready to return
      result = {:message_id => nil, :messages => {}}
      params.rcpt_to.uniq.each do |rcpt_to|
        message = identity.server.message_db.new_message
        message.rcpt_to = rcpt_to
        message.mail_from = params.mail_from
        message.raw_message = raw_message
        message.received_with_ssl = true
        message.scope = 'outgoing'
        message.domain_id = authenticated_domain.id
        message.credential_id = identity.id
        message.bounce = params.bounce ? 1 : 0
        message.save
        result[:message_id] = message.message_id if result[:message_id].nil?
        result[:messages][rcpt_to] = {:id => message.id, :token => message.token}
      end
      result
    end
  end
    
        if current_user.admin?
      @domain.verification_method = 'DNS'
      @domain.verified_at = Time.now
    end
    
      def destroy
    @http_endpoint.destroy
    redirect_to_with_json [organization, @server, :http_endpoints]
  end
    
      def held
    get_messages('held')
  end