
        
          context 'with a user' do
    let(:user) { Fabricate(:user) }
    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
      # open rmcpplus_request
  def self.create_ipmi_session_open_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
                cipher = OpenSSL::Cipher.new('rc4')
            cipher.decrypt
            cipher.key = k3
            decrypted = cipher.update(data) + cipher.final
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
        private
    
          private
    
    LogStash::Bundler.setup!
    
          Dir.glob(::File.join(temp_path, '*.gem')).each do |gem_file|
        filename = ::File.basename(gem_file)
    
        puts('Unpacking #{package_file}')
    
        after :each do
      logstash.uninstall
    end
    
    task default: :test
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
            def new
          @payment_methods = Spree::PaymentMethod.available
          respond_with(@payment_methods)
        end
    
            def cancel
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.cancel
            respond_with @return_authorization, default_template: :show
          else
            invalid_resource!(@return_authorization)
          end
        end
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
            def create
          authorize! :create, Store
          @store = Store.new(store_params)
          @store.code = params[:store][:code]
          if @store.save
            respond_with(@store, status: 201, default_template: :show)
          else
            invalid_resource!(@store)
          end
        end