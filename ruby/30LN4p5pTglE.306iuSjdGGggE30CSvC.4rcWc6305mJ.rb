
        
          def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
        find_union(segments, Project).includes(:namespace).order_id_desc
  end
    
        if registration
      u2f.authenticate!(challenges, response, Base64.decode64(registration.public_key), registration.counter)
      registration.update(counter: response.counter)
      true
    end
  rescue JSON::ParserError, NoMethodError, ArgumentError, U2F::Error
    false
  end
end

    
        uninstall login_item: 'login item name'
    
    def excluded_bundle_id(bundle_id)
  %r{^com\.apple\.}.match(bundle_id)
end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
      context 'called with arguments (1, $value: 2em)' do
    it 'outputs double the first value from the default scale' do
      expect('.one-base-two').to have_rule('font-size: 2.5em')
    end
  end
    
          expect('.padding-explicit').to have_rule(rule)
    end
  end