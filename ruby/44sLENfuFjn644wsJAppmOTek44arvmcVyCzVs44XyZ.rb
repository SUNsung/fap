
        
          def vcross(b)
    Vec.new(@y * b.z - @z * b.y,
            @z * b.x - @x * b.z,
            @x * b.y - @y * b.x)
  end
    
      [jekyllPid, compassPid, rackupPid].each { |pid| Process.wait(pid) }
end
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
      def new
    @address_endpoint = @server.address_endpoints.build
  end
    
      def create
    @organization = Organization.new(params.require(:organization).permit(:name, :permalink))
    @organization.owner = current_user
    if @organization.save
      redirect_to_with_json organization_root_path(@organization)
    else
      render_form_errors 'new', @organization
    end
  end
    
      def create
    @organization_user = organization.organization_users.build(params.require(:organization_user).permit(:email_address, :admin, :all_servers))
    if @organization_user.save
      AppMailer.user_invite(@organization_user.user, organization).deliver
      redirect_to_with_json [organization, :users], :notice => 'An invitation will be sent to #{@organization_user.user.email_address} which will allow them to access your organization.'
    else
      render_form_errors 'new', @organization_user
    end
  end