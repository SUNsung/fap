
        
            case params[:range]
    when 'week'
      range = 1.week
      @segment = t('admins.stats.week')
    when '2weeks'
      range = 2.weeks
      @segment = t('admins.stats.2weeks')
    when 'month'
      range = 1.month
      @segment = t('admins.stats.month')
    else
      range = 1.day
      @segment = t('admins.stats.daily')
    end
    
          def redirect_prompt_error_display(error, error_description)
        redirect_params_hash = {error: error, error_description: error_description, state: params[:state]}
        redirect_fragment = redirect_params_hash.compact.map {|key, value| key.to_s + '=' + value }.join('&')
        redirect_to params[:redirect_uri] + '?' + redirect_fragment
      end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end