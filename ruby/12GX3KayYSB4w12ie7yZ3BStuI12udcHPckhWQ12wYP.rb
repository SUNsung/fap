
        
              module ClassMethods
        # Attempt to find a user by its email. If a record is found, send new
        # confirmation instructions to it. If not, try searching for a user by unconfirmed_email
        # field. If no user is found, returns a new user with an email not found error.
        # Options must contain the user email
        def send_confirmation_instructions(attributes={})
          confirmable = find_by_unconfirmed_email_with_errors(attributes) if reconfirmable
          unless confirmable.try(:persisted?)
            confirmable = find_or_initialize_with_errors(confirmation_keys, attributes, :not_found)
          end
          confirmable.resend_confirmation_instructions if confirmable.persisted?
          confirmable
        end
    
      # PUT /resource/password
  def update
    self.resource = resource_class.reset_password_by_token(resource_params)
    yield resource if block_given?
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          private
    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
        def recheck
      pod = Pod.find(params[:pod_id])
      pod.test_connection!
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
        # The type of the query (e.g. `'screen'` or `'print'`).
    #
    # When parsed as Sass code, this contains strings and SassScript nodes. When
    # parsed as CSS, it contains a single string (accessible via
    # \{#resolved_type}).
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    attr_accessor :type