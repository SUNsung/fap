
        
              plist_filename = if f.plist
        f.plist_path.basename
      else
        File.basename Dir['#{keg}/*.plist'].first
      end
      plist_link = '#{destination}/#{plist_filename}'
      plist_domain = f.plist_path.basename('.plist')
      destination_path = Pathname.new File.expand_path destination
      plist_path = destination_path/plist_filename
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
        # Unbrewed uses the PREFIX, which will exist
    # Things below use the CELLAR, which doesn't until the first formula is installed.
    unless HOMEBREW_CELLAR.exist?
      raise NoSuchKegError.new(ARGV.named.first) if ARGV.named.any?
      return
    end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
        def empty?
      @entries.empty?
    end
    
        def root_url
      context[:root_url]
    end
    
        self.base_url = 'http://localhost/'
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
          dest = url.normalized_path
      dest_dir = Pathname.new(dest)
    
            if at_css('.api-type-label.module')
          at_css('h1').content = subpath.remove('api/')
        end
    
            css('*[layout]').remove_attr('layout')
        css('*[layout-xs]').remove_attr('layout-xs')
        css('*[flex]').remove_attr('flex')
        css('*[flex-xs]').remove_attr('flex-xs')
        css('*[ng-class]').remove_attr('ng-class')
        css('*[align]').remove_attr('align')
        css('h1, h2, h3').remove_attr('class')
    
    class ActivityPub::InboxesController < Api::BaseController
  include SignatureVerification
    
      def outbox_presenter
    if page_requested?
      ActivityPub::CollectionPresenter.new(
        id: account_outbox_url(@account, page_params),
        type: :ordered,
        part_of: account_outbox_url(@account),
        prev: prev_page,
        next: next_page,
        items: @statuses
      )
    else
      ActivityPub::CollectionPresenter.new(
        id: account_outbox_url(@account),
        type: :ordered,
        size: @account.statuses_count,
        first: account_outbox_url(@account, page: true),
        last: account_outbox_url(@account, page: true, min_id: 0)
      )
    end
  end
    
        def show
      authorize @user, :change_email?
    end
    
        def check_confirmation
      if @user.confirmed?
        flash[:error] = I18n.t('admin.accounts.resend_confirmation.already_confirmed')
        redirect_to admin_accounts_path
      end
    end
  end
end

    
            line_num = e.sass_line + 1 - line_offset
        min = [line_num - 6, 0].max
        section = e.sass_template.rstrip.split('\n')[min...line_num + 5]
        return e.sass_backtrace_str if section.nil? || section.empty?
    
        # Same as `Kernel.puts`, but doesn't print anything if the `--quiet` option is set.
    #
    # @param args [Array] Passed on to `Kernel.puts`
    def puts(*args)
      return if @options[:for_engine][:quiet]
      Kernel.puts(*args)
    end
    
        private
    
            def line_item_params
          params.require(:line_item).permit(:quantity, :variant_id, options: line_item_options)
        end
      end
    end
  end
end

    
            def perform_payment_action(action, *args)
          authorize! action, Payment
          @payment.send('#{action}!', *args)
          respond_with(@payment, default_template: :show)
        end
    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            def index
          @states = scope.ransack(params[:q]).result.includes(:country)
    
              @stock_item = scope.new(stock_item_params)
          if @stock_item.save
            @stock_item.adjust_count_on_hand(count_on_hand)
            respond_with(@stock_item, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_item)
          end
        end