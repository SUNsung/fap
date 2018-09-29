
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
              if options.fetch('skip_initial_build', false)
            Jekyll.logger.warn 'Build Warning:', 'Skipping the initial build.' \
                               ' This may result in an out-of-date site.'
          else
            build(site, options)
          end
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
            # For a description of the protocol see
        # http://feedback.livereload.com/knowledgebase/articles/86174-livereload-protocol
        def reload(pages)
          pages.each do |p|
            json_message = JSON.dump(
              :command => 'reload',
              :path    => p.url,
              :liveCSS => true
            )
    
    Badge.seed do |b|
  b.id = Badge::Anniversary
  b.name = 'Anniversary'
  b.default_icon = 'fa-clock-o'
  b.badge_type_id = BadgeType::Silver
  b.default_badge_grouping_id = BadgeGrouping::Community
  b.query = nil
  b.trigger = Badge::Trigger::None
  b.auto_revoke = false
  b.system = true
  b.multiple_grant = true
end
    
      layout 'admin'
    
        Pubsubhubbub::UnsubscribeWorker.perform_async(signed_request_account.id) if signed_request_account.subscribed?
    DeliveryFailureTracker.track_inverse_success!(signed_request_account)
  end
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
        def create
      authorize :status, :update?
    
      desc 'Release all gems to rubygems'
  task release: :build do
    sh 'git tag -a -m \'Version #{version}\' v#{version}'
    
                log_state_changes if params[:state]
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
              @line_item = Spree::Cart::AddItem.call(order: order,
                                                 variant: variant,
                                                 quantity: params[:line_item][:quantity],
                                                 options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def index
          @payments = @order.payments.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@payments)
        end
    
            def scope
          includes = { variant: [{ option_values: :option_type }, :product] }
          @stock_location.stock_items.accessible_by(current_ability, :read).includes(includes)
        end