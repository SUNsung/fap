
        
            # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
    require 'minitest/autorun'
    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
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
    
      ruby_version_is '2.6' do
    it 'can be used with jit' do
      ruby_exe('p :OK', options: '--enable=jit 2>&1').chomp.should == ':OK'
      ruby_exe('p :OK', options: '--disable=jit 2>&1').chomp.should == ':OK'
      ruby_exe('p :OK', options: '--enable-jit 2>&1').chomp.should == ':OK'
      ruby_exe('p :OK', options: '--disable-jit 2>&1').chomp.should == ':OK'
    end
  end
    
      it 'is not called for instance methods' do
    ScratchPad.record []
    
        def get_binding
      get_binding_and_line[0]
    end
    
        bind.local_variable_defined?(:foo).should == true
  end
    
      # staged_path not available in Installer/Uninstall Stanza, workaround by nesting with preflight/postflight
  # see https://github.com/Homebrew/homebrew-cask/pull/8887
  # and https://github.com/Homebrew/homebrew-cask-versions/pull/296
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        context 'on a post from a contact' do
      before do
        aspect_to_post = bob.aspects.where(:name => 'generic').first
        @post = bob.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
      def auth_session_error(exception)
    Rails.logger.info 'AuthSessionError: #{exception.class}: #{exception.message}'
    redirect_to login_path(:return_to => request.fullpath)
  end
    
      def create
    @route = @server.routes.build(safe_params)
    if @route.save
      redirect_to_with_json [organization, @server, :routes]
    else
      render_form_errors 'new', @route
    end
  end
    
      def update
    extra_params = [:spam_threshold, :spam_failure_threshold, :postmaster_address]
    extra_params += [:send_limit, :allow_sender, :log_smtp_data, :outbound_spam_threshold, :message_retention_days, :raw_message_retention_days, :raw_message_retention_size] if current_user.admin?
    if @server.update(safe_params(*extra_params))
      redirect_to_with_json organization_server_path(organization, @server), :notice => 'Server settings have been updated'
    else
      render_form_errors 'edit', @server
    end
  end
    
      def toggle_ssl
    @track_domain.update(:ssl_enabled => !@track_domain.ssl_enabled)
    redirect_to_with_json [organization, @server, :track_domains], :notice => 'SSL settings for #{@track_domain.full_name} updated successfully.'
  end
    
          address_endpoints = server.address_endpoints.order(:address).to_a
      if address_endpoints.present?
        s << '<optgroup label='Address Endpoints'>'
        for endpoint in address_endpoints
          value = '#{endpoint.class}##{endpoint.uuid}'
          selected = value == selected_value ? 'selected='selected'' : ''
          s << '<option value='#{value}' #{selected}>#{endpoint.address}</option>'
        end
        s << '</optgroup>'
      end