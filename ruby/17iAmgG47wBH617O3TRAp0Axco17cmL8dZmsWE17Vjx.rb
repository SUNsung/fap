
        
          def self.clear_cache!(date = nil)
    if date.nil?
      clear_cache!(Time.now.utc)
      clear_cache!(Time.now.utc.yesterday)
      return
    end
    
        def build
      policy = ActionDispatch::ContentSecurityPolicy.new
    
    CSP = ContentSecurityPolicy

    
          Theme.where(id: Theme.transform_ids(theme_ids)).find_each do |theme|
        theme.cached_settings.each do |setting, value|
          extensions << build_theme_extension(value) if setting.to_s == THEME_SETTING
        end
      end
    
    end

    
    # == Schema Information
#
# Table name: user_auth_tokens
#
#  id              :integer          not null, primary key
#  user_id         :integer          not null
#  auth_token      :string           not null
#  prev_auth_token :string           not null
#  user_agent      :string
#  auth_token_seen :boolean          default(FALSE), not null
#  client_ip       :inet
#  rotated_at      :datetime         not null
#  created_at      :datetime         not null
#  updated_at      :datetime         not null
#  seen_at         :datetime
#
# Indexes
#
#  index_user_auth_tokens_on_auth_token       (auth_token) UNIQUE
#  index_user_auth_tokens_on_prev_auth_token  (prev_auth_token) UNIQUE
#  index_user_auth_tokens_on_user_id          (user_id)
#

    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
      # Checks whether it's a devise mapped resource or not.
  def assert_is_devise_resource! #:nodoc:
    unknown_action! <<-MESSAGE unless devise_mapping
Could not find devise mapping for path #{request.fullpath.inspect}.
This may happen for two reasons:
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
        def default_defaults(options)
      @defaults = Hash.new
      @defaults.merge!(options[:defaults]) if options[:defaults]
    end
    
            Devise::Models.config(self, :remember_for, :extend_remember_period, :rememberable_options, :expire_all_remember_me_on_sign_out)
      end
    end
  end
end

    
          def timeout_in
        self.class.timeout_in
      end
    
      # Debug mode disables concatenation and preprocessing of assets.
  # This option may cause significant delays in view rendering with a large
  # number of complex assets.
  config.assets.debug = true
    
        it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end
    
      def create
    @broadcast = Broadcast.new(broadcast_params)
    redirect_to '/internal/broadcasts'
  end
    
    def ask(message, valid_options)
  if valid_options
    answer = get_stdin('#{message} #{valid_options.to_s.gsub(/'/, '').gsub(/, /,'/')} ') while !valid_options.include?(answer)
  else
    answer = get_stdin(message)
  end
  answer
end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''