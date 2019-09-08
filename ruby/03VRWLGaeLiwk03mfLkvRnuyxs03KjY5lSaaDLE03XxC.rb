
        
            # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
      # Attempt to find the mapped route for devise based on request path
  def devise_mapping
    @devise_mapping ||= request.env['devise.mapping']
  end
    
    Rails.application.routes.draw do
  devise_for :users
    
            if uri 
          path = remove_domain_from_uri(uri)
          path = add_fragment_back_to_path(uri, path)
    
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
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      def update_remote_path
    unless self.unprocessed_image.url.match(/^https?:\/\//)
      remote_path = '#{AppConfig.pod_uri.to_s.chomp('/')}#{self.unprocessed_image.url}'
    else
      remote_path = self.unprocessed_image.url
    end
    
            diaspora_answer1 = diaspora_poll.poll_answers.first
        diaspora_answer2 = diaspora_poll.poll_answers.second
        federation_answer1 = federation_poll.poll_answers.first
        federation_answer2 = federation_poll.poll_answers.second
    
        if @aspect.update_attributes!(aspect_params)
      flash[:notice] = I18n.t 'aspects.update.success', :name => @aspect.name
    else
      flash[:error] = I18n.t 'aspects.update.failure', :name => @aspect.name
    end
    render :json => { :id => @aspect.id, :name => @aspect.name }
  end
    
          # Used for mentions in the publisher and pagination on the contacts page
      format.json {
        @people = if params[:q].present?
                    mutual = params[:mutual].present? && params[:mutual]
                    Person.search(params[:q], current_user, only_contacts: true, mutual: mutual).limit(15)
                  else
                    set_up_contacts_json
                  end
        render json: @people
      }
    end
  end