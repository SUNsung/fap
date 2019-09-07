
        
                UI.success('Successfully exported CSV to #{file}')
      end
    end
    
          #
      # API
      #
    
          attr_mapping({
        'capabilityType' => 'capabilityType',
        'settings' => 'email'
      })
    
          module CertificateType
        IOS_DEVELOPMENT = 'IOS_DEVELOPMENT'
        IOS_DISTRIBUTION = 'IOS_DISTRIBUTION'
        MAC_APP_DISTRIBUTION = 'MAC_APP_DISTRIBUTION'
        MAC_INSTALLER_DISTRIBUTION = 'MAC_INSTALLER_DISTRIBUTION'
        MAC_APP_DEVELOPMENT = 'MAC_APP_DEVELOPMENT'
        DEVELOPER_ID_KEXT = 'DEVELOPER_ID_KEXT'
        DEVELOPER_ID_APPLICATION = 'DEVELOPER_ID_APPLICATION'
      end
    
          #
      # API
      #
    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        resps = Spaceship::ConnectAPI.get_profiles(filter: filter, includes: includes).all_pages
        return resps.map(&:to_models).flatten
      end
    end
  end
end

    
          def self.all(filter: {}, includes: nil, limit: nil, sort: nil)
        return Spaceship::ConnectAPI.get_users(filter: filter, includes: includes)
      end
    
        def aes256_gcm_decrypt(value)
      return unless value
    
              parsed_filters << filter
        end
    
          stats_mock = double(Gitaly::DiffStats, path: '.gitignore', additions: 758, deletions: 120)
      stub_stats_find_by_path(stub_path, stats_mock)
    
      # GET /resource/confirmation?confirmation_token=abcdef
  def show
    self.resource = resource_class.confirm_by_token(params[:confirmation_token])
    yield resource if block_given?
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
      # Proxy to devise map name
  def resource_name
    devise_mapping.name
  end
  alias :scope_name :resource_name
    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          def self.required_fields(klass)
        []
      end
    
        def check_sha256_no_check_if_latest
      odebug 'Verifying sha256 :no_check with version :latest'
      return unless cask.version.latest?
      return if cask.sha256 == :no_check
    
                problem ':#{requirement} is deprecated. Usage should be \'#{dependency}\'.'
          end
    
    require_relative 'shared_examples/requires_cask_token'
require_relative 'shared_examples/invalid_option'
    
        if params[:user][:otp_attempt].present? && session[:otp_user_id]
      authenticate_with_two_factor_via_otp(resource)
    else
      strategy = Warden::Strategies[:database_authenticatable].new(warden.env, :user)
      prompt_for_two_factor(strategy.user) if strategy.valid? && strategy._run!.successful?
    end
  end
    
    if rails_env == 'production'
  config('without test:development')
elsif rails_env == 'test'
  config('without development')
end
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      def create
    conversation = Conversation.find(params[:conversation_id])
    
        types.each_with_object(current_user.unread_notifications.group_by(&:type)) {|(name, type), notifications|
      @grouped_unread_notification_counts[name] = notifications.has_key?(type) ? notifications[type].count : 0
    }
    
              @processed_source = processed_source
    
    RSpec.describe RuboCop::Cop::Lint::UnusedMethodArgument, :config do
  subject(:cop) { described_class.new(config) }
    
          module_function
    
        context 'with nested conditionals in elsif clause' do
      let(:source) do
        ['if foo?',
         '  1',
         'elsif bar?',
         '  if baz; 4; end',
         'else',
         '  3',
         'end'].join('\n')
      end
    
              node.last_line + num_of_heredoc_lines + END_OF_HEREDOC_LINE
        end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
          def use_identicon
        @page.wiki.user_icons == 'identicon'
      end
    
        get '/pages'
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
      teardown do
    FileUtils.rm_rf(@path)
  end
    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
  end
    
        it 'can enumerate retries' do
      add_retry
    
    describe Sidekiq::ExceptionHandler do
  describe 'with mock logger' do
    before do
      @old_logger = Sidekiq.logger
      @str_logger = StringIO.new
      Sidekiq.logger = Logger.new(@str_logger)
    end
    
          I18n.enforce_available_locales = false
      I18n.available_locales = nil
    end
  end
end

    
      describe 'lifecycle events' do
    it 'handles invalid input' do
      Sidekiq.options[:lifecycle_events][:startup].clear