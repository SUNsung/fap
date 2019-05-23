
        
            private
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      def create
    active_session = current_session
    
      before_action :require_user!
    
      included do
    before_action :authenticate_user!
    before_action :load_export
  end
    
      def set_user_activity
    return unless user_needs_sign_in_update?
    current_user.update_tracked_fields!(request)
  end
    
          def decode_token(token)
        Base64.strict_decode64(token)
      end
    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
            options[:class] = 'sidebar-menu-item d-block w-100'
        options[:class] << ' selected' if is_selected
        content_tag(:li, options) do
          link_to(link_text, url, class: '#{'text-success' if is_selected} py-1 px-3 d-block sidebar-submenu-item')
        end
      end
    
            def load_order_with_lock
          load_order(true)
        end
    
            def approve
          authorize! :approve, @order, params[:token]
          @order.approved_by(current_api_user)
          respond_with(@order, default_template: :show)
        end
    
          it 'does not mute the other commenter's comments in the same thread' do
        results = parent_comment_by_og.subtree.where(user: other_commenter).pluck(:receive_notifications)
        expect(results.uniq).to eq [true]
      end
    end
  end
end
