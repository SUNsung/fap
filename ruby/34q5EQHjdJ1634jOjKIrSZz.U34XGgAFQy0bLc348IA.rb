
        
          def all_groups(current_user)
    groups = []
    
          included do
        before_create :generate_confirmation_token, if: :confirmation_required?
        after_create :skip_reconfirmation_in_callback!, if: :send_confirmation_notification?
        if defined?(ActiveRecord) && self < ActiveRecord::Base # ActiveRecord
          after_commit :send_on_create_confirmation_instructions, on: :create, if: :send_confirmation_notification?
          after_commit :send_reconfirmation_instructions, on: :update, if: :reconfirmation_required?
        else # Mongoid
          after_create :send_on_create_confirmation_instructions, if: :send_confirmation_notification?
          after_update :send_reconfirmation_instructions, if: :reconfirmation_required?
        end
        before_update :postpone_email_change_until_confirmation_and_regenerate_confirmation_token, if: :postpone_email_change?
      end
    
      test 'should not accept confirmation email token after 4 days when expiration is set to 3 days' do
    swap Devise, confirm_within: 3.days do
      refute confirm_user_by_token_with_confirmation_sent_at(4.days.ago)
    end
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
      def index
    render plain: 'Home'
  end
end
    
      # When false, Devise will not attempt to reload routes on eager load.
  # This can reduce the time taken to boot the app but if your application
  # requires the Devise mappings to be loaded during boot time the application
  # won't boot properly.
  mattr_accessor :reload_routes
  @@reload_routes = true
    
                if respond_to?(:helper_method)
              helper_method 'current_#{group_name}', 'current_#{group_name.to_s.pluralize}', '#{group_name}_signed_in?'
            end
          METHODS
        end
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
    
        def scope_url
      opts  = {}
    
          if options[:type] == :array
        options[:roles] << :completable
        class_eval <<-EOF
          def complete_#{name}
            #{options[:values]}.map { |v| {text: v, id: v} }
          end
        EOF
      end
    
        def stop!
      @scheduler.jobs(tag: id).each(&:unschedule)
    
      def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
      def index
    set_table_sort sorts: %w[credential_name credential_value], default: { credential_name: :asc }
    
    def report_apps
  running = Set.new
  @app_names.zip(@bundle_ids, @unix_ids).each do |app_name, bundle_id, _unix_id|
    next if excluded_bundle_id bundle_id
    next if excluded_app_name app_name
    bundle_id.gsub!(%r{^(missing value)$}, '<\1>')
    running.add '#{bundle_id}\t#{app_name}'
  end
    
          opts.on('-r', '--require LIB', 'Require a Ruby library before running Sass.') do |lib|
        require lib
      end
    
            unless guarded && environment.var(name)
          environment.set_var(name, val.perform(environment))
        end
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      context 'escaping' do
    before do
      mock_app { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO']]] }
    end
    
        alias :empty? :empty_file?
    
        # Extracts the Geometry from a 'WxH,O' string
    # Where W is the width, H is the height,
    # and O is the EXIF orientation
    def self.parse(string)
      GeometryParser.new(string).make
    end
    
        def raise_if_blank_file
      if path.blank?
        raise Errors::NotIdentifiedByImageMagickError.new('Cannot find the geometry of a file with a blank name')
      end
    end
    
        # Returns an integer timestamp that is time zone-neutral, so that paths
    # remain valid even if a server's time zone changes.
    def updated_at attachment, style_name
      attachment.updated_at
    end
    
            def accepted_types_and_failures
          if @allowed_types.present?
            'Accept content types: #{@allowed_types.join(', ')}\n'.tap do |message|
              if @missing_allowed_types.present?
                message << '  #{@missing_allowed_types.join(', ')} were rejected.'
              else
                message << '  All were accepted successfully.'
              end
            end
          end
        end
        def rejected_types_and_failures
          if @rejected_types.present?
            'Reject content types: #{@rejected_types.join(', ')}\n'.tap do |message|
              if @missing_rejected_types.present?
                message << '  #{@missing_rejected_types.join(', ')} were accepted.'
              else
                message << '  All were rejected successfully.'
              end
            end
          end
        end
    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
            def initialize(node, variable)
          unless VARIABLE_ASSIGNMENT_TYPES.include?(node.type)
            raise ArgumentError,
                  'Node type must be any of #{VARIABLE_ASSIGNMENT_TYPES}, ' \
                  'passed #{node.type}'
          end
    
            def explicit_block_local_variable?
          @declaration_node.shadowarg_type?
        end
      end
    end
  end
end

    
            def literal_at_end?(regex_str)
          # is this regexp 'literal' in the sense of only matching literal
          # chars, rather than using metachars like . and * and so on?
          # also, is it anchored at the end of the string?
          regex_str =~ /\A(?:#{LITERAL_REGEX})+\\z\z/
        end
    
              add_offense(node)
        end
    
            def on_if(node)
          return unless nested_variable_comparison?(node.condition)
          add_offense(node)
        end