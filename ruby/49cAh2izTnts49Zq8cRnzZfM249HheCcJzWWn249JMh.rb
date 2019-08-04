
        
            def translation_scope
      'devise.unlocks'
    end
end

    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
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
    
              self.reset_password_token   = enc
          self.reset_password_sent_at = Time.now.utc
          save(validate: false)
          raw
        end
    
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
    
            def self.nfs_checkexports!
          r = Vagrant::Util::Subprocess.execute('nfsd', 'checkexports')
          if r.exit_code != 0
            raise Vagrant::Errors::NFSBadExports, output: r.stderr
          end
        end
      end
    end
  end
end

    
    require Vagrant.source_root.join('plugins/synced_folders/rsync/default_unix_cap')
    
      c.after(:suite) do
    FileUtils.rm_rf(VAGRANT_TEST_CWD)
  end
end
    
    describe VagrantPlugins::Chef::Cap::Linux::ChefInstalled do
  include_context 'unit'
    
      let(:iso_env) do
    # We have to create a Vagrantfile so there is a root path
    env = isolated_environment
    env.vagrantfile('')
    env.create_vagrant_env
  end
    
              if providers.include? provider.downcase
            raise Errors::ProviderNotFoundSuggestion,
              machine: name, provider: provider,
              suggestion: provider.downcase, providers: providers_str
          end
    
            # Apply any changes made to the composition
        def apply_composition!(*args)
          block = args.detect{|arg| arg.is_a?(Proc) }
          execute_args = ['up', '--remove-orphans']
          if args.include?(:detach)
            execute_args << '-d'
          end
          machine.env.lock('compose', retry: true) do
            if block
              compose_execute(*execute_args, &block)
            else
              compose_execute(*execute_args)
            end
          end
        end
    
          # Parse through mail to get the from/sender headers
      mail = Mail.new(raw_message.split('\r\n\r\n', 2).first)
      from_headers = {'from' => mail.from, 'sender' => mail.sender}
      authenticated_domain = identity.server.find_authenticated_domain_from_headers(from_headers)
    
      def create
    @organization = Organization.new(params.require(:organization).permit(:name, :permalink))
    @organization.owner = current_user
    if @organization.save
      redirect_to_with_json organization_root_path(@organization)
    else
      render_form_errors 'new', @organization
    end
  end
    
      def index
    @users = organization.organization_users.where(:user_type => 'User').includes(:user).to_a.sort_by { |u| '#{u.user.first_name}#{u.user.last_name}'.upcase }
    @pending_users = organization.organization_users.where(:user_type => 'UserInvite').includes(:user).to_a.sort_by { |u| u.user.email_address.upcase }
  end