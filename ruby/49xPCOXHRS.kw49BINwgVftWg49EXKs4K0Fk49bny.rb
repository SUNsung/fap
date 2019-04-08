
        
          def create
    @ip_pool = IPPool.new(safe_params)
    if @ip_pool.save
      redirect_to_with_json [:edit, @ip_pool], :notice => 'IP Pool has been added successfully. You can now add IP addresses to it.'
    else
      render_form_errors 'new', @ip_pool
    end
  end