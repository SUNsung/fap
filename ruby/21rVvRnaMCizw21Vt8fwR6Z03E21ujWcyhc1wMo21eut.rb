
        
              def fetch_redirections
        result = {}
        with_filters 'apply_base_url', 'container', 'normalize_urls', 'internal_urls' do
          build_pages do |page|
            next if page[:response_effective_path] == page[:response_path]
            result[page[:response_path].downcase] = page[:response_effective_path]
          end
        end
        result
      end
    
            css('.content', 'article', '.api-header', 'section', '.instance-member').each do |node|
          node.before(node.children).remove
        end
    
            if h1 = at_css('h1')
          h1.prepend_child(css('.view-source', '.improve-docs'))
        end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          # Sign in a user that already was authenticated. This helper is useful for logging
      # users in after sign up. All options given to sign_in is passed forward
      # to the set_user method in warden.
      # If you are using a custom warden strategy and the timeoutable module, you have to
      # set `env['devise.skip_timeout'] = true` in the request to use this method, like we do
      # in the sessions controller: https://github.com/plataformatec/devise/blob/master/app/controllers/devise/sessions_controller.rb#L7
      #
      # Examples:
      #
      #   sign_in :user, @user                      # sign_in(scope, resource)
      #   sign_in @user                             # sign_in(resource)
      #   sign_in @user, event: :authentication     # sign_in(resource, options)
      #   sign_in @user, store: false               # sign_in(resource, options)
      #
      def sign_in(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
    
          if options[:skip_helpers] == true
        @used_helpers = @used_routes
      elsif skip = options[:skip_helpers]
        @used_helpers = self.routes - Array(skip).map(&singularizer)
      else
        @used_helpers = self.routes
      end
    end
  end
end

    
        def self.check_fields!(klass)
      failed_attributes = []
      instance = klass.new
    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
          @email_domain_block = EmailDomainBlock.new(resource_params)
    
      def reset_period_offset
    api_throttle_data[:period] - request_time.to_i % api_throttle_data[:period]
  end
end

    
    RSpec::Matchers.define :have_path_in do |expected|
  match do |actual|
    await_condition { expected.include? actual.current_path }
  end
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
          # Checks whether this `hash` element is on the same line as `other`.
      #
      # @note A multiline element is considered to be on the same line if it
      #       shares any of its lines with `other`
      #
      # @return [Boolean] whether this element is on the same line as `other`
      def same_line?(other)
        loc.last_line == other.loc.line || loc.line == other.loc.last_line
      end
    
              if all_arguments.none?(&:referenced?)
            proc_message = 'Also consider using a proc without arguments ' \
                           'instead of a lambda if you want it ' \
                           'to accept any arguments but don't care about them.'
          end