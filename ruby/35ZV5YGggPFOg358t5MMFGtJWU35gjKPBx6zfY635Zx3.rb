
        
            keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      def option_defined?(name)
    @options.include? name
  end
end

    
      def clang
    @clang ||= MacOS.clang_version if MacOS.has_apple_developer_tools?
  end
    
      def print_dir(root)
    dirs = []
    remaining_root_files = []
    other = ''
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
      def set_statuses
    @statuses = scope_for_collection
    @statuses = cache_collection(@statuses, Status)
  end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
        def subscribeable_accounts
      Account.with_followers.remote.where(domain: params[:by_domain])
    end
    
          @report_note = current_account.report_notes.new(resource_params)
      @report = @report_note.report
    
      def hub_topic_params
    @_hub_topic_params ||= Rails.application.routes.recognize_path(hub_topic_uri.path)
  end
    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
        # Dump all the parsed {Sass::Tree::RuleNode} selectors to strings.
    #
    # @param root [Tree::Node] The parent node
    def dump_selectors(root)
      root.children.each do |child|
        next dump_selectors(child) if child.is_a?(Tree::DirectiveNode)
        next unless child.is_a?(Tree::RuleNode)
        child.rule = [child.parsed_rules.to_s]
        dump_selectors(child)
      end
    end
    
      # The lexical environment for SassScript.
  # This keeps track of variable, mixin, and function definitions.
  #
  # A new environment is created for each level of Sass nesting.
  # This allows variables to be lexically scoped.
  # The new environment refers to the environment in the upper scope,
  # so it has access to variables defined in enclosing scopes,
  # but new variables are defined locally.
  #
  # Environment also keeps track of the {Engine} options
  # so that they can be made available to {Sass::Script::Functions}.
  class Environment < BaseEnvironment
    # The enclosing environment,
    # or nil if this is the global environment.
    #
    # @return [Environment]
    attr_reader :parent
    
        # @return [String] The error message
    def to_s
      @message
    end
    
          # If the importer is based on files on the local filesystem
      # this method should return folders which should be watched
      # for changes.
      #
      # @return [Array<String>] List of absolute paths of directories to watch
      def directories_to_watch
        []
      end
    
          def third_party_scm_name?
        !built_in_scm_name?
      end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
                if @order.completed? || @order.next
              state_callback(:after)
              respond_with(@order, default_template: 'spree/api/v1/orders/show')
            else
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_transition', status: 422)
            end
          else
            invalid_resource!(@order)
          end
        end
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update_attributes(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end
    
            def find_current_order
          current_api_user ? current_api_user.orders.incomplete.order(:created_at).last : nil
        end
    
            def show
          respond_with(@product_property)
        end
    
              @products = @products.distinct.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@products)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
    
require 'uri'
require 'cgi'
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'paths'))
require File.expand_path(File.join(File.dirname(__FILE__), '..', 'support', 'selectors'))
    
        # Returns a sorted list of all interpolations.
    def self.all
      self.instance_methods(false).sort!
    end