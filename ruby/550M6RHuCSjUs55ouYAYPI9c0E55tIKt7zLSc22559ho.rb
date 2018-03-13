
        
        module Homebrew
  SEARCH_ERROR_QUEUE = Queue.new
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
    # TODO:
# group :mongoid do
#   gem 'mongoid', '~> 4.0.0'
# end

    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
          # Define authentication filters and accessor helpers based on mappings.
      # These filters should be used inside the controllers as before_actions,
      # so you can control the scope of the user who should be signed in to
      # access that specific controller/action.
      # Example:
      #
      #   Roles:
      #     User
      #     Admin
      #
      #   Generated methods:
      #     authenticate_user!  # Signs user in or redirect
      #     authenticate_admin! # Signs admin in or redirect
      #     user_signed_in?     # Checks whether there is a user signed in or not
      #     admin_signed_in?    # Checks whether there is an admin signed in or not
      #     current_user        # Current signed in user
      #     current_admin       # Current signed in admin
      #     user_session        # Session data available only to the user scope
      #     admin_session       # Session data available only to the admin scope
      #
      #   Use:
      #     before_action :authenticate_user!  # Tell devise to use :user map
      #     before_action :authenticate_admin! # Tell devise to use :admin map
      #
      def self.define_helpers(mapping) #:nodoc:
        mapping = mapping.name
    
        def split_colon_path(path)
      one, two = path.split(':', 2)
      if one && two && Sass::Util.windows? &&
          one =~ /\A[A-Za-z]\Z/ && two =~ %r{\A[/\\]}
        # If we're on Windows and we were passed a drive letter path,
        # don't split on that colon.
        one2, two = two.split(':', 2)
        one = one + ':' + one2
      end
      return one, two
    end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
            def self.options
          [
            ['--template-url=URL', 'The URL of the git repo containing a ' \
                                  'compatible template'],
          ].concat(super)
        end