
        
                private
    
          test 'when a grandchild has no layout specified, the child has an implied layout, and the ' \
        'parent has specified a layout, use the child controller layout' do
        controller = WithChildOfImplied.new
        controller.process(:index)
        assert_equal 'With Implied Hello string!', controller.response_body
      end
    
        def valid_extension?(extension)
      extension.is_a?(Hash)
    end
  end
end

    
      def build(theme_ids)
    builder = Builder.new
    
        # this is only required for NGINX X-SendFile it seems
    response.headers['Content-Length'] = File.size(cache_file).to_s
    set_cache_control_headers
    send_file(cache_file, disposition: :inline)
  end
    
          if api_key.allowed_ips.present? && !api_key.allowed_ips.any? { |ip| ip.include?(request.ip) }
        Rails.logger.warn('[Unauthorized API Access] username: #{api_username}, IP address: #{request.ip}')
        return nil
      end
    
          def request_count_counter
        @request_counter ||= Gitlab::Metrics.counter(
          :github_importer_request_count,
          'The number of GitHub API calls performed when importing projects'
        )
      end
    end
  end
end

    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
      # Add groups and the proper project name to the output.
  project_name 'Homebrew'
  add_group 'Cask', %r{^/cask/}
  add_group 'Commands', [%r{/cmd/}, %r{^/dev-cmd/}]
  add_group 'Extensions', %r{^/extend/}
  add_group 'OS', [%r{^/extend/os/}, %r{^/os/}]
  add_group 'Requirements', %r{^/requirements/}
  add_group 'Scripts', [
    %r{^/brew.rb$},
    %r{^/build.rb$},
    %r{^/postinstall.rb$},
    %r{^/test.rb$},
  ]
end

    
        head + [data.length].pack('v') + data
  end
    
            # Receives a kerberos response through the connection
        #
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos
        #   response message
        # @raise [RuntimeError] if the connection isn't established, the transport protocol is unknown, not supported
        #   or the response can't be parsed
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def recv_response
          if connection.nil?
            raise ::RuntimeError, 'Kerberos Client: connection not established'
          end
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
              # Encodes the start_time field
          #
          # @return [String]
          def encode_start_time
            [start_time].pack('N')
          end
    
              # Decodes the srealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_srealm(input)
            input.value[0].value
          end
    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_value(input)
            input.value[0].value
          end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
          sign_in alice, scope: :user
    end
    
        context 'on a post you can't see' do
      before do
        sign_in(eve, scope: :user)
      end
    
        context 'filter on promotions' do
      let!(:promotion) { create(:promotion_with_item_adjustment) }
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
            def index
          authorize! :index, Order
          @orders = Order.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@orders)
        end