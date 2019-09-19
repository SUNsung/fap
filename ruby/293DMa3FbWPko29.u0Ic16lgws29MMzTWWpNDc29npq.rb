
        
          #
  # DKIM
  #
  
  def check_dkim_record
    domain = '#{dkim_record_name}.#{name}'
    result = resolver.getresources(domain, Resolv::DNS::Resource::IN::TXT)
    records = result.map(&:data)
    if records.empty?
      self.dkim_status = 'Missing'
      self.dkim_error = 'No TXT records were returned for #{domain}'
    else
      sanitised_dkim_record = records.first.strip.ends_with?(';') ? records.first.strip : '#{records.first.strip};'
      if records.size > 1
        self.dkim_status = 'Invalid'
        self.dkim_error = 'There are #{records.size} records for at #{domain}. There should only be one.'
      elsif sanitised_dkim_record != self.dkim_record
        self.dkim_status = 'Invalid'
        self.dkim_error = 'The DKIM record at #{domain} does not match the record we have provided. Please check it has been copied correctly.'
      else
        self.dkim_status = 'OK'
        self.dkim_error = nil
        true
      end
    end
  end
    
      def update
    if @address_endpoint.update(safe_params)
      redirect_to_with_json [organization, @server, :address_endpoints]
    else
      render_form_errors 'edit', @address_endpoint
    end
  end
    
      def render_form_errors(action_name, object)
    respond_to do |wants|
      wants.html { render action_name }
      wants.json { render :json => {:form_errors => object.errors.full_messages}, :status => 422 }
    end
  end
    
      def create
    @http_endpoint = @server.http_endpoints.build(safe_params)
    if @http_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :http_endpoints]]
    else
      render_form_errors 'new', @http_endpoint
    end
  end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @ip_pool_rule = @server.ip_pool_rules.find_by_uuid!(params[:id])
    else
      params[:id] && @ip_pool_rule = organization.ip_pool_rules.find_by_uuid!(params[:id])
    end
  end
    
      def index
    @servers = organization.servers.present.order(:name).to_a
  end