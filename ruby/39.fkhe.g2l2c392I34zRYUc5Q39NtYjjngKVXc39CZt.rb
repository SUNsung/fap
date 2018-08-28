
        
              # Add common options to a command for building configuration
      #
      # cmd - the Jekyll::Command to add these options to
      #
      # Returns nothing
      # rubocop:disable Metrics/MethodLength
      def add_build_options(cmd)
        cmd.option 'config', '--config CONFIG_FILE[,CONFIG_FILE2,...]',
                   Array, 'Custom configuration file'
        cmd.option 'destination', '-d', '--destination DESTINATION',
                   'The current folder will be generated into DESTINATION'
        cmd.option 'source', '-s', '--source SOURCE', 'Custom source directory'
        cmd.option 'future', '--future', 'Publishes posts with a future date'
        cmd.option 'limit_posts', '--limit_posts MAX_POSTS', Integer,
                   'Limits the number of posts to parse and publish'
        cmd.option 'watch', '-w', '--[no-]watch', 'Watch for changes and rebuild'
        cmd.option 'baseurl', '-b', '--baseurl URL',
                   'Serve the website from the given base URL'
        cmd.option 'force_polling', '--force_polling', 'Force watch to use polling'
        cmd.option 'lsi', '--lsi', 'Use LSI for improved related posts'
        cmd.option 'show_drafts', '-D', '--drafts', 'Render posts in the _drafts folder'
        cmd.option 'unpublished', '--unpublished',
                   'Render posts that were marked as unpublished'
        cmd.option 'quiet', '-q', '--quiet', 'Silence output.'
        cmd.option 'verbose', '-V', '--verbose', 'Print verbose output.'
        cmd.option 'incremental', '-I', '--incremental', 'Enable incremental rebuild.'
        cmd.option 'strict_front_matter', '--strict_front_matter',
                   'Fail if errors are present in front matter'
      end
      # rubocop:enable Metrics/MethodLength
    
        def resend
      authorize @user, :confirm?
    
        private
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
            render template: 'admin/reports/show'
      end
    end
    
      def set_account
    @account = Account.find(params[:id])
  end
    
      def set_account
    @account = Account.find(params[:id])
  end
end

    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
            def line_items_attributes
          { line_items_attributes: {
              id: params[:id],
              quantity: params[:line_item][:quantity],
              options: line_item_params[:options] || {}
          } }
        end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def index
          authorize! :index, Order
          @orders = Order.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@orders)
        end
    
            def index
          @payments = @order.payments.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@payments)
        end
    
              if @product_property.update_attributes(product_property_params)
            respond_with(@product_property, status: 200, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
            def new; end
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end