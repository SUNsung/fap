
        
                # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # A default to_s implementation.
        def to_s
          self.class.to_s
        end
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      private
    
      def require_enabled_api!
    head 404 unless Setting.activity_api_enabled
  end
end

    
        # Parses the CSS template and applies various transformations
    #
    # @return [Tree::Node] The root node of the parsed tree
    def build_tree
      root = Sass::SCSS::CssParser.new(@template, @options[:filename], nil).parse
      parse_selectors(root)
      expand_commas(root)
      nest_seqs(root)
      parent_ref_rules(root)
      flatten_rules(root)
      bubble_subject(root)
      fold_commas(root)
      dump_selectors(root)
      root
    end
    
        # @param options [{Symbol => Object}] The options hash. See
    #   {file:SASS_REFERENCE.md#Options the Sass options documentation}.
    # @param parent [Environment] See \{#parent}
    def initialize(parent = nil, options = nil)
      @parent = parent
      @options = options || (parent && parent.options) || {}
      @stack = @parent.nil? ? Sass::Stack.new : nil
      @caller = nil
      @content = nil
      @filename = nil
      @functions = nil
      @mixins = nil
      @selector = nil
      @vars = nil
    end
    
      @release_paths = (1..count.to_i).map do
    TestApp.cap('deploy')
    stdout, _stderr = run_vagrant_command('readlink #{TestApp.current_path}')
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
          attr_reader :key, :default, :options
    
        require 'capistrano/scm/#{scm_name}'
    install_plugin #{built_in_scm_plugin_class_name}
    
          def properties
        @properties ||= Properties.new
      end
    
          def untrusted!
        @trusted = false
        yield
      ensure
        @trusted = true
      end
    
    set_if_empty :pty, false
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def after_update_attributes
          if params[:order] && params[:order][:coupon_code].present?
            handler = PromotionHandler::Coupon.new(@order)
            handler.apply
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def show
          @option_type = Spree::OptionType.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@option_type)
        end
    
            def new
          @payment_methods = Spree::PaymentMethod.available
          respond_with(@payment_methods)
        end
    
            def index
          authorize! :admin, ReturnAuthorization
          @return_authorizations = order.return_authorizations.accessible_by(current_ability, :read).
                                   ransack(params[:q]).result.
                                   page(params[:page]).per(params[:per_page])
          respond_with(@return_authorizations)
        end
    
              unless @quantity > 0
            unprocessable_entity('#{Spree.t(:shipment_transfer_errors_occured, scope: 'api')} \n #{Spree.t(:negative_quantity, scope: 'api')}')
            return
          end
    
            def update
          authorize! :update, taxonomy
          if taxonomy.update_attributes(taxonomy_params)
            respond_with(taxonomy, status: 200, default_template: :show)
          else
            invalid_resource!(taxonomy)
          end
        end
    
          def insert_after(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || entries.count - 1
        entries.insert(i+1, new_entry)
      end