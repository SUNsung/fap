
        
        def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
        def self.find_by_path!(path, path_type=:fullpath)
      Devise.mappings.each_value { |m| return m if path.include?(m.send(path_type)) }
      raise 'Could not find a valid mapping for path #{path.inspect}'
    end
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end