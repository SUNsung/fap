
        
                def collection_method
          :pull_requests_comments
        end
    
            def collection_options
          { state: 'all', sort: 'created', direction: 'asc' }
        end
      end
    end
  end
end

    
            options.merge!(additional_options)
        options.freeze
      end
    end
    
            css('th h3').each do |node|
          node.name = 'span'
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            css('img[src]').each do |node|
          node['src'] = node['src'].gsub(%r{angularjs\.org/([\d\.]+)/docs/partials/(\w+)/}, 'angularjs.org/\1/docs/\2/')
        end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
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
    
          # Update password saving the record and clearing token. Returns true if
      # the passwords are valid and the record was saved, false otherwise.
      def reset_password(new_password, new_password_confirmation)
        if new_password.present?
          self.password = new_password
          self.password_confirmation = new_password_confirmation
          save
        else
          errors.add(:password, :blank)
          false
        end
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
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
      #
  # Initializes an HTTP packet header class that inherits from a Hash base
  # class.
  #
  def initialize
    self.dcase_hash = {}
    
      # add junk end of URI
  attr_accessor :junk_end_of_uri
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
      def self.create_ipmi_rakp_1(bmc_session_id, console_random_id, username)
    head = [
      0x06, 0x00, 0xff, 0x07,  # RMCP Header
      0x06,                    # RMCP+ Authentication Type
      PAYLOAD_RAKP1,           # Payload Type
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
    ].pack('C*')
    
              res
        end
    
                encoded
          end
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KDC-REQ-BODY (request body) data
        # definition
        class KdcRequestBody < Element
          # @!attribute options
          #   @return [Integer] The ticket flags
          attr_accessor :options
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute realm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :realm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
          # @!attribute from
          #   @return [Time] Start time when the ticket is to be postdated
          attr_accessor :from
          # @!attribute till
          #   @return [Time] Expiration date requested by the client
          attr_accessor :till
          # @!attribute rtime
          #   @return [Time] Optional requested renew-till time
          attr_accessor :rtime
          # @!attribute nonce
          #   @return [Integer] random number
          attr_accessor :nonce
          # @!attribute etype
          #   @return [Array<Integer>] The desired encryption algorithm to be used in the response
          attr_accessor :etype
          # @!attribute enc_auth_data
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] An encoding of the desired authorization-data encrypted
          attr_accessor :enc_auth_data
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KRB-ERROR (response error)
        # message definition.
        class KrbError < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of a protocol message
          attr_accessor :msg_type
          # @!attribute ctime
          #   @return [Time] The current time of the client's host
          attr_accessor :ctime
          # @!attribute cusec
          #   @return [Integer] The microseconds part of the client timestamp
          attr_accessor :cusec
          # @!attribute stime
          #   @return [Time] The current time of the server
          attr_accessor :stime
          # @!attribute susec
          #   @return [Integer] The microseconds part of the server timestamp
          attr_accessor :susec
          # @!attribute error_code
          #   @return [Integer] The error request returned by kerberos or the server when a request fails
          attr_accessor :error_code
          # @!attribute crealm
          #   @return [String] The realm part of the client's principal identifier
          attr_accessor :crealm
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute realm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :realm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
          # @!attribute e_data
          #   @return [String] additional data about the error (ASN.1 encoded data)
          attr_accessor :e_data
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
      class FetchWebfinger < Base
    def perform(*_args)
      # don't do real discovery in cucumber
    end
  end
end

    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
        context 'on a post you do not partecipate to' do
      it 'says it is an unprocessable request' do
        delete :destroy, params: {post_id: post.id}
        expect(response.code).to eq('422')
      end
    end
  end
end

    
        <div id='cookies'>
      <h3 id='cookie-info'>COOKIES</h3>
      <% unless req.cookies.empty? %>
        <table class='req'>
          <tr>
            <th>Variable</th>
            <th>Value</th>
          </tr>
          <% req.cookies.each { |key, val| %>
            <tr>
              <td><%=h key %></td>
              <td class='code'><div><%=h val.inspect %></div></td>
            </tr>
          <% } %>
        </table>
      <% else %>
        <p class='no-data'>No cookie data.</p>
      <% end %>
      <div class='clear'></div>
    </div> <!-- /COOKIES -->
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
        def initialize(plugins_to_package, target)
      @plugins_to_package = Array(plugins_to_package)
      @target = target
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
      parameter '[PLUGIN] ...', 'Plugin name(s) to upgrade to latest version', :attribute_name => :plugins_arg
  option '--[no-]verify', :flag, 'verify plugin validity before installation', :default => true
  option '--local', :flag, 'force local-only plugin update. see bin/logstash-plugin package|unpack', :default => false
    
        desc 'Bootstrap all the VM's used for this tests'
    task :setup, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
          DOUBLE_SPLAT = '**'.freeze
    
        def extra_enabled_comments
      extra_enabled_comments_with_names([], {})
    end