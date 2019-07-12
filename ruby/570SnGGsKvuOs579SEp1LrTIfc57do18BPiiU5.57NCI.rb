
        
            def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def user_needs_sign_in_update?
    user_signed_in? && (current_user.current_sign_in_at.nil? || current_user.current_sign_in_at < UPDATE_SIGN_IN_HOURS.hours.ago)
  end
end

    
    # This example uses the API to create a package from local files
# it also creates necessary init-scripts and systemd files so our executable can be used as a service
    
            until(data.length == record_length)
          data << file.read(TAR_CHUNK_SIZE)
        end
    
      option '--lint' , :flag, 'Check manifest with pkglint',
    :default => true
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
    
    # Convert the 'package directory' built above to a real solaris package.
    safesystem('pkgtrans', '-s', build_path, output_path, name)
    safesystem('cp', '#{build_path}/#{output_path}', output_path)
  end # def output
    
      # Input a zipfile.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.extname(input_path)[1..-1]
    
      def destroy
    @address_endpoint.destroy
    redirect_to_with_json [organization, @server, :address_endpoints]
  end
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
              if qs[:msgid]
            options[:where][:message_id] = qs[:msgid]
            options[:where].delete(:spam)
            options[:where].delete(:scope)
          end
          options[:where][:tag] = qs[:tag] if qs[:tag]
          options[:where][:id] = qs[:id] if qs[:id]
          options[:where][:spam] = true if qs[:spam] == 'yes' || qs[:spam] == 'y'
          if qs[:before] || qs[:after]
            options[:where][:timestamp] = {}
            if qs[:before]
              begin
                options[:where][:timestamp][:less_than] = get_time_from_string(qs[:before]).to_f
              rescue TimeUndetermined => e
                flash.now[:alert] = 'Couldn't determine time for before from '#{qs[:before]}''
              end
            end
    
      def persist
    auth_session.persist! if logged_in?
    render :plain => 'OK'
  end
    
    end

    
      context 'called with one color' do
    it 'applies same color to all sides' do
      rule = 'border-color: #f00'
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end