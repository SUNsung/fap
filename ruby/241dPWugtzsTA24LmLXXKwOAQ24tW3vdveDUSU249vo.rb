
        
              def test_helpers_with_module_through_block
        @controller = AbstractHelpersBlock.new
        @controller.process(:with_module)
        assert_equal 'Module Included', @controller.response_body
      end
    end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def verified_domain
    return signed_request_account.domain if signed_request_account
  end
    
      def process_salmon
    SalmonWorker.perform_async(@account.id, payload.force_encoding('UTF-8'))
  end
end

    
        render_empty
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      def export_filename
    '#{controller_name}.csv'
  end
end
